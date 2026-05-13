// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg3.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__VehicleStateMsg3__init(delphi_mrr_msgs__msg__VehicleStateMsg3 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__VehicleStateMsg3__fini(msg);
    return false;
  }
  // yaw_rate_reference_valid
  // yaw_rate_reference
  // can_veh_long_accel_qf
  // can_veh_long_accel
  return true;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg3__fini(delphi_mrr_msgs__msg__VehicleStateMsg3 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // yaw_rate_reference_valid
  // yaw_rate_reference
  // can_veh_long_accel_qf
  // can_veh_long_accel
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg3__are_equal(const delphi_mrr_msgs__msg__VehicleStateMsg3 * lhs, const delphi_mrr_msgs__msg__VehicleStateMsg3 * rhs)
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
  // yaw_rate_reference_valid
  if (lhs->yaw_rate_reference_valid != rhs->yaw_rate_reference_valid) {
    return false;
  }
  // yaw_rate_reference
  if (lhs->yaw_rate_reference != rhs->yaw_rate_reference) {
    return false;
  }
  // can_veh_long_accel_qf
  if (lhs->can_veh_long_accel_qf != rhs->can_veh_long_accel_qf) {
    return false;
  }
  // can_veh_long_accel
  if (lhs->can_veh_long_accel != rhs->can_veh_long_accel) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg3__copy(
  const delphi_mrr_msgs__msg__VehicleStateMsg3 * input,
  delphi_mrr_msgs__msg__VehicleStateMsg3 * output)
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
  // yaw_rate_reference_valid
  output->yaw_rate_reference_valid = input->yaw_rate_reference_valid;
  // yaw_rate_reference
  output->yaw_rate_reference = input->yaw_rate_reference;
  // can_veh_long_accel_qf
  output->can_veh_long_accel_qf = input->can_veh_long_accel_qf;
  // can_veh_long_accel
  output->can_veh_long_accel = input->can_veh_long_accel;
  return true;
}

delphi_mrr_msgs__msg__VehicleStateMsg3 *
delphi_mrr_msgs__msg__VehicleStateMsg3__create()
{
  delphi_mrr_msgs__msg__VehicleStateMsg3 * msg = (delphi_mrr_msgs__msg__VehicleStateMsg3 *)malloc(sizeof(delphi_mrr_msgs__msg__VehicleStateMsg3));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__VehicleStateMsg3));
  bool success = delphi_mrr_msgs__msg__VehicleStateMsg3__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg3__destroy(delphi_mrr_msgs__msg__VehicleStateMsg3 * msg)
{
  if (msg) {
    delphi_mrr_msgs__msg__VehicleStateMsg3__fini(msg);
  }
  free(msg);
}


bool
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__init(delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_mrr_msgs__msg__VehicleStateMsg3 * data = NULL;
  if (size) {
    data = (delphi_mrr_msgs__msg__VehicleStateMsg3 *)calloc(size, sizeof(delphi_mrr_msgs__msg__VehicleStateMsg3));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__VehicleStateMsg3__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__VehicleStateMsg3__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__fini(delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_mrr_msgs__msg__VehicleStateMsg3__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence *
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__create(size_t size)
{
  delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * array = (delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence *)malloc(sizeof(delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__destroy(delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * array)
{
  if (array) {
    delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__are_equal(const delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * lhs, const delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__VehicleStateMsg3__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence__copy(
  const delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * input,
  delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__VehicleStateMsg3);
    delphi_mrr_msgs__msg__VehicleStateMsg3 * data =
      (delphi_mrr_msgs__msg__VehicleStateMsg3 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__VehicleStateMsg3__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__VehicleStateMsg3__fini(&data[i]);
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
    if (!delphi_mrr_msgs__msg__VehicleStateMsg3__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
