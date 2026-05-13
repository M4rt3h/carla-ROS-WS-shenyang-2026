// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neobotix_usboard_msgs:msg/AnsToCmdConnect.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__TRAITS_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__TRAITS_HPP_

#include "neobotix_usboard_msgs/msg/detail/ans_to_cmd_connect__struct.hpp"
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
  const neobotix_usboard_msgs::msg::AnsToCmdConnect & msg,
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

  // member: cmd_connect_ans_d7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_connect_ans_d7: ";
    value_to_yaml(msg.cmd_connect_ans_d7, out);
    out << "\n";
  }

  // member: cmd_connect_ans_d6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_connect_ans_d6: ";
    value_to_yaml(msg.cmd_connect_ans_d6, out);
    out << "\n";
  }

  // member: cmd_connect_ans_d5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_connect_ans_d5: ";
    value_to_yaml(msg.cmd_connect_ans_d5, out);
    out << "\n";
  }

  // member: cmd_connect_ans_d4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_connect_ans_d4: ";
    value_to_yaml(msg.cmd_connect_ans_d4, out);
    out << "\n";
  }

  // member: cmd_connect_ans_d3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_connect_ans_d3: ";
    value_to_yaml(msg.cmd_connect_ans_d3, out);
    out << "\n";
  }

  // member: cmd_connect_ans_d2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_connect_ans_d2: ";
    value_to_yaml(msg.cmd_connect_ans_d2, out);
    out << "\n";
  }

  // member: cmd_connect_ans_d1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd_connect_ans_d1: ";
    value_to_yaml(msg.cmd_connect_ans_d1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const neobotix_usboard_msgs::msg::AnsToCmdConnect & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<neobotix_usboard_msgs::msg::AnsToCmdConnect>()
{
  return "neobotix_usboard_msgs::msg::AnsToCmdConnect";
}

template<>
inline const char * name<neobotix_usboard_msgs::msg::AnsToCmdConnect>()
{
  return "neobotix_usboard_msgs/msg/AnsToCmdConnect";
}

template<>
struct has_fixed_size<neobotix_usboard_msgs::msg::AnsToCmdConnect>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<neobotix_usboard_msgs::msg::AnsToCmdConnect>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<neobotix_usboard_msgs::msg::AnsToCmdConnect>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__TRAITS_HPP_
