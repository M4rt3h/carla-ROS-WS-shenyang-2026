// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ibeo_msgs:msg/ErrorWarning.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__BUILDER_HPP_
#define IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__BUILDER_HPP_

#include "ibeo_msgs/msg/detail/error_warning__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ibeo_msgs
{

namespace msg
{

namespace builder
{

class Init_ErrorWarning_wrn_no_obj_comp_due_to_scan_freq
{
public:
  explicit Init_ErrorWarning_wrn_no_obj_comp_due_to_scan_freq(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  ::ibeo_msgs::msg::ErrorWarning wrn_no_obj_comp_due_to_scan_freq(::ibeo_msgs::msg::ErrorWarning::_wrn_no_obj_comp_due_to_scan_freq_type arg)
  {
    msg_.wrn_no_obj_comp_due_to_scan_freq = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_incorrect_mounting_params
{
public:
  explicit Init_ErrorWarning_wrn_incorrect_mounting_params(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_no_obj_comp_due_to_scan_freq wrn_incorrect_mounting_params(::ibeo_msgs::msg::ErrorWarning::_wrn_incorrect_mounting_params_type arg)
  {
    msg_.wrn_incorrect_mounting_params = std::move(arg);
    return Init_ErrorWarning_wrn_no_obj_comp_due_to_scan_freq(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_ego_motion_data_missing
{
public:
  explicit Init_ErrorWarning_wrn_ego_motion_data_missing(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_incorrect_mounting_params wrn_ego_motion_data_missing(::ibeo_msgs::msg::ErrorWarning::_wrn_ego_motion_data_missing_type arg)
  {
    msg_.wrn_ego_motion_data_missing = std::move(arg);
    return Init_ErrorWarning_wrn_incorrect_mounting_params(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_int_overflow
{
public:
  explicit Init_ErrorWarning_wrn_int_overflow(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_ego_motion_data_missing wrn_int_overflow(::ibeo_msgs::msg::ErrorWarning::_wrn_int_overflow_type arg)
  {
    msg_.wrn_int_overflow = std::move(arg);
    return Init_ErrorWarning_wrn_ego_motion_data_missing(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_memory_access_failure
{
public:
  explicit Init_ErrorWarning_wrn_memory_access_failure(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_int_overflow wrn_memory_access_failure(::ibeo_msgs::msg::ErrorWarning::_wrn_memory_access_failure_type arg)
  {
    msg_.wrn_memory_access_failure = std::move(arg);
    return Init_ErrorWarning_wrn_int_overflow(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_incorrect_or_forbidden_cmd_rcvd
{
public:
  explicit Init_ErrorWarning_wrn_incorrect_or_forbidden_cmd_rcvd(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_memory_access_failure wrn_incorrect_or_forbidden_cmd_rcvd(::ibeo_msgs::msg::ErrorWarning::_wrn_incorrect_or_forbidden_cmd_rcvd_type arg)
  {
    msg_.wrn_incorrect_or_forbidden_cmd_rcvd = std::move(arg);
    return Init_ErrorWarning_wrn_memory_access_failure(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_eth_unkwn_incomplete_data
{
public:
  explicit Init_ErrorWarning_wrn_eth_unkwn_incomplete_data(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_incorrect_or_forbidden_cmd_rcvd wrn_eth_unkwn_incomplete_data(::ibeo_msgs::msg::ErrorWarning::_wrn_eth_unkwn_incomplete_data_type arg)
  {
    msg_.wrn_eth_unkwn_incomplete_data = std::move(arg);
    return Init_ErrorWarning_wrn_incorrect_or_forbidden_cmd_rcvd(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_int_incorrect_scan_data
{
public:
  explicit Init_ErrorWarning_wrn_int_incorrect_scan_data(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_eth_unkwn_incomplete_data wrn_int_incorrect_scan_data(::ibeo_msgs::msg::ErrorWarning::_wrn_int_incorrect_scan_data_type arg)
  {
    msg_.wrn_int_incorrect_scan_data = std::move(arg);
    return Init_ErrorWarning_wrn_eth_unkwn_incomplete_data(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_incorrect_can_data_rcvd
{
public:
  explicit Init_ErrorWarning_wrn_incorrect_can_data_rcvd(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_int_incorrect_scan_data wrn_incorrect_can_data_rcvd(::ibeo_msgs::msg::ErrorWarning::_wrn_incorrect_can_data_rcvd_type arg)
  {
    msg_.wrn_incorrect_can_data_rcvd = std::move(arg);
    return Init_ErrorWarning_wrn_int_incorrect_scan_data(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_eth_interface_blocked
{
public:
  explicit Init_ErrorWarning_wrn_eth_interface_blocked(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_incorrect_can_data_rcvd wrn_eth_interface_blocked(::ibeo_msgs::msg::ErrorWarning::_wrn_eth_interface_blocked_type arg)
  {
    msg_.wrn_eth_interface_blocked = std::move(arg);
    return Init_ErrorWarning_wrn_incorrect_can_data_rcvd(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_can_interface_blocked
{
public:
  explicit Init_ErrorWarning_wrn_can_interface_blocked(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_eth_interface_blocked wrn_can_interface_blocked(::ibeo_msgs::msg::ErrorWarning::_wrn_can_interface_blocked_type arg)
  {
    msg_.wrn_can_interface_blocked = std::move(arg);
    return Init_ErrorWarning_wrn_eth_interface_blocked(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_laser_2_start_pulse_missing
{
public:
  explicit Init_ErrorWarning_wrn_laser_2_start_pulse_missing(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_can_interface_blocked wrn_laser_2_start_pulse_missing(::ibeo_msgs::msg::ErrorWarning::_wrn_laser_2_start_pulse_missing_type arg)
  {
    msg_.wrn_laser_2_start_pulse_missing = std::move(arg);
    return Init_ErrorWarning_wrn_can_interface_blocked(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_laser_1_start_pulse_missing
{
public:
  explicit Init_ErrorWarning_wrn_laser_1_start_pulse_missing(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_laser_2_start_pulse_missing wrn_laser_1_start_pulse_missing(::ibeo_msgs::msg::ErrorWarning::_wrn_laser_1_start_pulse_missing_type arg)
  {
    msg_.wrn_laser_1_start_pulse_missing = std::move(arg);
    return Init_ErrorWarning_wrn_laser_2_start_pulse_missing(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_sync_error
{
public:
  explicit Init_ErrorWarning_wrn_sync_error(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_laser_1_start_pulse_missing wrn_sync_error(::ibeo_msgs::msg::ErrorWarning::_wrn_sync_error_type arg)
  {
    msg_.wrn_sync_error = std::move(arg);
    return Init_ErrorWarning_wrn_laser_1_start_pulse_missing(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_int_motor_1
{
public:
  explicit Init_ErrorWarning_wrn_int_motor_1(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_sync_error wrn_int_motor_1(::ibeo_msgs::msg::ErrorWarning::_wrn_int_motor_1_type arg)
  {
    msg_.wrn_int_motor_1 = std::move(arg);
    return Init_ErrorWarning_wrn_sync_error(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_high_temperature
{
public:
  explicit Init_ErrorWarning_wrn_high_temperature(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_int_motor_1 wrn_high_temperature(::ibeo_msgs::msg::ErrorWarning::_wrn_high_temperature_type arg)
  {
    msg_.wrn_high_temperature = std::move(arg);
    return Init_ErrorWarning_wrn_int_motor_1(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_low_temperature
{
public:
  explicit Init_ErrorWarning_wrn_low_temperature(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_high_temperature wrn_low_temperature(::ibeo_msgs::msg::ErrorWarning::_wrn_low_temperature_type arg)
  {
    msg_.wrn_low_temperature = std::move(arg);
    return Init_ErrorWarning_wrn_high_temperature(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_wrn_int_communication_error
{
public:
  explicit Init_ErrorWarning_wrn_int_communication_error(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_low_temperature wrn_int_communication_error(::ibeo_msgs::msg::ErrorWarning::_wrn_int_communication_error_type arg)
  {
    msg_.wrn_int_communication_error = std::move(arg);
    return Init_ErrorWarning_wrn_low_temperature(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_timeout_env_model_computation_reset
{
public:
  explicit Init_ErrorWarning_err_timeout_env_model_computation_reset(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_wrn_int_communication_error err_timeout_env_model_computation_reset(::ibeo_msgs::msg::ErrorWarning::_err_timeout_env_model_computation_reset_type arg)
  {
    msg_.err_timeout_env_model_computation_reset = std::move(arg);
    return Init_ErrorWarning_wrn_int_communication_error(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_timeout_data_processing
{
public:
  explicit Init_ErrorWarning_err_timeout_data_processing(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_timeout_env_model_computation_reset err_timeout_data_processing(::ibeo_msgs::msg::ErrorWarning::_err_timeout_data_processing_type arg)
  {
    msg_.err_timeout_data_processing = std::move(arg);
    return Init_ErrorWarning_err_timeout_env_model_computation_reset(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_config_contains_incorrect_params
{
public:
  explicit Init_ErrorWarning_err_config_contains_incorrect_params(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_timeout_data_processing err_config_contains_incorrect_params(::ibeo_msgs::msg::ErrorWarning::_err_config_contains_incorrect_params_type arg)
  {
    msg_.err_config_contains_incorrect_params = std::move(arg);
    return Init_ErrorWarning_err_timeout_data_processing(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_config_incorrect_config_data
{
public:
  explicit Init_ErrorWarning_err_config_incorrect_config_data(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_config_contains_incorrect_params err_config_incorrect_config_data(::ibeo_msgs::msg::ErrorWarning::_err_config_incorrect_config_data_type arg)
  {
    msg_.err_config_incorrect_config_data = std::move(arg);
    return Init_ErrorWarning_err_config_contains_incorrect_params(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_config_fpga_not_configurable
{
public:
  explicit Init_ErrorWarning_err_config_fpga_not_configurable(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_config_incorrect_config_data err_config_fpga_not_configurable(::ibeo_msgs::msg::ErrorWarning::_err_config_fpga_not_configurable_type arg)
  {
    msg_.err_config_fpga_not_configurable = std::move(arg);
    return Init_ErrorWarning_err_config_incorrect_config_data(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_int_incorrect_scan_data
{
public:
  explicit Init_ErrorWarning_err_int_incorrect_scan_data(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_config_fpga_not_configurable err_int_incorrect_scan_data(::ibeo_msgs::msg::ErrorWarning::_err_int_incorrect_scan_data_type arg)
  {
    msg_.err_int_incorrect_scan_data = std::move(arg);
    return Init_ErrorWarning_err_config_fpga_not_configurable(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_int_communication_error
{
public:
  explicit Init_ErrorWarning_err_int_communication_error(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_int_incorrect_scan_data err_int_communication_error(::ibeo_msgs::msg::ErrorWarning::_err_int_communication_error_type arg)
  {
    msg_.err_int_communication_error = std::move(arg);
    return Init_ErrorWarning_err_int_incorrect_scan_data(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_int_no_scan_data
{
public:
  explicit Init_ErrorWarning_err_int_no_scan_data(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_int_communication_error err_int_no_scan_data(::ibeo_msgs::msg::ErrorWarning::_err_int_no_scan_data_type arg)
  {
    msg_.err_int_no_scan_data = std::move(arg);
    return Init_ErrorWarning_err_int_communication_error(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_motor_5_fault
{
public:
  explicit Init_ErrorWarning_err_motor_5_fault(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_int_no_scan_data err_motor_5_fault(::ibeo_msgs::msg::ErrorWarning::_err_motor_5_fault_type arg)
  {
    msg_.err_motor_5_fault = std::move(arg);
    return Init_ErrorWarning_err_int_no_scan_data(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_motor_4_fault
{
public:
  explicit Init_ErrorWarning_err_motor_4_fault(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_motor_5_fault err_motor_4_fault(::ibeo_msgs::msg::ErrorWarning::_err_motor_4_fault_type arg)
  {
    msg_.err_motor_4_fault = std::move(arg);
    return Init_ErrorWarning_err_motor_5_fault(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_motor_3_fault
{
public:
  explicit Init_ErrorWarning_err_motor_3_fault(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_motor_4_fault err_motor_3_fault(::ibeo_msgs::msg::ErrorWarning::_err_motor_3_fault_type arg)
  {
    msg_.err_motor_3_fault = std::move(arg);
    return Init_ErrorWarning_err_motor_4_fault(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_motor_2_fault
{
public:
  explicit Init_ErrorWarning_err_motor_2_fault(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_motor_3_fault err_motor_2_fault(::ibeo_msgs::msg::ErrorWarning::_err_motor_2_fault_type arg)
  {
    msg_.err_motor_2_fault = std::move(arg);
    return Init_ErrorWarning_err_motor_3_fault(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_apd_temperature_sensor_defect
{
public:
  explicit Init_ErrorWarning_err_apd_temperature_sensor_defect(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_motor_2_fault err_apd_temperature_sensor_defect(::ibeo_msgs::msg::ErrorWarning::_err_apd_temperature_sensor_defect_type arg)
  {
    msg_.err_apd_temperature_sensor_defect = std::move(arg);
    return Init_ErrorWarning_err_motor_2_fault(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_apd_under_temperature
{
public:
  explicit Init_ErrorWarning_err_apd_under_temperature(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_apd_temperature_sensor_defect err_apd_under_temperature(::ibeo_msgs::msg::ErrorWarning::_err_apd_under_temperature_type arg)
  {
    msg_.err_apd_under_temperature = std::move(arg);
    return Init_ErrorWarning_err_apd_temperature_sensor_defect(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_apd_over_temperature
{
public:
  explicit Init_ErrorWarning_err_apd_over_temperature(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_apd_under_temperature err_apd_over_temperature(::ibeo_msgs::msg::ErrorWarning::_err_apd_over_temperature_type arg)
  {
    msg_.err_apd_over_temperature = std::move(arg);
    return Init_ErrorWarning_err_apd_under_temperature(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_buffer_error_overflow
{
public:
  explicit Init_ErrorWarning_err_buffer_error_overflow(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_apd_over_temperature err_buffer_error_overflow(::ibeo_msgs::msg::ErrorWarning::_err_buffer_error_overflow_type arg)
  {
    msg_.err_buffer_error_overflow = std::move(arg);
    return Init_ErrorWarning_err_apd_over_temperature(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_buffer_error_xmt_incomplete
{
public:
  explicit Init_ErrorWarning_err_buffer_error_xmt_incomplete(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_buffer_error_overflow err_buffer_error_xmt_incomplete(::ibeo_msgs::msg::ErrorWarning::_err_buffer_error_xmt_incomplete_type arg)
  {
    msg_.err_buffer_error_xmt_incomplete = std::move(arg);
    return Init_ErrorWarning_err_buffer_error_overflow(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_motor_1_fault
{
public:
  explicit Init_ErrorWarning_err_motor_1_fault(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_buffer_error_xmt_incomplete err_motor_1_fault(::ibeo_msgs::msg::ErrorWarning::_err_motor_1_fault_type arg)
  {
    msg_.err_motor_1_fault = std::move(arg);
    return Init_ErrorWarning_err_buffer_error_xmt_incomplete(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_err_internal_error
{
public:
  explicit Init_ErrorWarning_err_internal_error(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_motor_1_fault err_internal_error(::ibeo_msgs::msg::ErrorWarning::_err_internal_error_type arg)
  {
    msg_.err_internal_error = std::move(arg);
    return Init_ErrorWarning_err_motor_1_fault(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_ibeo_header
{
public:
  explicit Init_ErrorWarning_ibeo_header(::ibeo_msgs::msg::ErrorWarning & msg)
  : msg_(msg)
  {}
  Init_ErrorWarning_err_internal_error ibeo_header(::ibeo_msgs::msg::ErrorWarning::_ibeo_header_type arg)
  {
    msg_.ibeo_header = std::move(arg);
    return Init_ErrorWarning_err_internal_error(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

class Init_ErrorWarning_header
{
public:
  Init_ErrorWarning_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorWarning_ibeo_header header(::ibeo_msgs::msg::ErrorWarning::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ErrorWarning_ibeo_header(msg_);
  }

private:
  ::ibeo_msgs::msg::ErrorWarning msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ibeo_msgs::msg::ErrorWarning>()
{
  return ibeo_msgs::msg::builder::Init_ErrorWarning_header();
}

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__BUILDER_HPP_
