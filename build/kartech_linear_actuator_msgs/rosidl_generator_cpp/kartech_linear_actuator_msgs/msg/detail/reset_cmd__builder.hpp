// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ResetCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/reset_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_ResetCmd_reenable_default_cmd_id
{
public:
  explicit Init_ResetCmd_reenable_default_cmd_id(::kartech_linear_actuator_msgs::msg::ResetCmd & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::ResetCmd reenable_default_cmd_id(::kartech_linear_actuator_msgs::msg::ResetCmd::_reenable_default_cmd_id_type arg)
  {
    msg_.reenable_default_cmd_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ResetCmd msg_;
};

class Init_ResetCmd_disable_user_rpt_id
{
public:
  explicit Init_ResetCmd_disable_user_rpt_id(::kartech_linear_actuator_msgs::msg::ResetCmd & msg)
  : msg_(msg)
  {}
  Init_ResetCmd_reenable_default_cmd_id disable_user_rpt_id(::kartech_linear_actuator_msgs::msg::ResetCmd::_disable_user_rpt_id_type arg)
  {
    msg_.disable_user_rpt_id = std::move(arg);
    return Init_ResetCmd_reenable_default_cmd_id(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ResetCmd msg_;
};

class Init_ResetCmd_reset_user_cmd_id_4
{
public:
  explicit Init_ResetCmd_reset_user_cmd_id_4(::kartech_linear_actuator_msgs::msg::ResetCmd & msg)
  : msg_(msg)
  {}
  Init_ResetCmd_disable_user_rpt_id reset_user_cmd_id_4(::kartech_linear_actuator_msgs::msg::ResetCmd::_reset_user_cmd_id_4_type arg)
  {
    msg_.reset_user_cmd_id_4 = std::move(arg);
    return Init_ResetCmd_disable_user_rpt_id(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ResetCmd msg_;
};

class Init_ResetCmd_reset_user_cmd_id_3
{
public:
  explicit Init_ResetCmd_reset_user_cmd_id_3(::kartech_linear_actuator_msgs::msg::ResetCmd & msg)
  : msg_(msg)
  {}
  Init_ResetCmd_reset_user_cmd_id_4 reset_user_cmd_id_3(::kartech_linear_actuator_msgs::msg::ResetCmd::_reset_user_cmd_id_3_type arg)
  {
    msg_.reset_user_cmd_id_3 = std::move(arg);
    return Init_ResetCmd_reset_user_cmd_id_4(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ResetCmd msg_;
};

class Init_ResetCmd_reset_user_cmd_id_2
{
public:
  explicit Init_ResetCmd_reset_user_cmd_id_2(::kartech_linear_actuator_msgs::msg::ResetCmd & msg)
  : msg_(msg)
  {}
  Init_ResetCmd_reset_user_cmd_id_3 reset_user_cmd_id_2(::kartech_linear_actuator_msgs::msg::ResetCmd::_reset_user_cmd_id_2_type arg)
  {
    msg_.reset_user_cmd_id_2 = std::move(arg);
    return Init_ResetCmd_reset_user_cmd_id_3(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ResetCmd msg_;
};

class Init_ResetCmd_reset_user_cmd_id_1
{
public:
  explicit Init_ResetCmd_reset_user_cmd_id_1(::kartech_linear_actuator_msgs::msg::ResetCmd & msg)
  : msg_(msg)
  {}
  Init_ResetCmd_reset_user_cmd_id_2 reset_user_cmd_id_1(::kartech_linear_actuator_msgs::msg::ResetCmd::_reset_user_cmd_id_1_type arg)
  {
    msg_.reset_user_cmd_id_1 = std::move(arg);
    return Init_ResetCmd_reset_user_cmd_id_2(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ResetCmd msg_;
};

class Init_ResetCmd_reset_user_rpt_id
{
public:
  explicit Init_ResetCmd_reset_user_rpt_id(::kartech_linear_actuator_msgs::msg::ResetCmd & msg)
  : msg_(msg)
  {}
  Init_ResetCmd_reset_user_cmd_id_1 reset_user_rpt_id(::kartech_linear_actuator_msgs::msg::ResetCmd::_reset_user_rpt_id_type arg)
  {
    msg_.reset_user_rpt_id = std::move(arg);
    return Init_ResetCmd_reset_user_cmd_id_1(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ResetCmd msg_;
};

class Init_ResetCmd_reset_type
{
public:
  explicit Init_ResetCmd_reset_type(::kartech_linear_actuator_msgs::msg::ResetCmd & msg)
  : msg_(msg)
  {}
  Init_ResetCmd_reset_user_rpt_id reset_type(::kartech_linear_actuator_msgs::msg::ResetCmd::_reset_type_type arg)
  {
    msg_.reset_type = std::move(arg);
    return Init_ResetCmd_reset_user_rpt_id(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ResetCmd msg_;
};

class Init_ResetCmd_confirm
{
public:
  explicit Init_ResetCmd_confirm(::kartech_linear_actuator_msgs::msg::ResetCmd & msg)
  : msg_(msg)
  {}
  Init_ResetCmd_reset_type confirm(::kartech_linear_actuator_msgs::msg::ResetCmd::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_ResetCmd_reset_type(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ResetCmd msg_;
};

class Init_ResetCmd_header
{
public:
  Init_ResetCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResetCmd_confirm header(::kartech_linear_actuator_msgs::msg::ResetCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ResetCmd_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ResetCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::ResetCmd>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_ResetCmd_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__BUILDER_HPP_
