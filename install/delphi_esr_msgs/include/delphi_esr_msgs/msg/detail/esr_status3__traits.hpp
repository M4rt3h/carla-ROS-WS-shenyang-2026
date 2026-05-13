// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status3__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrStatus3 & msg,
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

  // member: interface_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface_version: ";
    value_to_yaml(msg.interface_version, out);
    out << "\n";
  }

  // member: hw_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hw_version: ";
    value_to_yaml(msg.hw_version, out);
    out << "\n";
  }

  // member: sw_version_host
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw_version_host: ";
    value_to_yaml(msg.sw_version_host, out);
    out << "\n";
  }

  // member: serial_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serial_num: ";
    value_to_yaml(msg.serial_num, out);
    out << "\n";
  }

  // member: sw_version_pld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sw_version_pld: ";
    value_to_yaml(msg.sw_version_pld, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrStatus3 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrStatus3>()
{
  return "delphi_esr_msgs::msg::EsrStatus3";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrStatus3>()
{
  return "delphi_esr_msgs/msg/EsrStatus3";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrStatus3>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrStatus3>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrStatus3>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__TRAITS_HPP_
