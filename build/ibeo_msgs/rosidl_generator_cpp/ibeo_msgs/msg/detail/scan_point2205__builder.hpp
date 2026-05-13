// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ScanPoint2205.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/scan_point2205__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ScanPoint2205_transparent
{
public:
  explicit Init_ScanPoint2205_transparent(::ibeo_msgs::msg::ScanPoint2205 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ScanPoint2205 transparent(::ibeo_msgs::msg::ScanPoint2205::_transparent_type arg)
  {
    msg_.transparent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

class Init_ScanPoint2205_precipitation
{
public:
  explicit Init_ScanPoint2205_precipitation(::ibeo_msgs::msg::ScanPoint2205 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2205_transparent precipitation(::ibeo_msgs::msg::ScanPoint2205::_precipitation_type arg)
  {
    msg_.precipitation = std::move(arg);
    return Init_ScanPoint2205_transparent(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

class Init_ScanPoint2205_dirt
{
public:
  explicit Init_ScanPoint2205_dirt(::ibeo_msgs::msg::ScanPoint2205 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2205_precipitation dirt(::ibeo_msgs::msg::ScanPoint2205::_dirt_type arg)
  {
    msg_.dirt = std::move(arg);
    return Init_ScanPoint2205_precipitation(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

class Init_ScanPoint2205_ground
{
public:
  explicit Init_ScanPoint2205_ground(::ibeo_msgs::msg::ScanPoint2205 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2205_dirt ground(::ibeo_msgs::msg::ScanPoint2205::_ground_type arg)
  {
    msg_.ground = std::move(arg);
    return Init_ScanPoint2205_dirt(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

class Init_ScanPoint2205_time_offset
{
public:
  explicit Init_ScanPoint2205_time_offset(::ibeo_msgs::msg::ScanPoint2205 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2205_ground time_offset(::ibeo_msgs::msg::ScanPoint2205::_time_offset_type arg)
  {
    msg_.time_offset = std::move(arg);
    return Init_ScanPoint2205_ground(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

class Init_ScanPoint2205_echo
{
public:
  explicit Init_ScanPoint2205_echo(::ibeo_msgs::msg::ScanPoint2205 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2205_time_offset echo(::ibeo_msgs::msg::ScanPoint2205::_echo_type arg)
  {
    msg_.echo = std::move(arg);
    return Init_ScanPoint2205_time_offset(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

class Init_ScanPoint2205_layer
{
public:
  explicit Init_ScanPoint2205_layer(::ibeo_msgs::msg::ScanPoint2205 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2205_echo layer(::ibeo_msgs::msg::ScanPoint2205::_layer_type arg)
  {
    msg_.layer = std::move(arg);
    return Init_ScanPoint2205_echo(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

class Init_ScanPoint2205_device_id
{
public:
  explicit Init_ScanPoint2205_device_id(::ibeo_msgs::msg::ScanPoint2205 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2205_layer device_id(::ibeo_msgs::msg::ScanPoint2205::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_ScanPoint2205_layer(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

class Init_ScanPoint2205_echo_width
{
public:
  explicit Init_ScanPoint2205_echo_width(::ibeo_msgs::msg::ScanPoint2205 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2205_device_id echo_width(::ibeo_msgs::msg::ScanPoint2205::_echo_width_type arg)
  {
    msg_.echo_width = std::move(arg);
    return Init_ScanPoint2205_device_id(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

class Init_ScanPoint2205_z_position
{
public:
  explicit Init_ScanPoint2205_z_position(::ibeo_msgs::msg::ScanPoint2205 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2205_echo_width z_position(::ibeo_msgs::msg::ScanPoint2205::_z_position_type arg)
  {
    msg_.z_position = std::move(arg);
    return Init_ScanPoint2205_echo_width(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

class Init_ScanPoint2205_y_position
{
public:
  explicit Init_ScanPoint2205_y_position(::ibeo_msgs::msg::ScanPoint2205 & msg)
  : msg_(msg)
  {}
  Init_ScanPoint2205_z_position y_position(::ibeo_msgs::msg::ScanPoint2205::_y_position_type arg)
  {
    msg_.y_position = std::move(arg);
    return Init_ScanPoint2205_z_position(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

class Init_ScanPoint2205_x_position
{
public:
  Init_ScanPoint2205_x_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScanPoint2205_y_position x_position(::ibeo_msgs::msg::ScanPoint2205::_x_position_type arg)
  {
    msg_.x_position = std::move(arg);
    return Init_ScanPoint2205_y_position(msg_);
  }

private:
  ::ibeo_msgs::msg::ScanPoint2205 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ScanPoint2205>()
{
  return ibeo_msgs::msg::builder::Init_ScanPoint2205_x_position();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__BUILDER_HPP_
