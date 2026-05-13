// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS1__BUILDER_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS1__BUILDER_HPP_

#include "delphi_srr_msgs/msg/detail/srr_status1__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_srr_msgs
{

namespace msg
{

namespace builder
{

class Init_SrrStatus1_can_tx_curvature
{
public:
  explicit Init_SrrStatus1_can_tx_curvature(::delphi_srr_msgs::msg::SrrStatus1 & msg)
  : msg_(msg)
  {}
  ::delphi_srr_msgs::msg::SrrStatus1 can_tx_curvature(::delphi_srr_msgs::msg::SrrStatus1::_can_tx_curvature_type arg)
  {
    msg_.can_tx_curvature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus1 msg_;
};

class Init_SrrStatus1_can_tx_scan_index
{
public:
  explicit Init_SrrStatus1_can_tx_scan_index(::delphi_srr_msgs::msg::SrrStatus1 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus1_can_tx_curvature can_tx_scan_index(::delphi_srr_msgs::msg::SrrStatus1::_can_tx_scan_index_type arg)
  {
    msg_.can_tx_scan_index = std::move(arg);
    return Init_SrrStatus1_can_tx_curvature(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus1 msg_;
};

class Init_SrrStatus1_can_tx_vehicle_speed_calc
{
public:
  explicit Init_SrrStatus1_can_tx_vehicle_speed_calc(::delphi_srr_msgs::msg::SrrStatus1 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus1_can_tx_scan_index can_tx_vehicle_speed_calc(::delphi_srr_msgs::msg::SrrStatus1::_can_tx_vehicle_speed_calc_type arg)
  {
    msg_.can_tx_vehicle_speed_calc = std::move(arg);
    return Init_SrrStatus1_can_tx_scan_index(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus1 msg_;
};

class Init_SrrStatus1_can_tx_yaw_rate_calc
{
public:
  explicit Init_SrrStatus1_can_tx_yaw_rate_calc(::delphi_srr_msgs::msg::SrrStatus1 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus1_can_tx_vehicle_speed_calc can_tx_yaw_rate_calc(::delphi_srr_msgs::msg::SrrStatus1::_can_tx_yaw_rate_calc_type arg)
  {
    msg_.can_tx_yaw_rate_calc = std::move(arg);
    return Init_SrrStatus1_can_tx_vehicle_speed_calc(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus1 msg_;
};

class Init_SrrStatus1_can_tx_dsp_timestamp
{
public:
  explicit Init_SrrStatus1_can_tx_dsp_timestamp(::delphi_srr_msgs::msg::SrrStatus1 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus1_can_tx_yaw_rate_calc can_tx_dsp_timestamp(::delphi_srr_msgs::msg::SrrStatus1::_can_tx_dsp_timestamp_type arg)
  {
    msg_.can_tx_dsp_timestamp = std::move(arg);
    return Init_SrrStatus1_can_tx_yaw_rate_calc(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus1 msg_;
};

class Init_SrrStatus1_can_tx_look_type
{
public:
  explicit Init_SrrStatus1_can_tx_look_type(::delphi_srr_msgs::msg::SrrStatus1 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus1_can_tx_dsp_timestamp can_tx_look_type(::delphi_srr_msgs::msg::SrrStatus1::_can_tx_look_type_type arg)
  {
    msg_.can_tx_look_type = std::move(arg);
    return Init_SrrStatus1_can_tx_dsp_timestamp(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus1 msg_;
};

class Init_SrrStatus1_header
{
public:
  Init_SrrStatus1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrrStatus1_can_tx_look_type header(::delphi_srr_msgs::msg::SrrStatus1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SrrStatus1_can_tx_look_type(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_srr_msgs::msg::SrrStatus1>()
{
  return delphi_srr_msgs::msg::builder::Init_SrrStatus1_header();
}

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS1__BUILDER_HPP_
