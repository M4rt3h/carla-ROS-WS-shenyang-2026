// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ZeroingMessageRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/zeroing_message_rpt__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_ZeroingMessageRpt_chip_error_2
{
public:
  explicit Init_ZeroingMessageRpt_chip_error_2(::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt chip_error_2(::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt::_chip_error_2_type arg)
  {
    msg_.chip_error_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt msg_;
};

class Init_ZeroingMessageRpt_chip_error_1
{
public:
  explicit Init_ZeroingMessageRpt_chip_error_1(::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt & msg)
  : msg_(msg)
  {}
  Init_ZeroingMessageRpt_chip_error_2 chip_error_1(::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt::_chip_error_1_type arg)
  {
    msg_.chip_error_1 = std::move(arg);
    return Init_ZeroingMessageRpt_chip_error_2(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt msg_;
};

class Init_ZeroingMessageRpt_chip_2_voltage
{
public:
  explicit Init_ZeroingMessageRpt_chip_2_voltage(::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt & msg)
  : msg_(msg)
  {}
  Init_ZeroingMessageRpt_chip_error_1 chip_2_voltage(::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt::_chip_2_voltage_type arg)
  {
    msg_.chip_2_voltage = std::move(arg);
    return Init_ZeroingMessageRpt_chip_error_1(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt msg_;
};

class Init_ZeroingMessageRpt_chip_1_voltage
{
public:
  explicit Init_ZeroingMessageRpt_chip_1_voltage(::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt & msg)
  : msg_(msg)
  {}
  Init_ZeroingMessageRpt_chip_2_voltage chip_1_voltage(::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt::_chip_1_voltage_type arg)
  {
    msg_.chip_1_voltage = std::move(arg);
    return Init_ZeroingMessageRpt_chip_2_voltage(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt msg_;
};

class Init_ZeroingMessageRpt_header
{
public:
  Init_ZeroingMessageRpt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ZeroingMessageRpt_chip_1_voltage header(::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ZeroingMessageRpt_chip_1_voltage(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::ZeroingMessageRpt>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_ZeroingMessageRpt_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__BUILDER_HPP_
