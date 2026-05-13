// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/SoftwareRevisionRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__TRAITS_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/software_revision_rpt__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt & msg,
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

  // member: software_version_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_version_0: ";
    value_to_yaml(msg.software_version_0, out);
    out << "\n";
  }

  // member: software_version_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_version_1: ";
    value_to_yaml(msg.software_version_1, out);
    out << "\n";
  }

  // member: software_version_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_version_2: ";
    value_to_yaml(msg.software_version_2, out);
    out << "\n";
  }

  // member: software_day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_day: ";
    value_to_yaml(msg.software_day, out);
    out << "\n";
  }

  // member: software_month_year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "software_month_year: ";
    value_to_yaml(msg.software_month_year, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt>()
{
  return "kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt>()
{
  return "kartech_linear_actuator_msgs/msg/SoftwareRevisionRpt";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::SoftwareRevisionRpt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SOFTWARE_REVISION_RPT__TRAITS_HPP_
