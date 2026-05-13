// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from derived_object_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include "derived_object_msgs/msg/detail/object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace derived_object_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_classification_age
{
public:
  explicit Init_Object_classification_age(::derived_object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::derived_object_msgs::msg::Object classification_age(::derived_object_msgs::msg::Object::_classification_age_type arg)
  {
    msg_.classification_age = std::move(arg);
    return std::move(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

class Init_Object_classification_certainty
{
public:
  explicit Init_Object_classification_certainty(::derived_object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_classification_age classification_certainty(::derived_object_msgs::msg::Object::_classification_certainty_type arg)
  {
    msg_.classification_certainty = std::move(arg);
    return Init_Object_classification_age(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

class Init_Object_classification
{
public:
  explicit Init_Object_classification(::derived_object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_classification_certainty classification(::derived_object_msgs::msg::Object::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_Object_classification_certainty(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

class Init_Object_shape
{
public:
  explicit Init_Object_shape(::derived_object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_classification shape(::derived_object_msgs::msg::Object::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_Object_classification(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

class Init_Object_polygon
{
public:
  explicit Init_Object_polygon(::derived_object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_shape polygon(::derived_object_msgs::msg::Object::_polygon_type arg)
  {
    msg_.polygon = std::move(arg);
    return Init_Object_shape(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

class Init_Object_accel
{
public:
  explicit Init_Object_accel(::derived_object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_polygon accel(::derived_object_msgs::msg::Object::_accel_type arg)
  {
    msg_.accel = std::move(arg);
    return Init_Object_polygon(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

class Init_Object_twist
{
public:
  explicit Init_Object_twist(::derived_object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_accel twist(::derived_object_msgs::msg::Object::_twist_type arg)
  {
    msg_.twist = std::move(arg);
    return Init_Object_accel(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

class Init_Object_pose
{
public:
  explicit Init_Object_pose(::derived_object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_twist pose(::derived_object_msgs::msg::Object::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Object_twist(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

class Init_Object_object_classified
{
public:
  explicit Init_Object_object_classified(::derived_object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_pose object_classified(::derived_object_msgs::msg::Object::_object_classified_type arg)
  {
    msg_.object_classified = std::move(arg);
    return Init_Object_pose(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

class Init_Object_detection_level
{
public:
  explicit Init_Object_detection_level(::derived_object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_object_classified detection_level(::derived_object_msgs::msg::Object::_detection_level_type arg)
  {
    msg_.detection_level = std::move(arg);
    return Init_Object_object_classified(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

class Init_Object_id
{
public:
  explicit Init_Object_id(::derived_object_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_detection_level id(::derived_object_msgs::msg::Object::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object_detection_level(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

class Init_Object_header
{
public:
  Init_Object_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_id header(::derived_object_msgs::msg::Object::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Object_id(msg_);
  }

private:
  ::derived_object_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::derived_object_msgs::msg::Object>()
{
  return derived_object_msgs::msg::builder::Init_Object_header();
}

}  // namespace derived_object_msgs

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
