// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlStatus.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_STATUS__TRAITS_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_STATUS__TRAITS_HPP_

#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_ackermann_msgs::msg::EgoVehicleControlStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: speed_control_activation_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_control_activation_count: ";
    value_to_yaml(msg.speed_control_activation_count, out);
    out << "\n";
  }

  // member: speed_control_accel_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_control_accel_delta: ";
    value_to_yaml(msg.speed_control_accel_delta, out);
    out << "\n";
  }

  // member: speed_control_accel_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_control_accel_target: ";
    value_to_yaml(msg.speed_control_accel_target, out);
    out << "\n";
  }

  // member: accel_control_pedal_delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_control_pedal_delta: ";
    value_to_yaml(msg.accel_control_pedal_delta, out);
    out << "\n";
  }

  // member: accel_control_pedal_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel_control_pedal_target: ";
    value_to_yaml(msg.accel_control_pedal_target, out);
    out << "\n";
  }

  // member: brake_upper_border
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brake_upper_border: ";
    value_to_yaml(msg.brake_upper_border, out);
    out << "\n";
  }

  // member: throttle_lower_border
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle_lower_border: ";
    value_to_yaml(msg.throttle_lower_border, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_ackermann_msgs::msg::EgoVehicleControlStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_ackermann_msgs::msg::EgoVehicleControlStatus>()
{
  return "carla_ackermann_msgs::msg::EgoVehicleControlStatus";
}

template<>
inline const char * name<carla_ackermann_msgs::msg::EgoVehicleControlStatus>()
{
  return "carla_ackermann_msgs/msg/EgoVehicleControlStatus";
}

template<>
struct has_fixed_size<carla_ackermann_msgs::msg::EgoVehicleControlStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<carla_ackermann_msgs::msg::EgoVehicleControlStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<carla_ackermann_msgs::msg::EgoVehicleControlStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_STATUS__TRAITS_HPP_
