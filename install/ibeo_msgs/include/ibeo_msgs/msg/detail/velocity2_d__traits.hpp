// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/Velocity2D.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__VELOCITY2_D__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__VELOCITY2_D__TRAITS_HPP_

#include "ibeo_msgs/msg/detail/velocity2_d__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ibeo_msgs::msg::Velocity2D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: velocity_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_x: ";
    value_to_yaml(msg.velocity_x, out);
    out << "\n";
  }

  // member: velocity_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_y: ";
    value_to_yaml(msg.velocity_y, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ibeo_msgs::msg::Velocity2D & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ibeo_msgs::msg::Velocity2D>()
{
  return "ibeo_msgs::msg::Velocity2D";
}

template<>
inline const char * name<ibeo_msgs::msg::Velocity2D>()
{
  return "ibeo_msgs/msg/Velocity2D";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::Velocity2D>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::Velocity2D>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ibeo_msgs::msg::Velocity2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__VELOCITY2_D__TRAITS_HPP_
