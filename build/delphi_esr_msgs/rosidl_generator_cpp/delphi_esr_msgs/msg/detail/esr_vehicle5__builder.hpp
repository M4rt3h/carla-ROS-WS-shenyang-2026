// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_vehicle5__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrVehicle5_steering_gear_ratio
{
public:
  explicit Init_EsrVehicle5_steering_gear_ratio(::delphi_esr_msgs::msg::EsrVehicle5 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrVehicle5 steering_gear_ratio(::delphi_esr_msgs::msg::EsrVehicle5::_steering_gear_ratio_type arg)
  {
    msg_.steering_gear_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle5 msg_;
};

class Init_EsrVehicle5_wheelbase
{
public:
  explicit Init_EsrVehicle5_wheelbase(::delphi_esr_msgs::msg::EsrVehicle5 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle5_steering_gear_ratio wheelbase(::delphi_esr_msgs::msg::EsrVehicle5::_wheelbase_type arg)
  {
    msg_.wheelbase = std::move(arg);
    return Init_EsrVehicle5_steering_gear_ratio(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle5 msg_;
};

class Init_EsrVehicle5_distance_rear_axle
{
public:
  explicit Init_EsrVehicle5_distance_rear_axle(::delphi_esr_msgs::msg::EsrVehicle5 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle5_wheelbase distance_rear_axle(::delphi_esr_msgs::msg::EsrVehicle5::_distance_rear_axle_type arg)
  {
    msg_.distance_rear_axle = std::move(arg);
    return Init_EsrVehicle5_wheelbase(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle5 msg_;
};

class Init_EsrVehicle5_cw_blockage_threshold
{
public:
  explicit Init_EsrVehicle5_cw_blockage_threshold(::delphi_esr_msgs::msg::EsrVehicle5 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle5_distance_rear_axle cw_blockage_threshold(::delphi_esr_msgs::msg::EsrVehicle5::_cw_blockage_threshold_type arg)
  {
    msg_.cw_blockage_threshold = std::move(arg);
    return Init_EsrVehicle5_distance_rear_axle(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle5 msg_;
};

class Init_EsrVehicle5_funnel_offset_right
{
public:
  explicit Init_EsrVehicle5_funnel_offset_right(::delphi_esr_msgs::msg::EsrVehicle5 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle5_cw_blockage_threshold funnel_offset_right(::delphi_esr_msgs::msg::EsrVehicle5::_funnel_offset_right_type arg)
  {
    msg_.funnel_offset_right = std::move(arg);
    return Init_EsrVehicle5_cw_blockage_threshold(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle5 msg_;
};

class Init_EsrVehicle5_funnel_offset_left
{
public:
  explicit Init_EsrVehicle5_funnel_offset_left(::delphi_esr_msgs::msg::EsrVehicle5 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle5_funnel_offset_right funnel_offset_left(::delphi_esr_msgs::msg::EsrVehicle5::_funnel_offset_left_type arg)
  {
    msg_.funnel_offset_left = std::move(arg);
    return Init_EsrVehicle5_funnel_offset_right(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle5 msg_;
};

class Init_EsrVehicle5_beamwidth_vert
{
public:
  explicit Init_EsrVehicle5_beamwidth_vert(::delphi_esr_msgs::msg::EsrVehicle5 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle5_funnel_offset_left beamwidth_vert(::delphi_esr_msgs::msg::EsrVehicle5::_beamwidth_vert_type arg)
  {
    msg_.beamwidth_vert = std::move(arg);
    return Init_EsrVehicle5_funnel_offset_left(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle5 msg_;
};

class Init_EsrVehicle5_yaw_rate_bias_shift
{
public:
  explicit Init_EsrVehicle5_yaw_rate_bias_shift(::delphi_esr_msgs::msg::EsrVehicle5 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle5_beamwidth_vert yaw_rate_bias_shift(::delphi_esr_msgs::msg::EsrVehicle5::_yaw_rate_bias_shift_type arg)
  {
    msg_.yaw_rate_bias_shift = std::move(arg);
    return Init_EsrVehicle5_beamwidth_vert(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle5 msg_;
};

class Init_EsrVehicle5_oversteer_understeer
{
public:
  explicit Init_EsrVehicle5_oversteer_understeer(::delphi_esr_msgs::msg::EsrVehicle5 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle5_yaw_rate_bias_shift oversteer_understeer(::delphi_esr_msgs::msg::EsrVehicle5::_oversteer_understeer_type arg)
  {
    msg_.oversteer_understeer = std::move(arg);
    return Init_EsrVehicle5_yaw_rate_bias_shift(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle5 msg_;
};

class Init_EsrVehicle5_header
{
public:
  Init_EsrVehicle5_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrVehicle5_oversteer_understeer header(::delphi_esr_msgs::msg::EsrVehicle5::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrVehicle5_oversteer_understeer(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle5 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrVehicle5>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrVehicle5_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__BUILDER_HPP_
