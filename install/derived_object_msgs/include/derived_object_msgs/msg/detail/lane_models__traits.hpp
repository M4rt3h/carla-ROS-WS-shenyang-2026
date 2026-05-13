// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from derived_object_msgs:msg/LaneModels.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__TRAITS_HPP_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__TRAITS_HPP_

#include "derived_object_msgs/msg/detail/lane_models__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'left_lane'
// Member 'right_lane'
// Member 'additional_lanes'
#include "derived_object_msgs/msg/detail/lane__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const derived_object_msgs::msg::LaneModels & msg,
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

  // member: left_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lane:\n";
    to_yaml(msg.left_lane, out, indentation + 2);
  }

  // member: right_lane
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lane:\n";
    to_yaml(msg.right_lane, out, indentation + 2);
  }

  // member: additional_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.additional_lanes.size() == 0) {
      out << "additional_lanes: []\n";
    } else {
      out << "additional_lanes:\n";
      for (auto item : msg.additional_lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const derived_object_msgs::msg::LaneModels & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<derived_object_msgs::msg::LaneModels>()
{
  return "derived_object_msgs::msg::LaneModels";
}

template<>
inline const char * name<derived_object_msgs::msg::LaneModels>()
{
  return "derived_object_msgs/msg/LaneModels";
}

template<>
struct has_fixed_size<derived_object_msgs::msg::LaneModels>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<derived_object_msgs::msg::LaneModels>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<derived_object_msgs::msg::LaneModels>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__TRAITS_HPP_
