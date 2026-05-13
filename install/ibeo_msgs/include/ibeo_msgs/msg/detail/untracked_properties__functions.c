// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/UntrackedProperties.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/untracked_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `position_closest_point`
// Member `object_box_size`
// Member `tracking_point_coordinate`
#include "ibeo_msgs/msg/detail/point2_di__functions.h"
// Member `object_box_size_sigma`
// Member `tracking_point_coordinate_sigma`
#include "ibeo_msgs/msg/detail/point2_dui__functions.h"
// Member `contour_point_list`
#include "ibeo_msgs/msg/detail/contour_point_sigma__functions.h"

bool
ibeo_msgs__msg__UntrackedProperties__init(ibeo_msgs__msg__UntrackedProperties * msg)
{
  if (!msg) {
    return false;
  }
  // relative_time_of_measurement
  // position_closest_point
  if (!ibeo_msgs__msg__Point2Di__init(&msg->position_closest_point)) {
    ibeo_msgs__msg__UntrackedProperties__fini(msg);
    return false;
  }
  // object_box_size
  if (!ibeo_msgs__msg__Point2Di__init(&msg->object_box_size)) {
    ibeo_msgs__msg__UntrackedProperties__fini(msg);
    return false;
  }
  // object_box_size_sigma
  if (!ibeo_msgs__msg__Point2Dui__init(&msg->object_box_size_sigma)) {
    ibeo_msgs__msg__UntrackedProperties__fini(msg);
    return false;
  }
  // object_box_orientation
  // object_box_orientation_sigma
  // tracking_point_coordinate
  if (!ibeo_msgs__msg__Point2Di__init(&msg->tracking_point_coordinate)) {
    ibeo_msgs__msg__UntrackedProperties__fini(msg);
    return false;
  }
  // tracking_point_coordinate_sigma
  if (!ibeo_msgs__msg__Point2Dui__init(&msg->tracking_point_coordinate_sigma)) {
    ibeo_msgs__msg__UntrackedProperties__fini(msg);
    return false;
  }
  // number_of_contour_points
  // contour_point_list
  if (!ibeo_msgs__msg__ContourPointSigma__Sequence__init(&msg->contour_point_list, 0)) {
    ibeo_msgs__msg__UntrackedProperties__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__UntrackedProperties__fini(ibeo_msgs__msg__UntrackedProperties * msg)
{
  if (!msg) {
    return;
  }
  // relative_time_of_measurement
  // position_closest_point
  ibeo_msgs__msg__Point2Di__fini(&msg->position_closest_point);
  // object_box_size
  ibeo_msgs__msg__Point2Di__fini(&msg->object_box_size);
  // object_box_size_sigma
  ibeo_msgs__msg__Point2Dui__fini(&msg->object_box_size_sigma);
  // object_box_orientation
  // object_box_orientation_sigma
  // tracking_point_coordinate
  ibeo_msgs__msg__Point2Di__fini(&msg->tracking_point_coordinate);
  // tracking_point_coordinate_sigma
  ibeo_msgs__msg__Point2Dui__fini(&msg->tracking_point_coordinate_sigma);
  // number_of_contour_points
  // contour_point_list
  ibeo_msgs__msg__ContourPointSigma__Sequence__fini(&msg->contour_point_list);
}

bool
ibeo_msgs__msg__UntrackedProperties__are_equal(const ibeo_msgs__msg__UntrackedProperties * lhs, const ibeo_msgs__msg__UntrackedProperties * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // relative_time_of_measurement
  if (lhs->relative_time_of_measurement != rhs->relative_time_of_measurement) {
    return false;
  }
  // position_closest_point
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->position_closest_point), &(rhs->position_closest_point)))
  {
    return false;
  }
  // object_box_size
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->object_box_size), &(rhs->object_box_size)))
  {
    return false;
  }
  // object_box_size_sigma
  if (!ibeo_msgs__msg__Point2Dui__are_equal(
      &(lhs->object_box_size_sigma), &(rhs->object_box_size_sigma)))
  {
    return false;
  }
  // object_box_orientation
  if (lhs->object_box_orientation != rhs->object_box_orientation) {
    return false;
  }
  // object_box_orientation_sigma
  if (lhs->object_box_orientation_sigma != rhs->object_box_orientation_sigma) {
    return false;
  }
  // tracking_point_coordinate
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->tracking_point_coordinate), &(rhs->tracking_point_coordinate)))
  {
    return false;
  }
  // tracking_point_coordinate_sigma
  if (!ibeo_msgs__msg__Point2Dui__are_equal(
      &(lhs->tracking_point_coordinate_sigma), &(rhs->tracking_point_coordinate_sigma)))
  {
    return false;
  }
  // number_of_contour_points
  if (lhs->number_of_contour_points != rhs->number_of_contour_points) {
    return false;
  }
  // contour_point_list
  if (!ibeo_msgs__msg__ContourPointSigma__Sequence__are_equal(
      &(lhs->contour_point_list), &(rhs->contour_point_list)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__UntrackedProperties__copy(
  const ibeo_msgs__msg__UntrackedProperties * input,
  ibeo_msgs__msg__UntrackedProperties * output)
{
  if (!input || !output) {
    return false;
  }
  // relative_time_of_measurement
  output->relative_time_of_measurement = input->relative_time_of_measurement;
  // position_closest_point
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->position_closest_point), &(output->position_closest_point)))
  {
    return false;
  }
  // object_box_size
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->object_box_size), &(output->object_box_size)))
  {
    return false;
  }
  // object_box_size_sigma
  if (!ibeo_msgs__msg__Point2Dui__copy(
      &(input->object_box_size_sigma), &(output->object_box_size_sigma)))
  {
    return false;
  }
  // object_box_orientation
  output->object_box_orientation = input->object_box_orientation;
  // object_box_orientation_sigma
  output->object_box_orientation_sigma = input->object_box_orientation_sigma;
  // tracking_point_coordinate
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->tracking_point_coordinate), &(output->tracking_point_coordinate)))
  {
    return false;
  }
  // tracking_point_coordinate_sigma
  if (!ibeo_msgs__msg__Point2Dui__copy(
      &(input->tracking_point_coordinate_sigma), &(output->tracking_point_coordinate_sigma)))
  {
    return false;
  }
  // number_of_contour_points
  output->number_of_contour_points = input->number_of_contour_points;
  // contour_point_list
  if (!ibeo_msgs__msg__ContourPointSigma__Sequence__copy(
      &(input->contour_point_list), &(output->contour_point_list)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__UntrackedProperties *
ibeo_msgs__msg__UntrackedProperties__create()
{
  ibeo_msgs__msg__UntrackedProperties * msg = (ibeo_msgs__msg__UntrackedProperties *)malloc(sizeof(ibeo_msgs__msg__UntrackedProperties));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__UntrackedProperties));
  bool success = ibeo_msgs__msg__UntrackedProperties__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__UntrackedProperties__destroy(ibeo_msgs__msg__UntrackedProperties * msg)
{
  if (msg) {
    ibeo_msgs__msg__UntrackedProperties__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__UntrackedProperties__Sequence__init(ibeo_msgs__msg__UntrackedProperties__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__UntrackedProperties * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__UntrackedProperties *)calloc(size, sizeof(ibeo_msgs__msg__UntrackedProperties));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__UntrackedProperties__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__UntrackedProperties__fini(&data[i - 1]);
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
ibeo_msgs__msg__UntrackedProperties__Sequence__fini(ibeo_msgs__msg__UntrackedProperties__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__UntrackedProperties__fini(&array->data[i]);
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

ibeo_msgs__msg__UntrackedProperties__Sequence *
ibeo_msgs__msg__UntrackedProperties__Sequence__create(size_t size)
{
  ibeo_msgs__msg__UntrackedProperties__Sequence * array = (ibeo_msgs__msg__UntrackedProperties__Sequence *)malloc(sizeof(ibeo_msgs__msg__UntrackedProperties__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__UntrackedProperties__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__UntrackedProperties__Sequence__destroy(ibeo_msgs__msg__UntrackedProperties__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__UntrackedProperties__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__UntrackedProperties__Sequence__are_equal(const ibeo_msgs__msg__UntrackedProperties__Sequence * lhs, const ibeo_msgs__msg__UntrackedProperties__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__UntrackedProperties__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__UntrackedProperties__Sequence__copy(
  const ibeo_msgs__msg__UntrackedProperties__Sequence * input,
  ibeo_msgs__msg__UntrackedProperties__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__UntrackedProperties);
    ibeo_msgs__msg__UntrackedProperties * data =
      (ibeo_msgs__msg__UntrackedProperties *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__UntrackedProperties__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__UntrackedProperties__fini(&data[i]);
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
    if (!ibeo_msgs__msg__UntrackedProperties__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
