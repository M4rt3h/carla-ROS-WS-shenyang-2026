// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrTrackMotionPowerTrack_power
{
public:
  explicit Init_EsrTrackMotionPowerTrack_power(::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack power(::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack::_power_type arg)
  {
    msg_.power = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack msg_;
};

class Init_EsrTrackMotionPowerTrack_moving
{
public:
  explicit Init_EsrTrackMotionPowerTrack_moving(::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrackMotionPowerTrack_power moving(::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return Init_EsrTrackMotionPowerTrack_power(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack msg_;
};

class Init_EsrTrackMotionPowerTrack_movable_slow
{
public:
  explicit Init_EsrTrackMotionPowerTrack_movable_slow(::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrackMotionPowerTrack_moving movable_slow(::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack::_movable_slow_type arg)
  {
    msg_.movable_slow = std::move(arg);
    return Init_EsrTrackMotionPowerTrack_moving(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack msg_;
};

class Init_EsrTrackMotionPowerTrack_movable_fast
{
public:
  explicit Init_EsrTrackMotionPowerTrack_movable_fast(::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrackMotionPowerTrack_movable_slow movable_fast(::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack::_movable_fast_type arg)
  {
    msg_.movable_fast = std::move(arg);
    return Init_EsrTrackMotionPowerTrack_movable_slow(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack msg_;
};

class Init_EsrTrackMotionPowerTrack_id
{
public:
  Init_EsrTrackMotionPowerTrack_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrTrackMotionPowerTrack_movable_fast id(::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EsrTrackMotionPowerTrack_movable_fast(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrTrackMotionPowerTrack_id();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__BUILDER_HPP_
