import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    pkg_dir = get_package_share_directory('igvc_navigation')
    nav2_bringup_dir = get_package_share_directory('nav2_bringup')
    
    cartographer_config_dir = os.path.join(pkg_dir, 'config')
    cartographer_config_basename = 'cartographer.lua'
    nav2_params_file = os.path.join(pkg_dir, 'config', 'nav2_params.yaml')

    # 1. Cartographer Node (Builds the map in real-time)
    cartographer_node = Node(
        package='cartographer_ros',
        executable='cartographer_node',
        name='cartographer_node',
        output='screen',
        parameters=[{'use_sim_time': False}],
        arguments=[
            '-configuration_directory', cartographer_config_dir,
            '-configuration_basename', cartographer_config_basename
        ],
        remappings=[
            ('odom', 'wheel/odometry'),
            ('imu', 'imu/data')
        ]
    )

    # 2. Cartographer Grid Node (Converts Cartographer data into a 2D /map topic for Nav2)
    cartographer_occupancy_grid_node = Node(
        package='cartographer_ros',
        executable='cartographer_occupancy_grid_node',
        name='cartographer_occupancy_grid_node',
        output='screen',
        parameters=[{'use_sim_time': False, 'resolution': 0.05}]
    )

    # 3. Nav2 Stack (Without map_server since Cartographer provides the map)
    nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(nav2_bringup_dir, 'launch', 'navigation_launch.py')
        ),
        launch_arguments={
            'use_sim_time': 'False',
            'params_file': nav2_params_file,
            'autostart': 'True'
        }.items()
    )

    # 4. Explore Lite (Finds unknown areas and sends goals to Nav2)
    explore_node = Node(
        package='explore_lite',
        executable='explore',
        name='explore_node',
        output='screen',
        parameters=[{
            'robot_base_frame': 'igvc_base_link',
            'costmap_topic': '/global_costmap/costmap',
            'costmap_updates_topic': '/global_costmap/costmap_updates',
            'visualize': True,
            'planner_frequency': 0.33,
            'progress_timeout': 30.0,
            'potential_scale': 3.0,
            'orientation_scale': 0.0,
            'gain_scale': 1.0,
            'transform_tolerance': 0.3,
            'min_frontier_size': 0.3,
        }]
    )

    return LaunchDescription([
        cartographer_node,
        cartographer_occupancy_grid_node,
        nav2_launch,
        explore_node
    ])
