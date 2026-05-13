// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rviz_2d_overlay_msgs:msg/OverlayText.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__TRAITS_HPP_
#define RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__TRAITS_HPP_

#include "rviz_2d_overlay_msgs/msg/detail/overlay_text__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'bg_color'
// Member 'fg_color'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const rviz_2d_overlay_msgs::msg::OverlayText & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: horizontal_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_distance: ";
    value_to_yaml(msg.horizontal_distance, out);
    out << "\n";
  }

  // member: vertical_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_distance: ";
    value_to_yaml(msg.vertical_distance, out);
    out << "\n";
  }

  // member: horizontal_alignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "horizontal_alignment: ";
    value_to_yaml(msg.horizontal_alignment, out);
    out << "\n";
  }

  // member: vertical_alignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_alignment: ";
    value_to_yaml(msg.vertical_alignment, out);
    out << "\n";
  }

  // member: bg_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bg_color:\n";
    to_yaml(msg.bg_color, out, indentation + 2);
  }

  // member: line_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "line_width: ";
    value_to_yaml(msg.line_width, out);
    out << "\n";
  }

  // member: text_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text_size: ";
    value_to_yaml(msg.text_size, out);
    out << "\n";
  }

  // member: font
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "font: ";
    value_to_yaml(msg.font, out);
    out << "\n";
  }

  // member: fg_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fg_color:\n";
    to_yaml(msg.fg_color, out, indentation + 2);
  }

  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const rviz_2d_overlay_msgs::msg::OverlayText & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<rviz_2d_overlay_msgs::msg::OverlayText>()
{
  return "rviz_2d_overlay_msgs::msg::OverlayText";
}

template<>
inline const char * name<rviz_2d_overlay_msgs::msg::OverlayText>()
{
  return "rviz_2d_overlay_msgs/msg/OverlayText";
}

template<>
struct has_fixed_size<rviz_2d_overlay_msgs::msg::OverlayText>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rviz_2d_overlay_msgs::msg::OverlayText>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rviz_2d_overlay_msgs::msg::OverlayText>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__TRAITS_HPP_
