from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description(): 
    # 6. Hardware TFs (Mounting points on the physical robot)
    #Here base_link is the axle
    tf_laser = Node(package='tf2_ros', executable='static_transform_publisher', arguments=['--x', '-0.28', '--y', '0.0', '--z', '0.495', '--yaw', '0', '--pitch', '0', '--roll', '0', '--frame-id', 'base_link', '--child-frame-id', 'laser'])
    tf_imu = Node(package='tf2_ros', executable='static_transform_publisher', arguments=['--x', '-0.28', '--y', '0.0', '--z', '0.175', '--yaw', '-1.5708', '--pitch', '0', '--roll', '0', '--frame-id', 'base_link', '--child-frame-id', 'imu_link'])
    tf_camera = Node(package='tf2_ros', executable='static_transform_publisher', arguments=['--x', '0.225', '--y', '0.0', '--z', '0.44', '--yaw', '0', '--pitch', '0', '--roll', '0', '--frame-id', 'base_link', '--child-frame-id', 'camera_link'])
    tf_gps = Node(package='tf2_ros', executable='static_transform_publisher', arguments=['--x', '-0.28', '--y', '0.0', '--z', '0.50', '--yaw', '0', '--pitch', '0', '--roll', '0', '--frame-id', 'base_link', '--child-frame-id', 'gps_link'])

    return LaunchDescription([
        tf_laser,
        tf_imu,
        tf_camera,
        tf_gps
    ])
