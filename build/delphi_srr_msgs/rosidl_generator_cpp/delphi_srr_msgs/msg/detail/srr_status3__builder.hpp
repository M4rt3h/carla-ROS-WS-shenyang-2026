// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__BUILDER_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__BUILDER_HPP_

#include "delphi_srr_msgs/msg/detail/srr_status3__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_srr_msgs
{

namespace msg
{

namespace builder
{

class Init_SrrStatus3_can_tx_serial_num
{
public:
  explicit Init_SrrStatus3_can_tx_serial_num(::delphi_srr_msgs::msg::SrrStatus3 & msg)
  : msg_(msg)
  {}
  ::delphi_srr_msgs::msg::SrrStatus3 can_tx_serial_num(::delphi_srr_msgs::msg::SrrStatus3::_can_tx_serial_num_type arg)
  {
    msg_.can_tx_serial_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus3 msg_;
};

class Init_SrrStatus3_can_tx_interface_version
{
public:
  explicit Init_SrrStatus3_can_tx_interface_version(::delphi_srr_msgs::msg::SrrStatus3 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus3_can_tx_serial_num can_tx_interface_version(::delphi_srr_msgs::msg::SrrStatus3::_can_tx_interface_version_type arg)
  {
    msg_.can_tx_interface_version = std::move(arg);
    return Init_SrrStatus3_can_tx_serial_num(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus3 msg_;
};

class Init_SrrStatus3_can_tx_hw_version
{
public:
  explicit Init_SrrStatus3_can_tx_hw_version(::delphi_srr_msgs::msg::SrrStatus3 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus3_can_tx_interface_version can_tx_hw_version(::delphi_srr_msgs::msg::SrrStatus3::_can_tx_hw_version_type arg)
  {
    msg_.can_tx_hw_version = std::move(arg);
    return Init_SrrStatus3_can_tx_interface_version(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus3 msg_;
};

class Init_SrrStatus3_can_tx_sw_version_arm
{
public:
  explicit Init_SrrStatus3_can_tx_sw_version_arm(::delphi_srr_msgs::msg::SrrStatus3 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus3_can_tx_hw_version can_tx_sw_version_arm(::delphi_srr_msgs::msg::SrrStatus3::_can_tx_sw_version_arm_type arg)
  {
    msg_.can_tx_sw_version_arm = std::move(arg);
    return Init_SrrStatus3_can_tx_hw_version(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus3 msg_;
};

class Init_SrrStatus3_can_tx_interface_ver_minor
{
public:
  explicit Init_SrrStatus3_can_tx_interface_ver_minor(::delphi_srr_msgs::msg::SrrStatus3 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus3_can_tx_sw_version_arm can_tx_interface_ver_minor(::delphi_srr_msgs::msg::SrrStatus3::_can_tx_interface_ver_minor_type arg)
  {
    msg_.can_tx_interface_ver_minor = std::move(arg);
    return Init_SrrStatus3_can_tx_sw_version_arm(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus3 msg_;
};

class Init_SrrStatus3_can_tx_alignment_state
{
public:
  explicit Init_SrrStatus3_can_tx_alignment_state(::delphi_srr_msgs::msg::SrrStatus3 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus3_can_tx_interface_ver_minor can_tx_alignment_state(::delphi_srr_msgs::msg::SrrStatus3::_can_tx_alignment_state_type arg)
  {
    msg_.can_tx_alignment_state = std::move(arg);
    return Init_SrrStatus3_can_tx_interface_ver_minor(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus3 msg_;
};

class Init_SrrStatus3_header
{
public:
  Init_SrrStatus3_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrrStatus3_can_tx_alignment_state header(::delphi_srr_msgs::msg::SrrStatus3::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SrrStatus3_can_tx_alignment_state(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_srr_msgs::msg::SrrStatus3>()
{
  return delphi_srr_msgs::msg::builder::Init_SrrStatus3_header();
}

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__BUILDER_HPP_
