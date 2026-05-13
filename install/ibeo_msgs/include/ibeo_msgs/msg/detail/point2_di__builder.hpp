// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/Point2Di.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__POINT2_DI__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__POINT2_DI__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/point2_di__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_Point2Di_y
{
public:
  explicit Init_Point2Di_y(::ibeo_msgs::msg::Point2Di & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::Point2Di y(::ibeo_msgs::msg::Point2Di::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::Point2Di msg_;
};

class Init_Point2Di_x
{
public:
  Init_Point2Di_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point2Di_y x(::ibeo_msgs::msg::Point2Di::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point2Di_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Point2Di msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::Point2Di>()
{
  return ibeo_msgs::msg::builder::Init_Point2Di_x();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__POINT2_DI__BUILDER_HPP_
