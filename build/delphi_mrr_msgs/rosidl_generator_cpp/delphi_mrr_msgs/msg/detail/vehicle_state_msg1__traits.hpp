// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__TRAITS_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__TRAITS_HPP_

#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg1__struct.hpp"
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
  const delphi_mrr_msgs::msg::VehicleStateMsg1 & msg,
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

  // member: can_fcw_sensitivity_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_fcw_sensitivity_level: ";
    value_to_yaml(msg.can_fcw_sensitivity_level, out);
    out << "\n";
  }

  // member: can_vehicle_stationary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_vehicle_stationary: ";
    value_to_yaml(msg.can_vehicle_stationary, out);
    out << "\n";
  }

  // member: can_intf_minor_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_intf_minor_version: ";
    value_to_yaml(msg.can_intf_minor_version, out);
    out << "\n";
  }

  // member: can_intf_major_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_intf_major_version: ";
    value_to_yaml(msg.can_intf_major_version, out);
    out << "\n";
  }

  // member: can_brake_pedal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_brake_pedal: ";
    value_to_yaml(msg.can_brake_pedal, out);
    out << "\n";
  }

  // member: can_high_wheel_slip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_high_wheel_slip: ";
    value_to_yaml(msg.can_high_wheel_slip, out);
    out << "\n";
  }

  // member: can_turn_signal_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_turn_signal_status: ";
    value_to_yaml(msg.can_turn_signal_status, out);
    out << "\n";
  }

  // member: can_washer_front_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_washer_front_cmd: ";
    value_to_yaml(msg.can_washer_front_cmd, out);
    out << "\n";
  }

  // member: can_wiper_front_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_wiper_front_cmd: ";
    value_to_yaml(msg.can_wiper_front_cmd, out);
    out << "\n";
  }

  // member: can_wiper_speed_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_wiper_speed_info: ";
    value_to_yaml(msg.can_wiper_speed_info, out);
    out << "\n";
  }

  // member: can_reverse_gear
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_reverse_gear: ";
    value_to_yaml(msg.can_reverse_gear, out);
    out << "\n";
  }

  // member: can_beam_shape_actual_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_beam_shape_actual_right: ";
    value_to_yaml(msg.can_beam_shape_actual_right, out);
    out << "\n";
  }

  // member: can_beam_shape_actual_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_beam_shape_actual_left: ";
    value_to_yaml(msg.can_beam_shape_actual_left, out);
    out << "\n";
  }

  // member: can_main_beam_indication
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_main_beam_indication: ";
    value_to_yaml(msg.can_main_beam_indication, out);
    out << "\n";
  }

  // member: can_vehicle_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_vehicle_index: ";
    value_to_yaml(msg.can_vehicle_index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const delphi_mrr_msgs::msg::VehicleStateMsg1 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<delphi_mrr_msgs::msg::VehicleStateMsg1>()
{
  return "delphi_mrr_msgs::msg::VehicleStateMsg1";
}

template<>
inline const char * name<delphi_mrr_msgs::msg::VehicleStateMsg1>()
{
  return "delphi_mrr_msgs/msg/VehicleStateMsg1";
}

template<>
struct has_fixed_size<delphi_mrr_msgs::msg::VehicleStateMsg1>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<delphi_mrr_msgs::msg::VehicleStateMsg1>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<delphi_mrr_msgs::msg::VehicleStateMsg1>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__TRAITS_HPP_
