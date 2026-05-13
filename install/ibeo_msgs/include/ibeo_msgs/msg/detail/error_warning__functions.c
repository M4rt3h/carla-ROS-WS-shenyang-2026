// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ErrorWarning.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/error_warning__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"

bool
ibeo_msgs__msg__ErrorWarning__init(ibeo_msgs__msg__ErrorWarning * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ibeo_msgs__msg__ErrorWarning__fini(msg);
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__init(&msg->ibeo_header)) {
    ibeo_msgs__msg__ErrorWarning__fini(msg);
    return false;
  }
  // err_internal_error
  // err_motor_1_fault
  // err_buffer_error_xmt_incomplete
  // err_buffer_error_overflow
  // err_apd_over_temperature
  // err_apd_under_temperature
  // err_apd_temperature_sensor_defect
  // err_motor_2_fault
  // err_motor_3_fault
  // err_motor_4_fault
  // err_motor_5_fault
  // err_int_no_scan_data
  // err_int_communication_error
  // err_int_incorrect_scan_data
  // err_config_fpga_not_configurable
  // err_config_incorrect_config_data
  // err_config_contains_incorrect_params
  // err_timeout_data_processing
  // err_timeout_env_model_computation_reset
  // wrn_int_communication_error
  // wrn_low_temperature
  // wrn_high_temperature
  // wrn_int_motor_1
  // wrn_sync_error
  // wrn_laser_1_start_pulse_missing
  // wrn_laser_2_start_pulse_missing
  // wrn_can_interface_blocked
  // wrn_eth_interface_blocked
  // wrn_incorrect_can_data_rcvd
  // wrn_int_incorrect_scan_data
  // wrn_eth_unkwn_incomplete_data
  // wrn_incorrect_or_forbidden_cmd_rcvd
  // wrn_memory_access_failure
  // wrn_int_overflow
  // wrn_ego_motion_data_missing
  // wrn_incorrect_mounting_params
  // wrn_no_obj_comp_due_to_scan_freq
  return true;
}

void
ibeo_msgs__msg__ErrorWarning__fini(ibeo_msgs__msg__ErrorWarning * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ibeo_header
  ibeo_msgs__msg__IbeoDataHeader__fini(&msg->ibeo_header);
  // err_internal_error
  // err_motor_1_fault
  // err_buffer_error_xmt_incomplete
  // err_buffer_error_overflow
  // err_apd_over_temperature
  // err_apd_under_temperature
  // err_apd_temperature_sensor_defect
  // err_motor_2_fault
  // err_motor_3_fault
  // err_motor_4_fault
  // err_motor_5_fault
  // err_int_no_scan_data
  // err_int_communication_error
  // err_int_incorrect_scan_data
  // err_config_fpga_not_configurable
  // err_config_incorrect_config_data
  // err_config_contains_incorrect_params
  // err_timeout_data_processing
  // err_timeout_env_model_computation_reset
  // wrn_int_communication_error
  // wrn_low_temperature
  // wrn_high_temperature
  // wrn_int_motor_1
  // wrn_sync_error
  // wrn_laser_1_start_pulse_missing
  // wrn_laser_2_start_pulse_missing
  // wrn_can_interface_blocked
  // wrn_eth_interface_blocked
  // wrn_incorrect_can_data_rcvd
  // wrn_int_incorrect_scan_data
  // wrn_eth_unkwn_incomplete_data
  // wrn_incorrect_or_forbidden_cmd_rcvd
  // wrn_memory_access_failure
  // wrn_int_overflow
  // wrn_ego_motion_data_missing
  // wrn_incorrect_mounting_params
  // wrn_no_obj_comp_due_to_scan_freq
}

