// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neobotix_usboard_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__BUILDER_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__BUILDER_HPP_

#include "neobotix_usboard_msgs/msg/detail/sensors__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace neobotix_usboard_msgs
{

namespace msg
{

namespace builder
{

class Init_Sensors_sensors
{
public:
  explicit Init_Sensors_sensors(::neobotix_usboard_msgs::msg::Sensors & msg)
  : msg_(msg)
  {}
  ::neobotix_usboard_msgs::msg::Sensors sensors(::neobotix_usboard_msgs::msg::Sensors::_sensors_type arg)
  {
    msg_.sensors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Sensors msg_;
};

class Init_Sensors_header
{
public:
  Init_Sensors_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sensors_sensors header(::neobotix_usboard_msgs::msg::Sensors::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Sensors_sensors(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::Sensors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neobotix_usboard_msgs::msg::Sensors>()
{
  return neobotix_usboard_msgs::msg::builder::Init_Sensors_header();
}

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__BUILDER_HPP_
