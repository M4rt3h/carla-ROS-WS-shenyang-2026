// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ScannerInfo2205.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scanner_info2205__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `scan_start_time`
// Member `scan_end_time`
// Member `scan_start_time_from_device`
// Member `scan_end_time_from_device`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `mounting_position`
#include "ibeo_msgs/msg/detail/mounting_position_f__functions.h"
// Member `resolutions`
#include "ibeo_msgs/msg/detail/resolution_info__functions.h"

bool
ibeo_msgs__msg__ScannerInfo2205__init(ibeo_msgs__msg__ScannerInfo2205 * msg)
{
  if (!msg) {
    return false;
  }
  // device_id
  // scanner_type
  // scan_number
  // start_angle
  // end_angle
  // scan_start_time
  if (!builtin_interfaces__msg__Time__init(&msg->scan_start_time)) {
    ibeo_msgs__msg__ScannerInfo2205__fini(msg);
    return false;
  }
  // scan_end_time
  if (!builtin_interfaces__msg__Time__init(&msg->scan_end_time)) {
    ibeo_msgs__msg__ScannerInfo2205__fini(msg);
    return false;
  }
  // scan_start_time_from_device
  if (!builtin_interfaces__msg__Time__init(&msg->scan_start_time_from_device)) {
    ibeo_msgs__msg__ScannerInfo2205__fini(msg);
    return false;
  }
  // scan_end_time_from_device
  if (!builtin_interfaces__msg__Time__init(&msg->scan_end_time_from_device)) {
    ibeo_msgs__msg__ScannerInfo2205__fini(msg);
    return false;
  }
  // scan_frequency
  // beam_tilt
  // scan_flags
  // mounting_position
  if (!ibeo_msgs__msg__MountingPositionF__init(&msg->mounting_position)) {
    ibeo_msgs__msg__ScannerInfo2205__fini(msg);
    return false;
  }
  // resolutions
  for (size_t i = 0; i < 8; ++i) {
    if (!ibeo_msgs__msg__ResolutionInfo__init(&msg->resolutions[i])) {
      ibeo_msgs__msg__ScannerInfo2205__fini(msg);
      return false;
    }
  }
  return true;
}

void
ibeo_msgs__msg__ScannerInfo2205__fini(ibeo_msgs__msg__ScannerInfo2205 * msg)
{
  if (!msg) {
    return;
  }
  // device_id
  // scanner_type
  // scan_number
  // start_angle
  // end_angle
  // scan_start_time
  builtin_interfaces__msg__Time__fini(&msg->scan_start_time);
  // scan_end_time
  builtin_interfaces__msg__Time__fini(&msg->scan_end_time);
  // scan_start_time_from_device
  builtin_interfaces__msg__Time__fini(&msg->scan_start_time_from_device);
  // scan_end_time_from_device
  builtin_interfaces__msg__Time__fini(&msg->scan_end_time_from_device);
  // scan_frequency
  // beam_tilt
  // scan_flags
  // mounting_position
  ibeo_msgs__msg__MountingPositionF__fini(&msg->mounting_position);
  // resolutions
  for (size_t i = 0; i < 8; ++i) {
    ibeo_msgs__msg__ResolutionInfo__fini(&msg->resolutions[i]);
  }
}

