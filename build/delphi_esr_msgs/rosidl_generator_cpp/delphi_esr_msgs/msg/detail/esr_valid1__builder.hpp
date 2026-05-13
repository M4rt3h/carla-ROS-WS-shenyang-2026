// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrValid1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID1__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID1__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_valid1__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrValid1_lr_power
{
public:
  explicit Init_EsrValid1_lr_power(::delphi_esr_msgs::msg::EsrValid1 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrValid1 lr_power(::delphi_esr_msgs::msg::EsrValid1::_lr_power_type arg)
  {
    msg_.lr_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid1 msg_;
};

class Init_EsrValid1_lr_angle
{
public:
  explicit Init_EsrValid1_lr_angle(::delphi_esr_msgs::msg::EsrValid1 & msg)
  : msg_(msg)
  {}
  Init_EsrValid1_lr_power lr_angle(::delphi_esr_msgs::msg::EsrValid1::_lr_angle_type arg)
  {
    msg_.lr_angle = std::move(arg);
    return Init_EsrValid1_lr_power(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid1 msg_;
};

class Init_EsrValid1_lr_range_rate
{
public:
  explicit Init_EsrValid1_lr_range_rate(::delphi_esr_msgs::msg::EsrValid1 & msg)
  : msg_(msg)
  {}
  Init_EsrValid1_lr_angle lr_range_rate(::delphi_esr_msgs::msg::EsrValid1::_lr_range_rate_type arg)
  {
    msg_.lr_range_rate = std::move(arg);
    return Init_EsrValid1_lr_angle(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid1 msg_;
};

class Init_EsrValid1_lr_range
{
public:
  explicit Init_EsrValid1_lr_range(::delphi_esr_msgs::msg::EsrValid1 & msg)
  : msg_(msg)
  {}
  Init_EsrValid1_lr_range_rate lr_range(::delphi_esr_msgs::msg::EsrValid1::_lr_range_type arg)
  {
    msg_.lr_range = std::move(arg);
    return Init_EsrValid1_lr_range_rate(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid1 msg_;
};

class Init_EsrValid1_lr_sn
{
public:
  explicit Init_EsrValid1_lr_sn(::delphi_esr_msgs::msg::EsrValid1 & msg)
  : msg_(msg)
  {}
  Init_EsrValid1_lr_range lr_sn(::delphi_esr_msgs::msg::EsrValid1::_lr_sn_type arg)
  {
    msg_.lr_sn = std::move(arg);
    return Init_EsrValid1_lr_range(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid1 msg_;
};

class Init_EsrValid1_canmsg
{
public:
  explicit Init_EsrValid1_canmsg(::delphi_esr_msgs::msg::EsrValid1 & msg)
  : msg_(msg)
  {}
  Init_EsrValid1_lr_sn canmsg(::delphi_esr_msgs::msg::EsrValid1::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrValid1_lr_sn(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid1 msg_;
};

class Init_EsrValid1_header
{
public:
  Init_EsrValid1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrValid1_canmsg header(::delphi_esr_msgs::msg::EsrValid1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrValid1_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrValid1>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrValid1_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID1__BUILDER_HPP_
