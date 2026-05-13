// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from derived_object_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_

#include "derived_object_msgs/msg/detail/lane__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const derived_object_msgs::msg::Lane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    value_to_yaml(msg.quality, out);
    out << "\n";
  }

  // member: marker_kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_kind: ";
    value_to_yaml(msg.marker_kind, out);
    out << "\n";
  }

  // member: curve_model_kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curve_model_kind: ";
    value_to_yaml(msg.curve_model_kind, out);
    out << "\n";
  }

  // member: marker_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_offset: ";
    value_to_yaml(msg.marker_offset, out);
    out << "\n";
  }

  // member: heading_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_angle: ";
    value_to_yaml(msg.heading_angle, out);
    out << "\n";
  }

  // member: curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature: ";
    value_to_yaml(msg.curvature, out);
    out << "\n";
  }

  // member: curvature_derivative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_derivative: ";
    value_to_yaml(msg.curvature_derivative, out);
    out << "\n";
  }

  // member: marker_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_width: ";
    value_to_yaml(msg.marker_width, out);
    out << "\n";
  }

  // member: view_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "view_range: ";
    value_to_yaml(msg.view_range, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const derived_object_msgs::msg::Lane & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<derived_object_msgs::msg::Lane>()
{
  return "derived_object_msgs::msg::Lane";
}

template<>
inline const char * name<derived_object_msgs::msg::Lane>()
{
  return "derived_object_msgs/msg/Lane";
}

template<>
struct has_fixed_size<derived_object_msgs::msg::Lane>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<derived_object_msgs::msg::Lane>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<derived_object_msgs::msg::Lane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__TRAITS_HPP_
