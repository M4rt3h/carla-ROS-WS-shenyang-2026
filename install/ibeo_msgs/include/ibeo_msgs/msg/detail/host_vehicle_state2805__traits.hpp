// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/HostVehicleState2805.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__TRAITS_HPP_

#include "ibeo_msgs/msg/detail/host_vehicle_state2805__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__traits.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ibeo_msgs::msg::HostVehicleState2805 & msg,
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

  // member: ibeo_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ibeo_header:\n";
    to_yaml(msg.ibeo_header, out, indentation + 2);
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: scan_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_number: ";
    value_to_yaml(msg.scan_number, out);
    out << "\n";
  }

  // member: error_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_flags: ";
    value_to_yaml(msg.error_flags, out);
    out << "\n";
  }

  // member: longitudinal_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitudinal_velocity: ";
    value_to_yaml(msg.longitudinal_velocity, out);
    out << "\n";
  }

  // member: steering_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_wheel_angle: ";
    value_to_yaml(msg.steering_wheel_angle, out);
    out << "\n";
  }

  // member: front_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_wheel_angle: ";
    value_to_yaml(msg.front_wheel_angle, out);
    out << "\n";
  }

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

  // member: course_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "course_angle: ";
    value_to_yaml(msg.course_angle, out);
    out << "\n";
  }

  // member: time_difference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_difference: ";
    value_to_yaml(msg.time_difference, out);
    out << "\n";
  }

  // member: x_difference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_difference: ";
    value_to_yaml(msg.x_difference, out);
    out << "\n";
  }

  // member: y_difference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_difference: ";
    value_to_yaml(msg.y_difference, out);
    out << "\n";
  }

  // member: heading_difference
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_difference: ";
    value_to_yaml(msg.heading_difference, out);
    out << "\n";
  }

  // member: current_yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_yaw_rate: ";
    value_to_yaml(msg.current_yaw_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ibeo_msgs::msg::HostVehicleState2805 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ibeo_msgs::msg::HostVehicleState2805>()
{
  return "ibeo_msgs::msg::HostVehicleState2805";
}

template<>
inline const char * name<ibeo_msgs::msg::HostVehicleState2805>()
{
  return "ibeo_msgs/msg/HostVehicleState2805";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::HostVehicleState2805>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<ibeo_msgs::msg::IbeoDataHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::HostVehicleState2805>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<ibeo_msgs::msg::IbeoDataHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ibeo_msgs::msg::HostVehicleState2805>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__TRAITS_HPP_
