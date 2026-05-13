// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ScanPoint2202.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/scan_point2202__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ScanPoint2202_echo_pulse_width
{
public:
  explicit Init_ScanPoint2202_echo_pulse_width(::ibeo_msgs::msg::ScanPoint2202 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ScanPoint2202 echo_pulse_width(::ibeo_msgs::msg::ScanPoint2202::_echo_pulse_width_type arg)
  {
    msg_.echo_pulse_width = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2202 msg_;
};

class Init_ScanPoint2202_radial_distance
{
public:
  explicit Init_ScanPoint2202_radial_distance(::ibeo_msgs::msg::ScanPoint2202 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2202_echo_pulse_width radial_distance(::ibeo_msgs::msg::ScanPoint2202::_radial_distance_type arg)
  {
    msg_.radial_distance = std::move(arg);
    return Init_ScanPoint2202_echo_pulse_width(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2202 msg_;
};

class Init_ScanPoint2202_horizontal_angle
{
public:
  explicit Init_ScanPoint2202_horizontal_angle(::ibeo_msgs::msg::ScanPoint2202 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2202_radial_distance horizontal_angle(::ibeo_msgs::msg::ScanPoint2202::_horizontal_angle_type arg)
  {
    msg_.horizontal_angle = std::move(arg);
    return Init_ScanPoint2202_radial_distance(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2202 msg_;
};

class Init_ScanPoint2202_dirt
{
public:
  explicit Init_ScanPoint2202_dirt(::ibeo_msgs::msg::ScanPoint2202 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2202_horizontal_angle dirt(::ibeo_msgs::msg::ScanPoint2202::_dirt_type arg)
  {
    msg_.dirt = std::move(arg);
    return Init_ScanPoint2202_horizontal_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2202 msg_;
};

class Init_ScanPoint2202_ground
{
public:
  explicit Init_ScanPoint2202_ground(::ibeo_msgs::msg::ScanPoint2202 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2202_dirt ground(::ibeo_msgs::msg::ScanPoint2202::_ground_type arg)
  {
    msg_.ground = std::move(arg);
    return Init_ScanPoint2202_dirt(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2202 msg_;
};

class Init_ScanPoint2202_clutter_atmospheric
{
public:
  explicit Init_ScanPoint2202_clutter_atmospheric(::ibeo_msgs::msg::ScanPoint2202 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2202_ground clutter_atmospheric(::ibeo_msgs::msg::ScanPoint2202::_clutter_atmospheric_type arg)
  {
    msg_.clutter_atmospheric = std::move(arg);
    return Init_ScanPoint2202_ground(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2202 msg_;
};

class Init_ScanPoint2202_transparent_point
{
public:
  explicit Init_ScanPoint2202_transparent_point(::ibeo_msgs::msg::ScanPoint2202 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2202_clutter_atmospheric transparent_point(::ibeo_msgs::msg::ScanPoint2202::_transparent_point_type arg)
  {
    msg_.transparent_point = std::move(arg);
    return Init_ScanPoint2202_clutter_atmospheric(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2202 msg_;
};

class Init_ScanPoint2202_echo
{
public:
  explicit Init_ScanPoint2202_echo(::ibeo_msgs::msg::ScanPoint2202 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2202_transparent_point echo(::ibeo_msgs::msg::ScanPoint2202::_echo_type arg)
  {
    msg_.echo = std::move(arg);
    return Init_ScanPoint2202_transparent_point(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2202 msg_;
};

class Init_ScanPoint2202_layer
{
public:
  Init_ScanPoint2202_layer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanPoint2202_echo layer(::ibeo_msgs::msg::ScanPoint2202::_layer_type arg)
  {
    msg_.layer = std::move(arg);
    return Init_ScanPoint2202_echo(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2202 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ScanPoint2202>()
{
  return ibeo_msgs::msg::builder::Init_ScanPoint2202_layer();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2202__BUILDER_HPP_
