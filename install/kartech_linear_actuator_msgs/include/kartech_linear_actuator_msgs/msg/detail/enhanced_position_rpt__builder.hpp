// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/EnhancedPositionRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/enhanced_position_rpt__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_EnhancedPositionRpt_motor_current
{
public:
  explicit Init_EnhancedPositionRpt_motor_current(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt motor_current(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt::_motor_current_type arg)
  {
    msg_.motor_current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt msg_;
};

class Init_EnhancedPositionRpt_hardware_warning_2_error
{
public:
  explicit Init_EnhancedPositionRpt_hardware_warning_2_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt & msg)
  : msg_(msg)
  {}
  Init_EnhancedPositionRpt_motor_current hardware_warning_2_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt::_hardware_warning_2_error_type arg)
  {
    msg_.hardware_warning_2_error = std::move(arg);
    return Init_EnhancedPositionRpt_motor_current(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt msg_;
};

class Init_EnhancedPositionRpt_hardware_warning_1_error
{
public:
  explicit Init_EnhancedPositionRpt_hardware_warning_1_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt & msg)
  : msg_(msg)
  {}
  Init_EnhancedPositionRpt_hardware_warning_2_error hardware_warning_1_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt::_hardware_warning_1_error_type arg)
  {
    msg_.hardware_warning_1_error = std::move(arg);
    return Init_EnhancedPositionRpt_hardware_warning_2_error(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt msg_;
};

class Init_EnhancedPositionRpt_position_reach_error
{
public:
  explicit Init_EnhancedPositionRpt_position_reach_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt & msg)
  : msg_(msg)
  {}
  Init_EnhancedPositionRpt_hardware_warning_1_error position_reach_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt::_position_reach_error_type arg)
  {
    msg_.position_reach_error = std::move(arg);
    return Init_EnhancedPositionRpt_hardware_warning_1_error(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt msg_;
};

class Init_EnhancedPositionRpt_clutch_open_load_error
{
public:
  explicit Init_EnhancedPositionRpt_clutch_open_load_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt & msg)
  : msg_(msg)
  {}
  Init_EnhancedPositionRpt_position_reach_error clutch_open_load_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt::_clutch_open_load_error_type arg)
  {
    msg_.clutch_open_load_error = std::move(arg);
    return Init_EnhancedPositionRpt_position_reach_error(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt msg_;
};

class Init_EnhancedPositionRpt_motor_open_load_error
{
public:
  explicit Init_EnhancedPositionRpt_motor_open_load_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt & msg)
  : msg_(msg)
  {}
  Init_EnhancedPositionRpt_clutch_open_load_error motor_open_load_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt::_motor_open_load_error_type arg)
  {
    msg_.motor_open_load_error = std::move(arg);
    return Init_EnhancedPositionRpt_clutch_open_load_error(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt msg_;
};

class Init_EnhancedPositionRpt_clutch_overload_error
{
public:
  explicit Init_EnhancedPositionRpt_clutch_overload_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt & msg)
  : msg_(msg)
  {}
  Init_EnhancedPositionRpt_motor_open_load_error clutch_overload_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt::_clutch_overload_error_type arg)
  {
    msg_.clutch_overload_error = std::move(arg);
    return Init_EnhancedPositionRpt_motor_open_load_error(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt msg_;
};

class Init_EnhancedPositionRpt_motor_overload_error
{
public:
  explicit Init_EnhancedPositionRpt_motor_overload_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt & msg)
  : msg_(msg)
  {}
  Init_EnhancedPositionRpt_clutch_overload_error motor_overload_error(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt::_motor_overload_error_type arg)
  {
    msg_.motor_overload_error = std::move(arg);
    return Init_EnhancedPositionRpt_clutch_overload_error(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt msg_;
};

class Init_EnhancedPositionRpt_shaft_extension
{
public:
  explicit Init_EnhancedPositionRpt_shaft_extension(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt & msg)
  : msg_(msg)
  {}
  Init_EnhancedPositionRpt_motor_overload_error shaft_extension(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt::_shaft_extension_type arg)
  {
    msg_.shaft_extension = std::move(arg);
    return Init_EnhancedPositionRpt_motor_overload_error(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt msg_;
};

class Init_EnhancedPositionRpt_header
{
public:
  Init_EnhancedPositionRpt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnhancedPositionRpt_shaft_extension header(::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EnhancedPositionRpt_shaft_extension(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::EnhancedPositionRpt>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_EnhancedPositionRpt_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ENHANCED_POSITION_RPT__BUILDER_HPP_
