// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus8.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS8__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS8__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_status8__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrStatus8 & msg,
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

  // member: history_fault_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "history_fault_0: ";
    value_to_yaml(msg.history_fault_0, out);
    out << "\n";
  }

  // member: history_fault_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "history_fault_1: ";
    value_to_yaml(msg.history_fault_1, out);
    out << "\n";
  }

  // member: history_fault_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "history_fault_2: ";
    value_to_yaml(msg.history_fault_2, out);
    out << "\n";
  }

  // member: history_fault_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "history_fault_3: ";
    value_to_yaml(msg.history_fault_3, out);
    out << "\n";
  }

  // member: history_fault_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "history_fault_4: ";
    value_to_yaml(msg.history_fault_4, out);
    out << "\n";
  }

  // member: history_fault_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "history_fault_5: ";
    value_to_yaml(msg.history_fault_5, out);
    out << "\n";
  }

  // member: history_fault_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "history_fault_6: ";
    value_to_yaml(msg.history_fault_6, out);
    out << "\n";
  }

  // member: history_fault_7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "history_fault_7: ";
    value_to_yaml(msg.history_fault_7, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrStatus8 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrStatus8>()
{
  return "delphi_esr_msgs::msg::EsrStatus8";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrStatus8>()
{
  return "delphi_esr_msgs/msg/EsrStatus8";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrStatus8>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrStatus8>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrStatus8>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS8__TRAITS_HPP_
