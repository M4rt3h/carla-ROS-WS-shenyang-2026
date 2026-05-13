// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/PriorityConfigCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__PRIORITY_CONFIG_CMD__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__PRIORITY_CONFIG_CMD__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/priority_config_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_PriorityConfigCmd_polled_priority
{
public:
  explicit Init_PriorityConfigCmd_polled_priority(::kartech_linear_actuator_msgs::msg::PriorityConfigCmd & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::PriorityConfigCmd polled_priority(::kartech_linear_actuator_msgs::msg::PriorityConfigCmd::_polled_priority_type arg)
  {
    msg_.polled_priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PriorityConfigCmd msg_;
};

class Init_PriorityConfigCmd_scheduled_priority
{
public:
  explicit Init_PriorityConfigCmd_scheduled_priority(::kartech_linear_actuator_msgs::msg::PriorityConfigCmd & msg)
  : msg_(msg)
  {}
  Init_PriorityConfigCmd_polled_priority scheduled_priority(::kartech_linear_actuator_msgs::msg::PriorityConfigCmd::_scheduled_priority_type arg)
  {
    msg_.scheduled_priority = std::move(arg);
    return Init_PriorityConfigCmd_polled_priority(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PriorityConfigCmd msg_;
};

class Init_PriorityConfigCmd_auto_reply_priority
{
public:
  explicit Init_PriorityConfigCmd_auto_reply_priority(::kartech_linear_actuator_msgs::msg::PriorityConfigCmd & msg)
  : msg_(msg)
  {}
  Init_PriorityConfigCmd_scheduled_priority auto_reply_priority(::kartech_linear_actuator_msgs::msg::PriorityConfigCmd::_auto_reply_priority_type arg)
  {
    msg_.auto_reply_priority = std::move(arg);
    return Init_PriorityConfigCmd_scheduled_priority(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PriorityConfigCmd msg_;
};

class Init_PriorityConfigCmd_handshake_priority
{
public:
  explicit Init_PriorityConfigCmd_handshake_priority(::kartech_linear_actuator_msgs::msg::PriorityConfigCmd & msg)
  : msg_(msg)
  {}
  Init_PriorityConfigCmd_auto_reply_priority handshake_priority(::kartech_linear_actuator_msgs::msg::PriorityConfigCmd::_handshake_priority_type arg)
  {
    msg_.handshake_priority = std::move(arg);
    return Init_PriorityConfigCmd_auto_reply_priority(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PriorityConfigCmd msg_;
};

class Init_PriorityConfigCmd_confirm
{
public:
  explicit Init_PriorityConfigCmd_confirm(::kartech_linear_actuator_msgs::msg::PriorityConfigCmd & msg)
  : msg_(msg)
  {}
  Init_PriorityConfigCmd_handshake_priority confirm(::kartech_linear_actuator_msgs::msg::PriorityConfigCmd::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_PriorityConfigCmd_handshake_priority(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PriorityConfigCmd msg_;
};

class Init_PriorityConfigCmd_header
{
public:
  Init_PriorityConfigCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PriorityConfigCmd_confirm header(::kartech_linear_actuator_msgs::msg::PriorityConfigCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PriorityConfigCmd_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PriorityConfigCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::PriorityConfigCmd>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_PriorityConfigCmd_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__PRIORITY_CONFIG_CMD__BUILDER_HPP_
