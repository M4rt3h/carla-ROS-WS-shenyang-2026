// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neobotix_usboard_msgs:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__TRAITS_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__TRAITS_HPP_

#include "neobotix_usboard_msgs/msg/detail/command__struct.hpp"
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
  const neobotix_usboard_msgs::msg::Command & msg,
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

  // member: command_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_data: ";
    value_to_yaml(msg.command_data, out);
    out << "\n";
  }

  // member: set_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_num: ";
    value_to_yaml(msg.set_num, out);
    out << "\n";
  }

  // member: paraset_byte6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte6: ";
    value_to_yaml(msg.paraset_byte6, out);
    out << "\n";
  }

  // member: paraset_byte5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte5: ";
    value_to_yaml(msg.paraset_byte5, out);
    out << "\n";
  }

  // member: paraset_byte4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte4: ";
    value_to_yaml(msg.paraset_byte4, out);
    out << "\n";
  }

  // member: paraset_byte3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte3: ";
    value_to_yaml(msg.paraset_byte3, out);
    out << "\n";
  }

  // member: paraset_byte2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte2: ";
    value_to_yaml(msg.paraset_byte2, out);
    out << "\n";
  }

  // member: paraset_byte1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "paraset_byte1: ";
    value_to_yaml(msg.paraset_byte1, out);
    out << "\n";
  }

  // member: set_active_9to16
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_active_9to16: ";
    value_to_yaml(msg.set_active_9to16, out);
    out << "\n";
  }

  // member: set_active_1to8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "set_active_1to8: ";
    value_to_yaml(msg.set_active_1to8, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const neobotix_usboard_msgs::msg::Command & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<neobotix_usboard_msgs::msg::Command>()
{
  return "neobotix_usboard_msgs::msg::Command";
}

template<>
inline const char * name<neobotix_usboard_msgs::msg::Command>()
{
  return "neobotix_usboard_msgs/msg/Command";
}

template<>
struct has_fixed_size<neobotix_usboard_msgs::msg::Command>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<neobotix_usboard_msgs::msg::Command>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<neobotix_usboard_msgs::msg::Command>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__COMMAND__TRAITS_HPP_
