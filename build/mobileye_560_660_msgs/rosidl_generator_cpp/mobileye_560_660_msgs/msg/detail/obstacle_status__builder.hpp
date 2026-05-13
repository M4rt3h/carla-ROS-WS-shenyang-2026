// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/ObstacleStatus.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/obstacle_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleStatus_failsafe
{
public:
  explicit Init_ObstacleStatus_failsafe(::mobileye_560_660_msgs::msg::ObstacleStatus & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::ObstacleStatus failsafe(::mobileye_560_660_msgs::msg::ObstacleStatus::_failsafe_type arg)
  {
    msg_.failsafe = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleStatus msg_;
};

class Init_ObstacleStatus_close_car
{
public:
  explicit Init_ObstacleStatus_close_car(::mobileye_560_660_msgs::msg::ObstacleStatus & msg)
  : msg_(msg)
  {}
  Init_ObstacleStatus_failsafe close_car(::mobileye_560_660_msgs::msg::ObstacleStatus::_close_car_type arg)
  {
    msg_.close_car = std::move(arg);
    return Init_ObstacleStatus_failsafe(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleStatus msg_;
};

class Init_ObstacleStatus_protocol_version
{
public:
  explicit Init_ObstacleStatus_protocol_version(::mobileye_560_660_msgs::msg::ObstacleStatus & msg)
  : msg_(msg)
  {}
  Init_ObstacleStatus_close_car protocol_version(::mobileye_560_660_msgs::msg::ObstacleStatus::_protocol_version_type arg)
  {
    msg_.protocol_version = std::move(arg);
    return Init_ObstacleStatus_close_car(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleStatus msg_;
};

class Init_ObstacleStatus_stop_go
{
public:
  explicit Init_ObstacleStatus_stop_go(::mobileye_560_660_msgs::msg::ObstacleStatus & msg)
  : msg_(msg)
  {}
  Init_ObstacleStatus_protocol_version stop_go(::mobileye_560_660_msgs::msg::ObstacleStatus::_stop_go_type arg)
  {
    msg_.stop_go = std::move(arg);
    return Init_ObstacleStatus_protocol_version(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleStatus msg_;
};

class Init_ObstacleStatus_right_close_range_cut_in
{
public:
  explicit Init_ObstacleStatus_right_close_range_cut_in(::mobileye_560_660_msgs::msg::ObstacleStatus & msg)
  : msg_(msg)
  {}
  Init_ObstacleStatus_stop_go right_close_range_cut_in(::mobileye_560_660_msgs::msg::ObstacleStatus::_right_close_range_cut_in_type arg)
  {
    msg_.right_close_range_cut_in = std::move(arg);
    return Init_ObstacleStatus_stop_go(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleStatus msg_;
};

class Init_ObstacleStatus_left_close_range_cut_in
{
public:
  explicit Init_ObstacleStatus_left_close_range_cut_in(::mobileye_560_660_msgs::msg::ObstacleStatus & msg)
  : msg_(msg)
  {}
  Init_ObstacleStatus_right_close_range_cut_in left_close_range_cut_in(::mobileye_560_660_msgs::msg::ObstacleStatus::_left_close_range_cut_in_type arg)
  {
    msg_.left_close_range_cut_in = std::move(arg);
    return Init_ObstacleStatus_right_close_range_cut_in(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleStatus msg_;
};

class Init_ObstacleStatus_active_version_number_section
{
public:
  explicit Init_ObstacleStatus_active_version_number_section(::mobileye_560_660_msgs::msg::ObstacleStatus & msg)
  : msg_(msg)
  {}
  Init_ObstacleStatus_left_close_range_cut_in active_version_number_section(::mobileye_560_660_msgs::msg::ObstacleStatus::_active_version_number_section_type arg)
  {
    msg_.active_version_number_section = std::move(arg);
    return Init_ObstacleStatus_left_close_range_cut_in(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleStatus msg_;
};

class Init_ObstacleStatus_application_version
{
public:
  explicit Init_ObstacleStatus_application_version(::mobileye_560_660_msgs::msg::ObstacleStatus & msg)
  : msg_(msg)
  {}
  Init_ObstacleStatus_active_version_number_section application_version(::mobileye_560_660_msgs::msg::ObstacleStatus::_application_version_type arg)
  {
    msg_.application_version = std::move(arg);
    return Init_ObstacleStatus_active_version_number_section(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleStatus msg_;
};

class Init_ObstacleStatus_timestamp
{
public:
  explicit Init_ObstacleStatus_timestamp(::mobileye_560_660_msgs::msg::ObstacleStatus & msg)
  : msg_(msg)
  {}
  Init_ObstacleStatus_application_version timestamp(::mobileye_560_660_msgs::msg::ObstacleStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ObstacleStatus_application_version(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleStatus msg_;
};

class Init_ObstacleStatus_num_obstacles
{
public:
  explicit Init_ObstacleStatus_num_obstacles(::mobileye_560_660_msgs::msg::ObstacleStatus & msg)
  : msg_(msg)
  {}
  Init_ObstacleStatus_timestamp num_obstacles(::mobileye_560_660_msgs::msg::ObstacleStatus::_num_obstacles_type arg)
  {
    msg_.num_obstacles = std::move(arg);
    return Init_ObstacleStatus_timestamp(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleStatus msg_;
};

class Init_ObstacleStatus_header
{
public:
  Init_ObstacleStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleStatus_num_obstacles header(::mobileye_560_660_msgs::msg::ObstacleStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObstacleStatus_num_obstacles(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::ObstacleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::ObstacleStatus>()
{
  return mobileye_560_660_msgs::msg::builder::Init_ObstacleStatus_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__BUILDER_HPP_
