import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    planning_pkg_dir = get_package_share_directory('carla_planning')
    params_file = os.path.join(planning_pkg_dir, 'config', 'planning_params.yaml')

    planner_node = Node(
        package='carla_planning',
        executable='motion_planner_node',
        name='motion_planner_node',
        output='screen',
        parameters=[params_file]
    )

    return LaunchDescription([
        planner_node
    ])
