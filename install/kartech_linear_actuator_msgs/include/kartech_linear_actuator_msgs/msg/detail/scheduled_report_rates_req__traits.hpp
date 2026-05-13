// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ScheduledReportRatesReq.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SCHEDULED_REPORT_RATES_REQ__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SCHEDULED_REPORT_RATES_REQ__TRAITS_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/scheduled_report_rates_req__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'index_1'
// Member 'index_2'
#include "kartech_linear_actuator_msgs/msg/detail/report_index__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: confirm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confirm: ";
    value_to_yaml(msg.confirm, out);
    out << "\n";
  }

  // member: index_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index_1:\n";
    to_yaml(msg.index_1, out, indentation + 2);
  }

  // member: index_1_report_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index_1_report_time: ";
    value_to_yaml(msg.index_1_report_time, out);
    out << "\n";
  }

  // member: index_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index_2:\n";
    to_yaml(msg.index_2, out, indentation + 2);
  }

  // member: index_2_report_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index_2_report_time: ";
    value_to_yaml(msg.index_2_report_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq>()
{
  return "kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq>()
{
  return "kartech_linear_actuator_msgs/msg/ScheduledReportRatesReq";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq>
  : std::integral_constant<bool, has_fixed_size<kartech_linear_actuator_msgs::msg::ReportIndex>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq>
  : std::integral_constant<bool, has_bounded_size<kartech_linear_actuator_msgs::msg::ReportIndex>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SCHEDULED_REPORT_RATES_REQ__TRAITS_HPP_
