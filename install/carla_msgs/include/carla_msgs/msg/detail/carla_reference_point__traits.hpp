// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_msgs:msg/CarlaReferencePoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__TRAITS_HPP_
#define CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__TRAITS_HPP_

#include "carla_msgs/msg/detail/carla_reference_point__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_msgs::msg::CarlaReferencePoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: kappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kappa: ";
    value_to_yaml(msg.kappa, out);
    out << "\n";
  }

  // member: dkappa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dkappa: ";
    value_to_yaml(msg.dkappa, out);
    out << "\n";
  }

  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    value_to_yaml(msg.s, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_msgs::msg::CarlaReferencePoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_msgs::msg::CarlaReferencePoint>()
{
  return "carla_msgs::msg::CarlaReferencePoint";
}

template<>
inline const char * name<carla_msgs::msg::CarlaReferencePoint>()
{
  return "carla_msgs/msg/CarlaReferencePoint";
}

template<>
struct has_fixed_size<carla_msgs::msg::CarlaReferencePoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carla_msgs::msg::CarlaReferencePoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carla_msgs::msg::CarlaReferencePoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__TRAITS_HPP_
