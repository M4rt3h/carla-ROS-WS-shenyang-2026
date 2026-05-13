// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__BUILDER_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__BUILDER_HPP_

#include "delphi_srr_msgs/msg/detail/srr_status4__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_srr_msgs
{

namespace msg
{

namespace builder
{

class Init_SrrStatus4_can_tx_auto_align_angle
{
public:
  explicit Init_SrrStatus4_can_tx_auto_align_angle(::delphi_srr_msgs::msg::SrrStatus4 & msg)
  : msg_(msg)
  {}
  ::delphi_srr_msgs::msg::SrrStatus4 can_tx_auto_align_angle(::delphi_srr_msgs::msg::SrrStatus4::_can_tx_auto_align_angle_type arg)
  {
    msg_.can_tx_auto_align_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus4 msg_;
};

class Init_SrrStatus4_can_tx_angle_misalignment
{
public:
  explicit Init_SrrStatus4_can_tx_angle_misalignment(::delphi_srr_msgs::msg::SrrStatus4 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus4_can_tx_auto_align_angle can_tx_angle_misalignment(::delphi_srr_msgs::msg::SrrStatus4::_can_tx_angle_misalignment_type arg)
  {
    msg_.can_tx_angle_misalignment = std::move(arg);
    return Init_SrrStatus4_can_tx_auto_align_angle(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus4 msg_;
};

class Init_SrrStatus4_can_tx_path_id_blis
{
public:
  explicit Init_SrrStatus4_can_tx_path_id_blis(::delphi_srr_msgs::msg::SrrStatus4 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus4_can_tx_angle_misalignment can_tx_path_id_blis(::delphi_srr_msgs::msg::SrrStatus4::_can_tx_path_id_blis_type arg)
  {
    msg_.can_tx_path_id_blis = std::move(arg);
    return Init_SrrStatus4_can_tx_angle_misalignment(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus4 msg_;
};

class Init_SrrStatus4_can_tx_path_id_blis_ignore
{
public:
  explicit Init_SrrStatus4_can_tx_path_id_blis_ignore(::delphi_srr_msgs::msg::SrrStatus4 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus4_can_tx_path_id_blis can_tx_path_id_blis_ignore(::delphi_srr_msgs::msg::SrrStatus4::_can_tx_path_id_blis_ignore_type arg)
  {
    msg_.can_tx_path_id_blis_ignore = std::move(arg);
    return Init_SrrStatus4_can_tx_path_id_blis(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus4 msg_;
};

class Init_SrrStatus4_can_tx_sw_version_host
{
public:
  explicit Init_SrrStatus4_can_tx_sw_version_host(::delphi_srr_msgs::msg::SrrStatus4 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus4_can_tx_path_id_blis_ignore can_tx_sw_version_host(::delphi_srr_msgs::msg::SrrStatus4::_can_tx_sw_version_host_type arg)
  {
    msg_.can_tx_sw_version_host = std::move(arg);
    return Init_SrrStatus4_can_tx_path_id_blis_ignore(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus4 msg_;
};

class Init_SrrStatus4_header
{
public:
  Init_SrrStatus4_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrrStatus4_can_tx_sw_version_host header(::delphi_srr_msgs::msg::SrrStatus4::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SrrStatus4_can_tx_sw_version_host(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus4 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_srr_msgs::msg::SrrStatus4>()
{
  return delphi_srr_msgs::msg::builder::Init_SrrStatus4_header();
}

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__BUILDER_HPP_
