// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status3__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrStatus3_sw_version_pld
{
public:
  explicit Init_EsrStatus3_sw_version_pld(::delphi_esr_msgs::msg::EsrStatus3 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrStatus3 sw_version_pld(::delphi_esr_msgs::msg::EsrStatus3::_sw_version_pld_type arg)
  {
    msg_.sw_version_pld = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus3 msg_;
};

class Init_EsrStatus3_serial_num
{
public:
  explicit Init_EsrStatus3_serial_num(::delphi_esr_msgs::msg::EsrStatus3 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus3_sw_version_pld serial_num(::delphi_esr_msgs::msg::EsrStatus3::_serial_num_type arg)
  {
    msg_.serial_num = std::move(arg);
    return Init_EsrStatus3_sw_version_pld(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus3 msg_;
};

class Init_EsrStatus3_sw_version_host
{
public:
  explicit Init_EsrStatus3_sw_version_host(::delphi_esr_msgs::msg::EsrStatus3 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus3_serial_num sw_version_host(::delphi_esr_msgs::msg::EsrStatus3::_sw_version_host_type arg)
  {
    msg_.sw_version_host = std::move(arg);
    return Init_EsrStatus3_serial_num(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus3 msg_;
};

class Init_EsrStatus3_hw_version
{
public:
  explicit Init_EsrStatus3_hw_version(::delphi_esr_msgs::msg::EsrStatus3 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus3_sw_version_host hw_version(::delphi_esr_msgs::msg::EsrStatus3::_hw_version_type arg)
  {
    msg_.hw_version = std::move(arg);
    return Init_EsrStatus3_sw_version_host(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus3 msg_;
};

class Init_EsrStatus3_interface_version
{
public:
  explicit Init_EsrStatus3_interface_version(::delphi_esr_msgs::msg::EsrStatus3 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus3_hw_version interface_version(::delphi_esr_msgs::msg::EsrStatus3::_interface_version_type arg)
  {
    msg_.interface_version = std::move(arg);
    return Init_EsrStatus3_hw_version(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus3 msg_;
};

class Init_EsrStatus3_canmsg
{
public:
  explicit Init_EsrStatus3_canmsg(::delphi_esr_msgs::msg::EsrStatus3 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus3_interface_version canmsg(::delphi_esr_msgs::msg::EsrStatus3::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrStatus3_interface_version(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus3 msg_;
};

class Init_EsrStatus3_header
{
public:
  Init_EsrStatus3_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrStatus3_canmsg header(::delphi_esr_msgs::msg::EsrStatus3::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrStatus3_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrStatus3>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrStatus3_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__BUILDER_HPP_
