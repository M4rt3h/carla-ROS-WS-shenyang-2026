// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ScanPoint2205.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__TRAITS_HPP_

#include "ibeo_msgs/msg/detail/scan_point2205__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ibeo_msgs::msg::ScanPoint2205 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_position: ";
    value_to_yaml(msg.x_position, out);
    out << "\n";
  }

  // member: y_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_position: ";
    value_to_yaml(msg.y_position, out);
    out << "\n";
  }

  // member: z_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_position: ";
    value_to_yaml(msg.z_position, out);
    out << "\n";
  }

  // member: echo_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "echo_width: ";
    value_to_yaml(msg.echo_width, out);
    out << "\n";
  }

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    value_to_yaml(msg.device_id, out);
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

  // member: echo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "echo: ";
    value_to_yaml(msg.echo, out);
    out << "\n";
  }

  // member: time_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset: ";
    value_to_yaml(msg.time_offset, out);
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

  // member: precipitation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "precipitation: ";
    value_to_yaml(msg.precipitation, out);
    out << "\n";
  }

  // member: transparent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transparent: ";
    value_to_yaml(msg.transparent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ibeo_msgs::msg::ScanPoint2205 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ibeo_msgs::msg::ScanPoint2205>()
{
  return "ibeo_msgs::msg::ScanPoint2205";
}

template<>
inline const char * name<ibeo_msgs::msg::ScanPoint2205>()
{
  return "ibeo_msgs/msg/ScanPoint2205";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ScanPoint2205>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ScanPoint2205>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ibeo_msgs::msg::ScanPoint2205>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_POINT2205__TRAITS_HPP_
