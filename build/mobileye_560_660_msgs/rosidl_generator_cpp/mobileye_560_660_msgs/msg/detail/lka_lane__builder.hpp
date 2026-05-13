// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/LkaLane.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/lka_lane__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_LkaLane_view_range_availability
{
public:
  explicit Init_LkaLane_view_range_availability(::mobileye_560_660_msgs::msg::LkaLane & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::LkaLane view_range_availability(::mobileye_560_660_msgs::msg::LkaLane::_view_range_availability_type arg)
  {
    msg_.view_range_availability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaLane msg_;
};

class Init_LkaLane_view_range
{
public:
  explicit Init_LkaLane_view_range(::mobileye_560_660_msgs::msg::LkaLane & msg)
  : msg_(msg)
  {}
  Init_LkaLane_view_range_availability view_range(::mobileye_560_660_msgs::msg::LkaLane::_view_range_type arg)
  {
    msg_.view_range = std::move(arg);
    return Init_LkaLane_view_range_availability(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaLane msg_;
};

class Init_LkaLane_heading_angle_parameter_c1
{
public:
  explicit Init_LkaLane_heading_angle_parameter_c1(::mobileye_560_660_msgs::msg::LkaLane & msg)
  : msg_(msg)
  {}
  Init_LkaLane_view_range heading_angle_parameter_c1(::mobileye_560_660_msgs::msg::LkaLane::_heading_angle_parameter_c1_type arg)
  {
    msg_.heading_angle_parameter_c1 = std::move(arg);
    return Init_LkaLane_view_range(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaLane msg_;
};

class Init_LkaLane_marking_width
{
public:
  explicit Init_LkaLane_marking_width(::mobileye_560_660_msgs::msg::LkaLane & msg)
  : msg_(msg)
  {}
  Init_LkaLane_heading_angle_parameter_c1 marking_width(::mobileye_560_660_msgs::msg::LkaLane::_marking_width_type arg)
  {
    msg_.marking_width = std::move(arg);
    return Init_LkaLane_heading_angle_parameter_c1(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaLane msg_;
};

class Init_LkaLane_curvature_derivative_parameter_c3
{
public:
  explicit Init_LkaLane_curvature_derivative_parameter_c3(::mobileye_560_660_msgs::msg::LkaLane & msg)
  : msg_(msg)
  {}
  Init_LkaLane_marking_width curvature_derivative_parameter_c3(::mobileye_560_660_msgs::msg::LkaLane::_curvature_derivative_parameter_c3_type arg)
  {
    msg_.curvature_derivative_parameter_c3 = std::move(arg);
    return Init_LkaLane_marking_width(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaLane msg_;
};

class Init_LkaLane_curvature_parameter_c2
{
public:
  explicit Init_LkaLane_curvature_parameter_c2(::mobileye_560_660_msgs::msg::LkaLane & msg)
  : msg_(msg)
  {}
  Init_LkaLane_curvature_derivative_parameter_c3 curvature_parameter_c2(::mobileye_560_660_msgs::msg::LkaLane::_curvature_parameter_c2_type arg)
  {
    msg_.curvature_parameter_c2 = std::move(arg);
    return Init_LkaLane_curvature_derivative_parameter_c3(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaLane msg_;
};

class Init_LkaLane_position_parameter_c0
{
public:
  explicit Init_LkaLane_position_parameter_c0(::mobileye_560_660_msgs::msg::LkaLane & msg)
  : msg_(msg)
  {}
  Init_LkaLane_curvature_parameter_c2 position_parameter_c0(::mobileye_560_660_msgs::msg::LkaLane::_position_parameter_c0_type arg)
  {
    msg_.position_parameter_c0 = std::move(arg);
    return Init_LkaLane_curvature_parameter_c2(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaLane msg_;
};

class Init_LkaLane_model_degree
{
public:
  explicit Init_LkaLane_model_degree(::mobileye_560_660_msgs::msg::LkaLane & msg)
  : msg_(msg)
  {}
  Init_LkaLane_position_parameter_c0 model_degree(::mobileye_560_660_msgs::msg::LkaLane::_model_degree_type arg)
  {
    msg_.model_degree = std::move(arg);
    return Init_LkaLane_position_parameter_c0(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaLane msg_;
};

class Init_LkaLane_quality
{
public:
  explicit Init_LkaLane_quality(::mobileye_560_660_msgs::msg::LkaLane & msg)
  : msg_(msg)
  {}
  Init_LkaLane_model_degree quality(::mobileye_560_660_msgs::msg::LkaLane::_quality_type arg)
  {
    msg_.quality = std::move(arg);
    return Init_LkaLane_model_degree(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaLane msg_;
};

class Init_LkaLane_lane_type
{
public:
  explicit Init_LkaLane_lane_type(::mobileye_560_660_msgs::msg::LkaLane & msg)
  : msg_(msg)
  {}
  Init_LkaLane_quality lane_type(::mobileye_560_660_msgs::msg::LkaLane::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return Init_LkaLane_quality(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaLane msg_;
};

class Init_LkaLane_header
{
public:
  Init_LkaLane_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LkaLane_lane_type header(::mobileye_560_660_msgs::msg::LkaLane::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LkaLane_lane_type(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::LkaLane>()
{
  return mobileye_560_660_msgs::msg::builder::Init_LkaLane_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__BUILDER_HPP_
