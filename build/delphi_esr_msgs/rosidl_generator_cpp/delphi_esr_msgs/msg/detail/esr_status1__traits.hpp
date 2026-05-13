// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status1__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrStatus1 & msg,
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

  // member: canmsg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "canmsg: ";
    value_to_yaml(msg.canmsg, out);
    out << "\n";
  }

  // member: rolling_count_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rolling_count_1: ";
    value_to_yaml(msg.rolling_count_1, out);
    out << "\n";
  }

  // member: dsp_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dsp_timestamp: ";
    value_to_yaml(msg.dsp_timestamp, out);
    out << "\n";
  }

  // member: comm_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "comm_error: ";
    value_to_yaml(msg.comm_error, out);
    out << "\n";
  }

  // member: radius_curvature_calc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius_curvature_calc: ";
    value_to_yaml(msg.radius_curvature_calc, out);
    out << "\n";
  }

  // member: scan_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_index: ";
    value_to_yaml(msg.scan_index, out);
    out << "\n";
  }

  // member: yaw_rate_calc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate_calc: ";
    value_to_yaml(msg.yaw_rate_calc, out);
    out << "\n";
  }

  // member: vehicle_speed_calc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_speed_calc: ";
    value_to_yaml(msg.vehicle_speed_calc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrStatus1 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrStatus1>()
{
  return "delphi_esr_msgs::msg::EsrStatus1";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrStatus1>()
{
  return "delphi_esr_msgs/msg/EsrStatus1";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrStatus1>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrStatus1>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrStatus1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__TRAITS_HPP_