bool
ibeo_msgs__msg__ScannerInfo2205__are_equal(const ibeo_msgs__msg__ScannerInfo2205 * lhs, const ibeo_msgs__msg__ScannerInfo2205 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // scanner_type
  if (lhs->scanner_type != rhs->scanner_type) {
    return false;
  }
  // scan_number
  if (lhs->scan_number != rhs->scan_number) {
    return false;
  }
  // start_angle
  if (lhs->start_angle != rhs->start_angle) {
    return false;
  }
  // end_angle
  if (lhs->end_angle != rhs->end_angle) {
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
  // scan_start_time_from_device
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->scan_start_time_from_device), &(rhs->scan_start_time_from_device)))
  {
    return false;
  }
  // scan_end_time_from_device
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->scan_end_time_from_device), &(rhs->scan_end_time_from_device)))
  {
    return false;
  }
  // scan_frequency
  if (lhs->scan_frequency != rhs->scan_frequency) {
    return false;
  }
  // beam_tilt
  if (lhs->beam_tilt != rhs->beam_tilt) {
    return false;
  }
  // scan_flags
  if (lhs->scan_flags != rhs->scan_flags) {
    return false;
  }
  // mounting_position
  if (!ibeo_msgs__msg__MountingPositionF__are_equal(
      &(lhs->mounting_position), &(rhs->mounting_position)))
  {
    return false;
  }
  // resolutions
  for (size_t i = 0; i < 8; ++i) {
    if (!ibeo_msgs__msg__ResolutionInfo__are_equal(
        &(lhs->resolutions[i]), &(rhs->resolutions[i])))
    {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ScannerInfo2205__copy(
  const ibeo_msgs__msg__ScannerInfo2205 * input,
  ibeo_msgs__msg__ScannerInfo2205 * output)
{
  if (!input || !output) {
    return false;
  }
  // device_id
  output->device_id = input->device_id;
  // scanner_type
  output->scanner_type = input->scanner_type;
  // scan_number
  output->scan_number = input->scan_number;
  // start_angle
  output->start_angle = input->start_angle;
  // end_angle
  output->end_angle = input->end_angle;
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
  // scan_start_time_from_device
  if (!builtin_interfaces__msg__Time__copy(
      &(input->scan_start_time_from_device), &(output->scan_start_time_from_device)))
  {
    return false;
  }
  // scan_end_time_from_device
  if (!builtin_interfaces__msg__Time__copy(
      &(input->scan_end_time_from_device), &(output->scan_end_time_from_device)))
  {
    return false;
  }
  // scan_frequency
  output->scan_frequency = input->scan_frequency;
  // beam_tilt
  output->beam_tilt = input->beam_tilt;
  // scan_flags
  output->scan_flags = input->scan_flags;
  // mounting_position
  if (!ibeo_msgs__msg__MountingPositionF__copy(
      &(input->mounting_position), &(output->mounting_position)))
  {
    return false;
  }
  // resolutions
  for (size_t i = 0; i < 8; ++i) {
    if (!ibeo_msgs__msg__ResolutionInfo__copy(
        &(input->resolutions[i]), &(output->resolutions[i])))
    {
      return false;
    }
  }
  return true;
}

ibeo_msgs__msg__ScannerInfo2205 *
ibeo_msgs__msg__ScannerInfo2205__create()
{
  ibeo_msgs__msg__ScannerInfo2205 * msg = (ibeo_msgs__msg__ScannerInfo2205 *)malloc(sizeof(ibeo_msgs__msg__ScannerInfo2205));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ScannerInfo2205));
  bool success = ibeo_msgs__msg__ScannerInfo2205__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ScannerInfo2205__destroy(ibeo_msgs__msg__ScannerInfo2205 * msg)
{
  if (msg) {
    ibeo_msgs__msg__ScannerInfo2205__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__ScannerInfo2205__Sequence__init(ibeo_msgs__msg__ScannerInfo2205__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__ScannerInfo2205 * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__ScannerInfo2205 *)calloc(size, sizeof(ibeo_msgs__msg__ScannerInfo2205));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ScannerInfo2205__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ScannerInfo2205__fini(&data[i - 1]);
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
ibeo_msgs__msg__ScannerInfo2205__Sequence__fini(ibeo_msgs__msg__ScannerInfo2205__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__ScannerInfo2205__fini(&array->data[i]);
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

ibeo_msgs__msg__ScannerInfo2205__Sequence *
ibeo_msgs__msg__ScannerInfo2205__Sequence__create(size_t size)
{
  ibeo_msgs__msg__ScannerInfo2205__Sequence * array = (ibeo_msgs__msg__ScannerInfo2205__Sequence *)malloc(sizeof(ibeo_msgs__msg__ScannerInfo2205__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ScannerInfo2205__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ScannerInfo2205__Sequence__destroy(ibeo_msgs__msg__ScannerInfo2205__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__ScannerInfo2205__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__ScannerInfo2205__Sequence__are_equal(const ibeo_msgs__msg__ScannerInfo2205__Sequence * lhs, const ibeo_msgs__msg__ScannerInfo2205__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ScannerInfo2205__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ScannerInfo2205__Sequence__copy(
  const ibeo_msgs__msg__ScannerInfo2205__Sequence * input,
  ibeo_msgs__msg__ScannerInfo2205__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ScannerInfo2205);
    ibeo_msgs__msg__ScannerInfo2205 * data =
      (ibeo_msgs__msg__ScannerInfo2205 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ScannerInfo2205__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ScannerInfo2205__fini(&data[i]);
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
    if (!ibeo_msgs__msg__ScannerInfo2205__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
