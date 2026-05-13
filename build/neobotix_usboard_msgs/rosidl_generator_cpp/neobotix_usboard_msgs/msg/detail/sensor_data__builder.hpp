// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from neobotix_usboard_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include "neobotix_usboard_msgs/msg/detail/sensor_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace neobotix_usboard_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorData_active
{
public:
  explicit Init_SensorData_active(::neobotix_usboard_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  ::neobotix_usboard_msgs::msg::SensorData active(::neobotix_usboard_msgs::msg::SensorData::_active_type arg)
  {
    msg_.active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::SensorData msg_;
};

class Init_SensorData_alarm
{
public:
  explicit Init_SensorData_alarm(::neobotix_usboard_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_active alarm(::neobotix_usboard_msgs::msg::SensorData::_alarm_type arg)
  {
    msg_.alarm = std::move(arg);
    return Init_SensorData_active(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::SensorData msg_;
};

class Init_SensorData_warn
{
public:
  explicit Init_SensorData_warn(::neobotix_usboard_msgs::msg::SensorData & msg)
  : msg_(msg)
  {}
  Init_SensorData_alarm warn(::neobotix_usboard_msgs::msg::SensorData::_warn_type arg)
  {
    msg_.warn = std::move(arg);
    return Init_SensorData_alarm(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::SensorData msg_;
};

class Init_SensorData_distance
{
public:
  Init_SensorData_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_warn distance(::neobotix_usboard_msgs::msg::SensorData::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_SensorData_warn(msg_);
  }

private:
  ::neobotix_usboard_msgs::msg::SensorData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::neobotix_usboard_msgs::msg::SensorData>()
{
  return neobotix_usboard_msgs::msg::builder::Init_SensorData_distance();
}

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__BUILDER_HPP_
