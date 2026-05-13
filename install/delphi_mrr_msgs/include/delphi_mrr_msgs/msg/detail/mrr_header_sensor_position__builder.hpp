// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderSensorPosition.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_POSITION__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_POSITION__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_header_sensor_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrHeaderSensorPosition_can_sensor_hangle_offset
{
public:
  explicit Init_MrrHeaderSensorPosition_can_sensor_hangle_offset(::delphi_mrr_msgs::msg::MrrHeaderSensorPosition & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrHeaderSensorPosition can_sensor_hangle_offset(::delphi_mrr_msgs::msg::MrrHeaderSensorPosition::_can_sensor_hangle_offset_type arg)
  {
    msg_.can_sensor_hangle_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderSensorPosition msg_;
};

class Init_MrrHeaderSensorPosition_can_sensor_long_offset
{
public:
  explicit Init_MrrHeaderSensorPosition_can_sensor_long_offset(::delphi_mrr_msgs::msg::MrrHeaderSensorPosition & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderSensorPosition_can_sensor_hangle_offset can_sensor_long_offset(::delphi_mrr_msgs::msg::MrrHeaderSensorPosition::_can_sensor_long_offset_type arg)
  {
    msg_.can_sensor_long_offset = std::move(arg);
    return Init_MrrHeaderSensorPosition_can_sensor_hangle_offset(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderSensorPosition msg_;
};

class Init_MrrHeaderSensorPosition_can_sensor_lat_offset
{
public:
  explicit Init_MrrHeaderSensorPosition_can_sensor_lat_offset(::delphi_mrr_msgs::msg::MrrHeaderSensorPosition & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderSensorPosition_can_sensor_long_offset can_sensor_lat_offset(::delphi_mrr_msgs::msg::MrrHeaderSensorPosition::_can_sensor_lat_offset_type arg)
  {
    msg_.can_sensor_lat_offset = std::move(arg);
    return Init_MrrHeaderSensorPosition_can_sensor_long_offset(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderSensorPosition msg_;
};

class Init_MrrHeaderSensorPosition_can_sensor_polarity
{
public:
  explicit Init_MrrHeaderSensorPosition_can_sensor_polarity(::delphi_mrr_msgs::msg::MrrHeaderSensorPosition & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderSensorPosition_can_sensor_lat_offset can_sensor_polarity(::delphi_mrr_msgs::msg::MrrHeaderSensorPosition::_can_sensor_polarity_type arg)
  {
    msg_.can_sensor_polarity = std::move(arg);
    return Init_MrrHeaderSensorPosition_can_sensor_lat_offset(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderSensorPosition msg_;
};

class Init_MrrHeaderSensorPosition_header
{
public:
  Init_MrrHeaderSensorPosition_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrHeaderSensorPosition_can_sensor_polarity header(::delphi_mrr_msgs::msg::MrrHeaderSensorPosition::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrHeaderSensorPosition_can_sensor_polarity(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderSensorPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrHeaderSensorPosition>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrHeaderSensorPosition_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_POSITION__BUILDER_HPP_
