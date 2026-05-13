from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg = get_package_share_directory('carla_prediction')
    params = os.path.join(pkg, 'config', 'prediction_params.yaml')

    return LaunchDescription([
        DeclareLaunchArgument('model_ckpt', default_value='',
                              description='Chemin absolu vers le checkpoint .ckpt'),
        DeclareLaunchArgument('osm_path',
                              default_value=os.path.expanduser(
                                  '~/Desktop/CarlaPrediction/data/maps/Town03.osm'),
                              description='Chemin vers la carte OSM'),

        Node(
            package='carla_prediction',
            executable='prediction_node',
            name='carla_prediction_node',
            parameters=[
                params,
                {'model_ckpt': LaunchConfiguration('model_ckpt')},
                {'osm_path':   LaunchConfiguration('osm_path')},
            ],
            output='screen',
            emulate_tty=True,
        ),
    ])
