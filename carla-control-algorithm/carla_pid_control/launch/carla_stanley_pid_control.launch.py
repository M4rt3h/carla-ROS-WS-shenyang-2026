import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch_ros.actions.Node(
            package='carla_pid_control',
            executable='carla_stanley_pid_control',
            name='carla_stanley_pid_control',
            output='screen',
            emulate_tty='True',
            parameters=[
            ]
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
