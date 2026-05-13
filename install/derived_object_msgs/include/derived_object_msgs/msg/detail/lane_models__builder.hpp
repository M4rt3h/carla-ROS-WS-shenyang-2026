// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from derived_object_msgs:msg/LaneModels.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__BUILDER_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__BUILDER_HPP_

#include "derived_object_msgs/msg/detail/lane_models__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace derived_object_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneModels_additional_lanes
{
public:
  explicit Init_LaneModels_additional_lanes(::derived_object_msgs::msg::LaneModels & msg)
  : msg_(msg)
  {}
  ::derived_object_msgs::msg::LaneModels additional_lanes(::derived_object_msgs::msg::LaneModels::_additional_lanes_type arg)
  {
    msg_.additional_lanes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::derived_object_msgs::msg::LaneModels msg_;
};

class Init_LaneModels_right_lane
{
public:
  explicit Init_LaneModels_right_lane(::derived_object_msgs::msg::LaneModels & msg)
  : msg_(msg)
  {}
  Init_LaneModels_additional_lanes right_lane(::derived_object_msgs::msg::LaneModels::_right_lane_type arg)
  {
    msg_.right_lane = std::move(arg);
    return Init_LaneModels_additional_lanes(msg_);
  }

private:
  ::derived_object_msgs::msg::LaneModels msg_;
};

class Init_LaneModels_left_lane
{
public:
  explicit Init_LaneModels_left_lane(::derived_object_msgs::msg::LaneModels & msg)
  : msg_(msg)
  {}
  Init_LaneModels_right_lane left_lane(::derived_object_msgs::msg::LaneModels::_left_lane_type arg)
  {
    msg_.left_lane = std::move(arg);
    return Init_LaneModels_right_lane(msg_);
  }

private:
  ::derived_object_msgs::msg::LaneModels msg_;
};

class Init_LaneModels_header
{
public:
  Init_LaneModels_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneModels_left_lane header(::derived_object_msgs::msg::LaneModels::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaneModels_left_lane(msg_);
  }

private:
  ::derived_object_msgs::msg::LaneModels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::derived_object_msgs::msg::LaneModels>()
{
  return derived_object_msgs::msg::builder::Init_LaneModels_header();
}

}  // namespace derived_object_msgs

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__BUILDER_HPP_
