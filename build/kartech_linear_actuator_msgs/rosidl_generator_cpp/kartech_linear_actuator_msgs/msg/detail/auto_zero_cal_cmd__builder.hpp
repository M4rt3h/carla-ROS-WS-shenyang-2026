// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/AutoZeroCalCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__AUTO_ZERO_CAL_CMD__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__AUTO_ZERO_CAL_CMD__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/auto_zero_cal_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_AutoZeroCalCmd_auto_reply
{
public:
  explicit Init_AutoZeroCalCmd_auto_reply(::kartech_linear_actuator_msgs::msg::AutoZeroCalCmd & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::AutoZeroCalCmd auto_reply(::kartech_linear_actuator_msgs::msg::AutoZeroCalCmd::_auto_reply_type arg)
  {
    msg_.auto_reply = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::AutoZeroCalCmd msg_;
};

class Init_AutoZeroCalCmd_confirm
{
public:
  explicit Init_AutoZeroCalCmd_confirm(::kartech_linear_actuator_msgs::msg::AutoZeroCalCmd & msg)
  : msg_(msg)
  {}
  Init_AutoZeroCalCmd_auto_reply confirm(::kartech_linear_actuator_msgs::msg::AutoZeroCalCmd::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_AutoZeroCalCmd_auto_reply(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::AutoZeroCalCmd msg_;
};

class Init_AutoZeroCalCmd_header
{
public:
  Init_AutoZeroCalCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AutoZeroCalCmd_confirm header(::kartech_linear_actuator_msgs::msg::AutoZeroCalCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AutoZeroCalCmd_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::AutoZeroCalCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::AutoZeroCalCmd>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_AutoZeroCalCmd_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__AUTO_ZERO_CAL_CMD__BUILDER_HPP_
