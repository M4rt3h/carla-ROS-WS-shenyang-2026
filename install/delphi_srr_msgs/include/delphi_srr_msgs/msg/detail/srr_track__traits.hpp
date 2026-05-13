// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_srr_msgs:msg/SrrTrack.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__TRAITS_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__TRAITS_HPP_

#include "delphi_srr_msgs/msg/detail/srr_track__struct.hpp"
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
  const delphi_srr_msgs::msg::SrrTrack & msg,
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

  // member: can_tx_detect_valid_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_valid_level: ";
    value_to_yaml(msg.can_tx_detect_valid_level, out);
    out << "\n";
  }

  // member: can_tx_detect_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_status: ";
    value_to_yaml(msg.can_tx_detect_status, out);
    out << "\n";
  }

  // member: can_tx_detect_range_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_range_rate: ";
    value_to_yaml(msg.can_tx_detect_range_rate, out);
    out << "\n";
  }

  // member: can_tx_detect_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_range: ";
    value_to_yaml(msg.can_tx_detect_range, out);
    out << "\n";
  }

  // member: can_tx_detect_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_angle: ";
    value_to_yaml(msg.can_tx_detect_angle, out);
    out << "\n";
  }

  // member: can_tx_detect_amplitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_tx_detect_amplitude: ";
    value_to_yaml(msg.can_tx_detect_amplitude, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_srr_msgs::msg::SrrTrack & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_srr_msgs::msg::SrrTrack>()
{
  return "delphi_srr_msgs::msg::SrrTrack";
}

template<>
inline const char * name<delphi_srr_msgs::msg::SrrTrack>()
{
  return "delphi_srr_msgs/msg/SrrTrack";
}

template<>
struct has_fixed_size<delphi_srr_msgs::msg::SrrTrack>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_srr_msgs::msg::SrrTrack>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_srr_msgs::msg::SrrTrack>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_TRACK__TRAITS_HPP_
