// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_vehicle5__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrVehicle5 & msg,
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

  // member: oversteer_understeer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "oversteer_understeer: ";
    value_to_yaml(msg.oversteer_understeer, out);
    out << "\n";
  }

  // member: yaw_rate_bias_shift
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate_bias_shift: ";
    value_to_yaml(msg.yaw_rate_bias_shift, out);
    out << "\n";
  }

  // member: beamwidth_vert
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beamwidth_vert: ";
    value_to_yaml(msg.beamwidth_vert, out);
    out << "\n";
  }

  // member: funnel_offset_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "funnel_offset_left: ";
    value_to_yaml(msg.funnel_offset_left, out);
    out << "\n";
  }

  // member: funnel_offset_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "funnel_offset_right: ";
    value_to_yaml(msg.funnel_offset_right, out);
    out << "\n";
  }

  // member: cw_blockage_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cw_blockage_threshold: ";
    value_to_yaml(msg.cw_blockage_threshold, out);
    out << "\n";
  }

  // member: distance_rear_axle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_rear_axle: ";
    value_to_yaml(msg.distance_rear_axle, out);
    out << "\n";
  }

  // member: wheelbase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheelbase: ";
    value_to_yaml(msg.wheelbase, out);
    out << "\n";
  }

  // member: steering_gear_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steering_gear_ratio: ";
    value_to_yaml(msg.steering_gear_ratio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrVehicle5 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrVehicle5>()
{
  return "delphi_esr_msgs::msg::EsrVehicle5";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrVehicle5>()
{
  return "delphi_esr_msgs/msg/EsrVehicle5";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrVehicle5>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrVehicle5>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrVehicle5>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__TRAITS_HPP_
