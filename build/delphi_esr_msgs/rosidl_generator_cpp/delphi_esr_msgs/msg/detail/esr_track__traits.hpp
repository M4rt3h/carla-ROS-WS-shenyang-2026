// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_track__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrTrack & msg,
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

  // member: canmsg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "canmsg: ";
    value_to_yaml(msg.canmsg, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: lat_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_rate: ";
    value_to_yaml(msg.lat_rate, out);
    out << "\n";
  }

  // member: grouping_changed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grouping_changed: ";
    value_to_yaml(msg.grouping_changed, out);
    out << "\n";
  }

  // member: oncoming
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oncoming: ";
    value_to_yaml(msg.oncoming, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    value_to_yaml(msg.range, out);
    out << "\n";
  }

  // member: bridge_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bridge_object: ";
    value_to_yaml(msg.bridge_object, out);
    out << "\n";
  }

  // member: rolling_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rolling_count: ";
    value_to_yaml(msg.rolling_count, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: range_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_accel: ";
    value_to_yaml(msg.range_accel, out);
    out << "\n";
  }

  // member: med_range_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "med_range_mode: ";
    value_to_yaml(msg.med_range_mode, out);
    out << "\n";
  }

  // member: range_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range_rate: ";
    value_to_yaml(msg.range_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrTrack & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrTrack>()
{
  return "delphi_esr_msgs::msg::EsrTrack";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrTrack>()
{
  return "delphi_esr_msgs/msg/EsrTrack";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrTrack>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrTrack>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrTrack>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_TRACK__TRAITS_HPP_
