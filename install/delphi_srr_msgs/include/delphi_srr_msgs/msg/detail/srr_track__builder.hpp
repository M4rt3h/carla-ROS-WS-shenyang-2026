// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_srr_msgs:msg/SrrTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__BUILDER_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__BUILDER_HPP_

#include "delphi_srr_msgs/msg/detail/srr_track__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_srr_msgs
{

namespace msg
{

namespace builder
{

class Init_SrrTrack_can_tx_detect_amplitude
{
public:
  explicit Init_SrrTrack_can_tx_detect_amplitude(::delphi_srr_msgs::msg::SrrTrack & msg)
  : msg_(msg)
  {}
  ::delphi_srr_msgs::msg::SrrTrack can_tx_detect_amplitude(::delphi_srr_msgs::msg::SrrTrack::_can_tx_detect_amplitude_type arg)
  {
    msg_.can_tx_detect_amplitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrTrack msg_;
};

class Init_SrrTrack_can_tx_detect_angle
{
public:
  explicit Init_SrrTrack_can_tx_detect_angle(::delphi_srr_msgs::msg::SrrTrack & msg)
  : msg_(msg)
  {}
  Init_SrrTrack_can_tx_detect_amplitude can_tx_detect_angle(::delphi_srr_msgs::msg::SrrTrack::_can_tx_detect_angle_type arg)
  {
    msg_.can_tx_detect_angle = std::move(arg);
    return Init_SrrTrack_can_tx_detect_amplitude(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrTrack msg_;
};

class Init_SrrTrack_can_tx_detect_range
{
public:
  explicit Init_SrrTrack_can_tx_detect_range(::delphi_srr_msgs::msg::SrrTrack & msg)
  : msg_(msg)
  {}
  Init_SrrTrack_can_tx_detect_angle can_tx_detect_range(::delphi_srr_msgs::msg::SrrTrack::_can_tx_detect_range_type arg)
  {
    msg_.can_tx_detect_range = std::move(arg);
    return Init_SrrTrack_can_tx_detect_angle(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrTrack msg_;
};

class Init_SrrTrack_can_tx_detect_range_rate
{
public:
  explicit Init_SrrTrack_can_tx_detect_range_rate(::delphi_srr_msgs::msg::SrrTrack & msg)
  : msg_(msg)
  {}
  Init_SrrTrack_can_tx_detect_range can_tx_detect_range_rate(::delphi_srr_msgs::msg::SrrTrack::_can_tx_detect_range_rate_type arg)
  {
    msg_.can_tx_detect_range_rate = std::move(arg);
    return Init_SrrTrack_can_tx_detect_range(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrTrack msg_;
};

class Init_SrrTrack_can_tx_detect_status
{
public:
  explicit Init_SrrTrack_can_tx_detect_status(::delphi_srr_msgs::msg::SrrTrack & msg)
  : msg_(msg)
  {}
  Init_SrrTrack_can_tx_detect_range_rate can_tx_detect_status(::delphi_srr_msgs::msg::SrrTrack::_can_tx_detect_status_type arg)
  {
    msg_.can_tx_detect_status = std::move(arg);
    return Init_SrrTrack_can_tx_detect_range_rate(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrTrack msg_;
};

class Init_SrrTrack_can_tx_detect_valid_level
{
public:
  explicit Init_SrrTrack_can_tx_detect_valid_level(::delphi_srr_msgs::msg::SrrTrack & msg)
  : msg_(msg)
  {}
  Init_SrrTrack_can_tx_detect_status can_tx_detect_valid_level(::delphi_srr_msgs::msg::SrrTrack::_can_tx_detect_valid_level_type arg)
  {
    msg_.can_tx_detect_valid_level = std::move(arg);
    return Init_SrrTrack_can_tx_detect_status(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrTrack msg_;
};

class Init_SrrTrack_header
{
public:
  Init_SrrTrack_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SrrTrack_can_tx_detect_valid_level header(::delphi_srr_msgs::msg::SrrTrack::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SrrTrack_can_tx_detect_valid_level(msg_);
  }

private:
  ::delphi_srr_msgs::msg::SrrTrack msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_srr_msgs::msg::SrrTrack>()
{
  return delphi_srr_msgs::msg::builder::Init_SrrTrack_header();
}

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__BUILDER_HPP_
