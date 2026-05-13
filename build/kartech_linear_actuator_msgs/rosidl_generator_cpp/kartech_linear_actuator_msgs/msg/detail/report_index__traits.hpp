// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ReportIndex.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__TRAITS_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/report_index__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const kartech_linear_actuator_msgs::msg::ReportIndex & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: report_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "report_index: ";
    value_to_yaml(msg.report_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::ReportIndex & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::ReportIndex>()
{
  return "kartech_linear_actuator_msgs::msg::ReportIndex";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::ReportIndex>()
{
  return "kartech_linear_actuator_msgs/msg/ReportIndex";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::ReportIndex>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::ReportIndex>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::ReportIndex>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__TRAITS_HPP_
