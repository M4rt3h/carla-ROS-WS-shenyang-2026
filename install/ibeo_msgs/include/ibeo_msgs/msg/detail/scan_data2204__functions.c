// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ScanData2204.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_data2204__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"
// Member `scanner_info_list`
#include "ibeo_msgs/msg/detail/scanner_info2204__functions.h"
// Member `scan_point_list`
#include "ibeo_msgs/msg/detail/scan_point2204__functions.h"

bool
ibeo_msgs__msg__ScanData2204__init(ibeo_msgs__msg__ScanData2204 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ibeo_msgs__msg__ScanData2204__fini(msg);
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__init(&msg->ibeo_header)) {
    ibeo_msgs__msg__ScanData2204__fini(msg);
    return false;
  }
  // scan_start_time
  // scan_end_time_offset
  // ground_labeled
  // dirt_labeled
  // rain_labeled
  // fused_scan
  // mirror_side
  // coordinate_system
  // scan_number
  // scan_points
  // number_of_scanner_infos
  // scanner_info_list
  if (!ibeo_msgs__msg__ScannerInfo2204__Sequence__init(&msg->scanner_info_list, 0)) {
    ibeo_msgs__msg__ScanData2204__fini(msg);
    return false;
  }
  // scan_point_list
  if (!ibeo_msgs__msg__ScanPoint2204__Sequence__init(&msg->scan_point_list, 0)) {
    ibeo_msgs__msg__ScanData2204__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__ScanData2204__fini(ibeo_msgs__msg__ScanData2204 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ibeo_header
  ibeo_msgs__msg__IbeoDataHeader__fini(&msg->ibeo_header);
  // scan_start_time
  // scan_end_time_offset
  // ground_labeled
  // dirt_labeled
  // rain_labeled
  // fused_scan
  // mirror_side
  // coordinate_system
  // scan_number
  // scan_points
  // number_of_scanner_infos
  // scanner_info_list
  ibeo_msgs__msg__ScannerInfo2204__Sequence__fini(&msg->scanner_info_list);
  // scan_point_list
  ibeo_msgs__msg__ScanPoint2204__Sequence__fini(&msg->scan_point_list);
}

bool
ibeo_msgs__msg__ScanData2204__are_equal(const ibeo_msgs__msg__ScanData2204 * lhs, const ibeo_msgs__msg__ScanData2204 * rhs)
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
  // scan_start_time
  if (lhs->scan_start_time != rhs->scan_start_time) {
    return false;
  }
  // scan_end_time_offset
  if (lhs->scan_end_time_offset != rhs->scan_end_time_offset) {
    return false;
  }
  // ground_labeled
  if (lhs->ground_labeled != rhs->ground_labeled) {
    return false;
  }
  // dirt_labeled
  if (lhs->dirt_labeled != rhs->dirt_labeled) {
    return false;
  }
  // rain_labeled
  if (lhs->rain_labeled != rhs->rain_labeled) {
    return false;
  }
  // fused_scan
  if (lhs->fused_scan != rhs->fused_scan) {
    return false;
  }
  // mirror_side
  if (lhs->mirror_side != rhs->mirror_side) {
    return false;
  }
  // coordinate_system
  if (lhs->coordinate_system != rhs->coordinate_system) {
    return false;
  }
  // scan_number
  if (lhs->scan_number != rhs->scan_number) {
    return false;
  }
  // scan_points
  if (lhs->scan_points != rhs->scan_points) {
    return false;
  }
  // number_of_scanner_infos
  if (lhs->number_of_scanner_infos != rhs->number_of_scanner_infos) {
    return false;
  }
  // scanner_info_list
  if (!ibeo_msgs__msg__ScannerInfo2204__Sequence__are_equal(
      &(lhs->scanner_info_list), &(rhs->scanner_info_list)))
  {
    return false;
  }
  // scan_point_list
  if (!ibeo_msgs__msg__ScanPoint2204__Sequence__are_equal(
      &(lhs->scan_point_list), &(rhs->scan_point_list)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ScanData2204__copy(
  const ibeo_msgs__msg__ScanData2204 * input,
  ibeo_msgs__msg__ScanData2204 * output)
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
  // scan_start_time
  output->scan_start_time = input->scan_start_time;
  // scan_end_time_offset
  output->scan_end_time_offset = input->scan_end_time_offset;
  // ground_labeled
  output->ground_labeled = input->ground_labeled;
  // dirt_labeled
  output->dirt_labeled = input->dirt_labeled;
  // rain_labeled
  output->rain_labeled = input->rain_labeled;
  // fused_scan
  output->fused_scan = input->fused_scan;
  // mirror_side
  output->mirror_side = input->mirror_side;
  // coordinate_system
  output->coordinate_system = input->coordinate_system;
  // scan_number
  output->scan_number = input->scan_number;
  // scan_points
  output->scan_points = input->scan_points;
  // number_of_scanner_infos
  output->number_of_scanner_infos = input->number_of_scanner_infos;
  // scanner_info_list
  if (!ibeo_msgs__msg__ScannerInfo2204__Sequence__copy(
      &(input->scanner_info_list), &(output->scanner_info_list)))
  {
    return false;
  }
  // scan_point_list
  if (!ibeo_msgs__msg__ScanPoint2204__Sequence__copy(
      &(input->scan_point_list), &(output->scan_point_list)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__ScanData2204 *
ibeo_msgs__msg__ScanData2204__create()
{
  ibeo_msgs__msg__ScanData2204 * msg = (ibeo_msgs__msg__ScanData2204 *)malloc(sizeof(ibeo_msgs__msg__ScanData2204));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ScanData2204));
  bool success = ibeo_msgs__msg__ScanData2204__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ScanData2204__destroy(ibeo_msgs__msg__ScanData2204 * msg)
{
  if (msg) {
    ibeo_msgs__msg__ScanData2204__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__ScanData2204__Sequence__init(ibeo_msgs__msg__ScanData2204__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__ScanData2204 * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__ScanData2204 *)calloc(size, sizeof(ibeo_msgs__msg__ScanData2204));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ScanData2204__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ScanData2204__fini(&data[i - 1]);
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
ibeo_msgs__msg__ScanData2204__Sequence__fini(ibeo_msgs__msg__ScanData2204__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__ScanData2204__fini(&array->data[i]);
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

ibeo_msgs__msg__ScanData2204__Sequence *
ibeo_msgs__msg__ScanData2204__Sequence__create(size_t size)
{
  ibeo_msgs__msg__ScanData2204__Sequence * array = (ibeo_msgs__msg__ScanData2204__Sequence *)malloc(sizeof(ibeo_msgs__msg__ScanData2204__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ScanData2204__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ScanData2204__Sequence__destroy(ibeo_msgs__msg__ScanData2204__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__ScanData2204__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__ScanData2204__Sequence__are_equal(const ibeo_msgs__msg__ScanData2204__Sequence * lhs, const ibeo_msgs__msg__ScanData2204__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ScanData2204__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ScanData2204__Sequence__copy(
  const ibeo_msgs__msg__ScanData2204__Sequence * input,
  ibeo_msgs__msg__ScanData2204__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ScanData2204);
    ibeo_msgs__msg__ScanData2204 * data =
      (ibeo_msgs__msg__ScanData2204 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ScanData2204__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ScanData2204__fini(&data[i]);
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
    if (!ibeo_msgs__msg__ScanData2204__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
