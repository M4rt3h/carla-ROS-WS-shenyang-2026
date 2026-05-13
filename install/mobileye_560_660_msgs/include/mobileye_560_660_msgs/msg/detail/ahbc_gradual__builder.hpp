// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/AhbcGradual.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/ahbc_gradual__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_AhbcGradual_busy_scene
{
public:
  explicit Init_AhbcGradual_busy_scene(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::AhbcGradual busy_scene(::mobileye_560_660_msgs::msg::AhbcGradual::_busy_scene_type arg)
  {
    msg_.busy_scene = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_too_many_cars
{
public:
  explicit Init_AhbcGradual_too_many_cars(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  Init_AhbcGradual_busy_scene too_many_cars(::mobileye_560_660_msgs::msg::AhbcGradual::_too_many_cars_type arg)
  {
    msg_.too_many_cars = std::move(arg);
    return Init_AhbcGradual_busy_scene(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_right_target_change
{
public:
  explicit Init_AhbcGradual_right_target_change(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  Init_AhbcGradual_too_many_cars right_target_change(::mobileye_560_660_msgs::msg::AhbcGradual::_right_target_change_type arg)
  {
    msg_.right_target_change = std::move(arg);
    return Init_AhbcGradual_too_many_cars(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_left_target_change
{
public:
  explicit Init_AhbcGradual_left_target_change(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  Init_AhbcGradual_right_target_change left_target_change(::mobileye_560_660_msgs::msg::AhbcGradual::_left_target_change_type arg)
  {
    msg_.left_target_change = std::move(arg);
    return Init_AhbcGradual_right_target_change(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_status_object_distance_hlb
{
public:
  explicit Init_AhbcGradual_status_object_distance_hlb(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  Init_AhbcGradual_left_target_change status_object_distance_hlb(::mobileye_560_660_msgs::msg::AhbcGradual::_status_object_distance_hlb_type arg)
  {
    msg_.status_object_distance_hlb = std::move(arg);
    return Init_AhbcGradual_left_target_change(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_status_boundary_domain_non_glare_right_hand_hlb
{
public:
  explicit Init_AhbcGradual_status_boundary_domain_non_glare_right_hand_hlb(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  Init_AhbcGradual_status_object_distance_hlb status_boundary_domain_non_glare_right_hand_hlb(::mobileye_560_660_msgs::msg::AhbcGradual::_status_boundary_domain_non_glare_right_hand_hlb_type arg)
  {
    msg_.status_boundary_domain_non_glare_right_hand_hlb = std::move(arg);
    return Init_AhbcGradual_status_object_distance_hlb(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_status_boundary_domain_non_glare_left_hand_hlb
{
public:
  explicit Init_AhbcGradual_status_boundary_domain_non_glare_left_hand_hlb(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  Init_AhbcGradual_status_boundary_domain_non_glare_right_hand_hlb status_boundary_domain_non_glare_left_hand_hlb(::mobileye_560_660_msgs::msg::AhbcGradual::_status_boundary_domain_non_glare_left_hand_hlb_type arg)
  {
    msg_.status_boundary_domain_non_glare_left_hand_hlb = std::move(arg);
    return Init_AhbcGradual_status_boundary_domain_non_glare_right_hand_hlb(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_status_boundary_domain_bottom_non_glare_hlb
{
public:
  explicit Init_AhbcGradual_status_boundary_domain_bottom_non_glare_hlb(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  Init_AhbcGradual_status_boundary_domain_non_glare_left_hand_hlb status_boundary_domain_bottom_non_glare_hlb(::mobileye_560_660_msgs::msg::AhbcGradual::_status_boundary_domain_bottom_non_glare_hlb_type arg)
  {
    msg_.status_boundary_domain_bottom_non_glare_hlb = std::move(arg);
    return Init_AhbcGradual_status_boundary_domain_non_glare_left_hand_hlb(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_object_distance_hlb
{
public:
  explicit Init_AhbcGradual_object_distance_hlb(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  Init_AhbcGradual_status_boundary_domain_bottom_non_glare_hlb object_distance_hlb(::mobileye_560_660_msgs::msg::AhbcGradual::_object_distance_hlb_type arg)
  {
    msg_.object_distance_hlb = std::move(arg);
    return Init_AhbcGradual_status_boundary_domain_bottom_non_glare_hlb(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_boundary_domain_non_glare_right_hand_hlb
{
public:
  explicit Init_AhbcGradual_boundary_domain_non_glare_right_hand_hlb(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  Init_AhbcGradual_object_distance_hlb boundary_domain_non_glare_right_hand_hlb(::mobileye_560_660_msgs::msg::AhbcGradual::_boundary_domain_non_glare_right_hand_hlb_type arg)
  {
    msg_.boundary_domain_non_glare_right_hand_hlb = std::move(arg);
    return Init_AhbcGradual_object_distance_hlb(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_boundary_domain_non_glare_left_hand_hlb
{
public:
  explicit Init_AhbcGradual_boundary_domain_non_glare_left_hand_hlb(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  Init_AhbcGradual_boundary_domain_non_glare_right_hand_hlb boundary_domain_non_glare_left_hand_hlb(::mobileye_560_660_msgs::msg::AhbcGradual::_boundary_domain_non_glare_left_hand_hlb_type arg)
  {
    msg_.boundary_domain_non_glare_left_hand_hlb = std::move(arg);
    return Init_AhbcGradual_boundary_domain_non_glare_right_hand_hlb(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_boundary_domain_bottom_non_glare_hlb
{
public:
  explicit Init_AhbcGradual_boundary_domain_bottom_non_glare_hlb(::mobileye_560_660_msgs::msg::AhbcGradual & msg)
  : msg_(msg)
  {}
  Init_AhbcGradual_boundary_domain_non_glare_left_hand_hlb boundary_domain_bottom_non_glare_hlb(::mobileye_560_660_msgs::msg::AhbcGradual::_boundary_domain_bottom_non_glare_hlb_type arg)
  {
    msg_.boundary_domain_bottom_non_glare_hlb = std::move(arg);
    return Init_AhbcGradual_boundary_domain_non_glare_left_hand_hlb(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

class Init_AhbcGradual_header
{
public:
  Init_AhbcGradual_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AhbcGradual_boundary_domain_bottom_non_glare_hlb header(::mobileye_560_660_msgs::msg::AhbcGradual::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AhbcGradual_boundary_domain_bottom_non_glare_hlb(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AhbcGradual msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::AhbcGradual>()
{
  return mobileye_560_660_msgs::msg::builder::Init_AhbcGradual_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__BUILDER_HPP_
