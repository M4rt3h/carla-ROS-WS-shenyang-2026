#pragma once

#include "common.h"
#include "rclcpp/rclcpp.hpp"

#include <std_msgs/msg/bool.hpp>
#include <nav_msgs/msg/path.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_broadcaster.h>
#include "pid.hpp"
#include "stanely_control.hpp"
#include "carla_msgs/msg/carla_ego_vehicle_control.hpp"
#include "carla_msgs/msg/carla_status.hpp"
#include <std_msgs/msg/float32.hpp>
#include "carla_msgs/msg/carla_ego_vehicle_status.hpp"

namespace control
{
    class CarlaStanleyPidControlPublisher: public rclcpp::Node
    {
        public:
            CarlaStanleyPidControlPublisher();
            ~CarlaStanleyPidControlPublisher() = default; //虚析构, 保证类安全继承

          

        private:
            double PointDistanceSquare(const TrajectoryPoint &point, const double x, const double y); //计算距离
            TrajectoryPoint QueryNearestPointByPosition(const double x, const double y); //查找最近路径点

            void updateTrajectorySpeed(); //更新规划路径速度, 进行平滑
            //声明和更新配置参数
            void declareParameters();
            void updateParameters();
            rcl_interfaces::msg::SetParametersResult onParameterChange(const std::vector<rclcpp::Parameter> &params);

            rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_ego_vehicle_odom_;
            void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg);
            VehicleState curr_vehicle_state_; //当前的车辆状态
           
            rclcpp::Subscription<carla_msgs::msg::CarlaEgoVehicleStatus>::SharedPtr sub_carla_status_;
            void vehicleStatusCallback(const carla_msgs::msg::CarlaEgoVehicleStatus::SharedPtr msg);

            rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr sub_route_waypoint_;
            void routeWaypointCallback(const nav_msgs::msg::Path::SharedPtr msg);

            rclcpp::Publisher<carla_msgs::msg::CarlaEgoVehicleControl>::SharedPtr pub_vehicle_control_;
            carla_msgs::msg::CarlaEgoVehicleControl control_cmd_;

            //定时器
            rclcpp::TimerBase::SharedPtr control_timer_;
            void controlIterationCallback();

            rclcpp::node_interfaces::OnSetParametersCallbackHandle::SharedPtr param_callback_handle_;

            //route路径点
            std::vector<std::pair<double, double>> route_waypoints_; 

            //路径属性
            std::vector<double> headings_, kappas_, accumulated_s_, dkappas_;

            //plan路径点，进行速度修正
            std::vector<TrajectoryPoint> plan_waypoints_;

            // pid对象及参数
            std::unique_ptr<control::PID> lon_pid_ ;
            std::unique_ptr<control::StanleyController> lat_controller;

            double LonPID_Kp_;
            double LonPID_Ki_;
            double LonPID_Kd_;
            double TargetSpeed_;

            double LatPID_Kp_;
            double LatPID_Ki_;
            double LatPID_Kd_;
            double Stanley_K_;

            double decel_ratio_ = 0.15;

            bool PARAMS_UPDATED; 
            bool SPEED_UPDATED;

    };
}