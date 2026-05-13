// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ConfigureOutputsKpKiCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KP_KI_CMD__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KP_KI_CMD__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_kp_ki_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_ConfigureOutputsKpKiCmd_ki
{
public:
  explicit Init_ConfigureOutputsKpKiCmd_ki(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd ki(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd::_ki_type arg)
  {
    msg_.ki = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd msg_;
};

class Init_ConfigureOutputsKpKiCmd_kp
{
public:
  explicit Init_ConfigureOutputsKpKiCmd_kp(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd & msg)
  : msg_(msg)
  {}
  Init_ConfigureOutputsKpKiCmd_ki kp(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_ConfigureOutputsKpKiCmd_ki(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd msg_;
};

class Init_ConfigureOutputsKpKiCmd_confirm
{
public:
  explicit Init_ConfigureOutputsKpKiCmd_confirm(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd & msg)
  : msg_(msg)
  {}
  Init_ConfigureOutputsKpKiCmd_kp confirm(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_ConfigureOutputsKpKiCmd_kp(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd msg_;
};

class Init_ConfigureOutputsKpKiCmd_header
{
public:
  Init_ConfigureOutputsKpKiCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureOutputsKpKiCmd_confirm header(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConfigureOutputsKpKiCmd_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::ConfigureOutputsKpKiCmd>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_ConfigureOutputsKpKiCmd_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KP_KI_CMD__BUILDER_HPP_
