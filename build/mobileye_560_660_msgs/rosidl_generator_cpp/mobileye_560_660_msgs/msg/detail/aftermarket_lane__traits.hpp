// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/AftermarketLane.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AFTERMARKET_LANE__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AFTERMARKET_LANE__TRAITS_HPP_

#include "mobileye_560_660_msgs/msg/detail/aftermarket_lane__struct.hpp"
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
  const mobileye_560_660_msgs::msg::AftermarketLane & msg,
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

  // member: lane_confidence_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_confidence_left: ";
    value_to_yaml(msg.lane_confidence_left, out);
    out << "\n";
  }

  // member: ldw_available_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ldw_available_left: ";
    value_to_yaml(msg.ldw_available_left, out);
    out << "\n";
  }

  // member: lane_type_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_type_left: ";
    value_to_yaml(msg.lane_type_left, out);
    out << "\n";
  }

  // member: distance_to_left_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_left_lane: ";
    value_to_yaml(msg.distance_to_left_lane, out);
    out << "\n";
  }

  // member: lane_confidence_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_confidence_right: ";
    value_to_yaml(msg.lane_confidence_right, out);
    out << "\n";
  }

  // member: ldw_available_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ldw_available_right: ";
    value_to_yaml(msg.ldw_available_right, out);
    out << "\n";
  }

  // member: lane_type_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_type_right: ";
    value_to_yaml(msg.lane_type_right, out);
    out << "\n";
  }

  // member: distance_to_right_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_to_right_lane: ";
    value_to_yaml(msg.distance_to_right_lane, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mobileye_560_660_msgs::msg::AftermarketLane & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::AftermarketLane>()
{
  return "mobileye_560_660_msgs::msg::AftermarketLane";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::AftermarketLane>()
{
  return "mobileye_560_660_msgs/msg/AftermarketLane";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::AftermarketLane>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::AftermarketLane>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::AftermarketLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AFTERMARKET_LANE__TRAITS_HPP_
