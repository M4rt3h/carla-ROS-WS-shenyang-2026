// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/LkaLane.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__TRAITS_HPP_

#include "mobileye_560_660_msgs/msg/detail/lka_lane__struct.hpp"
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
  const mobileye_560_660_msgs::msg::LkaLane & msg,
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

  // member: lane_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_type: ";
    value_to_yaml(msg.lane_type, out);
    out << "\n";
  }

  // member: quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quality: ";
    value_to_yaml(msg.quality, out);
    out << "\n";
  }

  // member: model_degree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model_degree: ";
    value_to_yaml(msg.model_degree, out);
    out << "\n";
  }

  // member: position_parameter_c0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_parameter_c0: ";
    value_to_yaml(msg.position_parameter_c0, out);
    out << "\n";
  }

  // member: curvature_parameter_c2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_parameter_c2: ";
    value_to_yaml(msg.curvature_parameter_c2, out);
    out << "\n";
  }

  // member: curvature_derivative_parameter_c3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "curvature_derivative_parameter_c3: ";
    value_to_yaml(msg.curvature_derivative_parameter_c3, out);
    out << "\n";
  }

  // member: marking_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marking_width: ";
    value_to_yaml(msg.marking_width, out);
    out << "\n";
  }

  // member: heading_angle_parameter_c1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_angle_parameter_c1: ";
    value_to_yaml(msg.heading_angle_parameter_c1, out);
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

  // member: view_range_availability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "view_range_availability: ";
    value_to_yaml(msg.view_range_availability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mobileye_560_660_msgs::msg::LkaLane & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::LkaLane>()
{
  return "mobileye_560_660_msgs::msg::LkaLane";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::LkaLane>()
{
  return "mobileye_560_660_msgs/msg/LkaLane";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::LkaLane>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::LkaLane>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::LkaLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__TRAITS_HPP_
