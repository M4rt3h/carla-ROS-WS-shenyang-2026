// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/Size2D.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SIZE2_D__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__SIZE2_D__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/size2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_Size2D_size_y
{
public:
  explicit Init_Size2D_size_y(::ibeo_msgs::msg::Size2D & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::Size2D size_y(::ibeo_msgs::msg::Size2D::_size_y_type arg)
  {
    msg_.size_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::Size2D msg_;
};

class Init_Size2D_size_x
{
public:
  Init_Size2D_size_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Size2D_size_y size_x(::ibeo_msgs::msg::Size2D::_size_x_type arg)
  {
    msg_.size_x = std::move(arg);
    return Init_Size2D_size_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Size2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::Size2D>()
{
  return ibeo_msgs::msg::builder::Init_Size2D_size_x();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SIZE2_D__BUILDER_HPP_
