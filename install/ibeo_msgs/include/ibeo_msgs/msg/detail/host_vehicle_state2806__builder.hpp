// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/HostVehicleState2806.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2806__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2806__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/host_vehicle_state2806__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_HostVehicleState2806_steer_ratio_poly_3
{
public:
  explicit Init_HostVehicleState2806_steer_ratio_poly_3(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::HostVehicleState2806 steer_ratio_poly_3(::ibeo_msgs::msg::HostVehicleState2806::_steer_ratio_poly_3_type arg)
  {
    msg_.steer_ratio_poly_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_steer_ratio_poly_2
{
public:
  explicit Init_HostVehicleState2806_steer_ratio_poly_2(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_steer_ratio_poly_3 steer_ratio_poly_2(::ibeo_msgs::msg::HostVehicleState2806::_steer_ratio_poly_2_type arg)
  {
    msg_.steer_ratio_poly_2 = std::move(arg);
    return Init_HostVehicleState2806_steer_ratio_poly_3(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_steer_ratio_poly_1
{
public:
  explicit Init_HostVehicleState2806_steer_ratio_poly_1(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_steer_ratio_poly_2 steer_ratio_poly_1(::ibeo_msgs::msg::HostVehicleState2806::_steer_ratio_poly_1_type arg)
  {
    msg_.steer_ratio_poly_1 = std::move(arg);
    return Init_HostVehicleState2806_steer_ratio_poly_2(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_steer_ratio_poly_0
{
public:
  explicit Init_HostVehicleState2806_steer_ratio_poly_0(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_steer_ratio_poly_1 steer_ratio_poly_0(::ibeo_msgs::msg::HostVehicleState2806::_steer_ratio_poly_0_type arg)
  {
    msg_.steer_ratio_poly_0 = std::move(arg);
    return Init_HostVehicleState2806_steer_ratio_poly_1(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_rear_axle_to_vehicle_rear
{
public:
  explicit Init_HostVehicleState2806_rear_axle_to_vehicle_rear(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_steer_ratio_poly_0 rear_axle_to_vehicle_rear(::ibeo_msgs::msg::HostVehicleState2806::_rear_axle_to_vehicle_rear_type arg)
  {
    msg_.rear_axle_to_vehicle_rear = std::move(arg);
    return Init_HostVehicleState2806_steer_ratio_poly_0(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_rear_axle_to_front_axle
{
public:
  explicit Init_HostVehicleState2806_rear_axle_to_front_axle(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_rear_axle_to_vehicle_rear rear_axle_to_front_axle(::ibeo_msgs::msg::HostVehicleState2806::_rear_axle_to_front_axle_type arg)
  {
    msg_.rear_axle_to_front_axle = std::move(arg);
    return Init_HostVehicleState2806_rear_axle_to_vehicle_rear(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_vehicle_front_to_front_axle
{
public:
  explicit Init_HostVehicleState2806_vehicle_front_to_front_axle(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_rear_axle_to_front_axle vehicle_front_to_front_axle(::ibeo_msgs::msg::HostVehicleState2806::_vehicle_front_to_front_axle_type arg)
  {
    msg_.vehicle_front_to_front_axle = std::move(arg);
    return Init_HostVehicleState2806_rear_axle_to_front_axle(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_vehicle_width
{
public:
  explicit Init_HostVehicleState2806_vehicle_width(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_vehicle_front_to_front_axle vehicle_width(::ibeo_msgs::msg::HostVehicleState2806::_vehicle_width_type arg)
  {
    msg_.vehicle_width = std::move(arg);
    return Init_HostVehicleState2806_vehicle_front_to_front_axle(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_front_wheel_angle
{
public:
  explicit Init_HostVehicleState2806_front_wheel_angle(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_vehicle_width front_wheel_angle(::ibeo_msgs::msg::HostVehicleState2806::_front_wheel_angle_type arg)
  {
    msg_.front_wheel_angle = std::move(arg);
    return Init_HostVehicleState2806_vehicle_width(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_cross_acceleration
{
public:
  explicit Init_HostVehicleState2806_cross_acceleration(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_front_wheel_angle cross_acceleration(::ibeo_msgs::msg::HostVehicleState2806::_cross_acceleration_type arg)
  {
    msg_.cross_acceleration = std::move(arg);
    return Init_HostVehicleState2806_front_wheel_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_steering_wheel_angle
{
public:
  explicit Init_HostVehicleState2806_steering_wheel_angle(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_cross_acceleration steering_wheel_angle(::ibeo_msgs::msg::HostVehicleState2806::_steering_wheel_angle_type arg)
  {
    msg_.steering_wheel_angle = std::move(arg);
    return Init_HostVehicleState2806_cross_acceleration(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_yaw_rate
{
public:
  explicit Init_HostVehicleState2806_yaw_rate(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_steering_wheel_angle yaw_rate(::ibeo_msgs::msg::HostVehicleState2806::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_HostVehicleState2806_steering_wheel_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_longitudinal_velocity
{
public:
  explicit Init_HostVehicleState2806_longitudinal_velocity(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_yaw_rate longitudinal_velocity(::ibeo_msgs::msg::HostVehicleState2806::_longitudinal_velocity_type arg)
  {
    msg_.longitudinal_velocity = std::move(arg);
    return Init_HostVehicleState2806_yaw_rate(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_course_angle
{
public:
  explicit Init_HostVehicleState2806_course_angle(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_longitudinal_velocity course_angle(::ibeo_msgs::msg::HostVehicleState2806::_course_angle_type arg)
  {
    msg_.course_angle = std::move(arg);
    return Init_HostVehicleState2806_longitudinal_velocity(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_distance_y
{
public:
  explicit Init_HostVehicleState2806_distance_y(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_course_angle distance_y(::ibeo_msgs::msg::HostVehicleState2806::_distance_y_type arg)
  {
    msg_.distance_y = std::move(arg);
    return Init_HostVehicleState2806_course_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_distance_x
{
public:
  explicit Init_HostVehicleState2806_distance_x(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_distance_y distance_x(::ibeo_msgs::msg::HostVehicleState2806::_distance_x_type arg)
  {
    msg_.distance_x = std::move(arg);
    return Init_HostVehicleState2806_distance_y(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_timestamp
{
public:
  explicit Init_HostVehicleState2806_timestamp(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_distance_x timestamp(::ibeo_msgs::msg::HostVehicleState2806::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_HostVehicleState2806_distance_x(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_ibeo_header
{
public:
  explicit Init_HostVehicleState2806_ibeo_header(::ibeo_msgs::msg::HostVehicleState2806 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2806_timestamp ibeo_header(::ibeo_msgs::msg::HostVehicleState2806::_ibeo_header_type arg)
  {
    msg_.ibeo_header = std::move(arg);
    return Init_HostVehicleState2806_timestamp(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

class Init_HostVehicleState2806_header
{
public:
  Init_HostVehicleState2806_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HostVehicleState2806_ibeo_header header(::ibeo_msgs::msg::HostVehicleState2806::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HostVehicleState2806_ibeo_header(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2806 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::HostVehicleState2806>()
{
  return ibeo_msgs::msg::builder::Init_HostVehicleState2806_header();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2806__BUILDER_HPP_
