// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/HostVehicleState2805.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/host_vehicle_state2805__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_HostVehicleState2805_current_yaw_rate
{
public:
  explicit Init_HostVehicleState2805_current_yaw_rate(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::HostVehicleState2805 current_yaw_rate(::ibeo_msgs::msg::HostVehicleState2805::_current_yaw_rate_type arg)
  {
    msg_.current_yaw_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_heading_difference
{
public:
  explicit Init_HostVehicleState2805_heading_difference(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_current_yaw_rate heading_difference(::ibeo_msgs::msg::HostVehicleState2805::_heading_difference_type arg)
  {
    msg_.heading_difference = std::move(arg);
    return Init_HostVehicleState2805_current_yaw_rate(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_y_difference
{
public:
  explicit Init_HostVehicleState2805_y_difference(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_heading_difference y_difference(::ibeo_msgs::msg::HostVehicleState2805::_y_difference_type arg)
  {
    msg_.y_difference = std::move(arg);
    return Init_HostVehicleState2805_heading_difference(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_x_difference
{
public:
  explicit Init_HostVehicleState2805_x_difference(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_y_difference x_difference(::ibeo_msgs::msg::HostVehicleState2805::_x_difference_type arg)
  {
    msg_.x_difference = std::move(arg);
    return Init_HostVehicleState2805_y_difference(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_time_difference
{
public:
  explicit Init_HostVehicleState2805_time_difference(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_x_difference time_difference(::ibeo_msgs::msg::HostVehicleState2805::_time_difference_type arg)
  {
    msg_.time_difference = std::move(arg);
    return Init_HostVehicleState2805_x_difference(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_course_angle
{
public:
  explicit Init_HostVehicleState2805_course_angle(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_time_difference course_angle(::ibeo_msgs::msg::HostVehicleState2805::_course_angle_type arg)
  {
    msg_.course_angle = std::move(arg);
    return Init_HostVehicleState2805_time_difference(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_y_position
{
public:
  explicit Init_HostVehicleState2805_y_position(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_course_angle y_position(::ibeo_msgs::msg::HostVehicleState2805::_y_position_type arg)
  {
    msg_.y_position = std::move(arg);
    return Init_HostVehicleState2805_course_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_x_position
{
public:
  explicit Init_HostVehicleState2805_x_position(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_y_position x_position(::ibeo_msgs::msg::HostVehicleState2805::_x_position_type arg)
  {
    msg_.x_position = std::move(arg);
    return Init_HostVehicleState2805_y_position(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_front_wheel_angle
{
public:
  explicit Init_HostVehicleState2805_front_wheel_angle(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_x_position front_wheel_angle(::ibeo_msgs::msg::HostVehicleState2805::_front_wheel_angle_type arg)
  {
    msg_.front_wheel_angle = std::move(arg);
    return Init_HostVehicleState2805_x_position(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_steering_wheel_angle
{
public:
  explicit Init_HostVehicleState2805_steering_wheel_angle(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_front_wheel_angle steering_wheel_angle(::ibeo_msgs::msg::HostVehicleState2805::_steering_wheel_angle_type arg)
  {
    msg_.steering_wheel_angle = std::move(arg);
    return Init_HostVehicleState2805_front_wheel_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_longitudinal_velocity
{
public:
  explicit Init_HostVehicleState2805_longitudinal_velocity(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_steering_wheel_angle longitudinal_velocity(::ibeo_msgs::msg::HostVehicleState2805::_longitudinal_velocity_type arg)
  {
    msg_.longitudinal_velocity = std::move(arg);
    return Init_HostVehicleState2805_steering_wheel_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_error_flags
{
public:
  explicit Init_HostVehicleState2805_error_flags(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_longitudinal_velocity error_flags(::ibeo_msgs::msg::HostVehicleState2805::_error_flags_type arg)
  {
    msg_.error_flags = std::move(arg);
    return Init_HostVehicleState2805_longitudinal_velocity(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_scan_number
{
public:
  explicit Init_HostVehicleState2805_scan_number(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_error_flags scan_number(::ibeo_msgs::msg::HostVehicleState2805::_scan_number_type arg)
  {
    msg_.scan_number = std::move(arg);
    return Init_HostVehicleState2805_error_flags(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_timestamp
{
public:
  explicit Init_HostVehicleState2805_timestamp(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_scan_number timestamp(::ibeo_msgs::msg::HostVehicleState2805::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_HostVehicleState2805_scan_number(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_ibeo_header
{
public:
  explicit Init_HostVehicleState2805_ibeo_header(::ibeo_msgs::msg::HostVehicleState2805 & msg)
  : msg_(msg)
  {}
  Init_HostVehicleState2805_timestamp ibeo_header(::ibeo_msgs::msg::HostVehicleState2805::_ibeo_header_type arg)
  {
    msg_.ibeo_header = std::move(arg);
    return Init_HostVehicleState2805_timestamp(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

class Init_HostVehicleState2805_header
{
public:
  Init_HostVehicleState2805_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HostVehicleState2805_ibeo_header header(::ibeo_msgs::msg::HostVehicleState2805::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HostVehicleState2805_ibeo_header(msg_);
  }

private:
  ::ibeo_msgs::msg::HostVehicleState2805 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::HostVehicleState2805>()
{
  return ibeo_msgs::msg::builder::Init_HostVehicleState2805_header();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__BUILDER_HPP_
