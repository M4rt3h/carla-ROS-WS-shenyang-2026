// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaReferenceLine.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_LINE__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_LINE__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_reference_line__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'reference_line'
#include "carla_msgs/msg/detail/carla_reference_point__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_msgs::msg::CarlaReferenceLine & msg,
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

  // member: reference_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_line.size() == 0) {
      out << "reference_line: []\n";
    } else {
      out << "reference_line:\n";
      for (auto item : msg.reference_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_msgs::msg::CarlaReferenceLine & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_msgs::msg::CarlaReferenceLine>()
{
  return "carla_msgs::msg::CarlaReferenceLine";
}

template<>
inline const char * name<carla_msgs::msg::CarlaReferenceLine>()
{
  return "carla_msgs/msg/CarlaReferenceLine";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaReferenceLine>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaReferenceLine>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carla_msgs::msg::CarlaReferenceLine>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_LINE__TRAITS_HPP_
