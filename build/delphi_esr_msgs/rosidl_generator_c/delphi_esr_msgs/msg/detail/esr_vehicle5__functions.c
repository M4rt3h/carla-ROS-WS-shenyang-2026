// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrVehicle5.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_vehicle5__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_esr_msgs__msg__EsrVehicle5__init(delphi_esr_msgs__msg__EsrVehicle5 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrVehicle5__fini(msg);
    return false;
  }
  // oversteer_understeer
  // yaw_rate_bias_shift
  // beamwidth_vert
  // funnel_offset_left
  // funnel_offset_right
  // cw_blockage_threshold
  // distance_rear_axle
  // wheelbase
  // steering_gear_ratio
  return true;
}

void
delphi_esr_msgs__msg__EsrVehicle5__fini(delphi_esr_msgs__msg__EsrVehicle5 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // oversteer_understeer
  // yaw_rate_bias_shift
  // beamwidth_vert
  // funnel_offset_left
  // funnel_offset_right
  // cw_blockage_threshold
  // distance_rear_axle
  // wheelbase
  // steering_gear_ratio
}

bool
delphi_esr_msgs__msg__EsrVehicle5__are_equal(const delphi_esr_msgs__msg__EsrVehicle5 * lhs, const delphi_esr_msgs__msg__EsrVehicle5 * rhs)
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
  // oversteer_understeer
  if (lhs->oversteer_understeer != rhs->oversteer_understeer) {
    return false;
  }
  // yaw_rate_bias_shift
  if (lhs->yaw_rate_bias_shift != rhs->yaw_rate_bias_shift) {
    return false;
  }
  // beamwidth_vert
  if (lhs->beamwidth_vert != rhs->beamwidth_vert) {
    return false;
  }
  // funnel_offset_left
  if (lhs->funnel_offset_left != rhs->funnel_offset_left) {
    return false;
  }
  // funnel_offset_right
  if (lhs->funnel_offset_right != rhs->funnel_offset_right) {
    return false;
  }
  // cw_blockage_threshold
  if (lhs->cw_blockage_threshold != rhs->cw_blockage_threshold) {
    return false;
  }
  // distance_rear_axle
  if (lhs->distance_rear_axle != rhs->distance_rear_axle) {
    return false;
  }
  // wheelbase
  if (lhs->wheelbase != rhs->wheelbase) {
    return false;
  }
  // steering_gear_ratio
  if (lhs->steering_gear_ratio != rhs->steering_gear_ratio) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrVehicle5__copy(
  const delphi_esr_msgs__msg__EsrVehicle5 * input,
  delphi_esr_msgs__msg__EsrVehicle5 * output)
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
  // oversteer_understeer
  output->oversteer_understeer = input->oversteer_understeer;
  // yaw_rate_bias_shift
  output->yaw_rate_bias_shift = input->yaw_rate_bias_shift;
  // beamwidth_vert
  output->beamwidth_vert = input->beamwidth_vert;
  // funnel_offset_left
  output->funnel_offset_left = input->funnel_offset_left;
  // funnel_offset_right
  output->funnel_offset_right = input->funnel_offset_right;
  // cw_blockage_threshold
  output->cw_blockage_threshold = input->cw_blockage_threshold;
  // distance_rear_axle
  output->distance_rear_axle = input->distance_rear_axle;
  // wheelbase
  output->wheelbase = input->wheelbase;
  // steering_gear_ratio
  output->steering_gear_ratio = input->steering_gear_ratio;
  return true;
}

delphi_esr_msgs__msg__EsrVehicle5 *
delphi_esr_msgs__msg__EsrVehicle5__create()
{
  delphi_esr_msgs__msg__EsrVehicle5 * msg = (delphi_esr_msgs__msg__EsrVehicle5 *)malloc(sizeof(delphi_esr_msgs__msg__EsrVehicle5));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrVehicle5));
  bool success = delphi_esr_msgs__msg__EsrVehicle5__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrVehicle5__destroy(delphi_esr_msgs__msg__EsrVehicle5 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrVehicle5__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrVehicle5__Sequence__init(delphi_esr_msgs__msg__EsrVehicle5__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrVehicle5 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrVehicle5 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrVehicle5));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrVehicle5__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrVehicle5__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrVehicle5__Sequence__fini(delphi_esr_msgs__msg__EsrVehicle5__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrVehicle5__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrVehicle5__Sequence *
delphi_esr_msgs__msg__EsrVehicle5__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrVehicle5__Sequence * array = (delphi_esr_msgs__msg__EsrVehicle5__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrVehicle5__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrVehicle5__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrVehicle5__Sequence__destroy(delphi_esr_msgs__msg__EsrVehicle5__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrVehicle5__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrVehicle5__Sequence__are_equal(const delphi_esr_msgs__msg__EsrVehicle5__Sequence * lhs, const delphi_esr_msgs__msg__EsrVehicle5__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrVehicle5__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrVehicle5__Sequence__copy(
  const delphi_esr_msgs__msg__EsrVehicle5__Sequence * input,
  delphi_esr_msgs__msg__EsrVehicle5__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrVehicle5);
    delphi_esr_msgs__msg__EsrVehicle5 * data =
      (delphi_esr_msgs__msg__EsrVehicle5 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrVehicle5__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrVehicle5__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrVehicle5__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
