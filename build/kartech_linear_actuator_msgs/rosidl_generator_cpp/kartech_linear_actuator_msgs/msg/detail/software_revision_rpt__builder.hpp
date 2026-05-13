// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from kartech_linear_actuator_msgs:msg/SoftwareRevisionRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__BUILDER_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__BUILDER_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/software_revision_rpt__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_SoftwareRevisionRpt_software_month_year
{
public:
  explicit Init_SoftwareRevisionRpt_software_month_year(::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt & msg)
  : msg_(msg)
  {}
  ::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt software_month_year(::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt::_software_month_year_type arg)
  {
    msg_.software_month_year = std::move(arg);
    return std::move(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt msg_;
};

class Init_SoftwareRevisionRpt_software_day
{
public:
  explicit Init_SoftwareRevisionRpt_software_day(::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt & msg)
  : msg_(msg)
  {}
  Init_SoftwareRevisionRpt_software_month_year software_day(::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt::_software_day_type arg)
  {
    msg_.software_day = std::move(arg);
    return Init_SoftwareRevisionRpt_software_month_year(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt msg_;
};

class Init_SoftwareRevisionRpt_software_version_2
{
public:
  explicit Init_SoftwareRevisionRpt_software_version_2(::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt & msg)
  : msg_(msg)
  {}
  Init_SoftwareRevisionRpt_software_day software_version_2(::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt::_software_version_2_type arg)
  {
    msg_.software_version_2 = std::move(arg);
    return Init_SoftwareRevisionRpt_software_day(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt msg_;
};

class Init_SoftwareRevisionRpt_software_version_1
{
public:
  explicit Init_SoftwareRevisionRpt_software_version_1(::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt & msg)
  : msg_(msg)
  {}
  Init_SoftwareRevisionRpt_software_version_2 software_version_1(::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt::_software_version_1_type arg)
  {
    msg_.software_version_1 = std::move(arg);
    return Init_SoftwareRevisionRpt_software_version_2(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt msg_;
};

class Init_SoftwareRevisionRpt_software_version_0
{
public:
  explicit Init_SoftwareRevisionRpt_software_version_0(::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt & msg)
  : msg_(msg)
  {}
  Init_SoftwareRevisionRpt_software_version_1 software_version_0(::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt::_software_version_0_type arg)
  {
    msg_.software_version_0 = std::move(arg);
    return Init_SoftwareRevisionRpt_software_version_1(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt msg_;
};

class Init_SoftwareRevisionRpt_header
{
public:
  Init_SoftwareRevisionRpt_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SoftwareRevisionRpt_software_version_0 header(::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SoftwareRevisionRpt_software_version_0(msg_);
  }

private:
  ::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt>()
{
  return kartech_linear_actuator_msgs::msg::builder::Init_SoftwareRevisionRpt_header();
}

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__BUILDER_HPP_
