// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_

#include "mobileye_560_660_msgs/msg/detail/lane__struct.hpp"
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
  const mobileye_560_660_msgs::msg::Lane & msg,
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

  // member: lane_curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_curvature: ";
    value_to_yaml(msg.lane_curvature, out);
    out << "\n";
  }

  // member: lane_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_heading: ";
    value_to_yaml(msg.lane_heading, out);
    out << "\n";
  }

  // member: construction_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "construction_area: ";
    value_to_yaml(msg.construction_area, out);
    out << "\n";
  }

  // member: pitch_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_angle: ";
    value_to_yaml(msg.pitch_angle, out);
    out << "\n";
  }

  // member: yaw_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_angle: ";
    value_to_yaml(msg.yaw_angle, out);
    out << "\n";
  }

  // member: right_ldw_availability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_ldw_availability: ";
    value_to_yaml(msg.right_ldw_availability, out);
    out << "\n";
  }

  // member: left_ldw_availability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_ldw_availability: ";
    value_to_yaml(msg.left_ldw_availability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mobileye_560_660_msgs::msg::Lane & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::Lane>()
{
  return "mobileye_560_660_msgs::msg::Lane";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::Lane>()
{
  return "mobileye_560_660_msgs/msg/Lane";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::Lane>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::Lane>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::Lane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
