// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ScannerInfo2204.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/scanner_info2204__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ScannerInfo2204_offset_z
{
public:
  explicit Init_ScannerInfo2204_offset_z(::ibeo_msgs::msg::ScannerInfo2204 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ScannerInfo2204 offset_z(::ibeo_msgs::msg::ScannerInfo2204::_offset_z_type arg)
  {
    msg_.offset_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2204 msg_;
};

class Init_ScannerInfo2204_offset_y
{
public:
  explicit Init_ScannerInfo2204_offset_y(::ibeo_msgs::msg::ScannerInfo2204 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2204_offset_z offset_y(::ibeo_msgs::msg::ScannerInfo2204::_offset_y_type arg)
  {
    msg_.offset_y = std::move(arg);
    return Init_ScannerInfo2204_offset_z(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2204 msg_;
};

class Init_ScannerInfo2204_offset_x
{
public:
  explicit Init_ScannerInfo2204_offset_x(::ibeo_msgs::msg::ScannerInfo2204 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2204_offset_y offset_x(::ibeo_msgs::msg::ScannerInfo2204::_offset_x_type arg)
  {
    msg_.offset_x = std::move(arg);
    return Init_ScannerInfo2204_offset_y(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2204 msg_;
};

class Init_ScannerInfo2204_roll_angle
{
public:
  explicit Init_ScannerInfo2204_roll_angle(::ibeo_msgs::msg::ScannerInfo2204 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2204_offset_x roll_angle(::ibeo_msgs::msg::ScannerInfo2204::_roll_angle_type arg)
  {
    msg_.roll_angle = std::move(arg);
    return Init_ScannerInfo2204_offset_x(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2204 msg_;
};

class Init_ScannerInfo2204_pitch_angle
{
public:
  explicit Init_ScannerInfo2204_pitch_angle(::ibeo_msgs::msg::ScannerInfo2204 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2204_roll_angle pitch_angle(::ibeo_msgs::msg::ScannerInfo2204::_pitch_angle_type arg)
  {
    msg_.pitch_angle = std::move(arg);
    return Init_ScannerInfo2204_roll_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2204 msg_;
};

class Init_ScannerInfo2204_yaw_angle
{
public:
  explicit Init_ScannerInfo2204_yaw_angle(::ibeo_msgs::msg::ScannerInfo2204 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2204_pitch_angle yaw_angle(::ibeo_msgs::msg::ScannerInfo2204::_yaw_angle_type arg)
  {
    msg_.yaw_angle = std::move(arg);
    return Init_ScannerInfo2204_pitch_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2204 msg_;
};

class Init_ScannerInfo2204_end_angle
{
public:
  explicit Init_ScannerInfo2204_end_angle(::ibeo_msgs::msg::ScannerInfo2204 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2204_yaw_angle end_angle(::ibeo_msgs::msg::ScannerInfo2204::_end_angle_type arg)
  {
    msg_.end_angle = std::move(arg);
    return Init_ScannerInfo2204_yaw_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2204 msg_;
};

class Init_ScannerInfo2204_start_angle
{
public:
  explicit Init_ScannerInfo2204_start_angle(::ibeo_msgs::msg::ScannerInfo2204 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2204_end_angle start_angle(::ibeo_msgs::msg::ScannerInfo2204::_start_angle_type arg)
  {
    msg_.start_angle = std::move(arg);
    return Init_ScannerInfo2204_end_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2204 msg_;
};

class Init_ScannerInfo2204_scan_number
{
public:
  explicit Init_ScannerInfo2204_scan_number(::ibeo_msgs::msg::ScannerInfo2204 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2204_start_angle scan_number(::ibeo_msgs::msg::ScannerInfo2204::_scan_number_type arg)
  {
    msg_.scan_number = std::move(arg);
    return Init_ScannerInfo2204_start_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2204 msg_;
};

class Init_ScannerInfo2204_scanner_type
{
public:
  explicit Init_ScannerInfo2204_scanner_type(::ibeo_msgs::msg::ScannerInfo2204 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2204_scan_number scanner_type(::ibeo_msgs::msg::ScannerInfo2204::_scanner_type_type arg)
  {
    msg_.scanner_type = std::move(arg);
    return Init_ScannerInfo2204_scan_number(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2204 msg_;
};

class Init_ScannerInfo2204_device_id
{
public:
  Init_ScannerInfo2204_device_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScannerInfo2204_scanner_type device_id(::ibeo_msgs::msg::ScannerInfo2204::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_ScannerInfo2204_scanner_type(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2204 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ScannerInfo2204>()
{
  return ibeo_msgs::msg::builder::Init_ScannerInfo2204_device_id();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__BUILDER_HPP_
