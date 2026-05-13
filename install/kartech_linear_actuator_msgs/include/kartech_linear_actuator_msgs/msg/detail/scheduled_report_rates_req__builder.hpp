// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ScheduledReportRatesReq.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SCHEDULED_REPORT_RATES_REQ__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SCHEDULED_REPORT_RATES_REQ__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/scheduled_report_rates_req__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduledReportRatesReq_index_2_report_time
{
public:
  explicit Init_ScheduledReportRatesReq_index_2_report_time(::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq index_2_report_time(::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq::_index_2_report_time_type arg)
  {
    msg_.index_2_report_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq msg_;
};

class Init_ScheduledReportRatesReq_index_2
{
public:
  explicit Init_ScheduledReportRatesReq_index_2(::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq & msg)
  : msg_(msg)
  {}
  Init_ScheduledReportRatesReq_index_2_report_time index_2(::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq::_index_2_type arg)
  {
    msg_.index_2 = std::move(arg);
    return Init_ScheduledReportRatesReq_index_2_report_time(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq msg_;
};

class Init_ScheduledReportRatesReq_index_1_report_time
{
public:
  explicit Init_ScheduledReportRatesReq_index_1_report_time(::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq & msg)
  : msg_(msg)
  {}
  Init_ScheduledReportRatesReq_index_2 index_1_report_time(::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq::_index_1_report_time_type arg)
  {
    msg_.index_1_report_time = std::move(arg);
    return Init_ScheduledReportRatesReq_index_2(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq msg_;
};

class Init_ScheduledReportRatesReq_index_1
{
public:
  explicit Init_ScheduledReportRatesReq_index_1(::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq & msg)
  : msg_(msg)
  {}
  Init_ScheduledReportRatesReq_index_1_report_time index_1(::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq::_index_1_type arg)
  {
    msg_.index_1 = std::move(arg);
    return Init_ScheduledReportRatesReq_index_1_report_time(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq msg_;
};

class Init_ScheduledReportRatesReq_confirm
{
public:
  explicit Init_ScheduledReportRatesReq_confirm(::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq & msg)
  : msg_(msg)
  {}
  Init_ScheduledReportRatesReq_index_1 confirm(::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_ScheduledReportRatesReq_index_1(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq msg_;
};

class Init_ScheduledReportRatesReq_header
{
public:
  Init_ScheduledReportRatesReq_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduledReportRatesReq_confirm header(::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ScheduledReportRatesReq_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_ScheduledReportRatesReq_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SCHEDULED_REPORT_RATES_REQ__BUILDER_HPP_
