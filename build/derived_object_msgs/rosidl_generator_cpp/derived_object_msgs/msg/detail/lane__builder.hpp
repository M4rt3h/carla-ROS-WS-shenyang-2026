// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from derived_object_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_

#include "derived_object_msgs/msg/detail/lane__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace derived_object_msgs
{

namespace msg
{

namespace builder
{

class Init_Lane_view_range
{
public:
  explicit Init_Lane_view_range(::derived_object_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  ::derived_object_msgs::msg::Lane view_range(::derived_object_msgs::msg::Lane::_view_range_type arg)
  {
    msg_.view_range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::derived_object_msgs::msg::Lane msg_;
};

class Init_Lane_marker_width
{
public:
  explicit Init_Lane_marker_width(::derived_object_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_view_range marker_width(::derived_object_msgs::msg::Lane::_marker_width_type arg)
  {
    msg_.marker_width = std::move(arg);
    return Init_Lane_view_range(msg_);
  }

private:
  ::derived_object_msgs::msg::Lane msg_;
};

class Init_Lane_curvature_derivative
{
public:
  explicit Init_Lane_curvature_derivative(::derived_object_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_marker_width curvature_derivative(::derived_object_msgs::msg::Lane::_curvature_derivative_type arg)
  {
    msg_.curvature_derivative = std::move(arg);
    return Init_Lane_marker_width(msg_);
  }

private:
  ::derived_object_msgs::msg::Lane msg_;
};

class Init_Lane_curvature
{
public:
  explicit Init_Lane_curvature(::derived_object_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_curvature_derivative curvature(::derived_object_msgs::msg::Lane::_curvature_type arg)
  {
    msg_.curvature = std::move(arg);
    return Init_Lane_curvature_derivative(msg_);
  }

private:
  ::derived_object_msgs::msg::Lane msg_;
};

class Init_Lane_heading_angle
{
public:
  explicit Init_Lane_heading_angle(::derived_object_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_curvature heading_angle(::derived_object_msgs::msg::Lane::_heading_angle_type arg)
  {
    msg_.heading_angle = std::move(arg);
    return Init_Lane_curvature(msg_);
  }

private:
  ::derived_object_msgs::msg::Lane msg_;
};

class Init_Lane_marker_offset
{
public:
  explicit Init_Lane_marker_offset(::derived_object_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_heading_angle marker_offset(::derived_object_msgs::msg::Lane::_marker_offset_type arg)
  {
    msg_.marker_offset = std::move(arg);
    return Init_Lane_heading_angle(msg_);
  }

private:
  ::derived_object_msgs::msg::Lane msg_;
};

class Init_Lane_curve_model_kind
{
public:
  explicit Init_Lane_curve_model_kind(::derived_object_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_marker_offset curve_model_kind(::derived_object_msgs::msg::Lane::_curve_model_kind_type arg)
  {
    msg_.curve_model_kind = std::move(arg);
    return Init_Lane_marker_offset(msg_);
  }

private:
  ::derived_object_msgs::msg::Lane msg_;
};

class Init_Lane_marker_kind
{
public:
  explicit Init_Lane_marker_kind(::derived_object_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_curve_model_kind marker_kind(::derived_object_msgs::msg::Lane::_marker_kind_type arg)
  {
    msg_.marker_kind = std::move(arg);
    return Init_Lane_curve_model_kind(msg_);
  }

private:
  ::derived_object_msgs::msg::Lane msg_;
};

class Init_Lane_quality
{
public:
  Init_Lane_quality()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lane_marker_kind quality(::derived_object_msgs::msg::Lane::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return Init_Lane_marker_kind(msg_);
  }

private:
  ::derived_object_msgs::msg::Lane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::derived_object_msgs::msg::Lane>()
{
  return derived_object_msgs::msg::builder::Init_Lane_quality();
}

}  // namespace derived_object_msgs

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
