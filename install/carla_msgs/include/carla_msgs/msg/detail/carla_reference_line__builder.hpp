// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaReferenceLine.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_LINE__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_LINE__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_reference_line__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaReferenceLine_reference_line
{
public:
  explicit Init_CarlaReferenceLine_reference_line(::carla_msgs::msg::CarlaReferenceLine & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaReferenceLine reference_line(::carla_msgs::msg::CarlaReferenceLine::_reference_line_type arg)
  {
    msg_.reference_line = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaReferenceLine msg_;
};

class Init_CarlaReferenceLine_header
{
public:
  Init_CarlaReferenceLine_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaReferenceLine_reference_line header(::carla_msgs::msg::CarlaReferenceLine::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CarlaReferenceLine_reference_line(msg_);
  }

private:
  ::carla_msgs::msg::CarlaReferenceLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaReferenceLine>()
{
  return carla_msgs::msg::builder::Init_CarlaReferenceLine_header();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_LINE__BUILDER_HPP_