bool
ibeo_msgs__msg__ErrorWarning__are_equal(const ibeo_msgs__msg__ErrorWarning * lhs, const ibeo_msgs__msg__ErrorWarning * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__are_equal(
      &(lhs->ibeo_header), &(rhs->ibeo_header)))
  {
    return false;
  }
  // err_internal_error
  if (lhs->err_internal_error != rhs->err_internal_error) {
    return false;
  }
  // err_motor_1_fault
  if (lhs->err_motor_1_fault != rhs->err_motor_1_fault) {
    return false;
  }
  // err_buffer_error_xmt_incomplete
  if (lhs->err_buffer_error_xmt_incomplete != rhs->err_buffer_error_xmt_incomplete) {
    return false;
  }
  // err_buffer_error_overflow
  if (lhs->err_buffer_error_overflow != rhs->err_buffer_error_overflow) {
    return false;
  }
  // err_apd_over_temperature
  if (lhs->err_apd_over_temperature != rhs->err_apd_over_temperature) {
    return false;
  }
  // err_apd_under_temperature
  if (lhs->err_apd_under_temperature != rhs->err_apd_under_temperature) {
    return false;
  }
  // err_apd_temperature_sensor_defect
  if (lhs->err_apd_temperature_sensor_defect != rhs->err_apd_temperature_sensor_defect) {
    return false;
  }
  // err_motor_2_fault
  if (lhs->err_motor_2_fault != rhs->err_motor_2_fault) {
    return false;
  }
  // err_motor_3_fault
  if (lhs->err_motor_3_fault != rhs->err_motor_3_fault) {
    return false;
  }
  // err_motor_4_fault
  if (lhs->err_motor_4_fault != rhs->err_motor_4_fault) {
    return false;
  }
  // err_motor_5_fault
  if (lhs->err_motor_5_fault != rhs->err_motor_5_fault) {
    return false;
  }
  // err_int_no_scan_data
  if (lhs->err_int_no_scan_data != rhs->err_int_no_scan_data) {
    return false;
  }
  // err_int_communication_error
  if (lhs->err_int_communication_error != rhs->err_int_communication_error) {
    return false;
  }
  // err_int_incorrect_scan_data
  if (lhs->err_int_incorrect_scan_data != rhs->err_int_incorrect_scan_data) {
    return false;
  }
  // err_config_fpga_not_configurable
  if (lhs->err_config_fpga_not_configurable != rhs->err_config_fpga_not_configurable) {
    return false;
  }
  // err_config_incorrect_config_data
  if (lhs->err_config_incorrect_config_data != rhs->err_config_incorrect_config_data) {
    return false;
  }
  // err_config_contains_incorrect_params
  if (lhs->err_config_contains_incorrect_params != rhs->err_config_contains_incorrect_params) {
    return false;
  }
  // err_timeout_data_processing
  if (lhs->err_timeout_data_processing != rhs->err_timeout_data_processing) {
    return false;
  }
  // err_timeout_env_model_computation_reset
  if (lhs->err_timeout_env_model_computation_reset != rhs->err_timeout_env_model_computation_reset) {
    return false;
  }
  // wrn_int_communication_error
  if (lhs->wrn_int_communication_error != rhs->wrn_int_communication_error) {
    return false;
  }
  // wrn_low_temperature
  if (lhs->wrn_low_temperature != rhs->wrn_low_temperature) {
    return false;
  }
  // wrn_high_temperature
  if (lhs->wrn_high_temperature != rhs->wrn_high_temperature) {
    return false;
  }
  // wrn_int_motor_1
  if (lhs->wrn_int_motor_1 != rhs->wrn_int_motor_1) {
    return false;
  }
  // wrn_sync_error
  if (lhs->wrn_sync_error != rhs->wrn_sync_error) {
    return false;
  }
  // wrn_laser_1_start_pulse_missing
  if (lhs->wrn_laser_1_start_pulse_missing != rhs->wrn_laser_1_start_pulse_missing) {
    return false;
  }
  // wrn_laser_2_start_pulse_missing
  if (lhs->wrn_laser_2_start_pulse_missing != rhs->wrn_laser_2_start_pulse_missing) {
    return false;
  }
  // wrn_can_interface_blocked
  if (lhs->wrn_can_interface_blocked != rhs->wrn_can_interface_blocked) {
    return false;
  }
  // wrn_eth_interface_blocked
  if (lhs->wrn_eth_interface_blocked != rhs->wrn_eth_interface_blocked) {
    return false;
  }
  // wrn_incorrect_can_data_rcvd
  if (lhs->wrn_incorrect_can_data_rcvd != rhs->wrn_incorrect_can_data_rcvd) {
    return false;
  }
  // wrn_int_incorrect_scan_data
  if (lhs->wrn_int_incorrect_scan_data != rhs->wrn_int_incorrect_scan_data) {
    return false;
  }
  // wrn_eth_unkwn_incomplete_data
  if (lhs->wrn_eth_unkwn_incomplete_data != rhs->wrn_eth_unkwn_incomplete_data) {
    return false;
  }
  // wrn_incorrect_or_forbidden_cmd_rcvd
  if (lhs->wrn_incorrect_or_forbidden_cmd_rcvd != rhs->wrn_incorrect_or_forbidden_cmd_rcvd) {
    return false;
  }
  // wrn_memory_access_failure
  if (lhs->wrn_memory_access_failure != rhs->wrn_memory_access_failure) {
    return false;
  }
  // wrn_int_overflow
  if (lhs->wrn_int_overflow != rhs->wrn_int_overflow) {
    return false;
  }
  // wrn_ego_motion_data_missing
  if (lhs->wrn_ego_motion_data_missing != rhs->wrn_ego_motion_data_missing) {
    return false;
  }
  // wrn_incorrect_mounting_params
  if (lhs->wrn_incorrect_mounting_params != rhs->wrn_incorrect_mounting_params) {
    return false;
  }
  // wrn_no_obj_comp_due_to_scan_freq
  if (lhs->wrn_no_obj_comp_due_to_scan_freq != rhs->wrn_no_obj_comp_due_to_scan_freq) {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ErrorWarning__copy(
  const ibeo_msgs__msg__ErrorWarning * input,
  ibeo_msgs__msg__ErrorWarning * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__copy(
      &(input->ibeo_header), &(output->ibeo_header)))
  {
    return false;
  }
  // err_internal_error
  output->err_internal_error = input->err_internal_error;
  // err_motor_1_fault
  output->err_motor_1_fault = input->err_motor_1_fault;
  // err_buffer_error_xmt_incomplete
  output->err_buffer_error_xmt_incomplete = input->err_buffer_error_xmt_incomplete;
  // err_buffer_error_overflow
  output->err_buffer_error_overflow = input->err_buffer_error_overflow;
  // err_apd_over_temperature
  output->err_apd_over_temperature = input->err_apd_over_temperature;
  // err_apd_under_temperature
  output->err_apd_under_temperature = input->err_apd_under_temperature;
  // err_apd_temperature_sensor_defect
  output->err_apd_temperature_sensor_defect = input->err_apd_temperature_sensor_defect;
  // err_motor_2_fault
  output->err_motor_2_fault = input->err_motor_2_fault;
  // err_motor_3_fault
  output->err_motor_3_fault = input->err_motor_3_fault;
  // err_motor_4_fault
  output->err_motor_4_fault = input->err_motor_4_fault;
  // err_motor_5_fault
  output->err_motor_5_fault = input->err_motor_5_fault;
  // err_int_no_scan_data
  output->err_int_no_scan_data = input->err_int_no_scan_data;
  // err_int_communication_error
  output->err_int_communication_error = input->err_int_communication_error;
  // err_int_incorrect_scan_data
  output->err_int_incorrect_scan_data = input->err_int_incorrect_scan_data;
  // err_config_fpga_not_configurable
  output->err_config_fpga_not_configurable = input->err_config_fpga_not_configurable;
  // err_config_incorrect_config_data
  output->err_config_incorrect_config_data = input->err_config_incorrect_config_data;
  // err_config_contains_incorrect_params
  output->err_config_contains_incorrect_params = input->err_config_contains_incorrect_params;
  // err_timeout_data_processing
  output->err_timeout_data_processing = input->err_timeout_data_processing;
  // err_timeout_env_model_computation_reset
  output->err_timeout_env_model_computation_reset = input->err_timeout_env_model_computation_reset;
  // wrn_int_communication_error
  output->wrn_int_communication_error = input->wrn_int_communication_error;
  // wrn_low_temperature
  output->wrn_low_temperature = input->wrn_low_temperature;
  // wrn_high_temperature
  output->wrn_high_temperature = input->wrn_high_temperature;
  // wrn_int_motor_1
  output->wrn_int_motor_1 = input->wrn_int_motor_1;
  // wrn_sync_error
  output->wrn_sync_error = input->wrn_sync_error;
  // wrn_laser_1_start_pulse_missing
  output->wrn_laser_1_start_pulse_missing = input->wrn_laser_1_start_pulse_missing;
  // wrn_laser_2_start_pulse_missing
  output->wrn_laser_2_start_pulse_missing = input->wrn_laser_2_start_pulse_missing;
  // wrn_can_interface_blocked
  output->wrn_can_interface_blocked = input->wrn_can_interface_blocked;
  // wrn_eth_interface_blocked
  output->wrn_eth_interface_blocked = input->wrn_eth_interface_blocked;
  // wrn_incorrect_can_data_rcvd
  output->wrn_incorrect_can_data_rcvd = input->wrn_incorrect_can_data_rcvd;
  // wrn_int_incorrect_scan_data
  output->wrn_int_incorrect_scan_data = input->wrn_int_incorrect_scan_data;
  // wrn_eth_unkwn_incomplete_data
  output->wrn_eth_unkwn_incomplete_data = input->wrn_eth_unkwn_incomplete_data;
  // wrn_incorrect_or_forbidden_cmd_rcvd
  output->wrn_incorrect_or_forbidden_cmd_rcvd = input->wrn_incorrect_or_forbidden_cmd_rcvd;
  // wrn_memory_access_failure
  output->wrn_memory_access_failure = input->wrn_memory_access_failure;
  // wrn_int_overflow
  output->wrn_int_overflow = input->wrn_int_overflow;
  // wrn_ego_motion_data_missing
  output->wrn_ego_motion_data_missing = input->wrn_ego_motion_data_missing;
  // wrn_incorrect_mounting_params
  output->wrn_incorrect_mounting_params = input->wrn_incorrect_mounting_params;
  // wrn_no_obj_comp_due_to_scan_freq
  output->wrn_no_obj_comp_due_to_scan_freq = input->wrn_no_obj_comp_due_to_scan_freq;
  return true;
}

