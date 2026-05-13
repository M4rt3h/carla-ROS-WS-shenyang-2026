// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ScannerInfo2205.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/scanner_info2205__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ScannerInfo2205_resolutions
{
public:
  explicit Init_ScannerInfo2205_resolutions(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ScannerInfo2205 resolutions(::ibeo_msgs::msg::ScannerInfo2205::_resolutions_type arg)
  {
    msg_.resolutions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_mounting_position
{
public:
  explicit Init_ScannerInfo2205_mounting_position(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_resolutions mounting_position(::ibeo_msgs::msg::ScannerInfo2205::_mounting_position_type arg)
  {
    msg_.mounting_position = std::move(arg);
    return Init_ScannerInfo2205_resolutions(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_scan_flags
{
public:
  explicit Init_ScannerInfo2205_scan_flags(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_mounting_position scan_flags(::ibeo_msgs::msg::ScannerInfo2205::_scan_flags_type arg)
  {
    msg_.scan_flags = std::move(arg);
    return Init_ScannerInfo2205_mounting_position(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_beam_tilt
{
public:
  explicit Init_ScannerInfo2205_beam_tilt(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_scan_flags beam_tilt(::ibeo_msgs::msg::ScannerInfo2205::_beam_tilt_type arg)
  {
    msg_.beam_tilt = std::move(arg);
    return Init_ScannerInfo2205_scan_flags(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_scan_frequency
{
public:
  explicit Init_ScannerInfo2205_scan_frequency(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_beam_tilt scan_frequency(::ibeo_msgs::msg::ScannerInfo2205::_scan_frequency_type arg)
  {
    msg_.scan_frequency = std::move(arg);
    return Init_ScannerInfo2205_beam_tilt(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_scan_end_time_from_device
{
public:
  explicit Init_ScannerInfo2205_scan_end_time_from_device(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_scan_frequency scan_end_time_from_device(::ibeo_msgs::msg::ScannerInfo2205::_scan_end_time_from_device_type arg)
  {
    msg_.scan_end_time_from_device = std::move(arg);
    return Init_ScannerInfo2205_scan_frequency(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_scan_start_time_from_device
{
public:
  explicit Init_ScannerInfo2205_scan_start_time_from_device(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_scan_end_time_from_device scan_start_time_from_device(::ibeo_msgs::msg::ScannerInfo2205::_scan_start_time_from_device_type arg)
  {
    msg_.scan_start_time_from_device = std::move(arg);
    return Init_ScannerInfo2205_scan_end_time_from_device(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_scan_end_time
{
public:
  explicit Init_ScannerInfo2205_scan_end_time(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_scan_start_time_from_device scan_end_time(::ibeo_msgs::msg::ScannerInfo2205::_scan_end_time_type arg)
  {
    msg_.scan_end_time = std::move(arg);
    return Init_ScannerInfo2205_scan_start_time_from_device(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_scan_start_time
{
public:
  explicit Init_ScannerInfo2205_scan_start_time(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_scan_end_time scan_start_time(::ibeo_msgs::msg::ScannerInfo2205::_scan_start_time_type arg)
  {
    msg_.scan_start_time = std::move(arg);
    return Init_ScannerInfo2205_scan_end_time(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_end_angle
{
public:
  explicit Init_ScannerInfo2205_end_angle(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_scan_start_time end_angle(::ibeo_msgs::msg::ScannerInfo2205::_end_angle_type arg)
  {
    msg_.end_angle = std::move(arg);
    return Init_ScannerInfo2205_scan_start_time(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_start_angle
{
public:
  explicit Init_ScannerInfo2205_start_angle(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_end_angle start_angle(::ibeo_msgs::msg::ScannerInfo2205::_start_angle_type arg)
  {
    msg_.start_angle = std::move(arg);
    return Init_ScannerInfo2205_end_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_scan_number
{
public:
  explicit Init_ScannerInfo2205_scan_number(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_start_angle scan_number(::ibeo_msgs::msg::ScannerInfo2205::_scan_number_type arg)
  {
    msg_.scan_number = std::move(arg);
    return Init_ScannerInfo2205_start_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_scanner_type
{
public:
  explicit Init_ScannerInfo2205_scanner_type(::ibeo_msgs::msg::ScannerInfo2205 & msg)
  : msg_(msg)
  {}
  Init_ScannerInfo2205_scan_number scanner_type(::ibeo_msgs::msg::ScannerInfo2205::_scanner_type_type arg)
  {
    msg_.scanner_type = std::move(arg);
    return Init_ScannerInfo2205_scan_number(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

class Init_ScannerInfo2205_device_id
{
public:
  Init_ScannerInfo2205_device_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScannerInfo2205_scanner_type device_id(::ibeo_msgs::msg::ScannerInfo2205::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_ScannerInfo2205_scanner_type(msg_);
  }

private:
  ::ibeo_msgs::msg::ScannerInfo2205 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ScannerInfo2205>()
{
  return ibeo_msgs::msg::builder::Init_ScannerInfo2205_device_id();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__BUILDER_HPP_
