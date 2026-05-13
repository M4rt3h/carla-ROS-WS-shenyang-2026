// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrValid1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID1__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID1__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_valid1__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrValid1 & msg,
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

  // member: lr_sn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_sn: ";
    value_to_yaml(msg.lr_sn, out);
    out << "\n";
  }

  // member: lr_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_range: ";
    value_to_yaml(msg.lr_range, out);
    out << "\n";
  }

  // member: lr_range_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_range_rate: ";
    value_to_yaml(msg.lr_range_rate, out);
    out << "\n";
  }

  // member: lr_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_angle: ";
    value_to_yaml(msg.lr_angle, out);
    out << "\n";
  }

  // member: lr_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_power: ";
    value_to_yaml(msg.lr_power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrValid1 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrValid1>()
{
  return "delphi_esr_msgs::msg::EsrValid1";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrValid1>()
{
  return "delphi_esr_msgs/msg/EsrValid1";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrValid1>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrValid1>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrValid1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID1__TRAITS_HPP_
