// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/lane__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_Lane_left_ldw_availability
{
public:
  explicit Init_Lane_left_ldw_availability(::mobileye_560_660_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::Lane left_ldw_availability(::mobileye_560_660_msgs::msg::Lane::_left_ldw_availability_type arg)
  {
    msg_.left_ldw_availability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Lane msg_;
};

class Init_Lane_right_ldw_availability
{
public:
  explicit Init_Lane_right_ldw_availability(::mobileye_560_660_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_left_ldw_availability right_ldw_availability(::mobileye_560_660_msgs::msg::Lane::_right_ldw_availability_type arg)
  {
    msg_.right_ldw_availability = std::move(arg);
    return Init_Lane_left_ldw_availability(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Lane msg_;
};

class Init_Lane_yaw_angle
{
public:
  explicit Init_Lane_yaw_angle(::mobileye_560_660_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_right_ldw_availability yaw_angle(::mobileye_560_660_msgs::msg::Lane::_yaw_angle_type arg)
  {
    msg_.yaw_angle = std::move(arg);
    return Init_Lane_right_ldw_availability(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Lane msg_;
};

class Init_Lane_pitch_angle
{
public:
  explicit Init_Lane_pitch_angle(::mobileye_560_660_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_yaw_angle pitch_angle(::mobileye_560_660_msgs::msg::Lane::_pitch_angle_type arg)
  {
    msg_.pitch_angle = std::move(arg);
    return Init_Lane_yaw_angle(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Lane msg_;
};

class Init_Lane_construction_area
{
public:
  explicit Init_Lane_construction_area(::mobileye_560_660_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_pitch_angle construction_area(::mobileye_560_660_msgs::msg::Lane::_construction_area_type arg)
  {
    msg_.construction_area = std::move(arg);
    return Init_Lane_pitch_angle(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Lane msg_;
};

class Init_Lane_lane_heading
{
public:
  explicit Init_Lane_lane_heading(::mobileye_560_660_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_construction_area lane_heading(::mobileye_560_660_msgs::msg::Lane::_lane_heading_type arg)
  {
    msg_.lane_heading = std::move(arg);
    return Init_Lane_construction_area(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Lane msg_;
};

class Init_Lane_lane_curvature
{
public:
  explicit Init_Lane_lane_curvature(::mobileye_560_660_msgs::msg::Lane & msg)
  : msg_(msg)
  {}
  Init_Lane_lane_heading lane_curvature(::mobileye_560_660_msgs::msg::Lane::_lane_curvature_type arg)
  {
    msg_.lane_curvature = std::move(arg);
    return Init_Lane_lane_heading(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Lane msg_;
};

class Init_Lane_header
{
public:
  Init_Lane_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lane_lane_curvature header(::mobileye_560_660_msgs::msg::Lane::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Lane_lane_curvature(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Lane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::Lane>()
{
  return mobileye_560_660_msgs::msg::builder::Init_Lane_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__BUILDER_HPP_
