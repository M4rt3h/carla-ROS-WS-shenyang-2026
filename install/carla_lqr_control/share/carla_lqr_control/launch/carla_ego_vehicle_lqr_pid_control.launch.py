import os
import launch
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, TimerAction
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    launch_args = [
        DeclareLaunchArgument('host', default_value='localhost'),
        DeclareLaunchArgument('port', default_value='2000'),
        DeclareLaunchArgument('timeout', default_value='30'),
        DeclareLaunchArgument('role_name', default_value='hero'),
        DeclareLaunchArgument('vehicle_filter', default_value='vehicle.*'),
        DeclareLaunchArgument('spawn_point', default_value='None'),
        DeclareLaunchArgument('town', default_value='Town10HD'),
        DeclareLaunchArgument('passive', default_value='False'),
        DeclareLaunchArgument('synchronous_mode_wait_for_vehicle_control_command', default_value='False'),
        DeclareLaunchArgument('fixed_delta_seconds', default_value='0.05')
    ]

    bridge_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('carla_ros_bridge'), 'carla_ros_bridge.launch.py')
        ),
        launch_arguments={
            'host': LaunchConfiguration('host'),
            'port': LaunchConfiguration('port'),
            'town': LaunchConfiguration('town'),
            'timeout': LaunchConfiguration('timeout'),
            'passive': LaunchConfiguration('passive'),
            'synchronous_mode_wait_for_vehicle_control_command': LaunchConfiguration('synchronous_mode_wait_for_vehicle_control_command'),
            'fixed_delta_seconds': LaunchConfiguration('fixed_delta_seconds')
        }.items()
    )

    map_vis_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('carla_map_visualization'), 'launch', 'map_visualization.launch.py')
        ),
        launch_arguments={
            'host': LaunchConfiguration('host')
        }.items()
    )

    spawn_ego_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('carla_spawn_objects'), 'carla_example_ego_vehicle.launch.py')
        ),
        launch_arguments={
            'host': LaunchConfiguration('host'),
            'port': LaunchConfiguration('port'),
            'timeout': LaunchConfiguration('timeout'),
            'vehicle_filter': LaunchConfiguration('vehicle_filter'),
            'role_name': LaunchConfiguration('role_name'),
            'spawn_point': LaunchConfiguration('spawn_point')
        }.items()
    )

    waypoint_pub_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('carla_waypoint_publisher'), 'carla_waypoint_publisher.launch.py')
        ),
        launch_arguments={
            'host': LaunchConfiguration('host'),
            'port': LaunchConfiguration('port'),
            'timeout': LaunchConfiguration('timeout'),
            'role_name': LaunchConfiguration('role_name'),
        }.items()
    )

    lqr_pid_control_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('carla_lqr_control'), 'launch', 'carla_lqr_pid_control.launch.py')
        )
    )

    control_display_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('carla_control_display'), 'launch', 'carla_control_display.launch.py')
        ),
        launch_arguments={
            'role_name': LaunchConfiguration('role_name')
        }.items()
    )

    rviz_launch = Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            remappings=[
                (
                   "/goal_pose", 
                   "/carla/hero/goal_pose"
                )
            ],
            arguments=[
                '-d', os.path.join(get_package_share_directory('carla_map_visualization'), 'rviz/carla_map_vis.rviz')],
            on_exit=launch.actions.Shutdown()
        )
    
    urdf_path = os.path.join(
        get_package_share_directory('carla_spawn_objects'),
        'urdf',
        'lexus.urdf'
    )
    with open(urdf_path, 'r') as f:
        urdf_content = f.read()

    robot_state_publisher_launch = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': urdf_content}]
    )
    
    return LaunchDescription(launch_args + [
        bridge_launch,  # 立即启动bridge
        TimerAction(period=2.0, actions=[map_vis_launch]),            
        TimerAction(period=3.0, actions=[spawn_ego_launch]),          
        TimerAction(period=4.0, actions=[waypoint_pub_launch]),      
        TimerAction(period=5.0, actions=[lqr_pid_control_launch]),        
        TimerAction(period=6.0, actions=[control_display_launch]),
        TimerAction(period=7.0, actions=[robot_state_publisher_launch]),
        TimerAction(period=9.0, actions=[rviz_launch]),     
    ])
       
