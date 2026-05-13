// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from derived_object_msgs:msg/SolidPrimitiveWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__BUILDER_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__BUILDER_HPP_

#include "derived_object_msgs/msg/detail/solid_primitive_with_covariance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace derived_object_msgs
{

namespace msg
{

namespace builder
{

class Init_SolidPrimitiveWithCovariance_covariance
{
public:
  explicit Init_SolidPrimitiveWithCovariance_covariance(::derived_object_msgs::msg::SolidPrimitiveWithCovariance & msg)
  : msg_(msg)
  {}
  ::derived_object_msgs::msg::SolidPrimitiveWithCovariance covariance(::derived_object_msgs::msg::SolidPrimitiveWithCovariance::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::derived_object_msgs::msg::SolidPrimitiveWithCovariance msg_;
};

class Init_SolidPrimitiveWithCovariance_dimensions
{
public:
  explicit Init_SolidPrimitiveWithCovariance_dimensions(::derived_object_msgs::msg::SolidPrimitiveWithCovariance & msg)
  : msg_(msg)
  {}
  Init_SolidPrimitiveWithCovariance_covariance dimensions(::derived_object_msgs::msg::SolidPrimitiveWithCovariance::_dimensions_type arg)
  {
    msg_.dimensions = std::move(arg);
    return Init_SolidPrimitiveWithCovariance_covariance(msg_);
  }

private:
  ::derived_object_msgs::msg::SolidPrimitiveWithCovariance msg_;
};

class Init_SolidPrimitiveWithCovariance_type
{
public:
  Init_SolidPrimitiveWithCovariance_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolidPrimitiveWithCovariance_dimensions type(::derived_object_msgs::msg::SolidPrimitiveWithCovariance::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SolidPrimitiveWithCovariance_dimensions(msg_);
  }

private:
  ::derived_object_msgs::msg::SolidPrimitiveWithCovariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::derived_object_msgs::msg::SolidPrimitiveWithCovariance>()
{
  return derived_object_msgs::msg::builder::Init_SolidPrimitiveWithCovariance_type();
}

}  // namespace derived_object_msgs

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__BUILDER_HPP_
