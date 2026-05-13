// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStateMsg2_can_steering_whl_angle
{
public:
  explicit Init_VehicleStateMsg2_can_steering_whl_angle(::delphi_mrr_msgs::msg::VehicleStateMsg2 & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::VehicleStateMsg2 can_steering_whl_angle(::delphi_mrr_msgs::msg::VehicleStateMsg2::_can_steering_whl_angle_type arg)
  {
    msg_.can_steering_whl_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg2 msg_;
};

class Init_VehicleStateMsg2_fsm_vehicle_velocity_valid
{
public:
  explicit Init_VehicleStateMsg2_fsm_vehicle_velocity_valid(::delphi_mrr_msgs::msg::VehicleStateMsg2 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg2_can_steering_whl_angle fsm_vehicle_velocity_valid(::delphi_mrr_msgs::msg::VehicleStateMsg2::_fsm_vehicle_velocity_valid_type arg)
  {
    msg_.fsm_vehicle_velocity_valid = std::move(arg);
    return Init_VehicleStateMsg2_can_steering_whl_angle(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg2 msg_;
};

class Init_VehicleStateMsg2_can_steering_whl_angle_qf
{
public:
  explicit Init_VehicleStateMsg2_can_steering_whl_angle_qf(::delphi_mrr_msgs::msg::VehicleStateMsg2 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg2_fsm_vehicle_velocity_valid can_steering_whl_angle_qf(::delphi_mrr_msgs::msg::VehicleStateMsg2::_can_steering_whl_angle_qf_type arg)
  {
    msg_.can_steering_whl_angle_qf = std::move(arg);
    return Init_VehicleStateMsg2_fsm_vehicle_velocity_valid(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg2 msg_;
};

class Init_VehicleStateMsg2_fsm_vehicle_velocity
{
public:
  explicit Init_VehicleStateMsg2_fsm_vehicle_velocity(::delphi_mrr_msgs::msg::VehicleStateMsg2 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg2_can_steering_whl_angle_qf fsm_vehicle_velocity(::delphi_mrr_msgs::msg::VehicleStateMsg2::_fsm_vehicle_velocity_type arg)
  {
    msg_.fsm_vehicle_velocity = std::move(arg);
    return Init_VehicleStateMsg2_can_steering_whl_angle_qf(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg2 msg_;
};

class Init_VehicleStateMsg2_can_vehicle_index_4fa
{
public:
  explicit Init_VehicleStateMsg2_can_vehicle_index_4fa(::delphi_mrr_msgs::msg::VehicleStateMsg2 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg2_fsm_vehicle_velocity can_vehicle_index_4fa(::delphi_mrr_msgs::msg::VehicleStateMsg2::_can_vehicle_index_4fa_type arg)
  {
    msg_.can_vehicle_index_4fa = std::move(arg);
    return Init_VehicleStateMsg2_fsm_vehicle_velocity(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg2 msg_;
};

class Init_VehicleStateMsg2_fsm_yaw_rate
{
public:
  explicit Init_VehicleStateMsg2_fsm_yaw_rate(::delphi_mrr_msgs::msg::VehicleStateMsg2 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg2_can_vehicle_index_4fa fsm_yaw_rate(::delphi_mrr_msgs::msg::VehicleStateMsg2::_fsm_yaw_rate_type arg)
  {
    msg_.fsm_yaw_rate = std::move(arg);
    return Init_VehicleStateMsg2_can_vehicle_index_4fa(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg2 msg_;
};

class Init_VehicleStateMsg2_fsm_yaw_rate_valid
{
public:
  explicit Init_VehicleStateMsg2_fsm_yaw_rate_valid(::delphi_mrr_msgs::msg::VehicleStateMsg2 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg2_fsm_yaw_rate fsm_yaw_rate_valid(::delphi_mrr_msgs::msg::VehicleStateMsg2::_fsm_yaw_rate_valid_type arg)
  {
    msg_.fsm_yaw_rate_valid = std::move(arg);
    return Init_VehicleStateMsg2_fsm_yaw_rate(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg2 msg_;
};

class Init_VehicleStateMsg2_header
{
public:
  Init_VehicleStateMsg2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStateMsg2_fsm_yaw_rate_valid header(::delphi_mrr_msgs::msg::VehicleStateMsg2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleStateMsg2_fsm_yaw_rate_valid(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::VehicleStateMsg2>()
{
  return delphi_mrr_msgs::msg::builder::Init_VehicleStateMsg2_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__BUILDER_HPP_
