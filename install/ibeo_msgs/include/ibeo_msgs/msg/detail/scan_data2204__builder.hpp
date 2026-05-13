// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ScanData2204.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_DATA2204__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_DATA2204__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/scan_data2204__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ScanData2204_scan_point_list
{
public:
  explicit Init_ScanData2204_scan_point_list(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ScanData2204 scan_point_list(::ibeo_msgs::msg::ScanData2204::_scan_point_list_type arg)
  {
    msg_.scan_point_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_scanner_info_list
{
public:
  explicit Init_ScanData2204_scanner_info_list(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_scan_point_list scanner_info_list(::ibeo_msgs::msg::ScanData2204::_scanner_info_list_type arg)
  {
    msg_.scanner_info_list = std::move(arg);
    return Init_ScanData2204_scan_point_list(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_number_of_scanner_infos
{
public:
  explicit Init_ScanData2204_number_of_scanner_infos(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_scanner_info_list number_of_scanner_infos(::ibeo_msgs::msg::ScanData2204::_number_of_scanner_infos_type arg)
  {
    msg_.number_of_scanner_infos = std::move(arg);
    return Init_ScanData2204_scanner_info_list(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_scan_points
{
public:
  explicit Init_ScanData2204_scan_points(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_number_of_scanner_infos scan_points(::ibeo_msgs::msg::ScanData2204::_scan_points_type arg)
  {
    msg_.scan_points = std::move(arg);
    return Init_ScanData2204_number_of_scanner_infos(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_scan_number
{
public:
  explicit Init_ScanData2204_scan_number(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_scan_points scan_number(::ibeo_msgs::msg::ScanData2204::_scan_number_type arg)
  {
    msg_.scan_number = std::move(arg);
    return Init_ScanData2204_scan_points(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_coordinate_system
{
public:
  explicit Init_ScanData2204_coordinate_system(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_scan_number coordinate_system(::ibeo_msgs::msg::ScanData2204::_coordinate_system_type arg)
  {
    msg_.coordinate_system = std::move(arg);
    return Init_ScanData2204_scan_number(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_mirror_side
{
public:
  explicit Init_ScanData2204_mirror_side(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_coordinate_system mirror_side(::ibeo_msgs::msg::ScanData2204::_mirror_side_type arg)
  {
    msg_.mirror_side = std::move(arg);
    return Init_ScanData2204_coordinate_system(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_fused_scan
{
public:
  explicit Init_ScanData2204_fused_scan(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_mirror_side fused_scan(::ibeo_msgs::msg::ScanData2204::_fused_scan_type arg)
  {
    msg_.fused_scan = std::move(arg);
    return Init_ScanData2204_mirror_side(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_rain_labeled
{
public:
  explicit Init_ScanData2204_rain_labeled(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_fused_scan rain_labeled(::ibeo_msgs::msg::ScanData2204::_rain_labeled_type arg)
  {
    msg_.rain_labeled = std::move(arg);
    return Init_ScanData2204_fused_scan(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_dirt_labeled
{
public:
  explicit Init_ScanData2204_dirt_labeled(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_rain_labeled dirt_labeled(::ibeo_msgs::msg::ScanData2204::_dirt_labeled_type arg)
  {
    msg_.dirt_labeled = std::move(arg);
    return Init_ScanData2204_rain_labeled(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_ground_labeled
{
public:
  explicit Init_ScanData2204_ground_labeled(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_dirt_labeled ground_labeled(::ibeo_msgs::msg::ScanData2204::_ground_labeled_type arg)
  {
    msg_.ground_labeled = std::move(arg);
    return Init_ScanData2204_dirt_labeled(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_scan_end_time_offset
{
public:
  explicit Init_ScanData2204_scan_end_time_offset(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_ground_labeled scan_end_time_offset(::ibeo_msgs::msg::ScanData2204::_scan_end_time_offset_type arg)
  {
    msg_.scan_end_time_offset = std::move(arg);
    return Init_ScanData2204_ground_labeled(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_scan_start_time
{
public:
  explicit Init_ScanData2204_scan_start_time(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_scan_end_time_offset scan_start_time(::ibeo_msgs::msg::ScanData2204::_scan_start_time_type arg)
  {
    msg_.scan_start_time = std::move(arg);
    return Init_ScanData2204_scan_end_time_offset(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_ibeo_header
{
public:
  explicit Init_ScanData2204_ibeo_header(::ibeo_msgs::msg::ScanData2204 & msg)
  : msg_(msg)
  {}
  Init_ScanData2204_scan_start_time ibeo_header(::ibeo_msgs::msg::ScanData2204::_ibeo_header_type arg)
  {
    msg_.ibeo_header = std::move(arg);
    return Init_ScanData2204_scan_start_time(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

class Init_ScanData2204_header
{
public:
  Init_ScanData2204_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanData2204_ibeo_header header(::ibeo_msgs::msg::ScanData2204::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ScanData2204_ibeo_header(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanData2204 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ScanData2204>()
{
  return ibeo_msgs::msg::builder::Init_ScanData2204_header();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_DATA2204__BUILDER_HPP_
