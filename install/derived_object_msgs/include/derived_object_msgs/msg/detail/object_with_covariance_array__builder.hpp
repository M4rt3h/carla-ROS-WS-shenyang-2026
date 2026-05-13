// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from derived_object_msgs:msg/ObjectWithCovarianceArray.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE_ARRAY__BUILDER_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE_ARRAY__BUILDER_HPP_

#include "derived_object_msgs/msg/detail/object_with_covariance_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace derived_object_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectWithCovarianceArray_objects
{
public:
  explicit Init_ObjectWithCovarianceArray_objects(::derived_object_msgs::msg::ObjectWithCovarianceArray & msg)
  : msg_(msg)
  {}
  ::derived_object_msgs::msg::ObjectWithCovarianceArray objects(::derived_object_msgs::msg::ObjectWithCovarianceArray::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovarianceArray msg_;
};

class Init_ObjectWithCovarianceArray_header
{
public:
  Init_ObjectWithCovarianceArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectWithCovarianceArray_objects header(::derived_object_msgs::msg::ObjectWithCovarianceArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectWithCovarianceArray_objects(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovarianceArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::derived_object_msgs::msg::ObjectWithCovarianceArray>()
{
  return derived_object_msgs::msg::builder::Init_ObjectWithCovarianceArray_header();
}

}  // namespace derived_object_msgs

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE_ARRAY__BUILDER_HPP_
