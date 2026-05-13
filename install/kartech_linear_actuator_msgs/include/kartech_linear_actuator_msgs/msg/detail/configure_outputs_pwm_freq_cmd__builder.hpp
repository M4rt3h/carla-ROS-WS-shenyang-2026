// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ConfigureOutputsPwmFreqCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_PWM_FREQ_CMD__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_PWM_FREQ_CMD__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_pwm_freq_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_ConfigureOutputsPwmFreqCmd_pwm_freq
{
public:
  explicit Init_ConfigureOutputsPwmFreqCmd_pwm_freq(::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd pwm_freq(::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd::_pwm_freq_type arg)
  {
    msg_.pwm_freq = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd msg_;
};

class Init_ConfigureOutputsPwmFreqCmd_max_pwm_pct
{
public:
  explicit Init_ConfigureOutputsPwmFreqCmd_max_pwm_pct(::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd & msg)
  : msg_(msg)
  {}
  Init_ConfigureOutputsPwmFreqCmd_pwm_freq max_pwm_pct(::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd::_max_pwm_pct_type arg)
  {
    msg_.max_pwm_pct = std::move(arg);
    return Init_ConfigureOutputsPwmFreqCmd_pwm_freq(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd msg_;
};

class Init_ConfigureOutputsPwmFreqCmd_min_pwm_pct
{
public:
  explicit Init_ConfigureOutputsPwmFreqCmd_min_pwm_pct(::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd & msg)
  : msg_(msg)
  {}
  Init_ConfigureOutputsPwmFreqCmd_max_pwm_pct min_pwm_pct(::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd::_min_pwm_pct_type arg)
  {
    msg_.min_pwm_pct = std::move(arg);
    return Init_ConfigureOutputsPwmFreqCmd_max_pwm_pct(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd msg_;
};

class Init_ConfigureOutputsPwmFreqCmd_confirm
{
public:
  explicit Init_ConfigureOutputsPwmFreqCmd_confirm(::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd & msg)
  : msg_(msg)
  {}
  Init_ConfigureOutputsPwmFreqCmd_min_pwm_pct confirm(::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_ConfigureOutputsPwmFreqCmd_min_pwm_pct(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd msg_;
};

class Init_ConfigureOutputsPwmFreqCmd_header
{
public:
  Init_ConfigureOutputsPwmFreqCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureOutputsPwmFreqCmd_confirm header(::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConfigureOutputsPwmFreqCmd_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::ConfigureOutputsPwmFreqCmd>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_ConfigureOutputsPwmFreqCmd_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_PWM_FREQ_CMD__BUILDER_HPP_
