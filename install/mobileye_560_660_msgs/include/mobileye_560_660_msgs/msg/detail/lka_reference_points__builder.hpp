// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/LkaReferencePoints.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/lka_reference_points__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_LkaReferencePoints_ref_point_2_validity
{
public:
  explicit Init_LkaReferencePoints_ref_point_2_validity(::mobileye_560_660_msgs::msg::LkaReferencePoints & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::LkaReferencePoints ref_point_2_validity(::mobileye_560_660_msgs::msg::LkaReferencePoints::_ref_point_2_validity_type arg)
  {
    msg_.ref_point_2_validity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaReferencePoints msg_;
};

class Init_LkaReferencePoints_ref_point_2_distance
{
public:
  explicit Init_LkaReferencePoints_ref_point_2_distance(::mobileye_560_660_msgs::msg::LkaReferencePoints & msg)
  : msg_(msg)
  {}
  Init_LkaReferencePoints_ref_point_2_validity ref_point_2_distance(::mobileye_560_660_msgs::msg::LkaReferencePoints::_ref_point_2_distance_type arg)
  {
    msg_.ref_point_2_distance = std::move(arg);
    return Init_LkaReferencePoints_ref_point_2_validity(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaReferencePoints msg_;
};

class Init_LkaReferencePoints_ref_point_2_position
{
public:
  explicit Init_LkaReferencePoints_ref_point_2_position(::mobileye_560_660_msgs::msg::LkaReferencePoints & msg)
  : msg_(msg)
  {}
  Init_LkaReferencePoints_ref_point_2_distance ref_point_2_position(::mobileye_560_660_msgs::msg::LkaReferencePoints::_ref_point_2_position_type arg)
  {
    msg_.ref_point_2_position = std::move(arg);
    return Init_LkaReferencePoints_ref_point_2_distance(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaReferencePoints msg_;
};

class Init_LkaReferencePoints_ref_point_1_validity
{
public:
  explicit Init_LkaReferencePoints_ref_point_1_validity(::mobileye_560_660_msgs::msg::LkaReferencePoints & msg)
  : msg_(msg)
  {}
  Init_LkaReferencePoints_ref_point_2_position ref_point_1_validity(::mobileye_560_660_msgs::msg::LkaReferencePoints::_ref_point_1_validity_type arg)
  {
    msg_.ref_point_1_validity = std::move(arg);
    return Init_LkaReferencePoints_ref_point_2_position(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaReferencePoints msg_;
};

class Init_LkaReferencePoints_ref_point_1_distance
{
public:
  explicit Init_LkaReferencePoints_ref_point_1_distance(::mobileye_560_660_msgs::msg::LkaReferencePoints & msg)
  : msg_(msg)
  {}
  Init_LkaReferencePoints_ref_point_1_validity ref_point_1_distance(::mobileye_560_660_msgs::msg::LkaReferencePoints::_ref_point_1_distance_type arg)
  {
    msg_.ref_point_1_distance = std::move(arg);
    return Init_LkaReferencePoints_ref_point_1_validity(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaReferencePoints msg_;
};

class Init_LkaReferencePoints_ref_point_1_position
{
public:
  explicit Init_LkaReferencePoints_ref_point_1_position(::mobileye_560_660_msgs::msg::LkaReferencePoints & msg)
  : msg_(msg)
  {}
  Init_LkaReferencePoints_ref_point_1_distance ref_point_1_position(::mobileye_560_660_msgs::msg::LkaReferencePoints::_ref_point_1_position_type arg)
  {
    msg_.ref_point_1_position = std::move(arg);
    return Init_LkaReferencePoints_ref_point_1_distance(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaReferencePoints msg_;
};

class Init_LkaReferencePoints_header
{
public:
  Init_LkaReferencePoints_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LkaReferencePoints_ref_point_1_position header(::mobileye_560_660_msgs::msg::LkaReferencePoints::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LkaReferencePoints_ref_point_1_position(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::LkaReferencePoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::LkaReferencePoints>()
{
  return mobileye_560_660_msgs::msg::builder::Init_LkaReferencePoints_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_REFERENCE_POINTS__BUILDER_HPP_
