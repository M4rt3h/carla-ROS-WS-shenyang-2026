// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderSensorCoverage.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__BUILDER_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__BUILDER_HPP_

#include "delphi_mrr_msgs/msg/detail/mrr_header_sensor_coverage__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace delphi_mrr_msgs
{

namespace msg
{

namespace builder
{

class Init_MrrHeaderSensorCoverage_can_range_coverage
{
public:
  explicit Init_MrrHeaderSensorCoverage_can_range_coverage(::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage & msg)
  : msg_(msg)
  {}
  ::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage can_range_coverage(::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage::_can_range_coverage_type arg)
  {
    msg_.can_range_coverage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage msg_;
};

class Init_MrrHeaderSensorCoverage_can_doppler_coverage
{
public:
  explicit Init_MrrHeaderSensorCoverage_can_doppler_coverage(::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderSensorCoverage_can_range_coverage can_doppler_coverage(::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage::_can_doppler_coverage_type arg)
  {
    msg_.can_doppler_coverage = std::move(arg);
    return Init_MrrHeaderSensorCoverage_can_range_coverage(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage msg_;
};

class Init_MrrHeaderSensorCoverage_can_sensor_fov_hor
{
public:
  explicit Init_MrrHeaderSensorCoverage_can_sensor_fov_hor(::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage & msg)
  : msg_(msg)
  {}
  Init_MrrHeaderSensorCoverage_can_doppler_coverage can_sensor_fov_hor(::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage::_can_sensor_fov_hor_type arg)
  {
    msg_.can_sensor_fov_hor = std::move(arg);
    return Init_MrrHeaderSensorCoverage_can_doppler_coverage(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage msg_;
};

class Init_MrrHeaderSensorCoverage_header
{
public:
  Init_MrrHeaderSensorCoverage_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MrrHeaderSensorCoverage_can_sensor_fov_hor header(::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MrrHeaderSensorCoverage_can_sensor_fov_hor(msg_);
  }

private:
  ::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::delphi_mrr_msgs::msg::MrrHeaderSensorCoverage>()
{
  return delphi_mrr_msgs::msg::builder::Init_MrrHeaderSensorCoverage_header();
}

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_SENSOR_COVERAGE__BUILDER_HPP_
