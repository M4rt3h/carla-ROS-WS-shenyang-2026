#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

def main():
    rclpy.init()
    node = Node("my_first_python_node")
    node.get_logger().info("I am learning ROS 2.")
    rclpy.shutdown()
    