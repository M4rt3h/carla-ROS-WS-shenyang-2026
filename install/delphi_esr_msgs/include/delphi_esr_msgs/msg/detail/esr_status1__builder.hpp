// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status1__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrStatus1_vehicle_speed_calc
{
public:
  explicit Init_EsrStatus1_vehicle_speed_calc(::delphi_esr_msgs::msg::EsrStatus1 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrStatus1 vehicle_speed_calc(::delphi_esr_msgs::msg::EsrStatus1::_vehicle_speed_calc_type arg)
  {
    msg_.vehicle_speed_calc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus1 msg_;
};

class Init_EsrStatus1_yaw_rate_calc
{
public:
  explicit Init_EsrStatus1_yaw_rate_calc(::delphi_esr_msgs::msg::EsrStatus1 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus1_vehicle_speed_calc yaw_rate_calc(::delphi_esr_msgs::msg::EsrStatus1::_yaw_rate_calc_type arg)
  {
    msg_.yaw_rate_calc = std::move(arg);
    return Init_EsrStatus1_vehicle_speed_calc(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus1 msg_;
};

class Init_EsrStatus1_scan_index
{
public:
  explicit Init_EsrStatus1_scan_index(::delphi_esr_msgs::msg::EsrStatus1 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus1_yaw_rate_calc scan_index(::delphi_esr_msgs::msg::EsrStatus1::_scan_index_type arg)
  {
    msg_.scan_index = std::move(arg);
    return Init_EsrStatus1_yaw_rate_calc(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus1 msg_;
};

class Init_EsrStatus1_radius_curvature_calc
{
public:
  explicit Init_EsrStatus1_radius_curvature_calc(::delphi_esr_msgs::msg::EsrStatus1 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus1_scan_index radius_curvature_calc(::delphi_esr_msgs::msg::EsrStatus1::_radius_curvature_calc_type arg)
  {
    msg_.radius_curvature_calc = std::move(arg);
    return Init_EsrStatus1_scan_index(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus1 msg_;
};

class Init_EsrStatus1_comm_error
{
public:
  explicit Init_EsrStatus1_comm_error(::delphi_esr_msgs::msg::EsrStatus1 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus1_radius_curvature_calc comm_error(::delphi_esr_msgs::msg::EsrStatus1::_comm_error_type arg)
  {
    msg_.comm_error = std::move(arg);
    return Init_EsrStatus1_radius_curvature_calc(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus1 msg_;
};

class Init_EsrStatus1_dsp_timestamp
{
public:
  explicit Init_EsrStatus1_dsp_timestamp(::delphi_esr_msgs::msg::EsrStatus1 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus1_comm_error dsp_timestamp(::delphi_esr_msgs::msg::EsrStatus1::_dsp_timestamp_type arg)
  {
    msg_.dsp_timestamp = std::move(arg);
    return Init_EsrStatus1_comm_error(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus1 msg_;
};

class Init_EsrStatus1_rolling_count_1
{
public:
  explicit Init_EsrStatus1_rolling_count_1(::delphi_esr_msgs::msg::EsrStatus1 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus1_dsp_timestamp rolling_count_1(::delphi_esr_msgs::msg::EsrStatus1::_rolling_count_1_type arg)
  {
    msg_.rolling_count_1 = std::move(arg);
    return Init_EsrStatus1_dsp_timestamp(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus1 msg_;
};

class Init_EsrStatus1_canmsg
{
public:
  explicit Init_EsrStatus1_canmsg(::delphi_esr_msgs::msg::EsrStatus1 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus1_rolling_count_1 canmsg(::delphi_esr_msgs::msg::EsrStatus1::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrStatus1_rolling_count_1(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus1 msg_;
};

class Init_EsrStatus1_header
{
public:
  Init_EsrStatus1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrStatus1_canmsg header(::delphi_esr_msgs::msg::EsrStatus1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrStatus1_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrStatus1>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrStatus1_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__BUILDER_HPP_
