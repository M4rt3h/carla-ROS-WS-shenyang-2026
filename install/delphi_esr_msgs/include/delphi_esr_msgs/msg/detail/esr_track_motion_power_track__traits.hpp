// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const delphi_esr_msgs::msg::EsrTrackMotionPowerTrack & msg,
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

  // member: movable_fast
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movable_fast: ";
    value_to_yaml(msg.movable_fast, out);
    out << "\n";
  }

  // member: movable_slow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "movable_slow: ";
    value_to_yaml(msg.movable_slow, out);
    out << "\n";
  }

  // member: moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving: ";
    value_to_yaml(msg.moving, out);
    out << "\n";
  }

  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    value_to_yaml(msg.power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrTrackMotionPowerTrack & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>()
{
  return "delphi_esr_msgs::msg::EsrTrackMotionPowerTrack";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>()
{
  return "delphi_esr_msgs/msg/EsrTrackMotionPowerTrack";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK_MOTION_POWER_TRACK__TRAITS_HPP_
