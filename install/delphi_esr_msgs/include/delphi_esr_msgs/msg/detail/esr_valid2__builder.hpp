// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrValid2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_valid2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrValid2_mr_power
{
public:
  explicit Init_EsrValid2_mr_power(::delphi_esr_msgs::msg::EsrValid2 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrValid2 mr_power(::delphi_esr_msgs::msg::EsrValid2::_mr_power_type arg)
  {
    msg_.mr_power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid2 msg_;
};

class Init_EsrValid2_mr_angle
{
public:
  explicit Init_EsrValid2_mr_angle(::delphi_esr_msgs::msg::EsrValid2 & msg)
  : msg_(msg)
  {}
  Init_EsrValid2_mr_power mr_angle(::delphi_esr_msgs::msg::EsrValid2::_mr_angle_type arg)
  {
    msg_.mr_angle = std::move(arg);
    return Init_EsrValid2_mr_power(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid2 msg_;
};

class Init_EsrValid2_mr_range_rate
{
public:
  explicit Init_EsrValid2_mr_range_rate(::delphi_esr_msgs::msg::EsrValid2 & msg)
  : msg_(msg)
  {}
  Init_EsrValid2_mr_angle mr_range_rate(::delphi_esr_msgs::msg::EsrValid2::_mr_range_rate_type arg)
  {
    msg_.mr_range_rate = std::move(arg);
    return Init_EsrValid2_mr_angle(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid2 msg_;
};

class Init_EsrValid2_mr_range
{
public:
  explicit Init_EsrValid2_mr_range(::delphi_esr_msgs::msg::EsrValid2 & msg)
  : msg_(msg)
  {}
  Init_EsrValid2_mr_range_rate mr_range(::delphi_esr_msgs::msg::EsrValid2::_mr_range_type arg)
  {
    msg_.mr_range = std::move(arg);
    return Init_EsrValid2_mr_range_rate(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid2 msg_;
};

class Init_EsrValid2_mr_sn
{
public:
  explicit Init_EsrValid2_mr_sn(::delphi_esr_msgs::msg::EsrValid2 & msg)
  : msg_(msg)
  {}
  Init_EsrValid2_mr_range mr_sn(::delphi_esr_msgs::msg::EsrValid2::_mr_sn_type arg)
  {
    msg_.mr_sn = std::move(arg);
    return Init_EsrValid2_mr_range(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid2 msg_;
};

class Init_EsrValid2_canmsg
{
public:
  explicit Init_EsrValid2_canmsg(::delphi_esr_msgs::msg::EsrValid2 & msg)
  : msg_(msg)
  {}
  Init_EsrValid2_mr_sn canmsg(::delphi_esr_msgs::msg::EsrValid2::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrValid2_mr_sn(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid2 msg_;
};

class Init_EsrValid2_header
{
public:
  Init_EsrValid2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrValid2_canmsg header(::delphi_esr_msgs::msg::EsrValid2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrValid2_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrValid2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrValid2>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrValid2_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__BUILDER_HPP_
