// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/Tsr.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR__TRAITS_HPP_

#include "mobileye_560_660_msgs/msg/detail/tsr__struct.hpp"
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
  const mobileye_560_660_msgs::msg::Tsr & msg,
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

  // member: vision_only_sign_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_only_sign_type: ";
    value_to_yaml(msg.vision_only_sign_type, out);
    out << "\n";
  }

  // member: vision_only_supplementary_sign_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vision_only_supplementary_sign_type: ";
    value_to_yaml(msg.vision_only_supplementary_sign_type, out);
    out << "\n";
  }

  // member: sign_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_position_x: ";
    value_to_yaml(msg.sign_position_x, out);
    out << "\n";
  }

  // member: sign_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_position_y: ";
    value_to_yaml(msg.sign_position_y, out);
    out << "\n";
  }

  // member: sign_position_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sign_position_z: ";
    value_to_yaml(msg.sign_position_z, out);
    out << "\n";
  }

  // member: filter_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filter_type: ";
    value_to_yaml(msg.filter_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mobileye_560_660_msgs::msg::Tsr & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::Tsr>()
{
  return "mobileye_560_660_msgs::msg::Tsr";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::Tsr>()
{
  return "mobileye_560_660_msgs/msg/Tsr";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::Tsr>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::Tsr>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::Tsr>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR__TRAITS_HPP_
