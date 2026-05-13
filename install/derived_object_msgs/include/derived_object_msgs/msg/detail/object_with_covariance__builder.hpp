// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from derived_object_msgs:msg/ObjectWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__BUILDER_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__BUILDER_HPP_

#include "derived_object_msgs/msg/detail/object_with_covariance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace derived_object_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectWithCovariance_classification_age
{
public:
  explicit Init_ObjectWithCovariance_classification_age(::derived_object_msgs::msg::ObjectWithCovariance & msg)
  : msg_(msg)
  {}
  ::derived_object_msgs::msg::ObjectWithCovariance classification_age(::derived_object_msgs::msg::ObjectWithCovariance::_classification_age_type arg)
  {
    msg_.classification_age = std::move(arg);
    return std::move(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

class Init_ObjectWithCovariance_classification_certainty
{
public:
  explicit Init_ObjectWithCovariance_classification_certainty(::derived_object_msgs::msg::ObjectWithCovariance & msg)
  : msg_(msg)
  {}
  Init_ObjectWithCovariance_classification_age classification_certainty(::derived_object_msgs::msg::ObjectWithCovariance::_classification_certainty_type arg)
  {
    msg_.classification_certainty = std::move(arg);
    return Init_ObjectWithCovariance_classification_age(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

class Init_ObjectWithCovariance_classification
{
public:
  explicit Init_ObjectWithCovariance_classification(::derived_object_msgs::msg::ObjectWithCovariance & msg)
  : msg_(msg)
  {}
  Init_ObjectWithCovariance_classification_certainty classification(::derived_object_msgs::msg::ObjectWithCovariance::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_ObjectWithCovariance_classification_certainty(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

class Init_ObjectWithCovariance_shape
{
public:
  explicit Init_ObjectWithCovariance_shape(::derived_object_msgs::msg::ObjectWithCovariance & msg)
  : msg_(msg)
  {}
  Init_ObjectWithCovariance_classification shape(::derived_object_msgs::msg::ObjectWithCovariance::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_ObjectWithCovariance_classification(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

class Init_ObjectWithCovariance_polygon
{
public:
  explicit Init_ObjectWithCovariance_polygon(::derived_object_msgs::msg::ObjectWithCovariance & msg)
  : msg_(msg)
  {}
  Init_ObjectWithCovariance_shape polygon(::derived_object_msgs::msg::ObjectWithCovariance::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return Init_ObjectWithCovariance_shape(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

class Init_ObjectWithCovariance_accel
{
public:
  explicit Init_ObjectWithCovariance_accel(::derived_object_msgs::msg::ObjectWithCovariance & msg)
  : msg_(msg)
  {}
  Init_ObjectWithCovariance_polygon accel(::derived_object_msgs::msg::ObjectWithCovariance::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_ObjectWithCovariance_polygon(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

class Init_ObjectWithCovariance_twist
{
public:
  explicit Init_ObjectWithCovariance_twist(::derived_object_msgs::msg::ObjectWithCovariance & msg)
  : msg_(msg)
  {}
  Init_ObjectWithCovariance_accel twist(::derived_object_msgs::msg::ObjectWithCovariance::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_ObjectWithCovariance_accel(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

class Init_ObjectWithCovariance_pose
{
public:
  explicit Init_ObjectWithCovariance_pose(::derived_object_msgs::msg::ObjectWithCovariance & msg)
  : msg_(msg)
  {}
  Init_ObjectWithCovariance_twist pose(::derived_object_msgs::msg::ObjectWithCovariance::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ObjectWithCovariance_twist(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

class Init_ObjectWithCovariance_object_classified
{
public:
  explicit Init_ObjectWithCovariance_object_classified(::derived_object_msgs::msg::ObjectWithCovariance & msg)
  : msg_(msg)
  {}
  Init_ObjectWithCovariance_pose object_classified(::derived_object_msgs::msg::ObjectWithCovariance::_object_classified_type arg)
  {
    msg_.object_classified = std::move(arg);
    return Init_ObjectWithCovariance_pose(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

class Init_ObjectWithCovariance_detection_level
{
public:
  explicit Init_ObjectWithCovariance_detection_level(::derived_object_msgs::msg::ObjectWithCovariance & msg)
  : msg_(msg)
  {}
  Init_ObjectWithCovariance_object_classified detection_level(::derived_object_msgs::msg::ObjectWithCovariance::_detection_level_type arg)
  {
    msg_.detection_level = std::move(arg);
    return Init_ObjectWithCovariance_object_classified(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

class Init_ObjectWithCovariance_id
{
public:
  explicit Init_ObjectWithCovariance_id(::derived_object_msgs::msg::ObjectWithCovariance & msg)
  : msg_(msg)
  {}
  Init_ObjectWithCovariance_detection_level id(::derived_object_msgs::msg::ObjectWithCovariance::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ObjectWithCovariance_detection_level(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

class Init_ObjectWithCovariance_header
{
public:
  Init_ObjectWithCovariance_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectWithCovariance_id header(::derived_object_msgs::msg::ObjectWithCovariance::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectWithCovariance_id(msg_);
  }

private:
  ::derived_object_msgs::msg::ObjectWithCovariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::derived_object_msgs::msg::ObjectWithCovariance>()
{
  return derived_object_msgs::msg::builder::Init_ObjectWithCovariance_header();
}

}  // namespace derived_object_msgs

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__BUILDER_HPP_
