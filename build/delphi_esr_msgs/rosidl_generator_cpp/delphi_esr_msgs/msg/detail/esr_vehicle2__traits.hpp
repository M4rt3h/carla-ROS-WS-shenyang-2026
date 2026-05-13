// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__TRAITS_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__TRAITS_HPP_

#include "delphi_esr_msgs/msg/detail/esr_vehicle2__struct.hpp"
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
  const delphi_esr_msgs::msg::EsrVehicle2 & msg,
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

  // member: scan_index_ack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_index_ack: ";
    value_to_yaml(msg.scan_index_ack, out);
    out << "\n";
  }

  // member: use_angle_misalignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_angle_misalignment: ";
    value_to_yaml(msg.use_angle_misalignment, out);
    out << "\n";
  }

  // member: clear_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clear_faults: ";
    value_to_yaml(msg.clear_faults, out);
    out << "\n";
  }

  // member: high_yaw_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "high_yaw_angle: ";
    value_to_yaml(msg.high_yaw_angle, out);
    out << "\n";
  }

  // member: mr_only_transmit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mr_only_transmit: ";
    value_to_yaml(msg.mr_only_transmit, out);
    out << "\n";
  }

  // member: lr_only_transmit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lr_only_transmit: ";
    value_to_yaml(msg.lr_only_transmit, out);
    out << "\n";
  }

  // member: angle_misalignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_misalignment: ";
    value_to_yaml(msg.angle_misalignment, out);
    out << "\n";
  }

  // member: lateral_mounting_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_mounting_offset: ";
    value_to_yaml(msg.lateral_mounting_offset, out);
    out << "\n";
  }

  // member: radar_cmd_radiate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radar_cmd_radiate: ";
    value_to_yaml(msg.radar_cmd_radiate, out);
    out << "\n";
  }

  // member: blockage_disable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blockage_disable: ";
    value_to_yaml(msg.blockage_disable, out);
    out << "\n";
  }

  // member: maximum_tracks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maximum_tracks: ";
    value_to_yaml(msg.maximum_tracks, out);
    out << "\n";
  }

  // member: turn_signal_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_signal_status: ";
    value_to_yaml(msg.turn_signal_status, out);
    out << "\n";
  }

  // member: vehicle_speed_validity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_speed_validity: ";
    value_to_yaml(msg.vehicle_speed_validity, out);
    out << "\n";
  }

  // member: mmr_upside_down
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mmr_upside_down: ";
    value_to_yaml(msg.mmr_upside_down, out);
    out << "\n";
  }

  // member: grouping_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grouping_mode: ";
    value_to_yaml(msg.grouping_mode, out);
    out << "\n";
  }

  // member: wiper_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wiper_status: ";
    value_to_yaml(msg.wiper_status, out);
    out << "\n";
  }

  // member: raw_data_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "raw_data_enable: ";
    value_to_yaml(msg.raw_data_enable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_esr_msgs::msg::EsrVehicle2 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_esr_msgs::msg::EsrVehicle2>()
{
  return "delphi_esr_msgs::msg::EsrVehicle2";
}

template<>
inline const char * name<delphi_esr_msgs::msg::EsrVehicle2>()
{
  return "delphi_esr_msgs/msg/EsrVehicle2";
}

template<>
struct has_fixed_size<delphi_esr_msgs::msg::EsrVehicle2>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_esr_msgs::msg::EsrVehicle2>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_esr_msgs::msg::EsrVehicle2>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE2__TRAITS_HPP_
