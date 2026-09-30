import os
from launch import LaunchDescription
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    igvc_hardware_dir = get_package_share_directory('igvc_hardware')
    ekf_config = os.path.join(igvc_hardware_dir, 'config', 'ekf.yaml')
    fusioncore_config = os.path.join(igvc_hardware_dir, 'config', 'fusioncore_config.yaml')

    use_gps = LaunchConfiguration('use_gps')
    use_gps_arg = DeclareLaunchArgument(
        'use_gps',
        default_value='false',
        description='Set to true to launch FusionCore and GPS for Auto-Nav challenge, false for Cartographer SLAM.'
    )

    # 1. Arduino Serial Bridge (Motors & Encoders)
    arduino_node = Node(
        package='igvc_hardware',
        executable='arduino_bridge',
        name='arduino_bridge',
        output='screen'
    )

    # 2. RPLidar Node
    rplidar_node = Node(
        package='rplidar_ros',
        executable='rplidar_composition',
        name='rplidar_node',
        parameters=[{'channel_type': 'serial',
                     'serial_port': '/dev/rplidar',
                     'serial_baudrate': 115200,
                     'frame_id': 'laser',
                     'inverted': False,
                     'angle_compensate': True}],
        remappings=[('/scan', '/scan_raw')],
        output='screen'
    )

    # 2.5 Scan Relay Node (Fixes buggy hardware timestamps and forces frame_id)
    scan_relay_node = Node(
        package='igvc_hardware',
        executable='scan_relay',
        name='scan_relay',
        output='screen'
    )

    # 3. Intel RealSense D435 Camera
    try:
        realsense_launch = IncludeLaunchDescription(
            PythonLaunchDescriptionSource([os.path.join(
                get_package_share_directory('realsense2_camera'), 'launch', 'rs_launch.py')]),
            launch_arguments={'camera_name': 'igvc_camera'}.items(),
        )
    except Exception:
        realsense_launch = Node(package='dummy', executable='dummy') # Ignored if missing

    # 4. BNO085 IMU (Bypassed! Now handled by arduino_bridge)
    # bno085_node = Node(
    #     package='bno055',
    #     executable='bno055',
    #     parameters=[{
    #         'connection_type': 'i2c',
    #         'i2c_bus': 1,
    #         'i2c_address': 0x28,
    #         'frame_id': 'imu_link'
    #     }],
    #     output='screen'
    # )

    # ================== DUAL-MODE LOCALIZATION ==================

    # Mode A: GPS-Denied SLAM (robot_localization EKF -> odom)
    ekf_node = Node(
        package='robot_localization',
        executable='ekf_node',
        name='ekf_filter_node',
        output='screen',
        parameters=[ekf_config],
        condition=UnlessCondition(use_gps)
    )

    # Mode B: GPS Waypoints (FusionCore -> map -> odom -> base_link)
    ublox_gps_node = Node(
        package='ublox_gps',
        executable='ublox_gps_node',
        name='ublox_gps',
        output='screen',
        parameters=[{
            'device': '/dev/gps',
            'frame_id': 'gps_link',
            'uart1': {'baudrate': 115200},
            'publish': {'nav': {'all': True}}
        }],
        remappings=[('/fix', '/gnss/fix')], # Ensure it matches FusionCore input
        condition=IfCondition(use_gps)
    )

    fusioncore_node = Node(
        package='fusioncore_ros',
        executable='fusioncore',
        name='fusioncore',
        output='screen',
        parameters=[fusioncore_config],
        condition=IfCondition(use_gps)
    )

    # Static Map->Odom for FusionCore (Mimics a blank map grid attached to GPS datum)
    tf_blank_map = Node(
        package='tf2_ros', 
        executable='static_transform_publisher', 
        arguments=['0', '0', '0', '0', '0', '0', 'map', 'igvc_odom'],
        condition=IfCondition(use_gps)
    )

    # ============================================================

    # 6. Hardware TFs (Mounting points on the physical robot)
    tf_laser = Node(package='tf2_ros', executable='static_transform_publisher', arguments=['--x', '-0.28', '--y', '0.0', '--z', '0.495', '--yaw', '0', '--pitch', '0', '--roll', '0', '--frame-id', 'igvc_base_link', '--child-frame-id', 'igvc_laser'])
    tf_imu = Node(package='tf2_ros', executable='static_transform_publisher', arguments=['--x', '-0.28', '--y', '0.0', '--z', '0.175', '--yaw', '-1.5708', '--pitch', '0', '--roll', '0', '--frame-id', 'igvc_base_link', '--child-frame-id', 'igvc_imu_link'])
    tf_camera = Node(package='tf2_ros', executable='static_transform_publisher', arguments=['--x', '0.225', '--y', '0.0', '--z', '0.44', '--yaw', '0', '--pitch', '0', '--roll', '0', '--frame-id', 'igvc_base_link', '--child-frame-id', 'igvc_camera_link'])
    tf_gps = Node(package='tf2_ros', executable='static_transform_publisher', arguments=['--x', '-0.28', '--y', '0.0', '--z', '0.50', '--yaw', '0', '--pitch', '0', '--roll', '0', '--frame-id', 'igvc_base_link', '--child-frame-id', 'igvc_gps_link'])

    return LaunchDescription([
        use_gps_arg,
        arduino_node,
        rplidar_node,
        scan_relay_node,
        realsense_launch,
        # bno085_node,
        
        # Dual-mode nodes
        # ekf_node, # TEMPORARY BYPASS: Cartographer is providing LiDAR Odometry!
        ublox_gps_node,
        fusioncore_node,
        tf_blank_map,

        # TFs
        tf_laser,
        tf_imu,
        tf_camera,
        tf_gps
    ])
