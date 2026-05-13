import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Declare launch arguments
    host_arg = DeclareLaunchArgument(
        'host', default_value='localhost', description='CARLA server host')
    port_arg = DeclareLaunchArgument(
        'port', default_value='2000', description='CARLA server port')
    timeout_arg = DeclareLaunchArgument(
        'timeout', default_value='30', description='CARLA server timeout')
    topic_arg = DeclareLaunchArgument(
        'topic', default_value='/carla/map_visualization', description='Visualization topic name')

    # Create the CarlaMapVisualization node
    carla_map_viz_node = Node(
        package='carla_map_visualization',   
        executable='carla_map_visualization',   
        name='carla_map_visualization',
        output='screen',
        parameters=[
            {'host': LaunchConfiguration('host')},
            {'port': LaunchConfiguration('port')},
            {'timeout': LaunchConfiguration('timeout')},
            {'topic': LaunchConfiguration('topic')}
        ]
    )



    return LaunchDescription([
        host_arg,
        port_arg,
        timeout_arg,
        topic_arg,     
        carla_map_viz_node,   
    ])