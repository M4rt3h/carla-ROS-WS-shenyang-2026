// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_vehicle2__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrVehicle2_raw_data_enable
{
public:
  explicit Init_EsrVehicle2_raw_data_enable(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrVehicle2 raw_data_enable(::delphi_esr_msgs::msg::EsrVehicle2::_raw_data_enable_type arg)
  {
    msg_.raw_data_enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_wiper_status
{
public:
  explicit Init_EsrVehicle2_wiper_status(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_raw_data_enable wiper_status(::delphi_esr_msgs::msg::EsrVehicle2::_wiper_status_type arg)
  {
    msg_.wiper_status = std::move(arg);
    return Init_EsrVehicle2_raw_data_enable(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_grouping_mode
{
public:
  explicit Init_EsrVehicle2_grouping_mode(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_wiper_status grouping_mode(::delphi_esr_msgs::msg::EsrVehicle2::_grouping_mode_type arg)
  {
    msg_.grouping_mode = std::move(arg);
    return Init_EsrVehicle2_wiper_status(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_mmr_upside_down
{
public:
  explicit Init_EsrVehicle2_mmr_upside_down(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_grouping_mode mmr_upside_down(::delphi_esr_msgs::msg::EsrVehicle2::_mmr_upside_down_type arg)
  {
    msg_.mmr_upside_down = std::move(arg);
    return Init_EsrVehicle2_grouping_mode(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_vehicle_speed_validity
{
public:
  explicit Init_EsrVehicle2_vehicle_speed_validity(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_mmr_upside_down vehicle_speed_validity(::delphi_esr_msgs::msg::EsrVehicle2::_vehicle_speed_validity_type arg)
  {
    msg_.vehicle_speed_validity = std::move(arg);
    return Init_EsrVehicle2_mmr_upside_down(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_turn_signal_status
{
public:
  explicit Init_EsrVehicle2_turn_signal_status(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_vehicle_speed_validity turn_signal_status(::delphi_esr_msgs::msg::EsrVehicle2::_turn_signal_status_type arg)
  {
    msg_.turn_signal_status = std::move(arg);
    return Init_EsrVehicle2_vehicle_speed_validity(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_maximum_tracks
{
public:
  explicit Init_EsrVehicle2_maximum_tracks(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_turn_signal_status maximum_tracks(::delphi_esr_msgs::msg::EsrVehicle2::_maximum_tracks_type arg)
  {
    msg_.maximum_tracks = std::move(arg);
    return Init_EsrVehicle2_turn_signal_status(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_blockage_disable
{
public:
  explicit Init_EsrVehicle2_blockage_disable(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_maximum_tracks blockage_disable(::delphi_esr_msgs::msg::EsrVehicle2::_blockage_disable_type arg)
  {
    msg_.blockage_disable = std::move(arg);
    return Init_EsrVehicle2_maximum_tracks(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_radar_cmd_radiate
{
public:
  explicit Init_EsrVehicle2_radar_cmd_radiate(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_blockage_disable radar_cmd_radiate(::delphi_esr_msgs::msg::EsrVehicle2::_radar_cmd_radiate_type arg)
  {
    msg_.radar_cmd_radiate = std::move(arg);
    return Init_EsrVehicle2_blockage_disable(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_lateral_mounting_offset
{
public:
  explicit Init_EsrVehicle2_lateral_mounting_offset(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_radar_cmd_radiate lateral_mounting_offset(::delphi_esr_msgs::msg::EsrVehicle2::_lateral_mounting_offset_type arg)
  {
    msg_.lateral_mounting_offset = std::move(arg);
    return Init_EsrVehicle2_radar_cmd_radiate(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_angle_misalignment
{
public:
  explicit Init_EsrVehicle2_angle_misalignment(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_lateral_mounting_offset angle_misalignment(::delphi_esr_msgs::msg::EsrVehicle2::_angle_misalignment_type arg)
  {
    msg_.angle_misalignment = std::move(arg);
    return Init_EsrVehicle2_lateral_mounting_offset(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_lr_only_transmit
{
public:
  explicit Init_EsrVehicle2_lr_only_transmit(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_angle_misalignment lr_only_transmit(::delphi_esr_msgs::msg::EsrVehicle2::_lr_only_transmit_type arg)
  {
    msg_.lr_only_transmit = std::move(arg);
    return Init_EsrVehicle2_angle_misalignment(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_mr_only_transmit
{
public:
  explicit Init_EsrVehicle2_mr_only_transmit(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_lr_only_transmit mr_only_transmit(::delphi_esr_msgs::msg::EsrVehicle2::_mr_only_transmit_type arg)
  {
    msg_.mr_only_transmit = std::move(arg);
    return Init_EsrVehicle2_lr_only_transmit(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_high_yaw_angle
{
public:
  explicit Init_EsrVehicle2_high_yaw_angle(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_mr_only_transmit high_yaw_angle(::delphi_esr_msgs::msg::EsrVehicle2::_high_yaw_angle_type arg)
  {
    msg_.high_yaw_angle = std::move(arg);
    return Init_EsrVehicle2_mr_only_transmit(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_clear_faults
{
public:
  explicit Init_EsrVehicle2_clear_faults(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_high_yaw_angle clear_faults(::delphi_esr_msgs::msg::EsrVehicle2::_clear_faults_type arg)
  {
    msg_.clear_faults = std::move(arg);
    return Init_EsrVehicle2_high_yaw_angle(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_use_angle_misalignment
{
public:
  explicit Init_EsrVehicle2_use_angle_misalignment(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_clear_faults use_angle_misalignment(::delphi_esr_msgs::msg::EsrVehicle2::_use_angle_misalignment_type arg)
  {
    msg_.use_angle_misalignment = std::move(arg);
    return Init_EsrVehicle2_clear_faults(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_scan_index_ack
{
public:
  explicit Init_EsrVehicle2_scan_index_ack(::delphi_esr_msgs::msg::EsrVehicle2 & msg)
  : msg_(msg)
  {}
  Init_EsrVehicle2_use_angle_misalignment scan_index_ack(::delphi_esr_msgs::msg::EsrVehicle2::_scan_index_ack_type arg)
  {
    msg_.scan_index_ack = std::move(arg);
    return Init_EsrVehicle2_use_angle_misalignment(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

class Init_EsrVehicle2_header
{
public:
  Init_EsrVehicle2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrVehicle2_scan_index_ack header(::delphi_esr_msgs::msg::EsrVehicle2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrVehicle2_scan_index_ack(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrVehicle2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrVehicle2>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrVehicle2_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__BUILDER_HPP_
