// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/TsrVisionOnly.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR_VISION_ONLY__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR_VISION_ONLY__TRAITS_HPP_

#include "mobileye_560_660_msgs/msg/detail/tsr_vision_only__struct.hpp"
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
  const mobileye_560_660_msgs::msg::TsrVisionOnly & msg,
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

  // member: vision_only_sign_type_display1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_only_sign_type_display1: ";
    value_to_yaml(msg.vision_only_sign_type_display1, out);
    out << "\n";
  }

  // member: vision_only_supplementary_sign_type_display1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_only_supplementary_sign_type_display1: ";
    value_to_yaml(msg.vision_only_supplementary_sign_type_display1, out);
    out << "\n";
  }

  // member: vision_only_sign_type_display2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_only_sign_type_display2: ";
    value_to_yaml(msg.vision_only_sign_type_display2, out);
    out << "\n";
  }

  // member: vision_only_supplementary_sign_type_display2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_only_supplementary_sign_type_display2: ";
    value_to_yaml(msg.vision_only_supplementary_sign_type_display2, out);
    out << "\n";
  }

  // member: vision_only_sign_type_display3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_only_sign_type_display3: ";
    value_to_yaml(msg.vision_only_sign_type_display3, out);
    out << "\n";
  }

  // member: vision_only_supplementary_sign_type_display3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_only_supplementary_sign_type_display3: ";
    value_to_yaml(msg.vision_only_supplementary_sign_type_display3, out);
    out << "\n";
  }

  // member: vision_only_sign_type_display4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_only_sign_type_display4: ";
    value_to_yaml(msg.vision_only_sign_type_display4, out);
    out << "\n";
  }

  // member: vision_only_supplementary_sign_type_display4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_only_supplementary_sign_type_display4: ";
    value_to_yaml(msg.vision_only_supplementary_sign_type_display4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mobileye_560_660_msgs::msg::TsrVisionOnly & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::TsrVisionOnly>()
{
  return "mobileye_560_660_msgs::msg::TsrVisionOnly";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::TsrVisionOnly>()
{
  return "mobileye_560_660_msgs/msg/TsrVisionOnly";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::TsrVisionOnly>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::TsrVisionOnly>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::TsrVisionOnly>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR_VISION_ONLY__TRAITS_HPP_
