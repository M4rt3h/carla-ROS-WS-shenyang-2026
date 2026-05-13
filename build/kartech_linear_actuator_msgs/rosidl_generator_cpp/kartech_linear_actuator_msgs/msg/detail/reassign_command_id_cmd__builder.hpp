// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ReassignCommandIdCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/reassign_command_id_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_ReassignCommandIdCmd_disable_default_command_id
{
public:
  explicit Init_ReassignCommandIdCmd_disable_default_command_id(::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd disable_default_command_id(::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd::_disable_default_command_id_type arg)
  {
    msg_.disable_default_command_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd msg_;
};

class Init_ReassignCommandIdCmd_user_command_id
{
public:
  explicit Init_ReassignCommandIdCmd_user_command_id(::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd & msg)
  : msg_(msg)
  {}
  Init_ReassignCommandIdCmd_disable_default_command_id user_command_id(::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd::_user_command_id_type arg)
  {
    msg_.user_command_id = std::move(arg);
    return Init_ReassignCommandIdCmd_disable_default_command_id(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd msg_;
};

class Init_ReassignCommandIdCmd_command_id_index
{
public:
  explicit Init_ReassignCommandIdCmd_command_id_index(::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd & msg)
  : msg_(msg)
  {}
  Init_ReassignCommandIdCmd_user_command_id command_id_index(::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd::_command_id_index_type arg)
  {
    msg_.command_id_index = std::move(arg);
    return Init_ReassignCommandIdCmd_user_command_id(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd msg_;
};

class Init_ReassignCommandIdCmd_confirm
{
public:
  explicit Init_ReassignCommandIdCmd_confirm(::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd & msg)
  : msg_(msg)
  {}
  Init_ReassignCommandIdCmd_command_id_index confirm(::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_ReassignCommandIdCmd_command_id_index(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd msg_;
};

class Init_ReassignCommandIdCmd_header
{
public:
  Init_ReassignCommandIdCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReassignCommandIdCmd_confirm header(::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReassignCommandIdCmd_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_ReassignCommandIdCmd_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__BUILDER_HPP_
