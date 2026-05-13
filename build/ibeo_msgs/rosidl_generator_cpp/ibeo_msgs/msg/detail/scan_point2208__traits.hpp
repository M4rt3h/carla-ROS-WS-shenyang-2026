// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ScanPoint2208.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2208__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2208__TRAITS_HPP_

#include "ibeo_msgs/msg/detail/scan_point2208__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ibeo_msgs::msg::ScanPoint2208 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: echo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "echo: ";
    value_to_yaml(msg.echo, out);
    out << "\n";
  }

  // member: layer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "layer: ";
    value_to_yaml(msg.layer, out);
    out << "\n";
  }

  // member: transparent_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transparent_point: ";
    value_to_yaml(msg.transparent_point, out);
    out << "\n";
  }

  // member: clutter_atmospheric
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clutter_atmospheric: ";
    value_to_yaml(msg.clutter_atmospheric, out);
    out << "\n";
  }

  // member: ground
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground: ";
    value_to_yaml(msg.ground, out);
    out << "\n";
  }

  // member: dirt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dirt: ";
    value_to_yaml(msg.dirt, out);
    out << "\n";
  }

  // member: horizontal_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_angle: ";
    value_to_yaml(msg.horizontal_angle, out);
    out << "\n";
  }

  // member: radial_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radial_distance: ";
    value_to_yaml(msg.radial_distance, out);
    out << "\n";
  }

  // member: echo_pulse_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "echo_pulse_width: ";
    value_to_yaml(msg.echo_pulse_width, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ibeo_msgs::msg::ScanPoint2208 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ibeo_msgs::msg::ScanPoint2208>()
{
  return "ibeo_msgs::msg::ScanPoint2208";
}

template<>
inline const char * name<ibeo_msgs::msg::ScanPoint2208>()
{
  return "ibeo_msgs/msg/ScanPoint2208";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ScanPoint2208>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ScanPoint2208>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ibeo_msgs::msg::ScanPoint2208>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2208__TRAITS_HPP_
