// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/device_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_DeviceStatus_frequency
{
public:
  explicit Init_DeviceStatus_frequency(::ibeo_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::DeviceStatus frequency(::ibeo_msgs::msg::DeviceStatus::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_sensor_temperature
{
public:
  explicit Init_DeviceStatus_sensor_temperature(::ibeo_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_frequency sensor_temperature(::ibeo_msgs::msg::DeviceStatus::_sensor_temperature_type arg)
  {
    msg_.sensor_temperature = std::move(arg);
    return Init_DeviceStatus_frequency(msg_);
  }

private:
  ::ibeo_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_scanner_type
{
public:
  explicit Init_DeviceStatus_scanner_type(::ibeo_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_sensor_temperature scanner_type(::ibeo_msgs::msg::DeviceStatus::_scanner_type_type arg)
  {
    msg_.scanner_type = std::move(arg);
    return Init_DeviceStatus_sensor_temperature(msg_);
  }

private:
  ::ibeo_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_ibeo_header
{
public:
  explicit Init_DeviceStatus_ibeo_header(::ibeo_msgs::msg::DeviceStatus & msg)
  : msg_(msg)
  {}
  Init_DeviceStatus_scanner_type ibeo_header(::ibeo_msgs::msg::DeviceStatus::_ibeo_header_type arg)
  {
    msg_.ibeo_header = std::move(arg);
    return Init_DeviceStatus_scanner_type(msg_);
  }

private:
  ::ibeo_msgs::msg::DeviceStatus msg_;
};

class Init_DeviceStatus_header
{
public:
  Init_DeviceStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeviceStatus_ibeo_header header(::ibeo_msgs::msg::DeviceStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DeviceStatus_ibeo_header(msg_);
  }

private:
  ::ibeo_msgs::msg::DeviceStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::DeviceStatus>()
{
  return ibeo_msgs::msg::builder::Init_DeviceStatus_header();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__BUILDER_HPP_
