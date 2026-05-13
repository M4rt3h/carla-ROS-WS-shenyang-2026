// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/Ahbc.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/ahbc__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_Ahbc_reasons_for_switch_to_low_beam
{
public:
  explicit Init_Ahbc_reasons_for_switch_to_low_beam(::mobileye_560_660_msgs::msg::Ahbc & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::Ahbc reasons_for_switch_to_low_beam(::mobileye_560_660_msgs::msg::Ahbc::_reasons_for_switch_to_low_beam_type arg)
  {
    msg_.reasons_for_switch_to_low_beam = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Ahbc msg_;
};

class Init_Ahbc_high_low_beam_decision
{
public:
  explicit Init_Ahbc_high_low_beam_decision(::mobileye_560_660_msgs::msg::Ahbc & msg)
  : msg_(msg)
  {}
  Init_Ahbc_reasons_for_switch_to_low_beam high_low_beam_decision(::mobileye_560_660_msgs::msg::Ahbc::_high_low_beam_decision_type arg)
  {
    msg_.high_low_beam_decision = std::move(arg);
    return Init_Ahbc_reasons_for_switch_to_low_beam(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Ahbc msg_;
};

class Init_Ahbc_header
{
public:
  Init_Ahbc_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ahbc_high_low_beam_decision header(::mobileye_560_660_msgs::msg::Ahbc::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Ahbc_high_low_beam_decision(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Ahbc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::Ahbc>()
{
  return mobileye_560_660_msgs::msg::builder::Init_Ahbc_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC__BUILDER_HPP_
