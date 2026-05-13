// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ErrorWarning.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__TRAITS_HPP_

#include "ibeo_msgs/msg/detail/error_warning__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ibeo_msgs::msg::ErrorWarning & msg,
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

  // member: ibeo_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ibeo_header:\n";
    to_yaml(msg.ibeo_header, out, indentation + 2);
  }

  // member: err_internal_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_internal_error: ";
    value_to_yaml(msg.err_internal_error, out);
    out << "\n";
  }

  // member: err_motor_1_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_motor_1_fault: ";
    value_to_yaml(msg.err_motor_1_fault, out);
    out << "\n";
  }

  // member: err_buffer_error_xmt_incomplete
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_buffer_error_xmt_incomplete: ";
    value_to_yaml(msg.err_buffer_error_xmt_incomplete, out);
    out << "\n";
  }

  // member: err_buffer_error_overflow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_buffer_error_overflow: ";
    value_to_yaml(msg.err_buffer_error_overflow, out);
    out << "\n";
  }

  // member: err_apd_over_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_apd_over_temperature: ";
    value_to_yaml(msg.err_apd_over_temperature, out);
    out << "\n";
  }

  // member: err_apd_under_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_apd_under_temperature: ";
    value_to_yaml(msg.err_apd_under_temperature, out);
    out << "\n";
  }

  // member: err_apd_temperature_sensor_defect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_apd_temperature_sensor_defect: ";
    value_to_yaml(msg.err_apd_temperature_sensor_defect, out);
    out << "\n";
  }

  // member: err_motor_2_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_motor_2_fault: ";
    value_to_yaml(msg.err_motor_2_fault, out);
    out << "\n";
  }

  // member: err_motor_3_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_motor_3_fault: ";
    value_to_yaml(msg.err_motor_3_fault, out);
    out << "\n";
  }

  // member: err_motor_4_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_motor_4_fault: ";
    value_to_yaml(msg.err_motor_4_fault, out);
    out << "\n";
  }

  // member: err_motor_5_fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_motor_5_fault: ";
    value_to_yaml(msg.err_motor_5_fault, out);
    out << "\n";
  }

  // member: err_int_no_scan_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_int_no_scan_data: ";
    value_to_yaml(msg.err_int_no_scan_data, out);
    out << "\n";
  }

  // member: err_int_communication_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_int_communication_error: ";
    value_to_yaml(msg.err_int_communication_error, out);
    out << "\n";
  }

  // member: err_int_incorrect_scan_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_int_incorrect_scan_data: ";
    value_to_yaml(msg.err_int_incorrect_scan_data, out);
    out << "\n";
  }

  // member: err_config_fpga_not_configurable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_config_fpga_not_configurable: ";
    value_to_yaml(msg.err_config_fpga_not_configurable, out);
    out << "\n";
  }

  // member: err_config_incorrect_config_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_config_incorrect_config_data: ";
    value_to_yaml(msg.err_config_incorrect_config_data, out);
    out << "\n";
  }

  // member: err_config_contains_incorrect_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_config_contains_incorrect_params: ";
    value_to_yaml(msg.err_config_contains_incorrect_params, out);
    out << "\n";
  }

  // member: err_timeout_data_processing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_timeout_data_processing: ";
    value_to_yaml(msg.err_timeout_data_processing, out);
    out << "\n";
  }

  // member: err_timeout_env_model_computation_reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_timeout_env_model_computation_reset: ";
    value_to_yaml(msg.err_timeout_env_model_computation_reset, out);
    out << "\n";
  }

  // member: wrn_int_communication_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_int_communication_error: ";
    value_to_yaml(msg.wrn_int_communication_error, out);
    out << "\n";
  }

  // member: wrn_low_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_low_temperature: ";
    value_to_yaml(msg.wrn_low_temperature, out);
    out << "\n";
  }

  // member: wrn_high_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_high_temperature: ";
    value_to_yaml(msg.wrn_high_temperature, out);
    out << "\n";
  }

  // member: wrn_int_motor_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_int_motor_1: ";
    value_to_yaml(msg.wrn_int_motor_1, out);
    out << "\n";
  }

  // member: wrn_sync_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_sync_error: ";
    value_to_yaml(msg.wrn_sync_error, out);
    out << "\n";
  }

  // member: wrn_laser_1_start_pulse_missing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_laser_1_start_pulse_missing: ";
    value_to_yaml(msg.wrn_laser_1_start_pulse_missing, out);
    out << "\n";
  }

  // member: wrn_laser_2_start_pulse_missing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_laser_2_start_pulse_missing: ";
    value_to_yaml(msg.wrn_laser_2_start_pulse_missing, out);
    out << "\n";
  }

  // member: wrn_can_interface_blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_can_interface_blocked: ";
    value_to_yaml(msg.wrn_can_interface_blocked, out);
    out << "\n";
  }

  // member: wrn_eth_interface_blocked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_eth_interface_blocked: ";
    value_to_yaml(msg.wrn_eth_interface_blocked, out);
    out << "\n";
  }

  // member: wrn_incorrect_can_data_rcvd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_incorrect_can_data_rcvd: ";
    value_to_yaml(msg.wrn_incorrect_can_data_rcvd, out);
    out << "\n";
  }

  // member: wrn_int_incorrect_scan_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_int_incorrect_scan_data: ";
    value_to_yaml(msg.wrn_int_incorrect_scan_data, out);
    out << "\n";
  }

  // member: wrn_eth_unkwn_incomplete_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_eth_unkwn_incomplete_data: ";
    value_to_yaml(msg.wrn_eth_unkwn_incomplete_data, out);
    out << "\n";
  }

  // member: wrn_incorrect_or_forbidden_cmd_rcvd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_incorrect_or_forbidden_cmd_rcvd: ";
    value_to_yaml(msg.wrn_incorrect_or_forbidden_cmd_rcvd, out);
    out << "\n";
  }

  // member: wrn_memory_access_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_memory_access_failure: ";
    value_to_yaml(msg.wrn_memory_access_failure, out);
    out << "\n";
  }

  // member: wrn_int_overflow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_int_overflow: ";
    value_to_yaml(msg.wrn_int_overflow, out);
    out << "\n";
  }

  // member: wrn_ego_motion_data_missing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_ego_motion_data_missing: ";
    value_to_yaml(msg.wrn_ego_motion_data_missing, out);
    out << "\n";
  }

  // member: wrn_incorrect_mounting_params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_incorrect_mounting_params: ";
    value_to_yaml(msg.wrn_incorrect_mounting_params, out);
    out << "\n";
  }

  // member: wrn_no_obj_comp_due_to_scan_freq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrn_no_obj_comp_due_to_scan_freq: ";
    value_to_yaml(msg.wrn_no_obj_comp_due_to_scan_freq, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ibeo_msgs::msg::ErrorWarning & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ibeo_msgs::msg::ErrorWarning>()
{
  return "ibeo_msgs::msg::ErrorWarning";
}

template<>
inline const char * name<ibeo_msgs::msg::ErrorWarning>()
{
  return "ibeo_msgs/msg/ErrorWarning";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ErrorWarning>
  : std::integral_constant<bool, has_fixed_size<ibeo_msgs::msg::IbeoDataHeader>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ErrorWarning>
  : std::integral_constant<bool, has_bounded_size<ibeo_msgs::msg::IbeoDataHeader>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ibeo_msgs::msg::ErrorWarning>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__TRAITS_HPP_
