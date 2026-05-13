// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_srr_msgs:msg/SrrStatus2.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_status2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_srr_msgs__msg__SrrStatus2__init(delphi_srr_msgs__msg__SrrStatus2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_srr_msgs__msg__SrrStatus2__fini(msg);
    return false;
  }
  // can_tx_alignment_status
  // can_tx_comm_error
  // can_tx_steering_angle_sign
  // can_tx_yaw_rate_bias
  // can_tx_veh_spd_comp_factor
  // can_tx_sw_version_dsp
  // can_tx_temperature
  // can_tx_range_perf_error
  // can_tx_overheat_error
  // can_tx_internal_error
  // can_tx_xcvr_operational
  // can_tx_steering_angle
  // can_tx_rolling_count_2
  return true;
}

void
delphi_srr_msgs__msg__SrrStatus2__fini(delphi_srr_msgs__msg__SrrStatus2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_tx_alignment_status
  // can_tx_comm_error
  // can_tx_steering_angle_sign
  // can_tx_yaw_rate_bias
  // can_tx_veh_spd_comp_factor
  // can_tx_sw_version_dsp
  // can_tx_temperature
  // can_tx_range_perf_error
  // can_tx_overheat_error
  // can_tx_internal_error
  // can_tx_xcvr_operational
  // can_tx_steering_angle
  // can_tx_rolling_count_2
}

bool
delphi_srr_msgs__msg__SrrStatus2__are_equal(const delphi_srr_msgs__msg__SrrStatus2 * lhs, const delphi_srr_msgs__msg__SrrStatus2 * rhs)
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
  // can_tx_alignment_status
  if (lhs->can_tx_alignment_status != rhs->can_tx_alignment_status) {
    return false;
  }
  // can_tx_comm_error
  if (lhs->can_tx_comm_error != rhs->can_tx_comm_error) {
    return false;
  }
  // can_tx_steering_angle_sign
  if (lhs->can_tx_steering_angle_sign != rhs->can_tx_steering_angle_sign) {
    return false;
  }
  // can_tx_yaw_rate_bias
  if (lhs->can_tx_yaw_rate_bias != rhs->can_tx_yaw_rate_bias) {
    return false;
  }
  // can_tx_veh_spd_comp_factor
  if (lhs->can_tx_veh_spd_comp_factor != rhs->can_tx_veh_spd_comp_factor) {
    return false;
  }
  // can_tx_sw_version_dsp
  if (lhs->can_tx_sw_version_dsp != rhs->can_tx_sw_version_dsp) {
    return false;
  }
  // can_tx_temperature
  if (lhs->can_tx_temperature != rhs->can_tx_temperature) {
    return false;
  }
  // can_tx_range_perf_error
  if (lhs->can_tx_range_perf_error != rhs->can_tx_range_perf_error) {
    return false;
  }
  // can_tx_overheat_error
  if (lhs->can_tx_overheat_error != rhs->can_tx_overheat_error) {
    return false;
  }
  // can_tx_internal_error
  if (lhs->can_tx_internal_error != rhs->can_tx_internal_error) {
    return false;
  }
  // can_tx_xcvr_operational
  if (lhs->can_tx_xcvr_operational != rhs->can_tx_xcvr_operational) {
    return false;
  }
  // can_tx_steering_angle
  if (lhs->can_tx_steering_angle != rhs->can_tx_steering_angle) {
    return false;
  }
  // can_tx_rolling_count_2
  if (lhs->can_tx_rolling_count_2 != rhs->can_tx_rolling_count_2) {
    return false;
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrStatus2__copy(
  const delphi_srr_msgs__msg__SrrStatus2 * input,
  delphi_srr_msgs__msg__SrrStatus2 * output)
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
  // can_tx_alignment_status
  output->can_tx_alignment_status = input->can_tx_alignment_status;
  // can_tx_comm_error
  output->can_tx_comm_error = input->can_tx_comm_error;
  // can_tx_steering_angle_sign
  output->can_tx_steering_angle_sign = input->can_tx_steering_angle_sign;
  // can_tx_yaw_rate_bias
  output->can_tx_yaw_rate_bias = input->can_tx_yaw_rate_bias;
  // can_tx_veh_spd_comp_factor
  output->can_tx_veh_spd_comp_factor = input->can_tx_veh_spd_comp_factor;
  // can_tx_sw_version_dsp
  output->can_tx_sw_version_dsp = input->can_tx_sw_version_dsp;
  // can_tx_temperature
  output->can_tx_temperature = input->can_tx_temperature;
  // can_tx_range_perf_error
  output->can_tx_range_perf_error = input->can_tx_range_perf_error;
  // can_tx_overheat_error
  output->can_tx_overheat_error = input->can_tx_overheat_error;
  // can_tx_internal_error
  output->can_tx_internal_error = input->can_tx_internal_error;
  // can_tx_xcvr_operational
  output->can_tx_xcvr_operational = input->can_tx_xcvr_operational;
  // can_tx_steering_angle
  output->can_tx_steering_angle = input->can_tx_steering_angle;
  // can_tx_rolling_count_2
  output->can_tx_rolling_count_2 = input->can_tx_rolling_count_2;
  return true;
}

