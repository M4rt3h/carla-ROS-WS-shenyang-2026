// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ScanData2208.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_DATA2208__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_DATA2208__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/scan_data2208__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ScanData2208_scan_point_list
{
public:
  explicit Init_ScanData2208_scan_point_list(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ScanData2208 scan_point_list(::ibeo_msgs::msg::ScanData2208::_scan_point_list_type arg)
  {
    msg_.scan_point_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_mirror_tilt
{
public:
  explicit Init_ScanData2208_mirror_tilt(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_scan_point_list mirror_tilt(::ibeo_msgs::msg::ScanData2208::_mirror_tilt_type arg)
  {
    msg_.mirror_tilt = std::move(arg);
    return Init_ScanData2208_scan_point_list(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_mirror_side
{
public:
  explicit Init_ScanData2208_mirror_side(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_mirror_tilt mirror_side(::ibeo_msgs::msg::ScanData2208::_mirror_side_type arg)
  {
    msg_.mirror_side = std::move(arg);
    return Init_ScanData2208_mirror_tilt(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_end_angle_ticks
{
public:
  explicit Init_ScanData2208_end_angle_ticks(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_mirror_side end_angle_ticks(::ibeo_msgs::msg::ScanData2208::_end_angle_ticks_type arg)
  {
    msg_.end_angle_ticks = std::move(arg);
    return Init_ScanData2208_mirror_side(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_start_angle_ticks
{
public:
  explicit Init_ScanData2208_start_angle_ticks(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_end_angle_ticks start_angle_ticks(::ibeo_msgs::msg::ScanData2208::_start_angle_ticks_type arg)
  {
    msg_.start_angle_ticks = std::move(arg);
    return Init_ScanData2208_end_angle_ticks(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_scan_end_time
{
public:
  explicit Init_ScanData2208_scan_end_time(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_start_angle_ticks scan_end_time(::ibeo_msgs::msg::ScanData2208::_scan_end_time_type arg)
  {
    msg_.scan_end_time = std::move(arg);
    return Init_ScanData2208_start_angle_ticks(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_scan_start_time
{
public:
  explicit Init_ScanData2208_scan_start_time(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_scan_end_time scan_start_time(::ibeo_msgs::msg::ScanData2208::_scan_start_time_type arg)
  {
    msg_.scan_start_time = std::move(arg);
    return Init_ScanData2208_scan_end_time(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_device_id
{
public:
  explicit Init_ScanData2208_device_id(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_scan_start_time device_id(::ibeo_msgs::msg::ScanData2208::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_ScanData2208_scan_start_time(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_mounting_position_z
{
public:
  explicit Init_ScanData2208_mounting_position_z(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_device_id mounting_position_z(::ibeo_msgs::msg::ScanData2208::_mounting_position_z_type arg)
  {
    msg_.mounting_position_z = std::move(arg);
    return Init_ScanData2208_device_id(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_mounting_position_y
{
public:
  explicit Init_ScanData2208_mounting_position_y(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_mounting_position_z mounting_position_y(::ibeo_msgs::msg::ScanData2208::_mounting_position_y_type arg)
  {
    msg_.mounting_position_y = std::move(arg);
    return Init_ScanData2208_mounting_position_z(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_mounting_position_x
{
public:
  explicit Init_ScanData2208_mounting_position_x(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_mounting_position_y mounting_position_x(::ibeo_msgs::msg::ScanData2208::_mounting_position_x_type arg)
  {
    msg_.mounting_position_x = std::move(arg);
    return Init_ScanData2208_mounting_position_y(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_mounting_roll_angle_ticks
{
public:
  explicit Init_ScanData2208_mounting_roll_angle_ticks(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_mounting_position_x mounting_roll_angle_ticks(::ibeo_msgs::msg::ScanData2208::_mounting_roll_angle_ticks_type arg)
  {
    msg_.mounting_roll_angle_ticks = std::move(arg);
    return Init_ScanData2208_mounting_position_x(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_mounting_pitch_angle_ticks
{
public:
  explicit Init_ScanData2208_mounting_pitch_angle_ticks(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_mounting_roll_angle_ticks mounting_pitch_angle_ticks(::ibeo_msgs::msg::ScanData2208::_mounting_pitch_angle_ticks_type arg)
  {
    msg_.mounting_pitch_angle_ticks = std::move(arg);
    return Init_ScanData2208_mounting_roll_angle_ticks(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_mounting_yaw_angle_ticks
{
public:
  explicit Init_ScanData2208_mounting_yaw_angle_ticks(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_mounting_pitch_angle_ticks mounting_yaw_angle_ticks(::ibeo_msgs::msg::ScanData2208::_mounting_yaw_angle_ticks_type arg)
  {
    msg_.mounting_yaw_angle_ticks = std::move(arg);
    return Init_ScanData2208_mounting_pitch_angle_ticks(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_scan_flags
{
public:
  explicit Init_ScanData2208_scan_flags(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_mounting_yaw_angle_ticks scan_flags(::ibeo_msgs::msg::ScanData2208::_scan_flags_type arg)
  {
    msg_.scan_flags = std::move(arg);
    return Init_ScanData2208_mounting_yaw_angle_ticks(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_angle_ticks_per_rotation
{
public:
  explicit Init_ScanData2208_angle_ticks_per_rotation(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_scan_flags angle_ticks_per_rotation(::ibeo_msgs::msg::ScanData2208::_angle_ticks_per_rotation_type arg)
  {
    msg_.angle_ticks_per_rotation = std::move(arg);
    return Init_ScanData2208_scan_flags(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_motor_rotating_direction
{
public:
  explicit Init_ScanData2208_motor_rotating_direction(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_angle_ticks_per_rotation motor_rotating_direction(::ibeo_msgs::msg::ScanData2208::_motor_rotating_direction_type arg)
  {
    msg_.motor_rotating_direction = std::move(arg);
    return Init_ScanData2208_angle_ticks_per_rotation(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_frequency_locked
{
public:
  explicit Init_ScanData2208_frequency_locked(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_motor_rotating_direction frequency_locked(::ibeo_msgs::msg::ScanData2208::_frequency_locked_type arg)
  {
    msg_.frequency_locked = std::move(arg);
    return Init_ScanData2208_motor_rotating_direction(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_laser_on
{
public:
  explicit Init_ScanData2208_laser_on(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_frequency_locked laser_on(::ibeo_msgs::msg::ScanData2208::_laser_on_type arg)
  {
    msg_.laser_on = std::move(arg);
    return Init_ScanData2208_frequency_locked(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_motor_on
{
public:
  explicit Init_ScanData2208_motor_on(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_laser_on motor_on(::ibeo_msgs::msg::ScanData2208::_motor_on_type arg)
  {
    msg_.motor_on = std::move(arg);
    return Init_ScanData2208_laser_on(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_scanner_type
{
public:
  explicit Init_ScanData2208_scanner_type(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_motor_on scanner_type(::ibeo_msgs::msg::ScanData2208::_scanner_type_type arg)
  {
    msg_.scanner_type = std::move(arg);
    return Init_ScanData2208_motor_on(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_scan_number
{
public:
  explicit Init_ScanData2208_scan_number(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_scanner_type scan_number(::ibeo_msgs::msg::ScanData2208::_scan_number_type arg)
  {
    msg_.scan_number = std::move(arg);
    return Init_ScanData2208_scanner_type(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_ibeo_header
{
public:
  explicit Init_ScanData2208_ibeo_header(::ibeo_msgs::msg::ScanData2208 & msg)
  : msg_(msg)
  {}
  Init_ScanData2208_scan_number ibeo_header(::ibeo_msgs::msg::ScanData2208::_ibeo_header_type arg)
  {
    msg_.ibeo_header = std::move(arg);
    return Init_ScanData2208_scan_number(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

class Init_ScanData2208_header
{
public:
  Init_ScanData2208_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanData2208_ibeo_header header(::ibeo_msgs::msg::ScanData2208::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ScanData2208_ibeo_header(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2208 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ScanData2208>()
{
  return ibeo_msgs::msg::builder::Init_ScanData2208_header();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_DATA2208__BUILDER_HPP_