ibeo_msgs__msg__ErrorWarning *
ibeo_msgs__msg__ErrorWarning__create()
{
  ibeo_msgs__msg__ErrorWarning * msg = (ibeo_msgs__msg__ErrorWarning *)malloc(sizeof(ibeo_msgs__msg__ErrorWarning));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ErrorWarning));
  bool success = ibeo_msgs__msg__ErrorWarning__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ErrorWarning__destroy(ibeo_msgs__msg__ErrorWarning * msg)
{
  if (msg) {
    ibeo_msgs__msg__ErrorWarning__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__ErrorWarning__Sequence__init(ibeo_msgs__msg__ErrorWarning__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__ErrorWarning * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__ErrorWarning *)calloc(size, sizeof(ibeo_msgs__msg__ErrorWarning));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ErrorWarning__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ErrorWarning__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ibeo_msgs__msg__ErrorWarning__Sequence__fini(ibeo_msgs__msg__ErrorWarning__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__ErrorWarning__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ibeo_msgs__msg__ErrorWarning__Sequence *
ibeo_msgs__msg__ErrorWarning__Sequence__create(size_t size)
{
  ibeo_msgs__msg__ErrorWarning__Sequence * array = (ibeo_msgs__msg__ErrorWarning__Sequence *)malloc(sizeof(ibeo_msgs__msg__ErrorWarning__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ErrorWarning__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ErrorWarning__Sequence__destroy(ibeo_msgs__msg__ErrorWarning__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__ErrorWarning__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__ErrorWarning__Sequence__are_equal(const ibeo_msgs__msg__ErrorWarning__Sequence * lhs, const ibeo_msgs__msg__ErrorWarning__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ErrorWarning__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ErrorWarning__Sequence__copy(
  const ibeo_msgs__msg__ErrorWarning__Sequence * input,
  ibeo_msgs__msg__ErrorWarning__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ErrorWarning);
    ibeo_msgs__msg__ErrorWarning * data =
      (ibeo_msgs__msg__ErrorWarning *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ErrorWarning__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ErrorWarning__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ibeo_msgs__msg__ErrorWarning__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
