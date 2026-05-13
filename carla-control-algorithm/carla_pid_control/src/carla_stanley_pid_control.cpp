#include "carla_pid_control/carla_stanley_pid_control.hpp"

namespace control
{
    using std::placeholders::_1;
    using namespace std::chrono_literals;

    void CarlaStanleyPidControlPublisher::declareParameters()
    {
        this->declare_parameter("speed_target", 15.0);
        this->declare_parameter("lon_pid_kp", 0.16);
        this->declare_parameter("lon_pid_ki", 0.02);
        this->declare_parameter("lon_pid_kd", 0.01);
        this->declare_parameter("lat_pid_kp", 1.0);
        this->declare_parameter("lat_pid_ki", 0.0);
        this->declare_parameter("lat_pid_kd", 0.4);
        this->declare_parameter("stanley_K", 0.5);

    }

    void CarlaStanleyPidControlPublisher::updateParameters()
    {
        this->get_parameter("speed_target", TargetSpeed_);
        this->get_parameter("lon_pid_kp", LonPID_Kp_);
        this->get_parameter("lon_pid_ki", LonPID_Ki_);
        this->get_parameter("lon_pid_kd", LonPID_Kd_);
        this->get_parameter("lat_pid_kp", LatPID_Kp_);
        this->get_parameter("lat_pid_ki", LatPID_Ki_);
        this->get_parameter("lat_pid_kd", LatPID_Kd_);
        this->get_parameter("stanley_K", Stanley_K_);

    }
    rcl_interfaces::msg::SetParametersResult CarlaStanleyPidControlPublisher::onParameterChange(const std::vector<rclcpp::Parameter> &params)
    {
        for (const auto &param : params)
        {
            if (param.get_name() == "speed_target") TargetSpeed_= param.as_double();
            else if (param.get_name() == "lon_pid_kp") LonPID_Kp_ = param.as_double();
            else if (param.get_name() == "lon_pid_ki") LonPID_Ki_ = param.as_double();
            else if (param.get_name() == "lon_pid_kd") LonPID_Kd_ = param.as_double();
            else if (param.get_name() == "lat_pid_kp") LatPID_Kp_ = param.as_double();
            else if (param.get_name() == "lat_pid_ki") LatPID_Ki_ = param.as_double();
            else if (param.get_name() == "lat_pid_kd") LatPID_Kd_ = param.as_double();
            else if (param.get_name() == "stanley_K") Stanley_K_ = param.as_double();
        }

        this->PARAMS_UPDATED = true;
        rcl_interfaces::msg::SetParametersResult result;
        result.successful = true;
        result.reason = "Path parameters updated";
        return result;
    }
    
    //构造函数，初始化
    CarlaStanleyPidControlPublisher::CarlaStanleyPidControlPublisher(): Node("carla_stanley_pid_control_publisher")
    {
        this->declareParameters();
        this->updateParameters();

        // 3. 设置动态参数更新回调
        this->param_callback_handle_ = this->add_on_set_parameters_callback(
            std::bind(&CarlaStanleyPidControlPublisher::onParameterChange, this, std::placeholders::_1)
        );

        //订阅车辆位姿
        this->sub_ego_vehicle_odom_ = this->create_subscription<nav_msgs::msg::Odometry>("/carla/hero/odometry", 1, std::bind(&CarlaStanleyPidControlPublisher::odomCallback, this, _1));
        //订阅规划路径点
        this->sub_route_waypoint_ = this->create_subscription<nav_msgs::msg::Path>("/carla/hero/waypoints", 1, std::bind(&CarlaStanleyPidControlPublisher::routeWaypointCallback, this, _1));
        //发布车辆控制信息
        this->pub_vehicle_control_ = this->create_publisher<carla_msgs::msg::CarlaEgoVehicleControl>("/carla/hero/vehicle_control_cmd", 1);

        //设置定时发布
        control_timer_ = this->create_wall_timer(
        std::chrono::milliseconds(50), std::bind(&CarlaStanleyPidControlPublisher::controlIterationCallback, this));

        //纵向和横向的pid控制器
        this->lon_pid_ = std::make_unique<control::PID>(0.05, 1.0, -1.0, LonPID_Kp_, LonPID_Ki_, LonPID_Kd_);
        this->lat_controller = std::make_unique<control::StanleyController>(Stanley_K_, 0.05, -M_PI, M_PI, LatPID_Kp_, LatPID_Ki_, LatPID_Kd_);

    }

