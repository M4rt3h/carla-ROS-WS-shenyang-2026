// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/HostVehicleState2805.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/host_vehicle_state2805__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ibeo_msgs__msg__HostVehicleState2805__init(ibeo_msgs__msg__HostVehicleState2805 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ibeo_msgs__msg__HostVehicleState2805__fini(msg);
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__init(&msg->ibeo_header)) {
    ibeo_msgs__msg__HostVehicleState2805__fini(msg);
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    ibeo_msgs__msg__HostVehicleState2805__fini(msg);
    return false;
  }
  // scan_number
  // error_flags
  // longitudinal_velocity
  // steering_wheel_angle
  // front_wheel_angle
  // x_position
  // y_position
  // course_angle
  // time_difference
  // x_difference
  // y_difference
  // heading_difference
  // current_yaw_rate
  return true;
}

void
ibeo_msgs__msg__HostVehicleState2805__fini(ibeo_msgs__msg__HostVehicleState2805 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ibeo_header
  ibeo_msgs__msg__IbeoDataHeader__fini(&msg->ibeo_header);
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // scan_number
  // error_flags
  // longitudinal_velocity
  // steering_wheel_angle
  // front_wheel_angle
  // x_position
  // y_position
  // course_angle
  // time_difference
  // x_difference
  // y_difference
  // heading_difference
  // current_yaw_rate
}

bool
ibeo_msgs__msg__HostVehicleState2805__are_equal(const ibeo_msgs__msg__HostVehicleState2805 * lhs, const ibeo_msgs__msg__HostVehicleState2805 * rhs)
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
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // scan_number
  if (lhs->scan_number != rhs->scan_number) {
    return false;
  }
  // error_flags
  if (lhs->error_flags != rhs->error_flags) {
    return false;
  }
  // longitudinal_velocity
  if (lhs->longitudinal_velocity != rhs->longitudinal_velocity) {
    return false;
  }
  // steering_wheel_angle
  if (lhs->steering_wheel_angle != rhs->steering_wheel_angle) {
    return false;
  }
  // front_wheel_angle
  if (lhs->front_wheel_angle != rhs->front_wheel_angle) {
    return false;
  }
  // x_position
  if (lhs->x_position != rhs->x_position) {
    return false;
  }
  // y_position
  if (lhs->y_position != rhs->y_position) {
    return false;
  }
  // course_angle
  if (lhs->course_angle != rhs->course_angle) {
    return false;
  }
  // time_difference
  if (lhs->time_difference != rhs->time_difference) {
    return false;
  }
  // x_difference
  if (lhs->x_difference != rhs->x_difference) {
    return false;
  }
  // y_difference
  if (lhs->y_difference != rhs->y_difference) {
    return false;
  }
  // heading_difference
  if (lhs->heading_difference != rhs->heading_difference) {
    return false;
  }
  // current_yaw_rate
  if (lhs->current_yaw_rate != rhs->current_yaw_rate) {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__HostVehicleState2805__copy(
  const ibeo_msgs__msg__HostVehicleState2805 * input,
  ibeo_msgs__msg__HostVehicleState2805 * output)
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
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // scan_number
  output->scan_number = input->scan_number;
  // error_flags
  output->error_flags = input->error_flags;
  // longitudinal_velocity
  output->longitudinal_velocity = input->longitudinal_velocity;
  // steering_wheel_angle
  output->steering_wheel_angle = input->steering_wheel_angle;
  // front_wheel_angle
  output->front_wheel_angle = input->front_wheel_angle;
  // x_position
  output->x_position = input->x_position;
  // y_position
  output->y_position = input->y_position;
  // course_angle
  output->course_angle = input->course_angle;
  // time_difference
  output->time_difference = input->time_difference;
  // x_difference
  output->x_difference = input->x_difference;
  // y_difference
  output->y_difference = input->y_difference;
  // heading_difference
  output->heading_difference = input->heading_difference;
  // current_yaw_rate
  output->current_yaw_rate = input->current_yaw_rate;
  return true;
}

ibeo_msgs__msg__HostVehicleState2805 *
ibeo_msgs__msg__HostVehicleState2805__create()
{
  ibeo_msgs__msg__HostVehicleState2805 * msg = (ibeo_msgs__msg__HostVehicleState2805 *)malloc(sizeof(ibeo_msgs__msg__HostVehicleState2805));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__HostVehicleState2805));
  bool success = ibeo_msgs__msg__HostVehicleState2805__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__HostVehicleState2805__destroy(ibeo_msgs__msg__HostVehicleState2805 * msg)
{
  if (msg) {
    ibeo_msgs__msg__HostVehicleState2805__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__HostVehicleState2805__Sequence__init(ibeo_msgs__msg__HostVehicleState2805__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__HostVehicleState2805 * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__HostVehicleState2805 *)calloc(size, sizeof(ibeo_msgs__msg__HostVehicleState2805));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__HostVehicleState2805__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__HostVehicleState2805__fini(&data[i - 1]);
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
ibeo_msgs__msg__HostVehicleState2805__Sequence__fini(ibeo_msgs__msg__HostVehicleState2805__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__HostVehicleState2805__fini(&array->data[i]);
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

ibeo_msgs__msg__HostVehicleState2805__Sequence *
ibeo_msgs__msg__HostVehicleState2805__Sequence__create(size_t size)
{
  ibeo_msgs__msg__HostVehicleState2805__Sequence * array = (ibeo_msgs__msg__HostVehicleState2805__Sequence *)malloc(sizeof(ibeo_msgs__msg__HostVehicleState2805__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__HostVehicleState2805__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__HostVehicleState2805__Sequence__destroy(ibeo_msgs__msg__HostVehicleState2805__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__HostVehicleState2805__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__HostVehicleState2805__Sequence__are_equal(const ibeo_msgs__msg__HostVehicleState2805__Sequence * lhs, const ibeo_msgs__msg__HostVehicleState2805__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__HostVehicleState2805__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__HostVehicleState2805__Sequence__copy(
  const ibeo_msgs__msg__HostVehicleState2805__Sequence * input,
  ibeo_msgs__msg__HostVehicleState2805__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__HostVehicleState2805);
    ibeo_msgs__msg__HostVehicleState2805 * data =
      (ibeo_msgs__msg__HostVehicleState2805 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__HostVehicleState2805__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__HostVehicleState2805__fini(&data[i]);
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
    if (!ibeo_msgs__msg__HostVehicleState2805__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
