// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/ErrorWarning.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.h"

// Struct defined in msg/ErrorWarning in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__ErrorWarning
{
  std_msgs__msg__Header header;
  ibeo_msgs__msg__IbeoDataHeader ibeo_header;
  bool err_internal_error;
  bool err_motor_1_fault;
  bool err_buffer_error_xmt_incomplete;
  bool err_buffer_error_overflow;
  bool err_apd_over_temperature;
  bool err_apd_under_temperature;
  bool err_apd_temperature_sensor_defect;
  bool err_motor_2_fault;
  bool err_motor_3_fault;
  bool err_motor_4_fault;
  bool err_motor_5_fault;
  bool err_int_no_scan_data;
  bool err_int_communication_error;
  bool err_int_incorrect_scan_data;
  bool err_config_fpga_not_configurable;
  bool err_config_incorrect_config_data;
  bool err_config_contains_incorrect_params;
  bool err_timeout_data_processing;
  bool err_timeout_env_model_computation_reset;
  bool wrn_int_communication_error;
  bool wrn_low_temperature;
  bool wrn_high_temperature;
  bool wrn_int_motor_1;
  bool wrn_sync_error;
  bool wrn_laser_1_start_pulse_missing;
  bool wrn_laser_2_start_pulse_missing;
  bool wrn_can_interface_blocked;
  bool wrn_eth_interface_blocked;
  bool wrn_incorrect_can_data_rcvd;
  bool wrn_int_incorrect_scan_data;
  bool wrn_eth_unkwn_incomplete_data;
  bool wrn_incorrect_or_forbidden_cmd_rcvd;
  bool wrn_memory_access_failure;
  bool wrn_int_overflow;
  bool wrn_ego_motion_data_missing;
  bool wrn_incorrect_mounting_params;
  bool wrn_no_obj_comp_due_to_scan_freq;
} ibeo_msgs__msg__ErrorWarning;

// Struct for a sequence of ibeo_msgs__msg__ErrorWarning.
typedef struct ibeo_msgs__msg__ErrorWarning__Sequence
{
  ibeo_msgs__msg__ErrorWarning * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__ErrorWarning__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__STRUCT_H_