    void CarlaStanleyPidControlPublisher::odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg)
    {
        //获取当前ego-vehicle的位姿
        // 姿态角获取
        tf2::Quaternion quat_tf;
        tf2::convert(msg->pose.pose.orientation, quat_tf);
        tf2::Matrix3x3(quat_tf).getRPY(
            curr_vehicle_state_.roll, 
            curr_vehicle_state_.pitch, 
            curr_vehicle_state_.yaw);

        // 位置与速度写入
        curr_vehicle_state_.x = msg->pose.pose.position.x;
        curr_vehicle_state_.y = msg->pose.pose.position.y;
        curr_vehicle_state_.vx = msg->twist.twist.linear.x;
        curr_vehicle_state_.vy = msg->twist.twist.linear.y;
        curr_vehicle_state_.vz = msg->twist.twist.linear.z;

        // 欧式速度
        curr_vehicle_state_.v = std::sqrt(
            curr_vehicle_state_.vx * curr_vehicle_state_.vx +
            curr_vehicle_state_.vy * curr_vehicle_state_.vy +
            curr_vehicle_state_.vz * curr_vehicle_state_.vz);

        // 朝向
        curr_vehicle_state_.heading = curr_vehicle_state_.yaw;

        // 角速度
        curr_vehicle_state_.angular_velocity = msg->twist.twist.angular.z;

    }

    void CarlaStanleyPidControlPublisher::routeWaypointCallback(const nav_msgs::msg::Path::SharedPtr msg)
    {
        route_waypoints_.clear();
        for (auto& pose : msg->poses){route_waypoints_.push_back({pose.pose.position.x, pose.pose.position.y});
        }
        auto reference_line = std::make_unique<control::ReferenceLine>(route_waypoints_);
        reference_line->ComputePathProfile(&headings_, &accumulated_s_, &kappas_, &dkappas_);

        plan_waypoints_.clear();
        size_t N = headings_.size();
        for (size_t i = 0; i < N; ++i) {
            TrajectoryPoint pt;
            pt.x = route_waypoints_[i].first;
            pt.y = route_waypoints_[i].second;
            pt.v = 0.0; // 速度先空着
            pt.a = 0.0;
            pt.heading = headings_[i];
            pt.kappa = kappas_[i];
            plan_waypoints_.push_back(pt);
        }

        this->updateTrajectorySpeed();

        
    }

    void CarlaStanleyPidControlPublisher::updateTrajectorySpeed()
    {
        if (plan_waypoints_.empty()) return;
        size_t n = plan_waypoints_.size();
        size_t stop_begin = std::ceil(n * (1 - decel_ratio_));
        size_t stop_end = n;
        for (size_t i = 0; i < n; ++i) 
        {
            if (i < stop_begin) 
            {
                plan_waypoints_[i].v = TargetSpeed_;
            } 
            else if (i < stop_end - 1) 
            {
                double ratio = 1.0 - double(i - stop_begin) / (stop_end - stop_begin);
                plan_waypoints_[i].v = std::max(0.5, TargetSpeed_ * ratio);
            } 
            else 
            {
                plan_waypoints_[i].v = 0.0;
            }
        }

        SPEED_UPDATED = false;
    }

    void CarlaStanleyPidControlPublisher::controlIterationCallback()
    {
        if (plan_waypoints_.empty()) return;
        if (SPEED_UPDATED)
        {
            this->updateTrajectorySpeed();
        }

        if (PARAMS_UPDATED)
        {
            this->lon_pid_->updateSettings(LonPID_Kp_, LonPID_Ki_, LonPID_Kd_);
            this->lat_controller->updateSettings(Stanley_K_, LatPID_Kp_, LatPID_Ki_, LatPID_Kd_);
            PARAMS_UPDATED = false;
        }
        //获取当前最近点
        auto  target_point_ = this->QueryNearestPointByPosition(curr_vehicle_state_.x, curr_vehicle_state_.y);

        double v_err = target_point_.v - curr_vehicle_state_.v;                  // 速度误差

        //计算纵向和横向的控制量
        double acceleration_cmd = this->lon_pid_->calculate(v_err);
        double steer_cmd = this->lat_controller->ComputeControlCmd(curr_vehicle_state_, target_point_);
        
        RCLCPP_INFO(this->get_logger(),
        "Target Point: x=%.3f, y=%.3f, v=%.3f", target_point_.x, target_point_.y, target_point_.v);

        RCLCPP_INFO(this->get_logger(),
            "Control Output: acceleration_cmd=%.3f, steer_cmd=%.3f", acceleration_cmd, steer_cmd);


        
        control_cmd_.header.stamp = this->now();

        if (acceleration_cmd <= 0) {
            control_cmd_.brake = -acceleration_cmd;
            control_cmd_.throttle = 0;
        } else {
            control_cmd_.throttle = acceleration_cmd;
            control_cmd_.brake = 0;
        }
        // std::cout << "acceleration_cmd: " << acceleration_cmd << std::endl;
        control_cmd_.steer = steer_cmd;
        control_cmd_.gear = 1;
        control_cmd_.reverse = false;
        control_cmd_.hand_brake = false;
        control_cmd_.manual_gear_shift = false;
        pub_vehicle_control_->publish(control_cmd_);
    }

    double CarlaStanleyPidControlPublisher::PointDistanceSquare(const TrajectoryPoint &point, const double x, const double y)
    {
        double dx = point.x - x;
        double dy = point.y - y;
        return dx * dx + dy * dy;
    }

    TrajectoryPoint CarlaStanleyPidControlPublisher::QueryNearestPointByPosition(const double x, const double y)
    {
        double d_min = PointDistanceSquare(plan_waypoints_.front(), x, y); // 得到当前位置距离参考路径的第一个点的距离
        size_t index_min = 0;

        for (size_t i = 1; i < plan_waypoints_.size(); ++i) 
        {
            double d_temp = PointDistanceSquare(plan_waypoints_[i], x, y);
            if (d_temp < d_min) 
            {
                d_min = d_temp;
                index_min = i;
            }
        }
        return plan_waypoints_[index_min];
    }

}

int main(int argc, char const* argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<control::CarlaStanleyPidControlPublisher>());
    rclcpp::shutdown();
    return 0;
}