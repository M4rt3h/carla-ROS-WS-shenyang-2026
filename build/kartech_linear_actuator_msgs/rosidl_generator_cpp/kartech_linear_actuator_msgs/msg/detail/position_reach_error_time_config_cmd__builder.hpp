// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/PositionReachErrorTimeConfigCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_REACH_ERROR_TIME_CONFIG_CMD__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_REACH_ERROR_TIME_CONFIG_CMD__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/position_reach_error_time_config_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionReachErrorTimeConfigCmd_position_reach_error_time
{
public:
  explicit Init_PositionReachErrorTimeConfigCmd_position_reach_error_time(::kartech_linear_actuator_msgs::msg::PositionReachErrorTimeConfigCmd & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::PositionReachErrorTimeConfigCmd position_reach_error_time(::kartech_linear_actuator_msgs::msg::PositionReachErrorTimeConfigCmd::_position_reach_error_time_type arg)
  {
    msg_.position_reach_error_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PositionReachErrorTimeConfigCmd msg_;
};

class Init_PositionReachErrorTimeConfigCmd_confirm
{
public:
  explicit Init_PositionReachErrorTimeConfigCmd_confirm(::kartech_linear_actuator_msgs::msg::PositionReachErrorTimeConfigCmd & msg)
  : msg_(msg)
  {}
  Init_PositionReachErrorTimeConfigCmd_position_reach_error_time confirm(::kartech_linear_actuator_msgs::msg::PositionReachErrorTimeConfigCmd::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_PositionReachErrorTimeConfigCmd_position_reach_error_time(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PositionReachErrorTimeConfigCmd msg_;
};

class Init_PositionReachErrorTimeConfigCmd_header
{
public:
  Init_PositionReachErrorTimeConfigCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionReachErrorTimeConfigCmd_confirm header(::kartech_linear_actuator_msgs::msg::PositionReachErrorTimeConfigCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PositionReachErrorTimeConfigCmd_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PositionReachErrorTimeConfigCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::PositionReachErrorTimeConfigCmd>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_PositionReachErrorTimeConfigCmd_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_REACH_ERROR_TIME_CONFIG_CMD__BUILDER_HPP_
