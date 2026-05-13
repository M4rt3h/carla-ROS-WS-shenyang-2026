// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStateMsg3_can_veh_long_accel
{
public:
  explicit Init_VehicleStateMsg3_can_veh_long_accel(::delphi_mrr_msgs::msg::VehicleStateMsg3 & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::VehicleStateMsg3 can_veh_long_accel(::delphi_mrr_msgs::msg::VehicleStateMsg3::_can_veh_long_accel_type arg)
  {
    msg_.can_veh_long_accel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg3 msg_;
};

class Init_VehicleStateMsg3_can_veh_long_accel_qf
{
public:
  explicit Init_VehicleStateMsg3_can_veh_long_accel_qf(::delphi_mrr_msgs::msg::VehicleStateMsg3 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg3_can_veh_long_accel can_veh_long_accel_qf(::delphi_mrr_msgs::msg::VehicleStateMsg3::_can_veh_long_accel_qf_type arg)
  {
    msg_.can_veh_long_accel_qf = std::move(arg);
    return Init_VehicleStateMsg3_can_veh_long_accel(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg3 msg_;
};

class Init_VehicleStateMsg3_yaw_rate_reference
{
public:
  explicit Init_VehicleStateMsg3_yaw_rate_reference(::delphi_mrr_msgs::msg::VehicleStateMsg3 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg3_can_veh_long_accel_qf yaw_rate_reference(::delphi_mrr_msgs::msg::VehicleStateMsg3::_yaw_rate_reference_type arg)
  {
    msg_.yaw_rate_reference = std::move(arg);
    return Init_VehicleStateMsg3_can_veh_long_accel_qf(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg3 msg_;
};

class Init_VehicleStateMsg3_yaw_rate_reference_valid
{
public:
  explicit Init_VehicleStateMsg3_yaw_rate_reference_valid(::delphi_mrr_msgs::msg::VehicleStateMsg3 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg3_yaw_rate_reference yaw_rate_reference_valid(::delphi_mrr_msgs::msg::VehicleStateMsg3::_yaw_rate_reference_valid_type arg)
  {
    msg_.yaw_rate_reference_valid = std::move(arg);
    return Init_VehicleStateMsg3_yaw_rate_reference(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg3 msg_;
};

class Init_VehicleStateMsg3_header
{
public:
  Init_VehicleStateMsg3_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStateMsg3_yaw_rate_reference_valid header(::delphi_mrr_msgs::msg::VehicleStateMsg3::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleStateMsg3_yaw_rate_reference_valid(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::VehicleStateMsg3>()
{
  return delphi_mrr_msgs::msg::builder::Init_VehicleStateMsg3_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__BUILDER_HPP_
