// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/Tsr.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/tsr__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_Tsr_filter_type
{
public:
  explicit Init_Tsr_filter_type(::mobileye_560_660_msgs::msg::Tsr & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::Tsr filter_type(::mobileye_560_660_msgs::msg::Tsr::_filter_type_type arg)
  {
    msg_.filter_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Tsr msg_;
};

class Init_Tsr_sign_position_z
{
public:
  explicit Init_Tsr_sign_position_z(::mobileye_560_660_msgs::msg::Tsr & msg)
  : msg_(msg)
  {}
  Init_Tsr_filter_type sign_position_z(::mobileye_560_660_msgs::msg::Tsr::_sign_position_z_type arg)
  {
    msg_.sign_position_z = std::move(arg);
    return Init_Tsr_filter_type(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Tsr msg_;
};

class Init_Tsr_sign_position_y
{
public:
  explicit Init_Tsr_sign_position_y(::mobileye_560_660_msgs::msg::Tsr & msg)
  : msg_(msg)
  {}
  Init_Tsr_sign_position_z sign_position_y(::mobileye_560_660_msgs::msg::Tsr::_sign_position_y_type arg)
  {
    msg_.sign_position_y = std::move(arg);
    return Init_Tsr_sign_position_z(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Tsr msg_;
};

class Init_Tsr_sign_position_x
{
public:
  explicit Init_Tsr_sign_position_x(::mobileye_560_660_msgs::msg::Tsr & msg)
  : msg_(msg)
  {}
  Init_Tsr_sign_position_y sign_position_x(::mobileye_560_660_msgs::msg::Tsr::_sign_position_x_type arg)
  {
    msg_.sign_position_x = std::move(arg);
    return Init_Tsr_sign_position_y(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Tsr msg_;
};

class Init_Tsr_vision_only_supplementary_sign_type
{
public:
  explicit Init_Tsr_vision_only_supplementary_sign_type(::mobileye_560_660_msgs::msg::Tsr & msg)
  : msg_(msg)
  {}
  Init_Tsr_sign_position_x vision_only_supplementary_sign_type(::mobileye_560_660_msgs::msg::Tsr::_vision_only_supplementary_sign_type_type arg)
  {
    msg_.vision_only_supplementary_sign_type = std::move(arg);
    return Init_Tsr_sign_position_x(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Tsr msg_;
};

class Init_Tsr_vision_only_sign_type
{
public:
  explicit Init_Tsr_vision_only_sign_type(::mobileye_560_660_msgs::msg::Tsr & msg)
  : msg_(msg)
  {}
  Init_Tsr_vision_only_supplementary_sign_type vision_only_sign_type(::mobileye_560_660_msgs::msg::Tsr::_vision_only_sign_type_type arg)
  {
    msg_.vision_only_sign_type = std::move(arg);
    return Init_Tsr_vision_only_supplementary_sign_type(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Tsr msg_;
};

class Init_Tsr_header
{
public:
  Init_Tsr_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tsr_vision_only_sign_type header(::mobileye_560_660_msgs::msg::Tsr::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Tsr_vision_only_sign_type(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::Tsr msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::Tsr>()
{
  return mobileye_560_660_msgs::msg::builder::Init_Tsr_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR__BUILDER_HPP_
