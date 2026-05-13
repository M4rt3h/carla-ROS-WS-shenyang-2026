// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ReportPollReq.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_POLL_REQ__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_POLL_REQ__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/report_poll_req__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_ReportPollReq_report_indices
{
public:
  explicit Init_ReportPollReq_report_indices(::kartech_linear_actuator_msgs::msg::ReportPollReq & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::ReportPollReq report_indices(::kartech_linear_actuator_msgs::msg::ReportPollReq::_report_indices_type arg)
  {
    msg_.report_indices = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReportPollReq msg_;
};

class Init_ReportPollReq_confirm
{
public:
  explicit Init_ReportPollReq_confirm(::kartech_linear_actuator_msgs::msg::ReportPollReq & msg)
  : msg_(msg)
  {}
  Init_ReportPollReq_report_indices confirm(::kartech_linear_actuator_msgs::msg::ReportPollReq::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_ReportPollReq_report_indices(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReportPollReq msg_;
};

class Init_ReportPollReq_header
{
public:
  Init_ReportPollReq_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReportPollReq_confirm header(::kartech_linear_actuator_msgs::msg::ReportPollReq::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReportPollReq_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReportPollReq msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::ReportPollReq>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_ReportPollReq_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_POLL_REQ__BUILDER_HPP_
