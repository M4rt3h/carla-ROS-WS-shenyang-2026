// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ZeroingMessageRpt.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__TRAITS_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/zeroing_message_rpt__struct.hpp"
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
  const kartech_linear_actuator_msgs::msg::ZeroingMessageRpt & msg,
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

  // member: chip_1_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chip_1_voltage: ";
    value_to_yaml(msg.chip_1_voltage, out);
    out << "\n";
  }

  // member: chip_2_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chip_2_voltage: ";
    value_to_yaml(msg.chip_2_voltage, out);
    out << "\n";
  }

  // member: chip_error_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chip_error_1: ";
    value_to_yaml(msg.chip_error_1, out);
    out << "\n";
  }

  // member: chip_error_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chip_error_2: ";
    value_to_yaml(msg.chip_error_2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::ZeroingMessageRpt & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt>()
{
  return "kartech_linear_actuator_msgs::msg::ZeroingMessageRpt";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt>()
{
  return "kartech_linear_actuator_msgs/msg/ZeroingMessageRpt";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::ZeroingMessageRpt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__ZEROING_MESSAGE_RPT__TRAITS_HPP_
