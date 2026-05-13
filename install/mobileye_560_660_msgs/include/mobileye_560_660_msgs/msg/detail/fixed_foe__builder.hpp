// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/FixedFoe.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__FIXED_FOE__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__FIXED_FOE__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/fixed_foe__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_FixedFoe_fixed_horizon
{
public:
  explicit Init_FixedFoe_fixed_horizon(::mobileye_560_660_msgs::msg::FixedFoe & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::FixedFoe fixed_horizon(::mobileye_560_660_msgs::msg::FixedFoe::_fixed_horizon_type arg)
  {
    msg_.fixed_horizon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::FixedFoe msg_;
};

class Init_FixedFoe_fixed_yaw
{
public:
  explicit Init_FixedFoe_fixed_yaw(::mobileye_560_660_msgs::msg::FixedFoe & msg)
  : msg_(msg)
  {}
  Init_FixedFoe_fixed_horizon fixed_yaw(::mobileye_560_660_msgs::msg::FixedFoe::_fixed_yaw_type arg)
  {
    msg_.fixed_yaw = std::move(arg);
    return Init_FixedFoe_fixed_horizon(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::FixedFoe msg_;
};

class Init_FixedFoe_header
{
public:
  Init_FixedFoe_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FixedFoe_fixed_yaw header(::mobileye_560_660_msgs::msg::FixedFoe::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FixedFoe_fixed_yaw(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::FixedFoe msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::FixedFoe>()
{
  return mobileye_560_660_msgs::msg::builder::Init_FixedFoe_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__FIXED_FOE__BUILDER_HPP_
