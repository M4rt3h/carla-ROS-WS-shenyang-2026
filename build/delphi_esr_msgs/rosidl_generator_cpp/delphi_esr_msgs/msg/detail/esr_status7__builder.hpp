// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus7.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status7__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrStatus7_active_fault_7
{
public:
  explicit Init_EsrStatus7_active_fault_7(::delphi_esr_msgs::msg::EsrStatus7 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrStatus7 active_fault_7(::delphi_esr_msgs::msg::EsrStatus7::_active_fault_7_type arg)
  {
    msg_.active_fault_7 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus7 msg_;
};

class Init_EsrStatus7_active_fault_6
{
public:
  explicit Init_EsrStatus7_active_fault_6(::delphi_esr_msgs::msg::EsrStatus7 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus7_active_fault_7 active_fault_6(::delphi_esr_msgs::msg::EsrStatus7::_active_fault_6_type arg)
  {
    msg_.active_fault_6 = std::move(arg);
    return Init_EsrStatus7_active_fault_7(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus7 msg_;
};

class Init_EsrStatus7_active_fault_5
{
public:
  explicit Init_EsrStatus7_active_fault_5(::delphi_esr_msgs::msg::EsrStatus7 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus7_active_fault_6 active_fault_5(::delphi_esr_msgs::msg::EsrStatus7::_active_fault_5_type arg)
  {
    msg_.active_fault_5 = std::move(arg);
    return Init_EsrStatus7_active_fault_6(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus7 msg_;
};

class Init_EsrStatus7_active_fault_4
{
public:
  explicit Init_EsrStatus7_active_fault_4(::delphi_esr_msgs::msg::EsrStatus7 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus7_active_fault_5 active_fault_4(::delphi_esr_msgs::msg::EsrStatus7::_active_fault_4_type arg)
  {
    msg_.active_fault_4 = std::move(arg);
    return Init_EsrStatus7_active_fault_5(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus7 msg_;
};

class Init_EsrStatus7_active_fault_3
{
public:
  explicit Init_EsrStatus7_active_fault_3(::delphi_esr_msgs::msg::EsrStatus7 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus7_active_fault_4 active_fault_3(::delphi_esr_msgs::msg::EsrStatus7::_active_fault_3_type arg)
  {
    msg_.active_fault_3 = std::move(arg);
    return Init_EsrStatus7_active_fault_4(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus7 msg_;
};

class Init_EsrStatus7_active_fault_2
{
public:
  explicit Init_EsrStatus7_active_fault_2(::delphi_esr_msgs::msg::EsrStatus7 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus7_active_fault_3 active_fault_2(::delphi_esr_msgs::msg::EsrStatus7::_active_fault_2_type arg)
  {
    msg_.active_fault_2 = std::move(arg);
    return Init_EsrStatus7_active_fault_3(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus7 msg_;
};

class Init_EsrStatus7_active_fault_1
{
public:
  explicit Init_EsrStatus7_active_fault_1(::delphi_esr_msgs::msg::EsrStatus7 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus7_active_fault_2 active_fault_1(::delphi_esr_msgs::msg::EsrStatus7::_active_fault_1_type arg)
  {
    msg_.active_fault_1 = std::move(arg);
    return Init_EsrStatus7_active_fault_2(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus7 msg_;
};

class Init_EsrStatus7_active_fault_0
{
public:
  explicit Init_EsrStatus7_active_fault_0(::delphi_esr_msgs::msg::EsrStatus7 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus7_active_fault_1 active_fault_0(::delphi_esr_msgs::msg::EsrStatus7::_active_fault_0_type arg)
  {
    msg_.active_fault_0 = std::move(arg);
    return Init_EsrStatus7_active_fault_1(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus7 msg_;
};

class Init_EsrStatus7_canmsg
{
public:
  explicit Init_EsrStatus7_canmsg(::delphi_esr_msgs::msg::EsrStatus7 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus7_active_fault_0 canmsg(::delphi_esr_msgs::msg::EsrStatus7::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrStatus7_active_fault_0(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus7 msg_;
};

class Init_EsrStatus7_header
{
public:
  Init_EsrStatus7_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrStatus7_canmsg header(::delphi_esr_msgs::msg::EsrStatus7::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrStatus7_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus7 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrStatus7>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrStatus7_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS7__BUILDER_HPP_
