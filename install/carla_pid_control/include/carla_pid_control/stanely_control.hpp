#pragma once
#include <math.h>

#include <fstream>
#include <iomanip>
#include <memory>
#include <string>

#include "Eigen/Core"
#include "Eigen/LU"
#include "common.h"
#include "pid.hpp"



namespace control 
{
    using Matrix = Eigen::MatrixXd;

    class StanleyController 
    {
        public:
            StanleyController() {};
            StanleyController(double stanely_k, double dt, double max, double min, double pid_kp, double pid_ki, double pid_kd): k_y_(stanely_k), e_theta_pid_controller_(dt, max, min, pid_kp, pid_ki, pid_kd) {};

            ~StanleyController() = default;

            void updateSettings(double stanely_k, double pid_kp, double pid_ki, double pid_kd)
            {
                this->k_y_ = stanely_k;
                this->e_theta_pid_controller_.updateSettings(pid_kp, pid_ki, pid_kd);
            }


            //转弧度
            double atan2_to_PI(const double atan2) 
            {
                return atan2 * M_PI / 180;
            }
            // 计算距离
            

            // 提示，在该函数中你需要调用计算误差
            // 控制器中，前轮转角的命令是弧度单位，发送给carla的横向控制指令，范围是 -1~1
            double ComputeControlCmd(const VehicleState &vehicle_state, const TrajectoryPoint& current_closest_point)
            {

                // 主车的状态信息
                double current_vehicle_velocity = vehicle_state.velocity;

                double e_y = 0.0; //横向误差
                double e_theta = 0.0; //航向误差
                this->ComputeLateralErrors(vehicle_state, current_closest_point, e_y, e_theta);
                // e_y = std::atan2(this->k_y_ * e_y, current_vehicle_velocity); // atan2 返回的是弧度单位
                // TODO: atan2 返回的是弧度单位，在分子上添加一个常数项，在低速条件下改善控制器性能
                e_y = std::atan2(this->k_y_ * e_y, current_vehicle_velocity + 6.0 ); 

                // 限制Cross track error 引起的前轮转角的取值区间
                if (e_y > M_PI)
                {
                    e_y = e_y - M_PI * 2;
                }
                if (e_y < -M_PI)
                {
                    e_y = e_y + M_PI * 2;
                }

                
                // TODO: PID控制器中的微分环节相当于阻尼，加在航向误差引起的前轮转角上，抑制高速工况下的过大的前轮转角变化率
                double e_theta_pd = e_theta;
                // double e_theta_pd = e_theta_pid_controller_.calculate(e_theta); 
                // 这个0.01和主程序的循环周期匹配上

                // 限制航向误差引起的前轮转角的取值区间
                if (e_theta_pd > M_PI)
                {
                    e_theta_pd = e_theta_pd - M_PI * 2;
                }
                if (e_theta_pd < -M_PI)
                {
                    e_theta_pd = e_theta_pd + M_PI * 2;
                }

                // TODO: 在连续弯道中，引入一个前馈项来提高跟踪性能，前馈项和路径曲率相同就足够
                double kappa_factor_angle = 0; 

                // std::cout << "Current kappa:" << current_closest_point.kappa << std::endl;

                if (isnan(current_closest_point.kappa))
                {
                    kappa_factor_angle = 0;
                }
                else
                {
                    kappa_factor_angle = -current_closest_point.kappa; 
                }
                
                double raw_steering_control = e_y + 0.5 * e_theta_pd + 2.6 * kappa_factor_angle;


                // 限制前轮最大转角，这里定义前轮最大转角位于 [-20度～20度]
                if (raw_steering_control > MAX_STEER_RAD)
                {
                    raw_steering_control = MAX_STEER_RAD;
                }
                else if (raw_steering_control < -MAX_STEER_RAD)
                {
                    raw_steering_control = -MAX_STEER_RAD;
                }
                double steer_cmd = raw_steering_control / MAX_STEER_RAD;

                // Carla 里面的横向控制信号范围 -1~1 之间

                 return steer_cmd; // 给出控制信号      

            }
            // /** to-do **/ 计算需要的误差，包括横向误差，纵向误差，误差计算函数没有传入主车速度，因此返回的位置误差就是误差，不是根据误差计算得到的前轮转角
            void ComputeLateralErrors(const VehicleState &vehicle_state, const TrajectoryPoint& current_closest_point, double &e_y, double &e_theta)
            {
                
                e_y = std::sqrt((vehicle_state.x - current_closest_point.x) * (vehicle_state.x - current_closest_point.x) + (vehicle_state.y - current_closest_point.y) * (vehicle_state.y - current_closest_point.y));

                // 将位置误差转换为前轮转角的时候：需要将路径上距离车辆最近的点从世界坐标系变换到车辆坐标系下，根据路径点在车辆坐标系下的横坐标的正负决定前轮转角的方向
                // double closest_point_x_in_vehicle_coordinate =   (current_closest_point.x - x) * cos(theta) + (current_closest_point.y - y) * sin(theta);
                double closest_point_y_in_vehicle_coordinate = - (current_closest_point.x - vehicle_state.x) * sin(vehicle_state.heading) + (current_closest_point.y - vehicle_state.y) * cos(vehicle_state.heading);
                if (closest_point_y_in_vehicle_coordinate > 0) // 车辆坐标系：X轴沿着车辆纵向，向前为正，Y沿着车辆横向，向左为正（从车头往前看的视角），在车辆坐标系下，距离车辆最近的路径点位于车辆左侧，车辆应该左转以跟踪参考路径，
                {
                    e_y = -e_y;
                }
                else if (closest_point_y_in_vehicle_coordinate < 0)
                {
                    e_y = e_y;
                }

                e_theta = -(current_closest_point.heading - vehicle_state.heading); // 路径上距离车辆最近的点的参考航向角，大于车辆的当前航向角的话，车辆应左转以跟踪航向
            }
            
           

        protected:
            std::vector<TrajectoryPoint> trajectory_points_;
            double k_y_;
            control::PID e_theta_pid_controller_; // PID控制器中的微分环节相当于阻尼，加在航向误差引起的前轮转角
            double MAX_STEER_RAD = 25.0 * M_PI / 180.0;  //最大前轮转角
            // double u_min_ = 0.0;
            // double u_max_ = 100.0;
            // double theta_0_;

    };
} 