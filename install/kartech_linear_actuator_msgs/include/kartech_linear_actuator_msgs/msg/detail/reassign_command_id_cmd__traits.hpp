// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ReassignCommandIdCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__TRAITS_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/reassign_command_id_cmd__struct.hpp"
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
  const kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd & msg,
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

  // member: confirm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confirm: ";
    value_to_yaml(msg.confirm, out);
    out << "\n";
  }

  // member: command_id_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_id_index: ";
    value_to_yaml(msg.command_id_index, out);
    out << "\n";
  }

  // member: user_command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "user_command_id: ";
    value_to_yaml(msg.user_command_id, out);
    out << "\n";
  }

  // member: disable_default_command_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_default_command_id: ";
    value_to_yaml(msg.disable_default_command_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd>()
{
  return "kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd>()
{
  return "kartech_linear_actuator_msgs/msg/ReassignCommandIdCmd";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::ReassignCommandIdCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REASSIGN_COMMAND_ID_CMD__TRAITS_HPP_
