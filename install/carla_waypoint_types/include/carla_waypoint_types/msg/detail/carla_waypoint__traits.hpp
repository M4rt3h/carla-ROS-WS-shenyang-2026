// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_waypoint_types:msg/CarlaWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__TRAITS_HPP_
#define CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__TRAITS_HPP_

#include "carla_waypoint_types/msg/detail/carla_waypoint__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_waypoint_types::msg::CarlaWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: road_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_id: ";
    value_to_yaml(msg.road_id, out);
    out << "\n";
  }

  // member: section_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "section_id: ";
    value_to_yaml(msg.section_id, out);
    out << "\n";
  }

  // member: lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_id: ";
    value_to_yaml(msg.lane_id, out);
    out << "\n";
  }

  // member: is_junction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_junction: ";
    value_to_yaml(msg.is_junction, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_waypoint_types::msg::CarlaWaypoint & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_waypoint_types::msg::CarlaWaypoint>()
{
  return "carla_waypoint_types::msg::CarlaWaypoint";
}

template<>
inline const char * name<carla_waypoint_types::msg::CarlaWaypoint>()
{
  return "carla_waypoint_types/msg/CarlaWaypoint";
}

template<>
struct has_fixed_size<carla_waypoint_types::msg::CarlaWaypoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<carla_waypoint_types::msg::CarlaWaypoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<carla_waypoint_types::msg::CarlaWaypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARLA_WAYPOINT_TYPES__MSG__DETAIL__CARLA_WAYPOINT__TRAITS_HPP_
