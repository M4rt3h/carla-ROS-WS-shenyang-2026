// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS5__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS5__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status5__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrStatus5_supply_10v_a2d
{
public:
  explicit Init_EsrStatus5_supply_10v_a2d(::delphi_esr_msgs::msg::EsrStatus5 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrStatus5 supply_10v_a2d(::delphi_esr_msgs::msg::EsrStatus5::_supply_10v_a2d_type arg)
  {
    msg_.supply_10v_a2d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus5 msg_;
};

class Init_EsrStatus5_supply_3p3v_a2d
{
public:
  explicit Init_EsrStatus5_supply_3p3v_a2d(::delphi_esr_msgs::msg::EsrStatus5 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus5_supply_10v_a2d supply_3p3v_a2d(::delphi_esr_msgs::msg::EsrStatus5::_supply_3p3v_a2d_type arg)
  {
    msg_.supply_3p3v_a2d = std::move(arg);
    return Init_EsrStatus5_supply_10v_a2d(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus5 msg_;
};

class Init_EsrStatus5_supply_5vdx_a2d
{
public:
  explicit Init_EsrStatus5_supply_5vdx_a2d(::delphi_esr_msgs::msg::EsrStatus5 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus5_supply_3p3v_a2d supply_5vdx_a2d(::delphi_esr_msgs::msg::EsrStatus5::_supply_5vdx_a2d_type arg)
  {
    msg_.supply_5vdx_a2d = std::move(arg);
    return Init_EsrStatus5_supply_3p3v_a2d(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus5 msg_;
};

class Init_EsrStatus5_supply_5va_a2d
{
public:
  explicit Init_EsrStatus5_supply_5va_a2d(::delphi_esr_msgs::msg::EsrStatus5 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus5_supply_5vdx_a2d supply_5va_a2d(::delphi_esr_msgs::msg::EsrStatus5::_supply_5va_a2d_type arg)
  {
    msg_.supply_5va_a2d = std::move(arg);
    return Init_EsrStatus5_supply_5vdx_a2d(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus5 msg_;
};

class Init_EsrStatus5_temp2_a2d
{
public:
  explicit Init_EsrStatus5_temp2_a2d(::delphi_esr_msgs::msg::EsrStatus5 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus5_supply_5va_a2d temp2_a2d(::delphi_esr_msgs::msg::EsrStatus5::_temp2_a2d_type arg)
  {
    msg_.temp2_a2d = std::move(arg);
    return Init_EsrStatus5_supply_5va_a2d(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus5 msg_;
};

class Init_EsrStatus5_temp1_a2d
{
public:
  explicit Init_EsrStatus5_temp1_a2d(::delphi_esr_msgs::msg::EsrStatus5 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus5_temp2_a2d temp1_a2d(::delphi_esr_msgs::msg::EsrStatus5::_temp1_a2d_type arg)
  {
    msg_.temp1_a2d = std::move(arg);
    return Init_EsrStatus5_temp2_a2d(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus5 msg_;
};

class Init_EsrStatus5_ignp_a2d
{
public:
  explicit Init_EsrStatus5_ignp_a2d(::delphi_esr_msgs::msg::EsrStatus5 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus5_temp1_a2d ignp_a2d(::delphi_esr_msgs::msg::EsrStatus5::_ignp_a2d_type arg)
  {
    msg_.ignp_a2d = std::move(arg);
    return Init_EsrStatus5_temp1_a2d(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus5 msg_;
};

class Init_EsrStatus5_swbatt_a2d
{
public:
  explicit Init_EsrStatus5_swbatt_a2d(::delphi_esr_msgs::msg::EsrStatus5 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus5_ignp_a2d swbatt_a2d(::delphi_esr_msgs::msg::EsrStatus5::_swbatt_a2d_type arg)
  {
    msg_.swbatt_a2d = std::move(arg);
    return Init_EsrStatus5_ignp_a2d(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus5 msg_;
};

class Init_EsrStatus5_canmsg
{
public:
  explicit Init_EsrStatus5_canmsg(::delphi_esr_msgs::msg::EsrStatus5 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus5_swbatt_a2d canmsg(::delphi_esr_msgs::msg::EsrStatus5::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrStatus5_swbatt_a2d(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus5 msg_;
};

class Init_EsrStatus5_header
{
public:
  Init_EsrStatus5_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrStatus5_canmsg header(::delphi_esr_msgs::msg::EsrStatus5::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrStatus5_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus5 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrStatus5>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrStatus5_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS5__BUILDER_HPP_
