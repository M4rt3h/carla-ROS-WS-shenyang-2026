// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerGroup.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_group__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrTrackMotionPowerGroup_tracks
{
public:
  explicit Init_EsrTrackMotionPowerGroup_tracks(::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup tracks(::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup::_tracks_type arg)
  {
    msg_.tracks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup msg_;
};

class Init_EsrTrackMotionPowerGroup_can_id_group
{
public:
  explicit Init_EsrTrackMotionPowerGroup_can_id_group(::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup & msg)
  : msg_(msg)
  {}
  Init_EsrTrackMotionPowerGroup_tracks can_id_group(::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup::_can_id_group_type arg)
  {
    msg_.can_id_group = std::move(arg);
    return Init_EsrTrackMotionPowerGroup_tracks(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup msg_;
};

class Init_EsrTrackMotionPowerGroup_rolling_count_2
{
public:
  explicit Init_EsrTrackMotionPowerGroup_rolling_count_2(::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup & msg)
  : msg_(msg)
  {}
  Init_EsrTrackMotionPowerGroup_can_id_group rolling_count_2(::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup::_rolling_count_2_type arg)
  {
    msg_.rolling_count_2 = std::move(arg);
    return Init_EsrTrackMotionPowerGroup_can_id_group(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup msg_;
};

class Init_EsrTrackMotionPowerGroup_canmsg
{
public:
  explicit Init_EsrTrackMotionPowerGroup_canmsg(::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup & msg)
  : msg_(msg)
  {}
  Init_EsrTrackMotionPowerGroup_rolling_count_2 canmsg(::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrTrackMotionPowerGroup_rolling_count_2(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup msg_;
};

class Init_EsrTrackMotionPowerGroup_header
{
public:
  Init_EsrTrackMotionPowerGroup_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrTrackMotionPowerGroup_canmsg header(::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrTrackMotionPowerGroup_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrTrackMotionPowerGroup>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrTrackMotionPowerGroup_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_GROUP__BUILDER_HPP_
