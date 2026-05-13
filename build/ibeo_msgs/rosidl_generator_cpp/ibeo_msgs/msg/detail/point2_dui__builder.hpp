// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/Point2Dui.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__POINT2_DUI__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__POINT2_DUI__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/point2_dui__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_Point2Dui_y
{
public:
  explicit Init_Point2Dui_y(::ibeo_msgs::msg::Point2Dui & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::Point2Dui y(::ibeo_msgs::msg::Point2Dui::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::Point2Dui msg_;
};

class Init_Point2Dui_x
{
public:
  Init_Point2Dui_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Point2Dui_y x(::ibeo_msgs::msg::Point2Dui::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Point2Dui_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Point2Dui msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::Point2Dui>()
{
  return ibeo_msgs::msg::builder::Init_Point2Dui_x();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__POINT2_DUI__BUILDER_HPP_
