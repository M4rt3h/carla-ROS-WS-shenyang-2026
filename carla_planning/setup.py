from setuptools import setup
import os
from glob import glob

package_name = 'carla_planning'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='martin',
    maintainer_email='martin@todo.com',
    description='Real-time multi-agent trajectory planning node (Task 09)',
    license='MIT',
    entry_points={
        'console_scripts': [
            'motion_planner_node = carla_planning.motion_planner_node:main'
        ],
    },
)
