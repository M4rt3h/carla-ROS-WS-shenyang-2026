// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/PositionCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_CMD__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_CMD__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/position_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionCmd_motor_enable
{
public:
  explicit Init_PositionCmd_motor_enable(::kartech_linear_actuator_msgs::msg::PositionCmd & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::PositionCmd motor_enable(::kartech_linear_actuator_msgs::msg::PositionCmd::_motor_enable_type arg)
  {
    msg_.motor_enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PositionCmd msg_;
};

class Init_PositionCmd_clutch_enable
{
public:
  explicit Init_PositionCmd_clutch_enable(::kartech_linear_actuator_msgs::msg::PositionCmd & msg)
  : msg_(msg)
  {}
  Init_PositionCmd_motor_enable clutch_enable(::kartech_linear_actuator_msgs::msg::PositionCmd::_clutch_enable_type arg)
  {
    msg_.clutch_enable = std::move(arg);
    return Init_PositionCmd_motor_enable(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PositionCmd msg_;
};

class Init_PositionCmd_position
{
public:
  explicit Init_PositionCmd_position(::kartech_linear_actuator_msgs::msg::PositionCmd & msg)
  : msg_(msg)
  {}
  Init_PositionCmd_clutch_enable position(::kartech_linear_actuator_msgs::msg::PositionCmd::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_PositionCmd_clutch_enable(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PositionCmd msg_;
};

class Init_PositionCmd_auto_reply
{
public:
  explicit Init_PositionCmd_auto_reply(::kartech_linear_actuator_msgs::msg::PositionCmd & msg)
  : msg_(msg)
  {}
  Init_PositionCmd_position auto_reply(::kartech_linear_actuator_msgs::msg::PositionCmd::_auto_reply_type arg)
  {
    msg_.auto_reply = std::move(arg);
    return Init_PositionCmd_position(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PositionCmd msg_;
};

class Init_PositionCmd_confirm
{
public:
  explicit Init_PositionCmd_confirm(::kartech_linear_actuator_msgs::msg::PositionCmd & msg)
  : msg_(msg)
  {}
  Init_PositionCmd_auto_reply confirm(::kartech_linear_actuator_msgs::msg::PositionCmd::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_PositionCmd_auto_reply(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PositionCmd msg_;
};

class Init_PositionCmd_header
{
public:
  Init_PositionCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionCmd_confirm header(::kartech_linear_actuator_msgs::msg::PositionCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PositionCmd_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PositionCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::PositionCmd>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_PositionCmd_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_CMD__BUILDER_HPP_
