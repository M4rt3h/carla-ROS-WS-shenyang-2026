// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrStatus2_sw_version_dsp
{
public:
  explicit Init_EsrStatus2_sw_version_dsp(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrStatus2 sw_version_dsp(::delphi_esr_msgs::msg::EsrStatus2::_sw_version_dsp_type arg)
  {
    msg_.sw_version_dsp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_yaw_rate_bias
{
public:
  explicit Init_EsrStatus2_yaw_rate_bias(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_sw_version_dsp yaw_rate_bias(::delphi_esr_msgs::msg::EsrStatus2::_yaw_rate_bias_type arg)
  {
    msg_.yaw_rate_bias = std::move(arg);
    return Init_EsrStatus2_sw_version_dsp(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_grouping_mode
{
public:
  explicit Init_EsrStatus2_grouping_mode(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_yaw_rate_bias grouping_mode(::delphi_esr_msgs::msg::EsrStatus2::_grouping_mode_type arg)
  {
    msg_.grouping_mode = std::move(arg);
    return Init_EsrStatus2_yaw_rate_bias(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_veh_spd_comp_factor
{
public:
  explicit Init_EsrStatus2_veh_spd_comp_factor(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_grouping_mode veh_spd_comp_factor(::delphi_esr_msgs::msg::EsrStatus2::_veh_spd_comp_factor_type arg)
  {
    msg_.veh_spd_comp_factor = std::move(arg);
    return Init_EsrStatus2_grouping_mode(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_temperature
{
public:
  explicit Init_EsrStatus2_temperature(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_veh_spd_comp_factor temperature(::delphi_esr_msgs::msg::EsrStatus2::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_EsrStatus2_veh_spd_comp_factor(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_steering_angle_ack
{
public:
  explicit Init_EsrStatus2_steering_angle_ack(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_temperature steering_angle_ack(::delphi_esr_msgs::msg::EsrStatus2::_steering_angle_ack_type arg)
  {
    msg_.steering_angle_ack = std::move(arg);
    return Init_EsrStatus2_temperature(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_raw_data_mode
{
public:
  explicit Init_EsrStatus2_raw_data_mode(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_steering_angle_ack raw_data_mode(::delphi_esr_msgs::msg::EsrStatus2::_raw_data_mode_type arg)
  {
    msg_.raw_data_mode = std::move(arg);
    return Init_EsrStatus2_steering_angle_ack(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_xcvr_operational
{
public:
  explicit Init_EsrStatus2_xcvr_operational(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_raw_data_mode xcvr_operational(::delphi_esr_msgs::msg::EsrStatus2::_xcvr_operational_type arg)
  {
    msg_.xcvr_operational = std::move(arg);
    return Init_EsrStatus2_raw_data_mode(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_internal_error
{
public:
  explicit Init_EsrStatus2_internal_error(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_xcvr_operational internal_error(::delphi_esr_msgs::msg::EsrStatus2::_internal_error_type arg)
  {
    msg_.internal_error = std::move(arg);
    return Init_EsrStatus2_xcvr_operational(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_range_perf_error
{
public:
  explicit Init_EsrStatus2_range_perf_error(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_internal_error range_perf_error(::delphi_esr_msgs::msg::EsrStatus2::_range_perf_error_type arg)
  {
    msg_.range_perf_error = std::move(arg);
    return Init_EsrStatus2_internal_error(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_overheat_error
{
public:
  explicit Init_EsrStatus2_overheat_error(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_range_perf_error overheat_error(::delphi_esr_msgs::msg::EsrStatus2::_overheat_error_type arg)
  {
    msg_.overheat_error = std::move(arg);
    return Init_EsrStatus2_range_perf_error(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_rolling_count_2
{
public:
  explicit Init_EsrStatus2_rolling_count_2(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_overheat_error rolling_count_2(::delphi_esr_msgs::msg::EsrStatus2::_rolling_count_2_type arg)
  {
    msg_.rolling_count_2 = std::move(arg);
    return Init_EsrStatus2_overheat_error(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_maximum_tracks_ack
{
public:
  explicit Init_EsrStatus2_maximum_tracks_ack(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_rolling_count_2 maximum_tracks_ack(::delphi_esr_msgs::msg::EsrStatus2::_maximum_tracks_ack_type arg)
  {
    msg_.maximum_tracks_ack = std::move(arg);
    return Init_EsrStatus2_rolling_count_2(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_canmsg
{
public:
  explicit Init_EsrStatus2_canmsg(::delphi_esr_msgs::msg::EsrStatus2 & msg)
  : msg_(msg)
  {}
  Init_EsrStatus2_maximum_tracks_ack canmsg(::delphi_esr_msgs::msg::EsrStatus2::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrStatus2_maximum_tracks_ack(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

class Init_EsrStatus2_header
{
public:
  Init_EsrStatus2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrStatus2_canmsg header(::delphi_esr_msgs::msg::EsrStatus2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrStatus2_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrStatus2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrStatus2>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrStatus2_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS2__BUILDER_HPP_
