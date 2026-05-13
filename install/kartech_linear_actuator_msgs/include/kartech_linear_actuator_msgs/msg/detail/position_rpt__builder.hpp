// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/PositionRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_RPT__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_RPT__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/position_rpt__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionRpt_shaft_extension
{
public:
  explicit Init_PositionRpt_shaft_extension(::kartech_linear_actuator_msgs::msg::PositionRpt & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::PositionRpt shaft_extension(::kartech_linear_actuator_msgs::msg::PositionRpt::_shaft_extension_type arg)
  {
    msg_.shaft_extension = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PositionRpt msg_;
};

class Init_PositionRpt_header
{
public:
  Init_PositionRpt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionRpt_shaft_extension header(::kartech_linear_actuator_msgs::msg::PositionRpt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PositionRpt_shaft_extension(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::PositionRpt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::PositionRpt>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_PositionRpt_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__POSITION_RPT__BUILDER_HPP_
