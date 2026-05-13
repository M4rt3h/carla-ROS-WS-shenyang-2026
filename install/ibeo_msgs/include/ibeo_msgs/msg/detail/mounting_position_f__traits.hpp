// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/MountingPositionF.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__TRAITS_HPP_

#include "ibeo_msgs/msg/detail/mounting_position_f__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ibeo_msgs::msg::MountingPositionF & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: yaw_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_angle: ";
    value_to_yaml(msg.yaw_angle, out);
    out << "\n";
  }

  // member: pitch_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_angle: ";
    value_to_yaml(msg.pitch_angle, out);
    out << "\n";
  }

  // member: roll_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_angle: ";
    value_to_yaml(msg.roll_angle, out);
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

  // member: z_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_position: ";
    value_to_yaml(msg.z_position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ibeo_msgs::msg::MountingPositionF & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ibeo_msgs::msg::MountingPositionF>()
{
  return "ibeo_msgs::msg::MountingPositionF";
}

template<>
inline const char * name<ibeo_msgs::msg::MountingPositionF>()
{
  return "ibeo_msgs/msg/MountingPositionF";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::MountingPositionF>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::MountingPositionF>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ibeo_msgs::msg::MountingPositionF>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__TRAITS_HPP_
