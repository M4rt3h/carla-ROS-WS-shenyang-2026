// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ReassignReportIdCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_REPORT_ID_CMD__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_REPORT_ID_CMD__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/reassign_report_id_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_ReassignReportIdCmd_use_user_report_id
{
public:
  explicit Init_ReassignReportIdCmd_use_user_report_id(::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd use_user_report_id(::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd::_use_user_report_id_type arg)
  {
    msg_.use_user_report_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd msg_;
};

class Init_ReassignReportIdCmd_user_report_id
{
public:
  explicit Init_ReassignReportIdCmd_user_report_id(::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd & msg)
  : msg_(msg)
  {}
  Init_ReassignReportIdCmd_use_user_report_id user_report_id(::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd::_user_report_id_type arg)
  {
    msg_.user_report_id = std::move(arg);
    return Init_ReassignReportIdCmd_use_user_report_id(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd msg_;
};

class Init_ReassignReportIdCmd_confirm
{
public:
  explicit Init_ReassignReportIdCmd_confirm(::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd & msg)
  : msg_(msg)
  {}
  Init_ReassignReportIdCmd_user_report_id confirm(::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd::_confirm_type arg)
  {
    msg_.confirm = std::move(arg);
    return Init_ReassignReportIdCmd_user_report_id(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd msg_;
};

class Init_ReassignReportIdCmd_header
{
public:
  Init_ReassignReportIdCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReassignReportIdCmd_confirm header(::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ReassignReportIdCmd_confirm(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::ReassignReportIdCmd>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_ReassignReportIdCmd_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_REPORT_ID_CMD__BUILDER_HPP_
