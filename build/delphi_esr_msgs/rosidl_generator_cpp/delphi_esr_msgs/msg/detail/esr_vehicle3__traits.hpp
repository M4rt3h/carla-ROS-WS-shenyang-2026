// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_vehicle3__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrVehicle3 & msg,
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

  // member: long_accel_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "long_accel_validity: ";
    value_to_yaml(msg.long_accel_validity, out);
    out << "\n";
  }

  // member: lat_accel_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_accel_validity: ";
    value_to_yaml(msg.lat_accel_validity, out);
    out << "\n";
  }

  // member: lat_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_accel: ";
    value_to_yaml(msg.lat_accel, out);
    out << "\n";
  }

  // member: long_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "long_accel: ";
    value_to_yaml(msg.long_accel, out);
    out << "\n";
  }

  // member: radar_fov_lr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_fov_lr: ";
    value_to_yaml(msg.radar_fov_lr, out);
    out << "\n";
  }

  // member: radar_fov_mr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_fov_mr: ";
    value_to_yaml(msg.radar_fov_mr, out);
    out << "\n";
  }

  // member: auto_align_disable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_align_disable: ";
    value_to_yaml(msg.auto_align_disable, out);
    out << "\n";
  }

  // member: radar_height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_height: ";
    value_to_yaml(msg.radar_height, out);
    out << "\n";
  }

  // member: serv_align_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serv_align_type: ";
    value_to_yaml(msg.serv_align_type, out);
    out << "\n";
  }

  // member: serv_align_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serv_align_enable: ";
    value_to_yaml(msg.serv_align_enable, out);
    out << "\n";
  }

  // member: aalign_avg_ctr_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aalign_avg_ctr_total: ";
    value_to_yaml(msg.aalign_avg_ctr_total, out);
    out << "\n";
  }

  // member: auto_align_converged
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_align_converged: ";
    value_to_yaml(msg.auto_align_converged, out);
    out << "\n";
  }

  // member: wheel_slip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_slip: ";
    value_to_yaml(msg.wheel_slip, out);
    out << "\n";
  }

  // member: serv_align_updates_need
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serv_align_updates_need: ";
    value_to_yaml(msg.serv_align_updates_need, out);
    out << "\n";
  }

  // member: angle_mounting_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_mounting_offset: ";
    value_to_yaml(msg.angle_mounting_offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrVehicle3 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrVehicle3>()
{
  return "delphi_esr_msgs::msg::EsrVehicle3";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrVehicle3>()
{
  return "delphi_esr_msgs/msg/EsrVehicle3";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrVehicle3>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrVehicle3>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrVehicle3>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__TRAITS_HPP_
