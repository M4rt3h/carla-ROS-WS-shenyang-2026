// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ResolutionInfo.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__RESOLUTION_INFO__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__RESOLUTION_INFO__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/resolution_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ResolutionInfo_resolution
{
public:
  explicit Init_ResolutionInfo_resolution(::ibeo_msgs::msg::ResolutionInfo & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ResolutionInfo resolution(::ibeo_msgs::msg::ResolutionInfo::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ResolutionInfo msg_;
};

class Init_ResolutionInfo_resolution_start_angle
{
public:
  Init_ResolutionInfo_resolution_start_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResolutionInfo_resolution resolution_start_angle(::ibeo_msgs::msg::ResolutionInfo::_resolution_start_angle_type arg)
  {
    msg_.resolution_start_angle = std::move(arg);
    return Init_ResolutionInfo_resolution(msg_);
  }

private:
  ::ibeo_msgs::msg::ResolutionInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ResolutionInfo>()
{
  return ibeo_msgs::msg::builder::Init_ResolutionInfo_resolution_start_angle();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__RESOLUTION_INFO__BUILDER_HPP_
