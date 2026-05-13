// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ConfigureOutputsKdFreqDeadbandCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_kd_freq_deadband_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_ConfigureOutputsKdFreqDeadbandCmd_error_dead_band
{
public:
  explicit Init_ConfigureOutputsKdFreqDeadbandCmd_error_dead_band(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd error_dead_band(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd::_error_dead_band_type arg)
  {
    msg_.error_dead_band = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd msg_;
};

class Init_ConfigureOutputsKdFreqDeadbandCmd_closed_loop_freq
{
public:
  explicit Init_ConfigureOutputsKdFreqDeadbandCmd_closed_loop_freq(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd & msg)
  : msg_(msg)
  {}
  Init_ConfigureOutputsKdFreqDeadbandCmd_error_dead_band closed_loop_freq(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd::_closed_loop_freq_type arg)
  {
    msg_.closed_loop_freq = std::move(arg);
    return Init_ConfigureOutputsKdFreqDeadbandCmd_error_dead_band(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd msg_;
};

class Init_ConfigureOutputsKdFreqDeadbandCmd_kd
{
public:
  explicit Init_ConfigureOutputsKdFreqDeadbandCmd_kd(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd & msg)
  : msg_(msg)
  {}
  Init_ConfigureOutputsKdFreqDeadbandCmd_closed_loop_freq kd(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_ConfigureOutputsKdFreqDeadbandCmd_closed_loop_freq(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd msg_;
};

class Init_ConfigureOutputsKdFreqDeadbandCmd_confirm
{
public:
  explicit Init_ConfigureOutputsKdFreqDeadbandCmd_confirm(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd & msg)
  : msg_(msg)
  {}
  Init_ConfigureOutputsKdFreqDeadbandCmd_kd confirm(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_ConfigureOutputsKdFreqDeadbandCmd_kd(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd msg_;
};

class Init_ConfigureOutputsKdFreqDeadbandCmd_header
{
public:
  Init_ConfigureOutputsKdFreqDeadbandCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConfigureOutputsKdFreqDeadbandCmd_confirm header(::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ConfigureOutputsKdFreqDeadbandCmd_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::ConfigureOutputsKdFreqDeadbandCmd>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_ConfigureOutputsKdFreqDeadbandCmd_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__CONFIGURE_OUTPUTS_KD_FREQ_DEADBAND_CMD__BUILDER_HPP_