delphi_srr_msgs__msg__SrrStatus2 *
delphi_srr_msgs__msg__SrrStatus2__create()
{
  delphi_srr_msgs__msg__SrrStatus2 * msg = (delphi_srr_msgs__msg__SrrStatus2 *)malloc(sizeof(delphi_srr_msgs__msg__SrrStatus2));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_srr_msgs__msg__SrrStatus2));
  bool success = delphi_srr_msgs__msg__SrrStatus2__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_srr_msgs__msg__SrrStatus2__destroy(delphi_srr_msgs__msg__SrrStatus2 * msg)
{
  if (msg) {
    delphi_srr_msgs__msg__SrrStatus2__fini(msg);
  }
  free(msg);
}


bool
delphi_srr_msgs__msg__SrrStatus2__Sequence__init(delphi_srr_msgs__msg__SrrStatus2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_srr_msgs__msg__SrrStatus2 * data = NULL;
  if (size) {
    data = (delphi_srr_msgs__msg__SrrStatus2 *)calloc(size, sizeof(delphi_srr_msgs__msg__SrrStatus2));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_srr_msgs__msg__SrrStatus2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_srr_msgs__msg__SrrStatus2__fini(&data[i - 1]);
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
delphi_srr_msgs__msg__SrrStatus2__Sequence__fini(delphi_srr_msgs__msg__SrrStatus2__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_srr_msgs__msg__SrrStatus2__fini(&array->data[i]);
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

delphi_srr_msgs__msg__SrrStatus2__Sequence *
delphi_srr_msgs__msg__SrrStatus2__Sequence__create(size_t size)
{
  delphi_srr_msgs__msg__SrrStatus2__Sequence * array = (delphi_srr_msgs__msg__SrrStatus2__Sequence *)malloc(sizeof(delphi_srr_msgs__msg__SrrStatus2__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_srr_msgs__msg__SrrStatus2__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_srr_msgs__msg__SrrStatus2__Sequence__destroy(delphi_srr_msgs__msg__SrrStatus2__Sequence * array)
{
  if (array) {
    delphi_srr_msgs__msg__SrrStatus2__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_srr_msgs__msg__SrrStatus2__Sequence__are_equal(const delphi_srr_msgs__msg__SrrStatus2__Sequence * lhs, const delphi_srr_msgs__msg__SrrStatus2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_srr_msgs__msg__SrrStatus2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_srr_msgs__msg__SrrStatus2__Sequence__copy(
  const delphi_srr_msgs__msg__SrrStatus2__Sequence * input,
  delphi_srr_msgs__msg__SrrStatus2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_srr_msgs__msg__SrrStatus2);
    delphi_srr_msgs__msg__SrrStatus2 * data =
      (delphi_srr_msgs__msg__SrrStatus2 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_srr_msgs__msg__SrrStatus2__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_srr_msgs__msg__SrrStatus2__fini(&data[i]);
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
    if (!delphi_srr_msgs__msg__SrrStatus2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
