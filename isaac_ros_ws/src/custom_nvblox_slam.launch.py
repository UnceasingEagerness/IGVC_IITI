import launch
from launch_ros.actions import ComposableNodeContainer, Node
from launch_ros.descriptions import ComposableNode
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # 1. RealSense Driver Node
    realsense_camera_node = Node(
        name="camera",
        namespace="",
        package="realsense2_camera",
        executable="realsense2_camera_node",
        parameters=[{
            "enable_infra1": True,
            "enable_infra2": True,
            "enable_color": True,
            "enable_depth": True,
            "enable_gyro": True,
            "enable_accel": True,
            "unite_imu_method": 2,
            "enable_sync": False,
            "align_depth.enable": True,
        }],
    )

    # 2. Isaac ROS Visual SLAM Node
    visual_slam_node = ComposableNode(
        name="visual_slam_node",
        package="isaac_ros_visual_slam",
        plugin="nvidia::isaac_ros::visual_slam::VisualSlamNode",
        parameters=[{
            "enable_image_denoising": False,
            "rectified_images": True,
            "enable_imu_fusion": False,
            "gyro_noise_density": 0.000244,
            "gyro_random_walk": 0.000019393,
            "accel_noise_density": 0.001862,
            "accel_random_walk": 0.003,
            "calibration_frequency": 200.0,
            "image_jitter_threshold_ms": 22.00,
            "base_frame": "camera_link",
            "imu_frame": "camera_gyro_optical_frame",
            "enable_slam_visualization": True,
            "enable_landmarks_view": True,
            "enable_observations_view": True,
            "camera_optical_frames": [
                "camera_infra1_optical_frame",
                "camera_infra2_optical_frame",
            ],
        }],
        remappings=[
            ("visual_slam/image_0", "camera/infra1/image_rect_raw"),
            ("visual_slam/camera_info_0", "camera/infra1/camera_info"),
            ("visual_slam/image_1", "camera/infra2/image_rect_raw"),
            ("visual_slam/camera_info_1", "camera/infra2/camera_info"),
            ("visual_slam/imu", "camera/imu"),
        ],
    )

    # 3. Nvblox Node
    nvblox_base_config = os.path.join(get_package_share_directory('nvblox_examples_bringup'), 'config/nvblox/nvblox_base.yaml')
    nvblox_realsense_config = os.path.join(get_package_share_directory('nvblox_examples_bringup'), 'config/nvblox/specializations/nvblox_realsense.yaml')

    nvblox_node = ComposableNode(
        name="nvblox_node",
        package="nvblox_ros",
        plugin="nvblox::NvbloxNode",
        parameters=[
            nvblox_base_config,
            nvblox_realsense_config,
            {"num_cameras": 1},
            {"use_lidar": False},
            {"global_frame": "odom"} # Nvblox uses odom as global frame since map is disabled if loop closure isn't used
        ],
        remappings=[
            ("camera_0/depth/image", "/camera/aligned_depth_to_color/image_raw"),
            ("camera_0/depth/camera_info", "/camera/aligned_depth_to_color/camera_info"),
            ("camera_0/color/image", "/camera/color/image_raw"),
            ("camera_0/color/camera_info", "/camera/color/camera_info"),
            # Realsense TF is published as "camera_link", Nvblox listens to this via base_frame
        ],
    )

    # Container to hold VSLAM and Nvblox
    visual_slam_launch_container = ComposableNodeContainer(
        name="visual_slam_launch_container",
        namespace="",
        package="rclcpp_components",
        executable="component_container",
        composable_node_descriptions=[visual_slam_node, nvblox_node],
        output="screen",
    )

    return launch.LaunchDescription([visual_slam_launch_container, realsense_camera_node])
