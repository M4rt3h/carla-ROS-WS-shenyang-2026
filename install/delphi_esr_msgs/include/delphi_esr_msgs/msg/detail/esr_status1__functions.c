// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrStatus1.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `canmsg`
#include "rosidl_runtime_c/string_functions.h"

bool
delphi_esr_msgs__msg__EsrStatus1__init(delphi_esr_msgs__msg__EsrStatus1 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrStatus1__fini(msg);
    return false;
  }
  // canmsg
  if (!rosidl_runtime_c__String__init(&msg->canmsg)) {
    delphi_esr_msgs__msg__EsrStatus1__fini(msg);
    return false;
  }
  // rolling_count_1
  // dsp_timestamp
  // comm_error
  // radius_curvature_calc
  // scan_index
  // yaw_rate_calc
  // vehicle_speed_calc
  return true;
}

void
delphi_esr_msgs__msg__EsrStatus1__fini(delphi_esr_msgs__msg__EsrStatus1 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // canmsg
  rosidl_runtime_c__String__fini(&msg->canmsg);
  // rolling_count_1
  // dsp_timestamp
  // comm_error
  // radius_curvature_calc
  // scan_index
  // yaw_rate_calc
  // vehicle_speed_calc
}

bool
delphi_esr_msgs__msg__EsrStatus1__are_equal(const delphi_esr_msgs__msg__EsrStatus1 * lhs, const delphi_esr_msgs__msg__EsrStatus1 * rhs)
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
  // rolling_count_1
  if (lhs->rolling_count_1 != rhs->rolling_count_1) {
    return false;
  }
  // dsp_timestamp
  if (lhs->dsp_timestamp != rhs->dsp_timestamp) {
    return false;
  }
  // comm_error
  if (lhs->comm_error != rhs->comm_error) {
    return false;
  }
  // radius_curvature_calc
  if (lhs->radius_curvature_calc != rhs->radius_curvature_calc) {
    return false;
  }
  // scan_index
  if (lhs->scan_index != rhs->scan_index) {
    return false;
  }
  // yaw_rate_calc
  if (lhs->yaw_rate_calc != rhs->yaw_rate_calc) {
    return false;
  }
  // vehicle_speed_calc
  if (lhs->vehicle_speed_calc != rhs->vehicle_speed_calc) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus1__copy(
  const delphi_esr_msgs__msg__EsrStatus1 * input,
  delphi_esr_msgs__msg__EsrStatus1 * output)
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
  // rolling_count_1
  output->rolling_count_1 = input->rolling_count_1;
  // dsp_timestamp
  output->dsp_timestamp = input->dsp_timestamp;
  // comm_error
  output->comm_error = input->comm_error;
  // radius_curvature_calc
  output->radius_curvature_calc = input->radius_curvature_calc;
  // scan_index
  output->scan_index = input->scan_index;
  // yaw_rate_calc
  output->yaw_rate_calc = input->yaw_rate_calc;
  // vehicle_speed_calc
  output->vehicle_speed_calc = input->vehicle_speed_calc;
  return true;
}

delphi_esr_msgs__msg__EsrStatus1 *
delphi_esr_msgs__msg__EsrStatus1__create()
{
  delphi_esr_msgs__msg__EsrStatus1 * msg = (delphi_esr_msgs__msg__EsrStatus1 *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus1));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrStatus1));
  bool success = delphi_esr_msgs__msg__EsrStatus1__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrStatus1__destroy(delphi_esr_msgs__msg__EsrStatus1 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrStatus1__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrStatus1__Sequence__init(delphi_esr_msgs__msg__EsrStatus1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrStatus1 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrStatus1 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrStatus1));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrStatus1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrStatus1__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrStatus1__Sequence__fini(delphi_esr_msgs__msg__EsrStatus1__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrStatus1__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrStatus1__Sequence *
delphi_esr_msgs__msg__EsrStatus1__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrStatus1__Sequence * array = (delphi_esr_msgs__msg__EsrStatus1__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus1__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrStatus1__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrStatus1__Sequence__destroy(delphi_esr_msgs__msg__EsrStatus1__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrStatus1__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrStatus1__Sequence__are_equal(const delphi_esr_msgs__msg__EsrStatus1__Sequence * lhs, const delphi_esr_msgs__msg__EsrStatus1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrStatus1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus1__Sequence__copy(
  const delphi_esr_msgs__msg__EsrStatus1__Sequence * input,
  delphi_esr_msgs__msg__EsrStatus1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrStatus1);
    delphi_esr_msgs__msg__EsrStatus1 * data =
      (delphi_esr_msgs__msg__EsrStatus1 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrStatus1__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrStatus1__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrStatus1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
