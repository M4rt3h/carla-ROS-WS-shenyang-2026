// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/Sigma2D.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SIGMA2_D__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__SIGMA2_D__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/sigma2_d__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_Sigma2D_sigma_y
{
public:
  explicit Init_Sigma2D_sigma_y(::ibeo_msgs::msg::Sigma2D & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::Sigma2D sigma_y(::ibeo_msgs::msg::Sigma2D::_sigma_y_type arg)
  {
    msg_.sigma_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::Sigma2D msg_;
};

class Init_Sigma2D_sigma_x
{
public:
  Init_Sigma2D_sigma_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sigma2D_sigma_y sigma_x(::ibeo_msgs::msg::Sigma2D::_sigma_x_type arg)
  {
    msg_.sigma_x = std::move(arg);
    return Init_Sigma2D_sigma_y(msg_);
  }

private:
  ::ibeo_msgs::msg::Sigma2D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::Sigma2D>()
{
  return ibeo_msgs::msg::builder::Init_Sigma2D_sigma_x();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SIGMA2_D__BUILDER_HPP_
