// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_vehicle1__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrVehicle1_steering_angle_rate
{
public:
  explicit Init_EsrVehicle1_steering_angle_rate(::delphi_esr_msgs::msg::EsrVehicle1 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrVehicle1 steering_angle_rate(::delphi_esr_msgs::msg::EsrVehicle1::_steering_angle_rate_type arg)
  {
    msg_.steering_angle_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle1 msg_;
};

class Init_EsrVehicle1_steering_angle
{
public:
  explicit Init_EsrVehicle1_steering_angle(::delphi_esr_msgs::msg::EsrVehicle1 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle1_steering_angle_rate steering_angle(::delphi_esr_msgs::msg::EsrVehicle1::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_EsrVehicle1_steering_angle_rate(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle1 msg_;
};

class Init_EsrVehicle1_steering_angle_sign
{
public:
  explicit Init_EsrVehicle1_steering_angle_sign(::delphi_esr_msgs::msg::EsrVehicle1 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle1_steering_angle steering_angle_sign(::delphi_esr_msgs::msg::EsrVehicle1::_steering_angle_sign_type arg)
  {
    msg_.steering_angle_sign = std::move(arg);
    return Init_EsrVehicle1_steering_angle(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle1 msg_;
};

class Init_EsrVehicle1_steering_angle_validity
{
public:
  explicit Init_EsrVehicle1_steering_angle_validity(::delphi_esr_msgs::msg::EsrVehicle1 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle1_steering_angle_sign steering_angle_validity(::delphi_esr_msgs::msg::EsrVehicle1::_steering_angle_validity_type arg)
  {
    msg_.steering_angle_validity = std::move(arg);
    return Init_EsrVehicle1_steering_angle_sign(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle1 msg_;
};

class Init_EsrVehicle1_radius_curvature
{
public:
  explicit Init_EsrVehicle1_radius_curvature(::delphi_esr_msgs::msg::EsrVehicle1 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle1_steering_angle_validity radius_curvature(::delphi_esr_msgs::msg::EsrVehicle1::_radius_curvature_type arg)
  {
    msg_.radius_curvature = std::move(arg);
    return Init_EsrVehicle1_steering_angle_validity(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle1 msg_;
};

class Init_EsrVehicle1_steering_angle_rate_sign
{
public:
  explicit Init_EsrVehicle1_steering_angle_rate_sign(::delphi_esr_msgs::msg::EsrVehicle1 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle1_radius_curvature steering_angle_rate_sign(::delphi_esr_msgs::msg::EsrVehicle1::_steering_angle_rate_sign_type arg)
  {
    msg_.steering_angle_rate_sign = std::move(arg);
    return Init_EsrVehicle1_radius_curvature(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle1 msg_;
};

class Init_EsrVehicle1_yaw_rate_validity
{
public:
  explicit Init_EsrVehicle1_yaw_rate_validity(::delphi_esr_msgs::msg::EsrVehicle1 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle1_steering_angle_rate_sign yaw_rate_validity(::delphi_esr_msgs::msg::EsrVehicle1::_yaw_rate_validity_type arg)
  {
    msg_.yaw_rate_validity = std::move(arg);
    return Init_EsrVehicle1_steering_angle_rate_sign(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle1 msg_;
};

class Init_EsrVehicle1_yaw_rate
{
public:
  explicit Init_EsrVehicle1_yaw_rate(::delphi_esr_msgs::msg::EsrVehicle1 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle1_yaw_rate_validity yaw_rate(::delphi_esr_msgs::msg::EsrVehicle1::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_EsrVehicle1_yaw_rate_validity(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle1 msg_;
};

class Init_EsrVehicle1_vehicle_speed_direction
{
public:
  explicit Init_EsrVehicle1_vehicle_speed_direction(::delphi_esr_msgs::msg::EsrVehicle1 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle1_yaw_rate vehicle_speed_direction(::delphi_esr_msgs::msg::EsrVehicle1::_vehicle_speed_direction_type arg)
  {
    msg_.vehicle_speed_direction = std::move(arg);
    return Init_EsrVehicle1_yaw_rate(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle1 msg_;
};

class Init_EsrVehicle1_vehicle_speed
{
public:
  explicit Init_EsrVehicle1_vehicle_speed(::delphi_esr_msgs::msg::EsrVehicle1 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle1_vehicle_speed_direction vehicle_speed(::delphi_esr_msgs::msg::EsrVehicle1::_vehicle_speed_type arg)
  {
    msg_.vehicle_speed = std::move(arg);
    return Init_EsrVehicle1_vehicle_speed_direction(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle1 msg_;
};

class Init_EsrVehicle1_header
{
public:
  Init_EsrVehicle1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrVehicle1_vehicle_speed header(::delphi_esr_msgs::msg::EsrVehicle1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrVehicle1_vehicle_speed(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrVehicle1>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrVehicle1_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__BUILDER_HPP_
