// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neobotix_usboard_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_

#include "neobotix_usboard_msgs/msg/detail/sensor_data__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const neobotix_usboard_msgs::msg::SensorData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: warn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "warn: ";
    value_to_yaml(msg.warn, out);
    out << "\n";
  }

  // member: alarm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alarm: ";
    value_to_yaml(msg.alarm, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    value_to_yaml(msg.active, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const neobotix_usboard_msgs::msg::SensorData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<neobotix_usboard_msgs::msg::SensorData>()
{
  return "neobotix_usboard_msgs::msg::SensorData";
}

template<>
inline const char * name<neobotix_usboard_msgs::msg::SensorData>()
{
  return "neobotix_usboard_msgs/msg/SensorData";
}

template<>
struct has_fixed_size<neobotix_usboard_msgs::msg::SensorData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<neobotix_usboard_msgs::msg::SensorData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<neobotix_usboard_msgs::msg::SensorData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__TRAITS_HPP_
