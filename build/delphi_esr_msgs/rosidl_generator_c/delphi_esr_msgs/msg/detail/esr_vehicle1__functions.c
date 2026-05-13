// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrVehicle1.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_vehicle1__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_esr_msgs__msg__EsrVehicle1__init(delphi_esr_msgs__msg__EsrVehicle1 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrVehicle1__fini(msg);
    return false;
  }
  // vehicle_speed
  // vehicle_speed_direction
  // yaw_rate
  // yaw_rate_validity
  // steering_angle_rate_sign
  // radius_curvature
  // steering_angle_validity
  // steering_angle_sign
  // steering_angle
  // steering_angle_rate
  return true;
}

void
delphi_esr_msgs__msg__EsrVehicle1__fini(delphi_esr_msgs__msg__EsrVehicle1 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vehicle_speed
  // vehicle_speed_direction
  // yaw_rate
  // yaw_rate_validity
  // steering_angle_rate_sign
  // radius_curvature
  // steering_angle_validity
  // steering_angle_sign
  // steering_angle
  // steering_angle_rate
}

bool
delphi_esr_msgs__msg__EsrVehicle1__are_equal(const delphi_esr_msgs__msg__EsrVehicle1 * lhs, const delphi_esr_msgs__msg__EsrVehicle1 * rhs)
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
  // vehicle_speed
  if (lhs->vehicle_speed != rhs->vehicle_speed) {
    return false;
  }
  // vehicle_speed_direction
  if (lhs->vehicle_speed_direction != rhs->vehicle_speed_direction) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // yaw_rate_validity
  if (lhs->yaw_rate_validity != rhs->yaw_rate_validity) {
    return false;
  }
  // steering_angle_rate_sign
  if (lhs->steering_angle_rate_sign != rhs->steering_angle_rate_sign) {
    return false;
  }
  // radius_curvature
  if (lhs->radius_curvature != rhs->radius_curvature) {
    return false;
  }
  // steering_angle_validity
  if (lhs->steering_angle_validity != rhs->steering_angle_validity) {
    return false;
  }
  // steering_angle_sign
  if (lhs->steering_angle_sign != rhs->steering_angle_sign) {
    return false;
  }
  // steering_angle
  if (lhs->steering_angle != rhs->steering_angle) {
    return false;
  }
  // steering_angle_rate
  if (lhs->steering_angle_rate != rhs->steering_angle_rate) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrVehicle1__copy(
  const delphi_esr_msgs__msg__EsrVehicle1 * input,
  delphi_esr_msgs__msg__EsrVehicle1 * output)
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
  // vehicle_speed
  output->vehicle_speed = input->vehicle_speed;
  // vehicle_speed_direction
  output->vehicle_speed_direction = input->vehicle_speed_direction;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // yaw_rate_validity
  output->yaw_rate_validity = input->yaw_rate_validity;
  // steering_angle_rate_sign
  output->steering_angle_rate_sign = input->steering_angle_rate_sign;
  // radius_curvature
  output->radius_curvature = input->radius_curvature;
  // steering_angle_validity
  output->steering_angle_validity = input->steering_angle_validity;
  // steering_angle_sign
  output->steering_angle_sign = input->steering_angle_sign;
  // steering_angle
  output->steering_angle = input->steering_angle;
  // steering_angle_rate
  output->steering_angle_rate = input->steering_angle_rate;
  return true;
}

delphi_esr_msgs__msg__EsrVehicle1 *
delphi_esr_msgs__msg__EsrVehicle1__create()
{
  delphi_esr_msgs__msg__EsrVehicle1 * msg = (delphi_esr_msgs__msg__EsrVehicle1 *)malloc(sizeof(delphi_esr_msgs__msg__EsrVehicle1));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrVehicle1));
  bool success = delphi_esr_msgs__msg__EsrVehicle1__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrVehicle1__destroy(delphi_esr_msgs__msg__EsrVehicle1 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrVehicle1__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrVehicle1__Sequence__init(delphi_esr_msgs__msg__EsrVehicle1__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrVehicle1 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrVehicle1 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrVehicle1));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrVehicle1__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrVehicle1__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrVehicle1__Sequence__fini(delphi_esr_msgs__msg__EsrVehicle1__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrVehicle1__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrVehicle1__Sequence *
delphi_esr_msgs__msg__EsrVehicle1__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrVehicle1__Sequence * array = (delphi_esr_msgs__msg__EsrVehicle1__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrVehicle1__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrVehicle1__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrVehicle1__Sequence__destroy(delphi_esr_msgs__msg__EsrVehicle1__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrVehicle1__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrVehicle1__Sequence__are_equal(const delphi_esr_msgs__msg__EsrVehicle1__Sequence * lhs, const delphi_esr_msgs__msg__EsrVehicle1__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrVehicle1__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrVehicle1__Sequence__copy(
  const delphi_esr_msgs__msg__EsrVehicle1__Sequence * input,
  delphi_esr_msgs__msg__EsrVehicle1__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrVehicle1);
    delphi_esr_msgs__msg__EsrVehicle1 * data =
      (delphi_esr_msgs__msg__EsrVehicle1 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrVehicle1__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrVehicle1__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrVehicle1__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
