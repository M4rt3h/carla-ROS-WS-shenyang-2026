// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ScanData2208.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_data2208__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"
// Member `scan_start_time`
// Member `scan_end_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `scan_point_list`
#include "ibeo_msgs/msg/detail/scan_point2208__functions.h"

bool
ibeo_msgs__msg__ScanData2208__init(ibeo_msgs__msg__ScanData2208 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ibeo_msgs__msg__ScanData2208__fini(msg);
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__init(&msg->ibeo_header)) {
    ibeo_msgs__msg__ScanData2208__fini(msg);
    return false;
  }
  // scan_number
  // scanner_type
  // motor_on
  // laser_on
  // frequency_locked
  // motor_rotating_direction
  // angle_ticks_per_rotation
  // scan_flags
  // mounting_yaw_angle_ticks
  // mounting_pitch_angle_ticks
  // mounting_roll_angle_ticks
  // mounting_position_x
  // mounting_position_y
  // mounting_position_z
  // device_id
  // scan_start_time
  if (!builtin_interfaces__msg__Time__init(&msg->scan_start_time)) {
    ibeo_msgs__msg__ScanData2208__fini(msg);
    return false;
  }
  // scan_end_time
  if (!builtin_interfaces__msg__Time__init(&msg->scan_end_time)) {
    ibeo_msgs__msg__ScanData2208__fini(msg);
    return false;
  }
  // start_angle_ticks
  // end_angle_ticks
  // mirror_side
  // mirror_tilt
  // scan_point_list
  if (!ibeo_msgs__msg__ScanPoint2208__Sequence__init(&msg->scan_point_list, 0)) {
    ibeo_msgs__msg__ScanData2208__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__ScanData2208__fini(ibeo_msgs__msg__ScanData2208 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ibeo_header
  ibeo_msgs__msg__IbeoDataHeader__fini(&msg->ibeo_header);
  // scan_number
  // scanner_type
  // motor_on
  // laser_on
  // frequency_locked
  // motor_rotating_direction
  // angle_ticks_per_rotation
  // scan_flags
  // mounting_yaw_angle_ticks
  // mounting_pitch_angle_ticks
  // mounting_roll_angle_ticks
  // mounting_position_x
  // mounting_position_y
  // mounting_position_z
  // device_id
  // scan_start_time
  builtin_interfaces__msg__Time__fini(&msg->scan_start_time);
  // scan_end_time
  builtin_interfaces__msg__Time__fini(&msg->scan_end_time);
  // start_angle_ticks
  // end_angle_ticks
  // mirror_side
  // mirror_tilt
  // scan_point_list
  ibeo_msgs__msg__ScanPoint2208__Sequence__fini(&msg->scan_point_list);
}

bool
ibeo_msgs__msg__ScanData2208__are_equal(const ibeo_msgs__msg__ScanData2208 * lhs, const ibeo_msgs__msg__ScanData2208 * rhs)
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
  // scan_number
  if (lhs->scan_number != rhs->scan_number) {
    return false;
  }
  // scanner_type
  if (lhs->scanner_type != rhs->scanner_type) {
    return false;
  }
  // motor_on
  if (lhs->motor_on != rhs->motor_on) {
    return false;
  }
  // laser_on
  if (lhs->laser_on != rhs->laser_on) {
    return false;
  }
  // frequency_locked
  if (lhs->frequency_locked != rhs->frequency_locked) {
    return false;
  }
  // motor_rotating_direction
  if (lhs->motor_rotating_direction != rhs->motor_rotating_direction) {
    return false;
  }
  // angle_ticks_per_rotation
  if (lhs->angle_ticks_per_rotation != rhs->angle_ticks_per_rotation) {
    return false;
  }
  // scan_flags
  if (lhs->scan_flags != rhs->scan_flags) {
    return false;
  }
  // mounting_yaw_angle_ticks
  if (lhs->mounting_yaw_angle_ticks != rhs->mounting_yaw_angle_ticks) {
    return false;
  }
  // mounting_pitch_angle_ticks
  if (lhs->mounting_pitch_angle_ticks != rhs->mounting_pitch_angle_ticks) {
    return false;
  }
  // mounting_roll_angle_ticks
  if (lhs->mounting_roll_angle_ticks != rhs->mounting_roll_angle_ticks) {
    return false;
  }
  // mounting_position_x
  if (lhs->mounting_position_x != rhs->mounting_position_x) {
    return false;
  }
  // mounting_position_y
  if (lhs->mounting_position_y != rhs->mounting_position_y) {
    return false;
  }
  // mounting_position_z
  if (lhs->mounting_position_z != rhs->mounting_position_z) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // scan_start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->scan_start_time), &(rhs->scan_start_time)))
  {
    return false;
  }
  // scan_end_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->scan_end_time), &(rhs->scan_end_time)))
  {
    return false;
  }
  // start_angle_ticks
  if (lhs->start_angle_ticks != rhs->start_angle_ticks) {
    return false;
  }
  // end_angle_ticks
  if (lhs->end_angle_ticks != rhs->end_angle_ticks) {
    return false;
  }
  // mirror_side
  if (lhs->mirror_side != rhs->mirror_side) {
    return false;
  }
  // mirror_tilt
  if (lhs->mirror_tilt != rhs->mirror_tilt) {
    return false;
  }
  // scan_point_list
  if (!ibeo_msgs__msg__ScanPoint2208__Sequence__are_equal(
      &(lhs->scan_point_list), &(rhs->scan_point_list)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ScanData2208__copy(
  const ibeo_msgs__msg__ScanData2208 * input,
  ibeo_msgs__msg__ScanData2208 * output)
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
  // scan_number
  output->scan_number = input->scan_number;
  // scanner_type
  output->scanner_type = input->scanner_type;
  // motor_on
  output->motor_on = input->motor_on;
  // laser_on
  output->laser_on = input->laser_on;
  // frequency_locked
  output->frequency_locked = input->frequency_locked;
  // motor_rotating_direction
  output->motor_rotating_direction = input->motor_rotating_direction;
  // angle_ticks_per_rotation
  output->angle_ticks_per_rotation = input->angle_ticks_per_rotation;
  // scan_flags
  output->scan_flags = input->scan_flags;
  // mounting_yaw_angle_ticks
  output->mounting_yaw_angle_ticks = input->mounting_yaw_angle_ticks;
  // mounting_pitch_angle_ticks
  output->mounting_pitch_angle_ticks = input->mounting_pitch_angle_ticks;
  // mounting_roll_angle_ticks
  output->mounting_roll_angle_ticks = input->mounting_roll_angle_ticks;
  // mounting_position_x
  output->mounting_position_x = input->mounting_position_x;
  // mounting_position_y
  output->mounting_position_y = input->mounting_position_y;
  // mounting_position_z
  output->mounting_position_z = input->mounting_position_z;
  // device_id
  output->device_id = input->device_id;
  // scan_start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->scan_start_time), &(output->scan_start_time)))
  {
    return false;
  }
  // scan_end_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->scan_end_time), &(output->scan_end_time)))
  {
    return false;
  }
  // start_angle_ticks
  output->start_angle_ticks = input->start_angle_ticks;
  // end_angle_ticks
  output->end_angle_ticks = input->end_angle_ticks;
  // mirror_side
  output->mirror_side = input->mirror_side;
  // mirror_tilt
  output->mirror_tilt = input->mirror_tilt;
  // scan_point_list
  if (!ibeo_msgs__msg__ScanPoint2208__Sequence__copy(
      &(input->scan_point_list), &(output->scan_point_list)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__ScanData2208 *
ibeo_msgs__msg__ScanData2208__create()
{
  ibeo_msgs__msg__ScanData2208 * msg = (ibeo_msgs__msg__ScanData2208 *)malloc(sizeof(ibeo_msgs__msg__ScanData2208));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ScanData2208));
  bool success = ibeo_msgs__msg__ScanData2208__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ScanData2208__destroy(ibeo_msgs__msg__ScanData2208 * msg)
{
  if (msg) {
    ibeo_msgs__msg__ScanData2208__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__ScanData2208__Sequence__init(ibeo_msgs__msg__ScanData2208__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__ScanData2208 * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__ScanData2208 *)calloc(size, sizeof(ibeo_msgs__msg__ScanData2208));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ScanData2208__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ScanData2208__fini(&data[i - 1]);
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
ibeo_msgs__msg__ScanData2208__Sequence__fini(ibeo_msgs__msg__ScanData2208__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__ScanData2208__fini(&array->data[i]);
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

ibeo_msgs__msg__ScanData2208__Sequence *
ibeo_msgs__msg__ScanData2208__Sequence__create(size_t size)
{
  ibeo_msgs__msg__ScanData2208__Sequence * array = (ibeo_msgs__msg__ScanData2208__Sequence *)malloc(sizeof(ibeo_msgs__msg__ScanData2208__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ScanData2208__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ScanData2208__Sequence__destroy(ibeo_msgs__msg__ScanData2208__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__ScanData2208__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__ScanData2208__Sequence__are_equal(const ibeo_msgs__msg__ScanData2208__Sequence * lhs, const ibeo_msgs__msg__ScanData2208__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ScanData2208__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ScanData2208__Sequence__copy(
  const ibeo_msgs__msg__ScanData2208__Sequence * input,
  ibeo_msgs__msg__ScanData2208__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ScanData2208);
    ibeo_msgs__msg__ScanData2208 * data =
      (ibeo_msgs__msg__ScanData2208 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ScanData2208__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ScanData2208__fini(&data[i]);
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
    if (!ibeo_msgs__msg__ScanData2208__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
