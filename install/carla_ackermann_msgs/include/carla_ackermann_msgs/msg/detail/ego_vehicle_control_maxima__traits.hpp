// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlMaxima.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__TRAITS_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__TRAITS_HPP_

#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_ackermann_msgs::msg::EgoVehicleControlMaxima & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: max_steering_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_steering_angle: ";
    value_to_yaml(msg.max_steering_angle, out);
    out << "\n";
  }

  // member: max_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_speed: ";
    value_to_yaml(msg.max_speed, out);
    out << "\n";
  }

  // member: max_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_accel: ";
    value_to_yaml(msg.max_accel, out);
    out << "\n";
  }

  // member: max_decel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_decel: ";
    value_to_yaml(msg.max_decel, out);
    out << "\n";
  }

  // member: min_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_accel: ";
    value_to_yaml(msg.min_accel, out);
    out << "\n";
  }

  // member: max_pedal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_pedal: ";
    value_to_yaml(msg.max_pedal, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_ackermann_msgs::msg::EgoVehicleControlMaxima & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>()
{
  return "carla_ackermann_msgs::msg::EgoVehicleControlMaxima";
}

template<>
inline const char * name<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>()
{
  return "carla_ackermann_msgs/msg/EgoVehicleControlMaxima";
}

template<>
struct has_fixed_size<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_MAXIMA__TRAITS_HPP_
