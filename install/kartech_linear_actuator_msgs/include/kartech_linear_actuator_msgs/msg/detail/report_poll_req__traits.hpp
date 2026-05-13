// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ReportPollReq.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_POLL_REQ__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_POLL_REQ__TRAITS_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/report_poll_req__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'report_indices'
#include "kartech_linear_actuator_msgs/msg/detail/report_index__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const kartech_linear_actuator_msgs::msg::ReportPollReq & msg,
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

  // member: report_indices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.report_indices.size() == 0) {
      out << "report_indices: []\n";
    } else {
      out << "report_indices:\n";
      for (auto item : msg.report_indices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::ReportPollReq & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::ReportPollReq>()
{
  return "kartech_linear_actuator_msgs::msg::ReportPollReq";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::ReportPollReq>()
{
  return "kartech_linear_actuator_msgs/msg/ReportPollReq";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::ReportPollReq>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::ReportPollReq>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::ReportPollReq>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_POLL_REQ__TRAITS_HPP_
