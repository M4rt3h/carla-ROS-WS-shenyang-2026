// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/MountingPositionF.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/mounting_position_f__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_MountingPositionF_z_position
{
public:
  explicit Init_MountingPositionF_z_position(::ibeo_msgs::msg::MountingPositionF & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::MountingPositionF z_position(::ibeo_msgs::msg::MountingPositionF::_z_position_type arg)
  {
    msg_.z_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::MountingPositionF msg_;
};

class Init_MountingPositionF_y_position
{
public:
  explicit Init_MountingPositionF_y_position(::ibeo_msgs::msg::MountingPositionF & msg)
  : msg_(msg)
  {}
  Init_MountingPositionF_z_position y_position(::ibeo_msgs::msg::MountingPositionF::_y_position_type arg)
  {
    msg_.y_position = std::move(arg);
    return Init_MountingPositionF_z_position(msg_);
  }

private:
  ::ibeo_msgs::msg::MountingPositionF msg_;
};

class Init_MountingPositionF_x_position
{
public:
  explicit Init_MountingPositionF_x_position(::ibeo_msgs::msg::MountingPositionF & msg)
  : msg_(msg)
  {}
  Init_MountingPositionF_y_position x_position(::ibeo_msgs::msg::MountingPositionF::_x_position_type arg)
  {
    msg_.x_position = std::move(arg);
    return Init_MountingPositionF_y_position(msg_);
  }

private:
  ::ibeo_msgs::msg::MountingPositionF msg_;
};

class Init_MountingPositionF_roll_angle
{
public:
  explicit Init_MountingPositionF_roll_angle(::ibeo_msgs::msg::MountingPositionF & msg)
  : msg_(msg)
  {}
  Init_MountingPositionF_x_position roll_angle(::ibeo_msgs::msg::MountingPositionF::_roll_angle_type arg)
  {
    msg_.roll_angle = std::move(arg);
    return Init_MountingPositionF_x_position(msg_);
  }

private:
  ::ibeo_msgs::msg::MountingPositionF msg_;
};

class Init_MountingPositionF_pitch_angle
{
public:
  explicit Init_MountingPositionF_pitch_angle(::ibeo_msgs::msg::MountingPositionF & msg)
  : msg_(msg)
  {}
  Init_MountingPositionF_roll_angle pitch_angle(::ibeo_msgs::msg::MountingPositionF::_pitch_angle_type arg)
  {
    msg_.pitch_angle = std::move(arg);
    return Init_MountingPositionF_roll_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::MountingPositionF msg_;
};

class Init_MountingPositionF_yaw_angle
{
public:
  Init_MountingPositionF_yaw_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MountingPositionF_pitch_angle yaw_angle(::ibeo_msgs::msg::MountingPositionF::_yaw_angle_type arg)
  {
    msg_.yaw_angle = std::move(arg);
    return Init_MountingPositionF_pitch_angle(msg_);
  }

private:
  ::ibeo_msgs::msg::MountingPositionF msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::MountingPositionF>()
{
  return ibeo_msgs::msg::builder::Init_MountingPositionF_yaw_angle();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__BUILDER_HPP_
