// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ContourPointSigma.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__CONTOUR_POINT_SIGMA__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__CONTOUR_POINT_SIGMA__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/contour_point_sigma__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ContourPointSigma_y_sigma
{
public:
  explicit Init_ContourPointSigma_y_sigma(::ibeo_msgs::msg::ContourPointSigma & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ContourPointSigma y_sigma(::ibeo_msgs::msg::ContourPointSigma::_y_sigma_type arg)
  {
    msg_.y_sigma = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ContourPointSigma msg_;
};

class Init_ContourPointSigma_x_sigma
{
public:
  explicit Init_ContourPointSigma_x_sigma(::ibeo_msgs::msg::ContourPointSigma & msg)
  : msg_(msg)
  {}
  Init_ContourPointSigma_y_sigma x_sigma(::ibeo_msgs::msg::ContourPointSigma::_x_sigma_type arg)
  {
    msg_.x_sigma = std::move(arg);
    return Init_ContourPointSigma_y_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::ContourPointSigma msg_;
};

class Init_ContourPointSigma_y
{
public:
  explicit Init_ContourPointSigma_y(::ibeo_msgs::msg::ContourPointSigma & msg)
  : msg_(msg)
  {}
  Init_ContourPointSigma_x_sigma y(::ibeo_msgs::msg::ContourPointSigma::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ContourPointSigma_x_sigma(msg_);
  }

private:
  ::ibeo_msgs::msg::ContourPointSigma msg_;
};

class Init_ContourPointSigma_x
{
public:
  Init_ContourPointSigma_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ContourPointSigma_y x(::ibeo_msgs::msg::ContourPointSigma::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ContourPointSigma_y(msg_);
  }

private:
  ::ibeo_msgs::msg::ContourPointSigma msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ContourPointSigma>()
{
  return ibeo_msgs::msg::builder::Init_ContourPointSigma_x();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__CONTOUR_POINT_SIGMA__BUILDER_HPP_
