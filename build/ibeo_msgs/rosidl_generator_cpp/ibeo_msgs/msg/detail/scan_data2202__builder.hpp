// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ScanData2202.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/scan_data2202__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ScanData2202_scan_point_list
{
public:
  explicit Init_ScanData2202_scan_point_list(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ScanData2202 scan_point_list(::ibeo_msgs::msg::ScanData2202::_scan_point_list_type arg)
  {
    msg_.scan_point_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_mirror_side
{
public:
  explicit Init_ScanData2202_mirror_side(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_scan_point_list mirror_side(::ibeo_msgs::msg::ScanData2202::_mirror_side_type arg)
  {
    msg_.mirror_side = std::move(arg);
    return Init_ScanData2202_scan_point_list(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_rain_labeled
{
public:
  explicit Init_ScanData2202_rain_labeled(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_mirror_side rain_labeled(::ibeo_msgs::msg::ScanData2202::_rain_labeled_type arg)
  {
    msg_.rain_labeled = std::move(arg);
    return Init_ScanData2202_mirror_side(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_dirt_labeled
{
public:
  explicit Init_ScanData2202_dirt_labeled(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_rain_labeled dirt_labeled(::ibeo_msgs::msg::ScanData2202::_dirt_labeled_type arg)
  {
    msg_.dirt_labeled = std::move(arg);
    return Init_ScanData2202_rain_labeled(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_ground_labeled
{
public:
  explicit Init_ScanData2202_ground_labeled(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_dirt_labeled ground_labeled(::ibeo_msgs::msg::ScanData2202::_ground_labeled_type arg)
  {
    msg_.ground_labeled = std::move(arg);
    return Init_ScanData2202_dirt_labeled(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_mounting_position_z
{
public:
  explicit Init_ScanData2202_mounting_position_z(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_ground_labeled mounting_position_z(::ibeo_msgs::msg::ScanData2202::_mounting_position_z_type arg)
  {
    msg_.mounting_position_z = std::move(arg);
    return Init_ScanData2202_ground_labeled(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_mounting_position_y
{
public:
  explicit Init_ScanData2202_mounting_position_y(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_mounting_position_z mounting_position_y(::ibeo_msgs::msg::ScanData2202::_mounting_position_y_type arg)
  {
    msg_.mounting_position_y = std::move(arg);
    return Init_ScanData2202_mounting_position_z(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_mounting_position_x
{
public:
  explicit Init_ScanData2202_mounting_position_x(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_mounting_position_y mounting_position_x(::ibeo_msgs::msg::ScanData2202::_mounting_position_x_type arg)
  {
    msg_.mounting_position_x = std::move(arg);
    return Init_ScanData2202_mounting_position_y(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_mounting_roll_angle_ticks
{
public:
  explicit Init_ScanData2202_mounting_roll_angle_ticks(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_mounting_position_x mounting_roll_angle_ticks(::ibeo_msgs::msg::ScanData2202::_mounting_roll_angle_ticks_type arg)
  {
    msg_.mounting_roll_angle_ticks = std::move(arg);
    return Init_ScanData2202_mounting_position_x(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_mounting_pitch_angle_ticks
{
public:
  explicit Init_ScanData2202_mounting_pitch_angle_ticks(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_mounting_roll_angle_ticks mounting_pitch_angle_ticks(::ibeo_msgs::msg::ScanData2202::_mounting_pitch_angle_ticks_type arg)
  {
    msg_.mounting_pitch_angle_ticks = std::move(arg);
    return Init_ScanData2202_mounting_roll_angle_ticks(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_mounting_yaw_angle_ticks
{
public:
  explicit Init_ScanData2202_mounting_yaw_angle_ticks(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_mounting_pitch_angle_ticks mounting_yaw_angle_ticks(::ibeo_msgs::msg::ScanData2202::_mounting_yaw_angle_ticks_type arg)
  {
    msg_.mounting_yaw_angle_ticks = std::move(arg);
    return Init_ScanData2202_mounting_pitch_angle_ticks(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_scan_points_count
{
public:
  explicit Init_ScanData2202_scan_points_count(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_mounting_yaw_angle_ticks scan_points_count(::ibeo_msgs::msg::ScanData2202::_scan_points_count_type arg)
  {
    msg_.scan_points_count = std::move(arg);
    return Init_ScanData2202_mounting_yaw_angle_ticks(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_end_angle_ticks
{
public:
  explicit Init_ScanData2202_end_angle_ticks(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_scan_points_count end_angle_ticks(::ibeo_msgs::msg::ScanData2202::_end_angle_ticks_type arg)
  {
    msg_.end_angle_ticks = std::move(arg);
    return Init_ScanData2202_scan_points_count(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_start_angle_ticks
{
public:
  explicit Init_ScanData2202_start_angle_ticks(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_end_angle_ticks start_angle_ticks(::ibeo_msgs::msg::ScanData2202::_start_angle_ticks_type arg)
  {
    msg_.start_angle_ticks = std::move(arg);
    return Init_ScanData2202_end_angle_ticks(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_angle_ticks_per_rotation
{
public:
  explicit Init_ScanData2202_angle_ticks_per_rotation(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_start_angle_ticks angle_ticks_per_rotation(::ibeo_msgs::msg::ScanData2202::_angle_ticks_per_rotation_type arg)
  {
    msg_.angle_ticks_per_rotation = std::move(arg);
    return Init_ScanData2202_start_angle_ticks(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_scan_end_time
{
public:
  explicit Init_ScanData2202_scan_end_time(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_angle_ticks_per_rotation scan_end_time(::ibeo_msgs::msg::ScanData2202::_scan_end_time_type arg)
  {
    msg_.scan_end_time = std::move(arg);
    return Init_ScanData2202_angle_ticks_per_rotation(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_scan_start_time
{
public:
  explicit Init_ScanData2202_scan_start_time(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_scan_end_time scan_start_time(::ibeo_msgs::msg::ScanData2202::_scan_start_time_type arg)
  {
    msg_.scan_start_time = std::move(arg);
    return Init_ScanData2202_scan_end_time(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_sync_phase_offset
{
public:
  explicit Init_ScanData2202_sync_phase_offset(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_scan_start_time sync_phase_offset(::ibeo_msgs::msg::ScanData2202::_sync_phase_offset_type arg)
  {
    msg_.sync_phase_offset = std::move(arg);
    return Init_ScanData2202_scan_start_time(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_scanner_status
{
public:
  explicit Init_ScanData2202_scanner_status(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_sync_phase_offset scanner_status(::ibeo_msgs::msg::ScanData2202::_scanner_status_type arg)
  {
    msg_.scanner_status = std::move(arg);
    return Init_ScanData2202_sync_phase_offset(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_scan_number
{
public:
  explicit Init_ScanData2202_scan_number(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_scanner_status scan_number(::ibeo_msgs::msg::ScanData2202::_scan_number_type arg)
  {
    msg_.scan_number = std::move(arg);
    return Init_ScanData2202_scanner_status(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_ibeo_header
{
public:
  explicit Init_ScanData2202_ibeo_header(::ibeo_msgs::msg::ScanData2202 & msg)
  : msg_(msg)
  {}
  Init_ScanData2202_scan_number ibeo_header(::ibeo_msgs::msg::ScanData2202::_ibeo_header_type arg)
  {
    msg_.ibeo_header = std::move(arg);
    return Init_ScanData2202_scan_number(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

class Init_ScanData2202_header
{
public:
  Init_ScanData2202_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanData2202_ibeo_header header(::ibeo_msgs::msg::ScanData2202::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ScanData2202_ibeo_header(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2202 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ScanData2202>()
{
  return ibeo_msgs::msg::builder::Init_ScanData2202_header();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__BUILDER_HPP_
