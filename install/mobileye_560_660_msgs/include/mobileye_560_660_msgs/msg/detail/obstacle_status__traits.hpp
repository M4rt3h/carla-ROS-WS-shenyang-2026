// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/ObstacleStatus.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__TRAITS_HPP_

#include "mobileye_560_660_msgs/msg/detail/obstacle_status__struct.hpp"
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
  const mobileye_560_660_msgs::msg::ObstacleStatus & msg,
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

  // member: num_obstacles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_obstacles: ";
    value_to_yaml(msg.num_obstacles, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: application_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "application_version: ";
    value_to_yaml(msg.application_version, out);
    out << "\n";
  }

  // member: active_version_number_section
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active_version_number_section: ";
    value_to_yaml(msg.active_version_number_section, out);
    out << "\n";
  }

  // member: left_close_range_cut_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_close_range_cut_in: ";
    value_to_yaml(msg.left_close_range_cut_in, out);
    out << "\n";
  }

  // member: right_close_range_cut_in
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_close_range_cut_in: ";
    value_to_yaml(msg.right_close_range_cut_in, out);
    out << "\n";
  }

  // member: stop_go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stop_go: ";
    value_to_yaml(msg.stop_go, out);
    out << "\n";
  }

  // member: protocol_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "protocol_version: ";
    value_to_yaml(msg.protocol_version, out);
    out << "\n";
  }

  // member: close_car
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "close_car: ";
    value_to_yaml(msg.close_car, out);
    out << "\n";
  }

  // member: failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failsafe: ";
    value_to_yaml(msg.failsafe, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mobileye_560_660_msgs::msg::ObstacleStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::ObstacleStatus>()
{
  return "mobileye_560_660_msgs::msg::ObstacleStatus";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::ObstacleStatus>()
{
  return "mobileye_560_660_msgs/msg/ObstacleStatus";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::ObstacleStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::ObstacleStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::ObstacleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__TRAITS_HPP_
