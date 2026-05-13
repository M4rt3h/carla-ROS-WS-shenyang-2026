// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__TRAITS_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__TRAITS_HPP_

#include "delphi_srr_msgs/msg/detail/srr_status3__struct.hpp"
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
  const delphi_srr_msgs::msg::SrrStatus3 & msg,
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

  // member: can_tx_alignment_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_alignment_state: ";
    value_to_yaml(msg.can_tx_alignment_state, out);
    out << "\n";
  }

  // member: can_tx_interface_ver_minor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_interface_ver_minor: ";
    value_to_yaml(msg.can_tx_interface_ver_minor, out);
    out << "\n";
  }

  // member: can_tx_sw_version_arm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_sw_version_arm: ";
    value_to_yaml(msg.can_tx_sw_version_arm, out);
    out << "\n";
  }

  // member: can_tx_hw_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_hw_version: ";
    value_to_yaml(msg.can_tx_hw_version, out);
    out << "\n";
  }

  // member: can_tx_interface_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_interface_version: ";
    value_to_yaml(msg.can_tx_interface_version, out);
    out << "\n";
  }

  // member: can_tx_serial_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_serial_num: ";
    value_to_yaml(msg.can_tx_serial_num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_srr_msgs::msg::SrrStatus3 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_srr_msgs::msg::SrrStatus3>()
{
  return "delphi_srr_msgs::msg::SrrStatus3";
}

template<>
inline const char * name<delphi_srr_msgs::msg::SrrStatus3>()
{
  return "delphi_srr_msgs/msg/SrrStatus3";
}

template<>
struct has_fixed_size<delphi_srr_msgs::msg::SrrStatus3>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_srr_msgs::msg::SrrStatus3>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_srr_msgs::msg::SrrStatus3>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS3__TRAITS_HPP_
