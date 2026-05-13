// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from neobotix_usboard_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_

#include "neobotix_usboard_msgs/msg/detail/sensors__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'sensors'
#include "neobotix_usboard_msgs/msg/detail/sensor_data__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const neobotix_usboard_msgs::msg::Sensors & msg,
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

  // member: sensors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sensors.size() == 0) {
      out << "sensors: []\n";
    } else {
      out << "sensors:\n";
      for (auto item : msg.sensors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const neobotix_usboard_msgs::msg::Sensors & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<neobotix_usboard_msgs::msg::Sensors>()
{
  return "neobotix_usboard_msgs::msg::Sensors";
}

template<>
inline const char * name<neobotix_usboard_msgs::msg::Sensors>()
{
  return "neobotix_usboard_msgs/msg/Sensors";
}

template<>
struct has_fixed_size<neobotix_usboard_msgs::msg::Sensors>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<neobotix_usboard_msgs::msg::Sensors>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<neobotix_usboard_msgs::msg::Sensors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_
