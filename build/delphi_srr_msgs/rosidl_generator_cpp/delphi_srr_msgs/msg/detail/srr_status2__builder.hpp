// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__BUILDER_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__BUILDER_HPP_

#include "delphi_srr_msgs/msg/detail/srr_status2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_srr_msgs
{

namespace msg
{

namespace builder
{

class Init_SrrStatus2_can_tx_rolling_count_2
{
public:
  explicit Init_SrrStatus2_can_tx_rolling_count_2(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  ::delphi_srr_msgs::msg::SrrStatus2 can_tx_rolling_count_2(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_rolling_count_2_type arg)
  {
    msg_.can_tx_rolling_count_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_steering_angle
{
public:
  explicit Init_SrrStatus2_can_tx_steering_angle(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_rolling_count_2 can_tx_steering_angle(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_steering_angle_type arg)
  {
    msg_.can_tx_steering_angle = std::move(arg);
    return Init_SrrStatus2_can_tx_rolling_count_2(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_xcvr_operational
{
public:
  explicit Init_SrrStatus2_can_tx_xcvr_operational(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_steering_angle can_tx_xcvr_operational(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_xcvr_operational_type arg)
  {
    msg_.can_tx_xcvr_operational = std::move(arg);
    return Init_SrrStatus2_can_tx_steering_angle(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_internal_error
{
public:
  explicit Init_SrrStatus2_can_tx_internal_error(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_xcvr_operational can_tx_internal_error(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_internal_error_type arg)
  {
    msg_.can_tx_internal_error = std::move(arg);
    return Init_SrrStatus2_can_tx_xcvr_operational(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_overheat_error
{
public:
  explicit Init_SrrStatus2_can_tx_overheat_error(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_internal_error can_tx_overheat_error(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_overheat_error_type arg)
  {
    msg_.can_tx_overheat_error = std::move(arg);
    return Init_SrrStatus2_can_tx_internal_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_range_perf_error
{
public:
  explicit Init_SrrStatus2_can_tx_range_perf_error(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_overheat_error can_tx_range_perf_error(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_range_perf_error_type arg)
  {
    msg_.can_tx_range_perf_error = std::move(arg);
    return Init_SrrStatus2_can_tx_overheat_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_temperature
{
public:
  explicit Init_SrrStatus2_can_tx_temperature(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_range_perf_error can_tx_temperature(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_temperature_type arg)
  {
    msg_.can_tx_temperature = std::move(arg);
    return Init_SrrStatus2_can_tx_range_perf_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_sw_version_dsp
{
public:
  explicit Init_SrrStatus2_can_tx_sw_version_dsp(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_temperature can_tx_sw_version_dsp(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_sw_version_dsp_type arg)
  {
    msg_.can_tx_sw_version_dsp = std::move(arg);
    return Init_SrrStatus2_can_tx_temperature(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_veh_spd_comp_factor
{
public:
  explicit Init_SrrStatus2_can_tx_veh_spd_comp_factor(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_sw_version_dsp can_tx_veh_spd_comp_factor(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_veh_spd_comp_factor_type arg)
  {
    msg_.can_tx_veh_spd_comp_factor = std::move(arg);
    return Init_SrrStatus2_can_tx_sw_version_dsp(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_yaw_rate_bias
{
public:
  explicit Init_SrrStatus2_can_tx_yaw_rate_bias(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_veh_spd_comp_factor can_tx_yaw_rate_bias(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_yaw_rate_bias_type arg)
  {
    msg_.can_tx_yaw_rate_bias = std::move(arg);
    return Init_SrrStatus2_can_tx_veh_spd_comp_factor(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_steering_angle_sign
{
public:
  explicit Init_SrrStatus2_can_tx_steering_angle_sign(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_yaw_rate_bias can_tx_steering_angle_sign(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_steering_angle_sign_type arg)
  {
    msg_.can_tx_steering_angle_sign = std::move(arg);
    return Init_SrrStatus2_can_tx_yaw_rate_bias(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_comm_error
{
public:
  explicit Init_SrrStatus2_can_tx_comm_error(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_steering_angle_sign can_tx_comm_error(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_comm_error_type arg)
  {
    msg_.can_tx_comm_error = std::move(arg);
    return Init_SrrStatus2_can_tx_steering_angle_sign(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_can_tx_alignment_status
{
public:
  explicit Init_SrrStatus2_can_tx_alignment_status(::delphi_srr_msgs::msg::SrrStatus2 & msg)
  : msg_(msg)
  {}
  Init_SrrStatus2_can_tx_comm_error can_tx_alignment_status(::delphi_srr_msgs::msg::SrrStatus2::_can_tx_alignment_status_type arg)
  {
    msg_.can_tx_alignment_status = std::move(arg);
    return Init_SrrStatus2_can_tx_comm_error(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

class Init_SrrStatus2_header
{
public:
  Init_SrrStatus2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrrStatus2_can_tx_alignment_status header(::delphi_srr_msgs::msg::SrrStatus2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SrrStatus2_can_tx_alignment_status(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrStatus2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_srr_msgs::msg::SrrStatus2>()
{
  return delphi_srr_msgs::msg::builder::Init_SrrStatus2_header();
}

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS2__BUILDER_HPP_
