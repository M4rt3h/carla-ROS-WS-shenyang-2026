// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/AftermarketLane.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AFTERMARKET_LANE__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AFTERMARKET_LANE__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/aftermarket_lane__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_AftermarketLane_distance_to_right_lane
{
public:
  explicit Init_AftermarketLane_distance_to_right_lane(::mobileye_560_660_msgs::msg::AftermarketLane & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::AftermarketLane distance_to_right_lane(::mobileye_560_660_msgs::msg::AftermarketLane::_distance_to_right_lane_type arg)
  {
    msg_.distance_to_right_lane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AftermarketLane msg_;
};

class Init_AftermarketLane_lane_type_right
{
public:
  explicit Init_AftermarketLane_lane_type_right(::mobileye_560_660_msgs::msg::AftermarketLane & msg)
  : msg_(msg)
  {}
  Init_AftermarketLane_distance_to_right_lane lane_type_right(::mobileye_560_660_msgs::msg::AftermarketLane::_lane_type_right_type arg)
  {
    msg_.lane_type_right = std::move(arg);
    return Init_AftermarketLane_distance_to_right_lane(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AftermarketLane msg_;
};

class Init_AftermarketLane_ldw_available_right
{
public:
  explicit Init_AftermarketLane_ldw_available_right(::mobileye_560_660_msgs::msg::AftermarketLane & msg)
  : msg_(msg)
  {}
  Init_AftermarketLane_lane_type_right ldw_available_right(::mobileye_560_660_msgs::msg::AftermarketLane::_ldw_available_right_type arg)
  {
    msg_.ldw_available_right = std::move(arg);
    return Init_AftermarketLane_lane_type_right(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AftermarketLane msg_;
};

class Init_AftermarketLane_lane_confidence_right
{
public:
  explicit Init_AftermarketLane_lane_confidence_right(::mobileye_560_660_msgs::msg::AftermarketLane & msg)
  : msg_(msg)
  {}
  Init_AftermarketLane_ldw_available_right lane_confidence_right(::mobileye_560_660_msgs::msg::AftermarketLane::_lane_confidence_right_type arg)
  {
    msg_.lane_confidence_right = std::move(arg);
    return Init_AftermarketLane_ldw_available_right(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AftermarketLane msg_;
};

class Init_AftermarketLane_distance_to_left_lane
{
public:
  explicit Init_AftermarketLane_distance_to_left_lane(::mobileye_560_660_msgs::msg::AftermarketLane & msg)
  : msg_(msg)
  {}
  Init_AftermarketLane_lane_confidence_right distance_to_left_lane(::mobileye_560_660_msgs::msg::AftermarketLane::_distance_to_left_lane_type arg)
  {
    msg_.distance_to_left_lane = std::move(arg);
    return Init_AftermarketLane_lane_confidence_right(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AftermarketLane msg_;
};

class Init_AftermarketLane_lane_type_left
{
public:
  explicit Init_AftermarketLane_lane_type_left(::mobileye_560_660_msgs::msg::AftermarketLane & msg)
  : msg_(msg)
  {}
  Init_AftermarketLane_distance_to_left_lane lane_type_left(::mobileye_560_660_msgs::msg::AftermarketLane::_lane_type_left_type arg)
  {
    msg_.lane_type_left = std::move(arg);
    return Init_AftermarketLane_distance_to_left_lane(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AftermarketLane msg_;
};

class Init_AftermarketLane_ldw_available_left
{
public:
  explicit Init_AftermarketLane_ldw_available_left(::mobileye_560_660_msgs::msg::AftermarketLane & msg)
  : msg_(msg)
  {}
  Init_AftermarketLane_lane_type_left ldw_available_left(::mobileye_560_660_msgs::msg::AftermarketLane::_ldw_available_left_type arg)
  {
    msg_.ldw_available_left = std::move(arg);
    return Init_AftermarketLane_lane_type_left(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AftermarketLane msg_;
};

class Init_AftermarketLane_lane_confidence_left
{
public:
  explicit Init_AftermarketLane_lane_confidence_left(::mobileye_560_660_msgs::msg::AftermarketLane & msg)
  : msg_(msg)
  {}
  Init_AftermarketLane_ldw_available_left lane_confidence_left(::mobileye_560_660_msgs::msg::AftermarketLane::_lane_confidence_left_type arg)
  {
    msg_.lane_confidence_left = std::move(arg);
    return Init_AftermarketLane_ldw_available_left(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AftermarketLane msg_;
};

class Init_AftermarketLane_header
{
public:
  Init_AftermarketLane_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AftermarketLane_lane_confidence_left header(::mobileye_560_660_msgs::msg::AftermarketLane::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AftermarketLane_lane_confidence_left(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AftermarketLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::AftermarketLane>()
{
  return mobileye_560_660_msgs::msg::builder::Init_AftermarketLane_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AFTERMARKET_LANE__BUILDER_HPP_
