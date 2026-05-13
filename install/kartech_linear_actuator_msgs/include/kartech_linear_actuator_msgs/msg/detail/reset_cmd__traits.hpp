// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ResetCmd.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__TRAITS_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__TRAITS_HPP_

#include "kartech_linear_actuator_msgs/msg/detail/reset_cmd__struct.hpp"
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
  const kartech_linear_actuator_msgs::msg::ResetCmd & msg,
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

  // member: reset_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_type: ";
    value_to_yaml(msg.reset_type, out);
    out << "\n";
  }

  // member: reset_user_rpt_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_user_rpt_id: ";
    value_to_yaml(msg.reset_user_rpt_id, out);
    out << "\n";
  }

  // member: reset_user_cmd_id_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_user_cmd_id_1: ";
    value_to_yaml(msg.reset_user_cmd_id_1, out);
    out << "\n";
  }

  // member: reset_user_cmd_id_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_user_cmd_id_2: ";
    value_to_yaml(msg.reset_user_cmd_id_2, out);
    out << "\n";
  }

  // member: reset_user_cmd_id_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_user_cmd_id_3: ";
    value_to_yaml(msg.reset_user_cmd_id_3, out);
    out << "\n";
  }

  // member: reset_user_cmd_id_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_user_cmd_id_4: ";
    value_to_yaml(msg.reset_user_cmd_id_4, out);
    out << "\n";
  }

  // member: disable_user_rpt_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disable_user_rpt_id: ";
    value_to_yaml(msg.disable_user_rpt_id, out);
    out << "\n";
  }

  // member: reenable_default_cmd_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reenable_default_cmd_id: ";
    value_to_yaml(msg.reenable_default_cmd_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const kartech_linear_actuator_msgs::msg::ResetCmd & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<kartech_linear_actuator_msgs::msg::ResetCmd>()
{
  return "kartech_linear_actuator_msgs::msg::ResetCmd";
}

template<>
inline const char * name<kartech_linear_actuator_msgs::msg::ResetCmd>()
{
  return "kartech_linear_actuator_msgs/msg/ResetCmd";
}

template<>
struct has_fixed_size<kartech_linear_actuator_msgs::msg::ResetCmd>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<kartech_linear_actuator_msgs::msg::ResetCmd>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<kartech_linear_actuator_msgs::msg::ResetCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__RESET_CMD__TRAITS_HPP_
