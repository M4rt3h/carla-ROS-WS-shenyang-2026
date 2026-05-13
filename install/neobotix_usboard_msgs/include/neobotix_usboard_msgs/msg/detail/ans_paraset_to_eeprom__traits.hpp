// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neobotix_usboard_msgs:msg/AnsParasetToEEPROM.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__TRAITS_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__TRAITS_HPP_

#include "neobotix_usboard_msgs/msg/detail/ans_paraset_to_eeprom__struct.hpp"
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
  const neobotix_usboard_msgs::msg::AnsParasetToEEPROM & msg,
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

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: paraset_cksum_low_byte
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_cksum_low_byte: ";
    value_to_yaml(msg.paraset_cksum_low_byte, out);
    out << "\n";
  }

  // member: paraset_cksum_high_byte
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_cksum_high_byte: ";
    value_to_yaml(msg.paraset_cksum_high_byte, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const neobotix_usboard_msgs::msg::AnsParasetToEEPROM & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<neobotix_usboard_msgs::msg::AnsParasetToEEPROM>()
{
  return "neobotix_usboard_msgs::msg::AnsParasetToEEPROM";
}

template<>
inline const char * name<neobotix_usboard_msgs::msg::AnsParasetToEEPROM>()
{
  return "neobotix_usboard_msgs/msg/AnsParasetToEEPROM";
}

template<>
struct has_fixed_size<neobotix_usboard_msgs::msg::AnsParasetToEEPROM>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<neobotix_usboard_msgs::msg::AnsParasetToEEPROM>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<neobotix_usboard_msgs::msg::AnsParasetToEEPROM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_PARASET_TO_EEPROM__TRAITS_HPP_
