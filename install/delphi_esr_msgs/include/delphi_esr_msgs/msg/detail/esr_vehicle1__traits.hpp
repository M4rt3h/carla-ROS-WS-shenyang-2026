// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_vehicle1__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrVehicle1 & msg,
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

  // member: vehicle_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_speed: ";
    value_to_yaml(msg.vehicle_speed, out);
    out << "\n";
  }

  // member: vehicle_speed_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_speed_direction: ";
    value_to_yaml(msg.vehicle_speed_direction, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: yaw_rate_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate_validity: ";
    value_to_yaml(msg.yaw_rate_validity, out);
    out << "\n";
  }

  // member: steering_angle_rate_sign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_rate_sign: ";
    value_to_yaml(msg.steering_angle_rate_sign, out);
    out << "\n";
  }

  // member: radius_curvature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius_curvature: ";
    value_to_yaml(msg.radius_curvature, out);
    out << "\n";
  }

  // member: steering_angle_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_validity: ";
    value_to_yaml(msg.steering_angle_validity, out);
    out << "\n";
  }

  // member: steering_angle_sign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_sign: ";
    value_to_yaml(msg.steering_angle_sign, out);
    out << "\n";
  }

  // member: steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle: ";
    value_to_yaml(msg.steering_angle, out);
    out << "\n";
  }

  // member: steering_angle_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_angle_rate: ";
    value_to_yaml(msg.steering_angle_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrVehicle1 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrVehicle1>()
{
  return "delphi_esr_msgs::msg::EsrVehicle1";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrVehicle1>()
{
  return "delphi_esr_msgs/msg/EsrVehicle1";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrVehicle1>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrVehicle1>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrVehicle1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__TRAITS_HPP_
