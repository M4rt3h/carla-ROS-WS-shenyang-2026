// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mobileye_560_660_msgs:msg/AwsDisplay.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__BUILDER_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__BUILDER_HPP_

#include "mobileye_560_660_msgs/msg/detail/aws_display__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace builder
{

class Init_AwsDisplay_headway_warning_level
{
public:
  explicit Init_AwsDisplay_headway_warning_level(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  ::mobileye_560_660_msgs::msg::AwsDisplay headway_warning_level(::mobileye_560_660_msgs::msg::AwsDisplay::_headway_warning_level_type arg)
  {
    msg_.headway_warning_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_ped_in_dz
{
public:
  explicit Init_AwsDisplay_ped_in_dz(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_headway_warning_level ped_in_dz(::mobileye_560_660_msgs::msg::AwsDisplay::_ped_in_dz_type arg)
  {
    msg_.ped_in_dz = std::move(arg);
    return Init_AwsDisplay_headway_warning_level(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_ped_fcw
{
public:
  explicit Init_AwsDisplay_ped_fcw(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_ped_in_dz ped_fcw(::mobileye_560_660_msgs::msg::AwsDisplay::_ped_fcw_type arg)
  {
    msg_.ped_fcw = std::move(arg);
    return Init_AwsDisplay_ped_in_dz(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_failsafe
{
public:
  explicit Init_AwsDisplay_failsafe(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_ped_fcw failsafe(::mobileye_560_660_msgs::msg::AwsDisplay::_failsafe_type arg)
  {
    msg_.failsafe = std::move(arg);
    return Init_AwsDisplay_ped_fcw(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_maintenance
{
public:
  explicit Init_AwsDisplay_maintenance(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_failsafe maintenance(::mobileye_560_660_msgs::msg::AwsDisplay::_maintenance_type arg)
  {
    msg_.maintenance = std::move(arg);
    return Init_AwsDisplay_failsafe(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_right_crossing
{
public:
  explicit Init_AwsDisplay_right_crossing(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_maintenance right_crossing(::mobileye_560_660_msgs::msg::AwsDisplay::_right_crossing_type arg)
  {
    msg_.right_crossing = std::move(arg);
    return Init_AwsDisplay_maintenance(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_left_crossing
{
public:
  explicit Init_AwsDisplay_left_crossing(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_right_crossing left_crossing(::mobileye_560_660_msgs::msg::AwsDisplay::_left_crossing_type arg)
  {
    msg_.left_crossing = std::move(arg);
    return Init_AwsDisplay_right_crossing(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_fcw_on
{
public:
  explicit Init_AwsDisplay_fcw_on(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_left_crossing fcw_on(::mobileye_560_660_msgs::msg::AwsDisplay::_fcw_on_type arg)
  {
    msg_.fcw_on = std::move(arg);
    return Init_AwsDisplay_left_crossing(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_right_ldw_on
{
public:
  explicit Init_AwsDisplay_right_ldw_on(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_fcw_on right_ldw_on(::mobileye_560_660_msgs::msg::AwsDisplay::_right_ldw_on_type arg)
  {
    msg_.right_ldw_on = std::move(arg);
    return Init_AwsDisplay_fcw_on(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_left_ldw_on
{
public:
  explicit Init_AwsDisplay_left_ldw_on(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_right_ldw_on left_ldw_on(::mobileye_560_660_msgs::msg::AwsDisplay::_left_ldw_on_type arg)
  {
    msg_.left_ldw_on = std::move(arg);
    return Init_AwsDisplay_right_ldw_on(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_lanes_on
{
public:
  explicit Init_AwsDisplay_lanes_on(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_left_ldw_on lanes_on(::mobileye_560_660_msgs::msg::AwsDisplay::_lanes_on_type arg)
  {
    msg_.lanes_on = std::move(arg);
    return Init_AwsDisplay_left_ldw_on(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_headway_measurement
{
public:
  explicit Init_AwsDisplay_headway_measurement(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_lanes_on headway_measurement(::mobileye_560_660_msgs::msg::AwsDisplay::_headway_measurement_type arg)
  {
    msg_.headway_measurement = std::move(arg);
    return Init_AwsDisplay_lanes_on(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_headway_valid
{
public:
  explicit Init_AwsDisplay_headway_valid(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_headway_measurement headway_valid(::mobileye_560_660_msgs::msg::AwsDisplay::_headway_valid_type arg)
  {
    msg_.headway_valid = std::move(arg);
    return Init_AwsDisplay_headway_measurement(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_sound_type
{
public:
  explicit Init_AwsDisplay_sound_type(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_headway_valid sound_type(::mobileye_560_660_msgs::msg::AwsDisplay::_sound_type_type arg)
  {
    msg_.sound_type = std::move(arg);
    return Init_AwsDisplay_headway_valid(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_dusk_time
{
public:
  explicit Init_AwsDisplay_dusk_time(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_sound_type dusk_time(::mobileye_560_660_msgs::msg::AwsDisplay::_dusk_time_type arg)
  {
    msg_.dusk_time = std::move(arg);
    return Init_AwsDisplay_sound_type(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_night_time
{
public:
  explicit Init_AwsDisplay_night_time(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_dusk_time night_time(::mobileye_560_660_msgs::msg::AwsDisplay::_night_time_type arg)
  {
    msg_.night_time = std::move(arg);
    return Init_AwsDisplay_dusk_time(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_suppress_sound
{
public:
  explicit Init_AwsDisplay_suppress_sound(::mobileye_560_660_msgs::msg::AwsDisplay & msg)
  : msg_(msg)
  {}
  Init_AwsDisplay_night_time suppress_sound(::mobileye_560_660_msgs::msg::AwsDisplay::_suppress_sound_type arg)
  {
    msg_.suppress_sound = std::move(arg);
    return Init_AwsDisplay_night_time(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

class Init_AwsDisplay_header
{
public:
  Init_AwsDisplay_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AwsDisplay_suppress_sound header(::mobileye_560_660_msgs::msg::AwsDisplay::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AwsDisplay_suppress_sound(msg_);
  }

private:
  ::mobileye_560_660_msgs::msg::AwsDisplay msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mobileye_560_660_msgs::msg::AwsDisplay>()
{
  return mobileye_560_660_msgs::msg::builder::Init_AwsDisplay_header();
}

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__BUILDER_HPP_
