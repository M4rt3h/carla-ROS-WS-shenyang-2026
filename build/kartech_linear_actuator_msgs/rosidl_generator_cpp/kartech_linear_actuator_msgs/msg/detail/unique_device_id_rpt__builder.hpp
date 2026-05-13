// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/UniqueDeviceIdRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__UNIQUE_DEVICE_ID_RPT__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__UNIQUE_DEVICE_ID_RPT__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/unique_device_id_rpt__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_UniqueDeviceIdRpt_actuator_id_last_6
{
public:
  explicit Init_UniqueDeviceIdRpt_actuator_id_last_6(::kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt actuator_id_last_6(::kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt::_actuator_id_last_6_type arg)
  {
    msg_.actuator_id_last_6 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt msg_;
};

class Init_UniqueDeviceIdRpt_actuator_id_first_6
{
public:
  explicit Init_UniqueDeviceIdRpt_actuator_id_first_6(::kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt & msg)
  : msg_(msg)
  {}
  Init_UniqueDeviceIdRpt_actuator_id_last_6 actuator_id_first_6(::kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt::_actuator_id_first_6_type arg)
  {
    msg_.actuator_id_first_6 = std::move(arg);
    return Init_UniqueDeviceIdRpt_actuator_id_last_6(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt msg_;
};

class Init_UniqueDeviceIdRpt_header
{
public:
  Init_UniqueDeviceIdRpt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UniqueDeviceIdRpt_actuator_id_first_6 header(::kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UniqueDeviceIdRpt_actuator_id_first_6(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::UniqueDeviceIdRpt>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_UniqueDeviceIdRpt_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__UNIQUE_DEVICE_ID_RPT__BUILDER_HPP_
