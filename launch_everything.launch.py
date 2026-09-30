import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import ComposableNodeContainer
from launch_ros.descriptions import ComposableNode

def generate_launch_description():
    # Parameters for the Realsense Camera
    realsense_params = [{
        'camera_name': 'camera',
        'enable_infra1': True,
        'enable_infra2': True,
        'enable_color': True,
        'enable_depth': True,
        'depth_module.profile': '848x480x30',
        'rgb_camera.profile': '848x480x30',
        'enable_gyro': False,
        'enable_accel': False,
        'enable_sync': False,
        'depth_module.emitter_enabled': 0,
        'pointcloud.enable': False,
        'initial_reset': True,
    }]

    # Realsense Camera Node
    realsense_node = ComposableNode(
        package='realsense2_camera',
        plugin='realsense2_camera::RealSenseNodeFactory',
        name='camera_node',
        namespace='camera',
        parameters=realsense_params
    )

    # VSLAM Node
    vslam_node = ComposableNode(
        name='visual_slam_node',
        package='isaac_ros_visual_slam',
        plugin='nvidia::isaac_ros::visual_slam::VisualSlamNode',
        parameters=[{
            'denoise_input_images': False,
            'rectified_images': True,
            'enable_debug_mode': False,
            'enable_localization_n_mapping': False,
            'enable_imu_fusion': False,
            'enable_slam_visualization': True,
            'enable_landmarks_view': True,
            'enable_observations_view': True,
            'gyro_noise_density': 0.000193914,
            'gyro_random_walk': 3.0000000000000004e-06,
            'accel_noise_density': 0.00360699,
            'accel_random_walk': 8.847590000000001e-05,
            'calibration_frequency': 200.0,
            'base_frame': 'camera_link',
            'camera_optical_frames': [
                'camera_infra1_optical_frame',
                'camera_infra2_optical_frame',
            ],
            'enable_image_denoising': False,
            'enable_ground_constraint_in_odometry': False,
            'enable_planar_mode': False,
            'image_jitter_threshold_ms': 500.0,
            'image_buffer_size': 10,
        }],
        remappings=[
            ('visual_slam/image_0', '/camera/camera_node/infra1/image_rect_raw'),
            ('visual_slam/camera_info_0', '/camera/camera_node/infra1/camera_info'),
            ('visual_slam/image_1', '/camera/camera_node/infra2/image_rect_raw'),
            ('visual_slam/camera_info_1', '/camera/camera_node/infra2/camera_info'),
            ('visual_slam/imu', '/camera/camera_node/imu'),
        ]
    )

    # Nvblox Node
    nvblox_node = ComposableNode(
        name='nvblox_node',
        package='nvblox_ros',
        plugin='nvblox::NvbloxNode',
        parameters=[{
            'voxel_size': 0.05,
            'mapping_type': 'static_tsdf',
            'compute_mesh': True,
            'compute_esdf': True,
            'esdf_2d': True,
            'distance_map_unknown_value_optimistic': 1000.0,
            'distance_map_unknown_value_pessimistic': -1000.0,
            'map_clearing_radius_m': 7.0,
            'clear_map_outside_radius': True,
            'map_clearing_frame_id': 'camera_depth_optical_frame',
            'global_frame': 'odom',
            'pose_frame': 'camera_depth_optical_frame',
            'integrate_depth_rate_hz': 30.0,
            'integrate_color_rate_hz': 15.0,
            'update_mesh_rate_hz': 2.0,
            'update_esdf_rate_hz': 2.0,
            'publish_layer_rate_hz': 2.0,
            'use_color': True,
            'use_depth': True,
            'use_lidar': False,
            'use_segmentation': False,
            'static_mapper.projective_integrator_max_integration_distance_m': 5.0,
        }],
        remappings=[
            ('camera_0/depth/image', '/camera/camera_node/depth/image_rect_raw'),
            ('camera_0/depth/camera_info', '/camera/camera_node/depth/camera_info'),
            ('camera_0/color/image', '/camera/camera_node/color/image_raw'),
            ('camera_0/color/camera_info', '/camera/camera_node/color/camera_info'),
        ]
    )

    # Component Container for Realsense (Must be isolated so USB callbacks don't block during VSLAM init)
    camera_container = ComposableNodeContainer(
        name='camera_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container_mt',
        composable_node_descriptions=[
            realsense_node,
        ],
        output='screen',
    )

    # Component Container for VSLAM
    vslam_container = ComposableNodeContainer(
        name='vslam_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container_mt',
        composable_node_descriptions=[
            vslam_node,
        ],
        output='screen',
    )

    # Component Container for Nvblox
    nvblox_container = ComposableNodeContainer(
        name='nvblox_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container_mt',
        composable_node_descriptions=[
            nvblox_node,
        ],
        output='screen',
    )

    from launch.actions import TimerAction
    delayed_vslam = TimerAction(period=15.0, actions=[vslam_container])
    delayed_nvblox = TimerAction(period=15.0, actions=[nvblox_container])

    return LaunchDescription([camera_container, delayed_vslam, delayed_nvblox])
