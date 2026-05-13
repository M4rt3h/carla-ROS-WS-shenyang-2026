import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, LogInfo
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    # Declare launch arguments
    new_scan_arg = DeclareLaunchArgument('new_scan', default_value='true', description='Whether to use new scan data')
    vehicle_radius_arg = DeclareLaunchArgument('vehicle_radius', default_value='8.0', description='Vehicle radius')
    cloud_resolution_arg = DeclareLaunchArgument('cloud_resolution', default_value='5000', description='Cloud resolution')

    # Create the lidar_mapping node
    lidar_mapping_node = Node(
        package='carla_lidar_mapping',
        executable='lidar_mapping',
        name='lidar_mapping',
        output='screen',
        parameters=[
            {'new_scan': LaunchConfiguration('new_scan')},
            {'vehicle_radius': LaunchConfiguration('vehicle_radius')},
            {'cloud_resolution': LaunchConfiguration('cloud_resolution')}
        ]
    )

    # # Create the rviz node
    # rviz_node = Node(
    #     package='rviz2',
    #     executable='rviz2',
    #     name='rviz',
    #     output='screen',
    #     arguments=['-d', '/'.join([launch.substitutions.FindPackageShare('lidar_mapping'), 'rviz/mapping.rviz'])]
    # )

    return LaunchDescription([
        new_scan_arg,
        vehicle_radius_arg,
        cloud_resolution_arg,
        lidar_mapping_node,
    ])
