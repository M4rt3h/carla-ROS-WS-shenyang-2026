// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/MotorCurrentRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__MOTOR_CURRENT_RPT__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__MOTOR_CURRENT_RPT__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/motor_current_rpt__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorCurrentRpt_motor_current
{
public:
  explicit Init_MotorCurrentRpt_motor_current(::kartech_linear_actuator_msgs::msg::MotorCurrentRpt & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::MotorCurrentRpt motor_current(::kartech_linear_actuator_msgs::msg::MotorCurrentRpt::_motor_current_type arg)
  {
    msg_.motor_current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::MotorCurrentRpt msg_;
};

class Init_MotorCurrentRpt_header
{
public:
  Init_MotorCurrentRpt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCurrentRpt_motor_current header(::kartech_linear_actuator_msgs::msg::MotorCurrentRpt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MotorCurrentRpt_motor_current(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::MotorCurrentRpt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::MotorCurrentRpt>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_MotorCurrentRpt_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__MOTOR_CURRENT_RPT__BUILDER_HPP_
