// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/MotorOverCurrentConfigCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__MOTOR_OVER_CURRENT_CONFIG_CMD__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__MOTOR_OVER_CURRENT_CONFIG_CMD__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/motor_over_current_config_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorOverCurrentConfigCmd_over_current
{
public:
  explicit Init_MotorOverCurrentConfigCmd_over_current(::kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd over_current(::kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd::_over_current_type arg)
  {
    msg_.over_current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd msg_;
};

class Init_MotorOverCurrentConfigCmd_confirm
{
public:
  explicit Init_MotorOverCurrentConfigCmd_confirm(::kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd & msg)
  : msg_(msg)
  {}
  Init_MotorOverCurrentConfigCmd_over_current confirm(::kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_MotorOverCurrentConfigCmd_over_current(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd msg_;
};

class Init_MotorOverCurrentConfigCmd_header
{
public:
  Init_MotorOverCurrentConfigCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorOverCurrentConfigCmd_confirm header(::kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorOverCurrentConfigCmd_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::MotorOverCurrentConfigCmd>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_MotorOverCurrentConfigCmd_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__MOTOR_OVER_CURRENT_CONFIG_CMD__BUILDER_HPP_
