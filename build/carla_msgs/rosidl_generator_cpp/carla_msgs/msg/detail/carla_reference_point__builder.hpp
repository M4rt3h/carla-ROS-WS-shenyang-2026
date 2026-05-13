// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carla_msgs:msg/CarlaReferencePoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__BUILDER_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__BUILDER_HPP_

#include "carla_msgs/msg/detail/carla_reference_point__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carla_msgs
{

namespace msg
{

namespace builder
{

class Init_CarlaReferencePoint_s
{
public:
  explicit Init_CarlaReferencePoint_s(::carla_msgs::msg::CarlaReferencePoint & msg)
  : msg_(msg)
  {}
  ::carla_msgs::msg::CarlaReferencePoint s(::carla_msgs::msg::CarlaReferencePoint::_s_type arg)
  {
    msg_.s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carla_msgs::msg::CarlaReferencePoint msg_;
};

class Init_CarlaReferencePoint_dkappa
{
public:
  explicit Init_CarlaReferencePoint_dkappa(::carla_msgs::msg::CarlaReferencePoint & msg)
  : msg_(msg)
  {}
  Init_CarlaReferencePoint_s dkappa(::carla_msgs::msg::CarlaReferencePoint::_dkappa_type arg)
  {
    msg_.dkappa = std::move(arg);
    return Init_CarlaReferencePoint_s(msg_);
  }

private:
  ::carla_msgs::msg::CarlaReferencePoint msg_;
};

class Init_CarlaReferencePoint_kappa
{
public:
  explicit Init_CarlaReferencePoint_kappa(::carla_msgs::msg::CarlaReferencePoint & msg)
  : msg_(msg)
  {}
  Init_CarlaReferencePoint_dkappa kappa(::carla_msgs::msg::CarlaReferencePoint::_kappa_type arg)
  {
    msg_.kappa = std::move(arg);
    return Init_CarlaReferencePoint_dkappa(msg_);
  }

private:
  ::carla_msgs::msg::CarlaReferencePoint msg_;
};

class Init_CarlaReferencePoint_heading
{
public:
  explicit Init_CarlaReferencePoint_heading(::carla_msgs::msg::CarlaReferencePoint & msg)
  : msg_(msg)
  {}
  Init_CarlaReferencePoint_kappa heading(::carla_msgs::msg::CarlaReferencePoint::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_CarlaReferencePoint_kappa(msg_);
  }

private:
  ::carla_msgs::msg::CarlaReferencePoint msg_;
};

class Init_CarlaReferencePoint_y
{
public:
  explicit Init_CarlaReferencePoint_y(::carla_msgs::msg::CarlaReferencePoint & msg)
  : msg_(msg)
  {}
  Init_CarlaReferencePoint_heading y(::carla_msgs::msg::CarlaReferencePoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_CarlaReferencePoint_heading(msg_);
  }

private:
  ::carla_msgs::msg::CarlaReferencePoint msg_;
};

class Init_CarlaReferencePoint_x
{
public:
  Init_CarlaReferencePoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CarlaReferencePoint_y x(::carla_msgs::msg::CarlaReferencePoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_CarlaReferencePoint_y(msg_);
  }

private:
  ::carla_msgs::msg::CarlaReferencePoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carla_msgs::msg::CarlaReferencePoint>()
{
  return carla_msgs::msg::builder::Init_CarlaReferencePoint_x();
}

}  // namespace carla_msgs

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__BUILDER_HPP_
