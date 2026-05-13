// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_ackermann_msgs:msg/EgoVehicleControlInfo.idl
// generated code does not contain a copyright notice

#ifndef CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__TRAITS_HPP_
#define CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__TRAITS_HPP_

#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_info__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'restrictions'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_maxima__traits.hpp"
// Member 'target'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_target__traits.hpp"
// Member 'current'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_current__traits.hpp"
// Member 'status'
#include "carla_ackermann_msgs/msg/detail/ego_vehicle_control_status__traits.hpp"
// Member 'output'
#include "carla_msgs/msg/detail/carla_ego_vehicle_control__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_ackermann_msgs::msg::EgoVehicleControlInfo & msg,
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

  // member: restrictions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "restrictions:\n";
    to_yaml(msg.restrictions, out, indentation + 2);
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_yaml(msg.target, out, indentation + 2);
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current:\n";
    to_yaml(msg.current, out, indentation + 2);
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_yaml(msg.status, out, indentation + 2);
  }

  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output:\n";
    to_yaml(msg.output, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_ackermann_msgs::msg::EgoVehicleControlInfo & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_ackermann_msgs::msg::EgoVehicleControlInfo>()
{
  return "carla_ackermann_msgs::msg::EgoVehicleControlInfo";
}

template<>
inline const char * name<carla_ackermann_msgs::msg::EgoVehicleControlInfo>()
{
  return "carla_ackermann_msgs/msg/EgoVehicleControlInfo";
}

template<>
struct has_fixed_size<carla_ackermann_msgs::msg::EgoVehicleControlInfo>
  : std::integral_constant<bool, has_fixed_size<carla_ackermann_msgs::msg::EgoVehicleControlCurrent>::value && has_fixed_size<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>::value && has_fixed_size<carla_ackermann_msgs::msg::EgoVehicleControlStatus>::value && has_fixed_size<carla_ackermann_msgs::msg::EgoVehicleControlTarget>::value && has_fixed_size<carla_msgs::msg::CarlaEgoVehicleControl>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<carla_ackermann_msgs::msg::EgoVehicleControlInfo>
  : std::integral_constant<bool, has_bounded_size<carla_ackermann_msgs::msg::EgoVehicleControlCurrent>::value && has_bounded_size<carla_ackermann_msgs::msg::EgoVehicleControlMaxima>::value && has_bounded_size<carla_ackermann_msgs::msg::EgoVehicleControlStatus>::value && has_bounded_size<carla_ackermann_msgs::msg::EgoVehicleControlTarget>::value && has_bounded_size<carla_msgs::msg::CarlaEgoVehicleControl>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<carla_ackermann_msgs::msg::EgoVehicleControlInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_ACKERMANN_MSGS__MSG__DETAIL__EGO_VEHICLE_CONTROL_INFO__TRAITS_HPP_
