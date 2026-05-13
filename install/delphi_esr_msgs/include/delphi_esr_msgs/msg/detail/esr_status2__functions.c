// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrStatus2.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `canmsg`
// Member `sw_version_dsp`
#include "rosidl_runtime_c/string_functions.h"

bool
delphi_esr_msgs__msg__EsrStatus2__init(delphi_esr_msgs__msg__EsrStatus2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrStatus2__fini(msg);
    return false;
  }
  // canmsg
  if (!rosidl_runtime_c__String__init(&msg->canmsg)) {
    delphi_esr_msgs__msg__EsrStatus2__fini(msg);
    return false;
  }
  // maximum_tracks_ack
  // rolling_count_2
  // overheat_error
  // range_perf_error
  // internal_error
  // xcvr_operational
  // raw_data_mode
  // steering_angle_ack
  // temperature
  // veh_spd_comp_factor
  // grouping_mode
  // yaw_rate_bias
  // sw_version_dsp
  if (!rosidl_runtime_c__String__init(&msg->sw_version_dsp)) {
    delphi_esr_msgs__msg__EsrStatus2__fini(msg);
    return false;
  }
  return true;
}

void
delphi_esr_msgs__msg__EsrStatus2__fini(delphi_esr_msgs__msg__EsrStatus2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // canmsg
  rosidl_runtime_c__String__fini(&msg->canmsg);
  // maximum_tracks_ack
  // rolling_count_2
  // overheat_error
  // range_perf_error
  // internal_error
  // xcvr_operational
  // raw_data_mode
  // steering_angle_ack
  // temperature
  // veh_spd_comp_factor
  // grouping_mode
  // yaw_rate_bias
  // sw_version_dsp
  rosidl_runtime_c__String__fini(&msg->sw_version_dsp);
}

bool
delphi_esr_msgs__msg__EsrStatus2__are_equal(const delphi_esr_msgs__msg__EsrStatus2 * lhs, const delphi_esr_msgs__msg__EsrStatus2 * rhs)
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
  // canmsg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->canmsg), &(rhs->canmsg)))
  {
    return false;
  }
  // maximum_tracks_ack
  if (lhs->maximum_tracks_ack != rhs->maximum_tracks_ack) {
    return false;
  }
  // rolling_count_2
  if (lhs->rolling_count_2 != rhs->rolling_count_2) {
    return false;
  }
  // overheat_error
  if (lhs->overheat_error != rhs->overheat_error) {
    return false;
  }
  // range_perf_error
  if (lhs->range_perf_error != rhs->range_perf_error) {
    return false;
  }
  // internal_error
  if (lhs->internal_error != rhs->internal_error) {
    return false;
  }
  // xcvr_operational
  if (lhs->xcvr_operational != rhs->xcvr_operational) {
    return false;
  }
  // raw_data_mode
  if (lhs->raw_data_mode != rhs->raw_data_mode) {
    return false;
  }
  // steering_angle_ack
  if (lhs->steering_angle_ack != rhs->steering_angle_ack) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // veh_spd_comp_factor
  if (lhs->veh_spd_comp_factor != rhs->veh_spd_comp_factor) {
    return false;
  }
  // grouping_mode
  if (lhs->grouping_mode != rhs->grouping_mode) {
    return false;
  }
  // yaw_rate_bias
  if (lhs->yaw_rate_bias != rhs->yaw_rate_bias) {
    return false;
  }
  // sw_version_dsp
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sw_version_dsp), &(rhs->sw_version_dsp)))
  {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus2__copy(
  const delphi_esr_msgs__msg__EsrStatus2 * input,
  delphi_esr_msgs__msg__EsrStatus2 * output)
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
  // canmsg
  if (!rosidl_runtime_c__String__copy(
      &(input->canmsg), &(output->canmsg)))
  {
    return false;
  }
  // maximum_tracks_ack
  output->maximum_tracks_ack = input->maximum_tracks_ack;
  // rolling_count_2
  output->rolling_count_2 = input->rolling_count_2;
  // overheat_error
  output->overheat_error = input->overheat_error;
  // range_perf_error
  output->range_perf_error = input->range_perf_error;
  // internal_error
  output->internal_error = input->internal_error;
  // xcvr_operational
  output->xcvr_operational = input->xcvr_operational;
  // raw_data_mode
  output->raw_data_mode = input->raw_data_mode;
  // steering_angle_ack
  output->steering_angle_ack = input->steering_angle_ack;
  // temperature
  output->temperature = input->temperature;
  // veh_spd_comp_factor
  output->veh_spd_comp_factor = input->veh_spd_comp_factor;
  // grouping_mode
  output->grouping_mode = input->grouping_mode;
  // yaw_rate_bias
  output->yaw_rate_bias = input->yaw_rate_bias;
  // sw_version_dsp
  if (!rosidl_runtime_c__String__copy(
      &(input->sw_version_dsp), &(output->sw_version_dsp)))
  {
    return false;
  }
  return true;
}

delphi_esr_msgs__msg__EsrStatus2 *
delphi_esr_msgs__msg__EsrStatus2__create()
{
  delphi_esr_msgs__msg__EsrStatus2 * msg = (delphi_esr_msgs__msg__EsrStatus2 *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus2));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrStatus2));
  bool success = delphi_esr_msgs__msg__EsrStatus2__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrStatus2__destroy(delphi_esr_msgs__msg__EsrStatus2 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrStatus2__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrStatus2__Sequence__init(delphi_esr_msgs__msg__EsrStatus2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrStatus2 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrStatus2 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrStatus2));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrStatus2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrStatus2__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrStatus2__Sequence__fini(delphi_esr_msgs__msg__EsrStatus2__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrStatus2__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrStatus2__Sequence *
delphi_esr_msgs__msg__EsrStatus2__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrStatus2__Sequence * array = (delphi_esr_msgs__msg__EsrStatus2__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus2__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrStatus2__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrStatus2__Sequence__destroy(delphi_esr_msgs__msg__EsrStatus2__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrStatus2__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrStatus2__Sequence__are_equal(const delphi_esr_msgs__msg__EsrStatus2__Sequence * lhs, const delphi_esr_msgs__msg__EsrStatus2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrStatus2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus2__Sequence__copy(
  const delphi_esr_msgs__msg__EsrStatus2__Sequence * input,
  delphi_esr_msgs__msg__EsrStatus2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrStatus2);
    delphi_esr_msgs__msg__EsrStatus2 * data =
      (delphi_esr_msgs__msg__EsrStatus2 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrStatus2__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrStatus2__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrStatus2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
