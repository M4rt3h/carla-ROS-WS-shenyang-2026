// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from carla_waypoint_types:srv/GetActorWaypoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__TRAITS_HPP_
#define CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__TRAITS_HPP_

#include "carla_waypoint_types/srv/detail/get_actor_waypoint__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_waypoint_types::srv::GetActorWaypoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_waypoint_types::srv::GetActorWaypoint_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_waypoint_types::srv::GetActorWaypoint_Request>()
{
  return "carla_waypoint_types::srv::GetActorWaypoint_Request";
}

template<>
inline const char * name<carla_waypoint_types::srv::GetActorWaypoint_Request>()
{
  return "carla_waypoint_types/srv/GetActorWaypoint_Request";
}

template<>
struct has_fixed_size<carla_waypoint_types::srv::GetActorWaypoint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<carla_waypoint_types::srv::GetActorWaypoint_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<carla_waypoint_types::srv::GetActorWaypoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'waypoint'
#include "carla_waypoint_types/msg/detail/carla_waypoint__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const carla_waypoint_types::srv::GetActorWaypoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint:\n";
    to_yaml(msg.waypoint, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const carla_waypoint_types::srv::GetActorWaypoint_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<carla_waypoint_types::srv::GetActorWaypoint_Response>()
{
  return "carla_waypoint_types::srv::GetActorWaypoint_Response";
}

template<>
inline const char * name<carla_waypoint_types::srv::GetActorWaypoint_Response>()
{
  return "carla_waypoint_types/srv/GetActorWaypoint_Response";
}

template<>
struct has_fixed_size<carla_waypoint_types::srv::GetActorWaypoint_Response>
  : std::integral_constant<bool, has_fixed_size<carla_waypoint_types::msg::CarlaWaypoint>::value> {};

template<>
struct has_bounded_size<carla_waypoint_types::srv::GetActorWaypoint_Response>
  : std::integral_constant<bool, has_bounded_size<carla_waypoint_types::msg::CarlaWaypoint>::value> {};

template<>
struct is_message<carla_waypoint_types::srv::GetActorWaypoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<carla_waypoint_types::srv::GetActorWaypoint>()
{
  return "carla_waypoint_types::srv::GetActorWaypoint";
}

template<>
inline const char * name<carla_waypoint_types::srv::GetActorWaypoint>()
{
  return "carla_waypoint_types/srv/GetActorWaypoint";
}

template<>
struct has_fixed_size<carla_waypoint_types::srv::GetActorWaypoint>
  : std::integral_constant<
    bool,
    has_fixed_size<carla_waypoint_types::srv::GetActorWaypoint_Request>::value &&
    has_fixed_size<carla_waypoint_types::srv::GetActorWaypoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<carla_waypoint_types::srv::GetActorWaypoint>
  : std::integral_constant<
    bool,
    has_bounded_size<carla_waypoint_types::srv::GetActorWaypoint_Request>::value &&
    has_bounded_size<carla_waypoint_types::srv::GetActorWaypoint_Response>::value
  >
{
};

template<>
struct is_service<carla_waypoint_types::srv::GetActorWaypoint>
  : std::true_type
{
};

template<>
struct is_service_request<carla_waypoint_types::srv::GetActorWaypoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<carla_waypoint_types::srv::GetActorWaypoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARLA_WAYPOINT_TYPES__SRV__DETAIL__GET_ACTOR_WAYPOINT__TRAITS_HPP_
