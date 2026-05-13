// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/Object2271.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2271__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2271__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/object2271__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_Object2271_untracked_properties
{
public:
  explicit Init_Object2271_untracked_properties(::ibeo_msgs::msg::Object2271 & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::Object2271 untracked_properties(::ibeo_msgs::msg::Object2271::_untracked_properties_type arg)
  {
    msg_.untracked_properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2271 msg_;
};

class Init_Object2271_tracked_properties
{
public:
  explicit Init_Object2271_tracked_properties(::ibeo_msgs::msg::Object2271 & msg)
  : msg_(msg)
  {}
  Init_Object2271_untracked_properties tracked_properties(::ibeo_msgs::msg::Object2271::_tracked_properties_type arg)
  {
    msg_.tracked_properties = std::move(arg);
    return Init_Object2271_untracked_properties(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2271 msg_;
};

class Init_Object2271_untracked_properties_available
{
public:
  explicit Init_Object2271_untracked_properties_available(::ibeo_msgs::msg::Object2271 & msg)
  : msg_(msg)
  {}
  Init_Object2271_tracked_properties untracked_properties_available(::ibeo_msgs::msg::Object2271::_untracked_properties_available_type arg)
  {
    msg_.untracked_properties_available = std::move(arg);
    return Init_Object2271_tracked_properties(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2271 msg_;
};

class Init_Object2271_tracked_properties_available
{
public:
  explicit Init_Object2271_tracked_properties_available(::ibeo_msgs::msg::Object2271 & msg)
  : msg_(msg)
  {}
  Init_Object2271_untracked_properties_available tracked_properties_available(::ibeo_msgs::msg::Object2271::_tracked_properties_available_type arg)
  {
    msg_.tracked_properties_available = std::move(arg);
    return Init_Object2271_untracked_properties_available(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2271 msg_;
};

class Init_Object2271_id
{
public:
  Init_Object2271_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object2271_tracked_properties_available id(::ibeo_msgs::msg::Object2271::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object2271_tracked_properties_available(msg_);
  }

private:
  ::ibeo_msgs::msg::Object2271 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::Object2271>()
{
  return ibeo_msgs::msg::builder::Init_Object2271_id();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2271__BUILDER_HPP_
