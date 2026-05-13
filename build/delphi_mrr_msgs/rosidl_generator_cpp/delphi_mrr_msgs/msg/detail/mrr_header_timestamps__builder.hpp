// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderTimestamps.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_TIMESTAMPS__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_TIMESTAMPS__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_header_timestamps__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrHeaderTimestamps_can_sensor_time_stamp
{
public:
  explicit Init_MrrHeaderTimestamps_can_sensor_time_stamp(::delphi_mrr_msgs::msg::MrrHeaderTimestamps & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrHeaderTimestamps can_sensor_time_stamp(::delphi_mrr_msgs::msg::MrrHeaderTimestamps::_can_sensor_time_stamp_type arg)
  {
    msg_.can_sensor_time_stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderTimestamps msg_;
};

class Init_MrrHeaderTimestamps_can_det_time_since_meas
{
public:
  explicit Init_MrrHeaderTimestamps_can_det_time_since_meas(::delphi_mrr_msgs::msg::MrrHeaderTimestamps & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderTimestamps_can_sensor_time_stamp can_det_time_since_meas(::delphi_mrr_msgs::msg::MrrHeaderTimestamps::_can_det_time_since_meas_type arg)
  {
    msg_.can_det_time_since_meas = std::move(arg);
    return Init_MrrHeaderTimestamps_can_sensor_time_stamp(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderTimestamps msg_;
};

class Init_MrrHeaderTimestamps_header
{
public:
  Init_MrrHeaderTimestamps_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrHeaderTimestamps_can_det_time_since_meas header(::delphi_mrr_msgs::msg::MrrHeaderTimestamps::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrHeaderTimestamps_can_det_time_since_meas(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderTimestamps msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrHeaderTimestamps>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrHeaderTimestamps_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_TIMESTAMPS__BUILDER_HPP_
