// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/ObstacleData.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__TRAITS_HPP_

#include "mobileye_560_660_msgs/msg/detail/obstacle_data__struct.hpp"
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
  const mobileye_560_660_msgs::msg::ObstacleData & msg,
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

  // member: obstacle_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_id: ";
    value_to_yaml(msg.obstacle_id, out);
    out << "\n";
  }

  // member: obstacle_pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_pos_x: ";
    value_to_yaml(msg.obstacle_pos_x, out);
    out << "\n";
  }

  // member: obstacle_pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_pos_y: ";
    value_to_yaml(msg.obstacle_pos_y, out);
    out << "\n";
  }

  // member: blinker_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blinker_info: ";
    value_to_yaml(msg.blinker_info, out);
    out << "\n";
  }

  // member: cut_in_and_out
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cut_in_and_out: ";
    value_to_yaml(msg.cut_in_and_out, out);
    out << "\n";
  }

  // member: obstacle_rel_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_rel_vel_x: ";
    value_to_yaml(msg.obstacle_rel_vel_x, out);
    out << "\n";
  }

  // member: obstacle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_type: ";
    value_to_yaml(msg.obstacle_type, out);
    out << "\n";
  }

  // member: obstacle_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_status: ";
    value_to_yaml(msg.obstacle_status, out);
    out << "\n";
  }

  // member: obstacle_brake_lights
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_brake_lights: ";
    value_to_yaml(msg.obstacle_brake_lights, out);
    out << "\n";
  }

  // member: obstacle_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_valid: ";
    value_to_yaml(msg.obstacle_valid, out);
    out << "\n";
  }

  // member: obstacle_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_length: ";
    value_to_yaml(msg.obstacle_length, out);
    out << "\n";
  }

  // member: obstacle_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_width: ";
    value_to_yaml(msg.obstacle_width, out);
    out << "\n";
  }

  // member: obstacle_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_age: ";
    value_to_yaml(msg.obstacle_age, out);
    out << "\n";
  }

  // member: obstacle_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_lane: ";
    value_to_yaml(msg.obstacle_lane, out);
    out << "\n";
  }

  // member: cipv_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cipv_flag: ";
    value_to_yaml(msg.cipv_flag, out);
    out << "\n";
  }

  // member: radar_pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_pos_x: ";
    value_to_yaml(msg.radar_pos_x, out);
    out << "\n";
  }

  // member: radar_vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_vel_x: ";
    value_to_yaml(msg.radar_vel_x, out);
    out << "\n";
  }

  // member: radar_match_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_match_confidence: ";
    value_to_yaml(msg.radar_match_confidence, out);
    out << "\n";
  }

  // member: matched_radar_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "matched_radar_id: ";
    value_to_yaml(msg.matched_radar_id, out);
    out << "\n";
  }

  // member: obstacle_angle_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_angle_rate: ";
    value_to_yaml(msg.obstacle_angle_rate, out);
    out << "\n";
  }

  // member: obstacle_scale_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_scale_change: ";
    value_to_yaml(msg.obstacle_scale_change, out);
    out << "\n";
  }

  // member: object_accel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_accel_x: ";
    value_to_yaml(msg.object_accel_x, out);
    out << "\n";
  }

  // member: obstacle_replaced
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_replaced: ";
    value_to_yaml(msg.obstacle_replaced, out);
    out << "\n";
  }

  // member: obstacle_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle_angle: ";
    value_to_yaml(msg.obstacle_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mobileye_560_660_msgs::msg::ObstacleData & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::ObstacleData>()
{
  return "mobileye_560_660_msgs::msg::ObstacleData";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::ObstacleData>()
{
  return "mobileye_560_660_msgs/msg/ObstacleData";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::ObstacleData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::ObstacleData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::ObstacleData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__TRAITS_HPP_
