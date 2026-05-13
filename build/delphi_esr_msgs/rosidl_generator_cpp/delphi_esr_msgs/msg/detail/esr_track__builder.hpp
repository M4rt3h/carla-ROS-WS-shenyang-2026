// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_esr_msgs:msg/EsrTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__BUILDER_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__BUILDER_HPP_

#include "delphi_esr_msgs/msg/detail/esr_track__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_esr_msgs
{

namespace msg
{

namespace builder
{

class Init_EsrTrack_range_rate
{
public:
  explicit Init_EsrTrack_range_rate(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  ::delphi_esr_msgs::msg::EsrTrack range_rate(::delphi_esr_msgs::msg::EsrTrack::_range_rate_type arg)
  {
    msg_.range_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_med_range_mode
{
public:
  explicit Init_EsrTrack_med_range_mode(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_range_rate med_range_mode(::delphi_esr_msgs::msg::EsrTrack::_med_range_mode_type arg)
  {
    msg_.med_range_mode = std::move(arg);
    return Init_EsrTrack_range_rate(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_range_accel
{
public:
  explicit Init_EsrTrack_range_accel(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_med_range_mode range_accel(::delphi_esr_msgs::msg::EsrTrack::_range_accel_type arg)
  {
    msg_.range_accel = std::move(arg);
    return Init_EsrTrack_med_range_mode(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_width
{
public:
  explicit Init_EsrTrack_width(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_range_accel width(::delphi_esr_msgs::msg::EsrTrack::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_EsrTrack_range_accel(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_rolling_count
{
public:
  explicit Init_EsrTrack_rolling_count(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_width rolling_count(::delphi_esr_msgs::msg::EsrTrack::_rolling_count_type arg)
  {
    msg_.rolling_count = std::move(arg);
    return Init_EsrTrack_width(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_bridge_object
{
public:
  explicit Init_EsrTrack_bridge_object(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_rolling_count bridge_object(::delphi_esr_msgs::msg::EsrTrack::_bridge_object_type arg)
  {
    msg_.bridge_object = std::move(arg);
    return Init_EsrTrack_rolling_count(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_range
{
public:
  explicit Init_EsrTrack_range(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_bridge_object range(::delphi_esr_msgs::msg::EsrTrack::_range_type arg)
  {
    msg_.range = std::move(arg);
    return Init_EsrTrack_bridge_object(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_angle
{
public:
  explicit Init_EsrTrack_angle(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_range angle(::delphi_esr_msgs::msg::EsrTrack::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_EsrTrack_range(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_status
{
public:
  explicit Init_EsrTrack_status(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_angle status(::delphi_esr_msgs::msg::EsrTrack::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_EsrTrack_angle(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_oncoming
{
public:
  explicit Init_EsrTrack_oncoming(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_status oncoming(::delphi_esr_msgs::msg::EsrTrack::_oncoming_type arg)
  {
    msg_.oncoming = std::move(arg);
    return Init_EsrTrack_status(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_grouping_changed
{
public:
  explicit Init_EsrTrack_grouping_changed(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_oncoming grouping_changed(::delphi_esr_msgs::msg::EsrTrack::_grouping_changed_type arg)
  {
    msg_.grouping_changed = std::move(arg);
    return Init_EsrTrack_oncoming(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_lat_rate
{
public:
  explicit Init_EsrTrack_lat_rate(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_grouping_changed lat_rate(::delphi_esr_msgs::msg::EsrTrack::_lat_rate_type arg)
  {
    msg_.lat_rate = std::move(arg);
    return Init_EsrTrack_grouping_changed(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_id
{
public:
  explicit Init_EsrTrack_id(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_lat_rate id(::delphi_esr_msgs::msg::EsrTrack::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EsrTrack_lat_rate(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_canmsg
{
public:
  explicit Init_EsrTrack_canmsg(::delphi_esr_msgs::msg::EsrTrack & msg)
  : msg_(msg)
  {}
  Init_EsrTrack_id canmsg(::delphi_esr_msgs::msg::EsrTrack::_canmsg_type arg)
  {
    msg_.canmsg = std::move(arg);
    return Init_EsrTrack_id(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

class Init_EsrTrack_header
{
public:
  Init_EsrTrack_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EsrTrack_canmsg header(::delphi_esr_msgs::msg::EsrTrack::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EsrTrack_canmsg(msg_);
  }

private:
  ::delphi_esr_msgs::msg::EsrTrack msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_esr_msgs::msg::EsrTrack>()
{
  return delphi_esr_msgs::msg::builder::Init_EsrTrack_header();
}

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__BUILDER_HPP_
