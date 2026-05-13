// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg1__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStateMsg1_can_vehicle_index
{
public:
  explicit Init_VehicleStateMsg1_can_vehicle_index(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 can_vehicle_index(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_vehicle_index_type arg)
  {
    msg_.can_vehicle_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_main_beam_indication
{
public:
  explicit Init_VehicleStateMsg1_can_main_beam_indication(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_vehicle_index can_main_beam_indication(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_main_beam_indication_type arg)
  {
    msg_.can_main_beam_indication = std::move(arg);
    return Init_VehicleStateMsg1_can_vehicle_index(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_beam_shape_actual_left
{
public:
  explicit Init_VehicleStateMsg1_can_beam_shape_actual_left(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_main_beam_indication can_beam_shape_actual_left(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_beam_shape_actual_left_type arg)
  {
    msg_.can_beam_shape_actual_left = std::move(arg);
    return Init_VehicleStateMsg1_can_main_beam_indication(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_beam_shape_actual_right
{
public:
  explicit Init_VehicleStateMsg1_can_beam_shape_actual_right(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_beam_shape_actual_left can_beam_shape_actual_right(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_beam_shape_actual_right_type arg)
  {
    msg_.can_beam_shape_actual_right = std::move(arg);
    return Init_VehicleStateMsg1_can_beam_shape_actual_left(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_reverse_gear
{
public:
  explicit Init_VehicleStateMsg1_can_reverse_gear(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_beam_shape_actual_right can_reverse_gear(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_reverse_gear_type arg)
  {
    msg_.can_reverse_gear = std::move(arg);
    return Init_VehicleStateMsg1_can_beam_shape_actual_right(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_wiper_speed_info
{
public:
  explicit Init_VehicleStateMsg1_can_wiper_speed_info(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_reverse_gear can_wiper_speed_info(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_wiper_speed_info_type arg)
  {
    msg_.can_wiper_speed_info = std::move(arg);
    return Init_VehicleStateMsg1_can_reverse_gear(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_wiper_front_cmd
{
public:
  explicit Init_VehicleStateMsg1_can_wiper_front_cmd(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_wiper_speed_info can_wiper_front_cmd(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_wiper_front_cmd_type arg)
  {
    msg_.can_wiper_front_cmd = std::move(arg);
    return Init_VehicleStateMsg1_can_wiper_speed_info(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_washer_front_cmd
{
public:
  explicit Init_VehicleStateMsg1_can_washer_front_cmd(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_wiper_front_cmd can_washer_front_cmd(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_washer_front_cmd_type arg)
  {
    msg_.can_washer_front_cmd = std::move(arg);
    return Init_VehicleStateMsg1_can_wiper_front_cmd(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_turn_signal_status
{
public:
  explicit Init_VehicleStateMsg1_can_turn_signal_status(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_washer_front_cmd can_turn_signal_status(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_turn_signal_status_type arg)
  {
    msg_.can_turn_signal_status = std::move(arg);
    return Init_VehicleStateMsg1_can_washer_front_cmd(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_high_wheel_slip
{
public:
  explicit Init_VehicleStateMsg1_can_high_wheel_slip(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_turn_signal_status can_high_wheel_slip(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_high_wheel_slip_type arg)
  {
    msg_.can_high_wheel_slip = std::move(arg);
    return Init_VehicleStateMsg1_can_turn_signal_status(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_brake_pedal
{
public:
  explicit Init_VehicleStateMsg1_can_brake_pedal(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_high_wheel_slip can_brake_pedal(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_brake_pedal_type arg)
  {
    msg_.can_brake_pedal = std::move(arg);
    return Init_VehicleStateMsg1_can_high_wheel_slip(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_intf_major_version
{
public:
  explicit Init_VehicleStateMsg1_can_intf_major_version(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_brake_pedal can_intf_major_version(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_intf_major_version_type arg)
  {
    msg_.can_intf_major_version = std::move(arg);
    return Init_VehicleStateMsg1_can_brake_pedal(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_intf_minor_version
{
public:
  explicit Init_VehicleStateMsg1_can_intf_minor_version(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_intf_major_version can_intf_minor_version(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_intf_minor_version_type arg)
  {
    msg_.can_intf_minor_version = std::move(arg);
    return Init_VehicleStateMsg1_can_intf_major_version(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_vehicle_stationary
{
public:
  explicit Init_VehicleStateMsg1_can_vehicle_stationary(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_intf_minor_version can_vehicle_stationary(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_vehicle_stationary_type arg)
  {
    msg_.can_vehicle_stationary = std::move(arg);
    return Init_VehicleStateMsg1_can_intf_minor_version(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_can_fcw_sensitivity_level
{
public:
  explicit Init_VehicleStateMsg1_can_fcw_sensitivity_level(::delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
  : msg_(msg)
  {}
  Init_VehicleStateMsg1_can_vehicle_stationary can_fcw_sensitivity_level(::delphi_mrr_msgs::msg::VehicleStateMsg1::_can_fcw_sensitivity_level_type arg)
  {
    msg_.can_fcw_sensitivity_level = std::move(arg);
    return Init_VehicleStateMsg1_can_vehicle_stationary(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

class Init_VehicleStateMsg1_header
{
public:
  Init_VehicleStateMsg1_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStateMsg1_can_fcw_sensitivity_level header(::delphi_mrr_msgs::msg::VehicleStateMsg1::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleStateMsg1_can_fcw_sensitivity_level(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::VehicleStateMsg1 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::VehicleStateMsg1>()
{
  return delphi_mrr_msgs::msg::builder::Init_VehicleStateMsg1_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__BUILDER_HPP_
