// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/LkaNumOfNextLaneMarkersReported.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_NUM_OF_NEXT_LANE_MARKERS_REPORTED__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_NUM_OF_NEXT_LANE_MARKERS_REPORTED__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/lka_num_of_next_lane_markers_reported__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_LkaNumOfNextLaneMarkersReported_num_of_next_lane_markers_reported
{
public:
  explicit Init_LkaNumOfNextLaneMarkersReported_num_of_next_lane_markers_reported(::mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported num_of_next_lane_markers_reported(::mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported::_num_of_next_lane_markers_reported_type arg)
  {
    msg_.num_of_next_lane_markers_reported = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported msg_;
};

class Init_LkaNumOfNextLaneMarkersReported_header
{
public:
  Init_LkaNumOfNextLaneMarkersReported_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LkaNumOfNextLaneMarkersReported_num_of_next_lane_markers_reported header(::mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LkaNumOfNextLaneMarkersReported_num_of_next_lane_markers_reported(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported>()
{
  return mobileye_560_660_msgs::msg::builder::Init_LkaNumOfNextLaneMarkersReported_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_NUM_OF_NEXT_LANE_MARKERS_REPORTED__BUILDER_HPP_
