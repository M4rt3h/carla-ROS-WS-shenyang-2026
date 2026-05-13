// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/TrackedProperties.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/tracked_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `position_closest_point`
// Member `relative_velocity`
// Member `object_box_size`
// Member `tracking_point_coordinate`
// Member `velocity`
// Member `acceleration`
#include "ibeo_msgs/msg/detail/point2_di__functions.h"
// Member `relative_velocity_sigma`
// Member `object_box_size_sigma`
// Member `tracking_point_coordinate_sigma`
// Member `velocity_sigma`
// Member `acceleration_sigma`
#include "ibeo_msgs/msg/detail/point2_dui__functions.h"
// Member `contour_point_list`
#include "ibeo_msgs/msg/detail/contour_point_sigma__functions.h"

bool
ibeo_msgs__msg__TrackedProperties__init(ibeo_msgs__msg__TrackedProperties * msg)
{
  if (!msg) {
    return false;
  }
  // object_age
  // hidden_status_age
  // object_phase
  // dynamic_property
  // relative_time_of_measure
  // position_closest_point
  if (!ibeo_msgs__msg__Point2Di__init(&msg->position_closest_point)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  // relative_velocity
  if (!ibeo_msgs__msg__Point2Di__init(&msg->relative_velocity)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  // relative_velocity_sigma
  if (!ibeo_msgs__msg__Point2Dui__init(&msg->relative_velocity_sigma)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  // classification
  // classification_age
  // object_box_size
  if (!ibeo_msgs__msg__Point2Di__init(&msg->object_box_size)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  // object_box_size_sigma
  if (!ibeo_msgs__msg__Point2Dui__init(&msg->object_box_size_sigma)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  // object_box_orientation
  // object_box_orientation_sigma
  // tracking_point_location
  // tracking_point_coordinate
  if (!ibeo_msgs__msg__Point2Di__init(&msg->tracking_point_coordinate)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  // tracking_point_coordinate_sigma
  if (!ibeo_msgs__msg__Point2Dui__init(&msg->tracking_point_coordinate_sigma)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  // velocity
  if (!ibeo_msgs__msg__Point2Di__init(&msg->velocity)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  // velocity_sigma
  if (!ibeo_msgs__msg__Point2Dui__init(&msg->velocity_sigma)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  // acceleration
  if (!ibeo_msgs__msg__Point2Di__init(&msg->acceleration)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  // acceleration_sigma
  if (!ibeo_msgs__msg__Point2Dui__init(&msg->acceleration_sigma)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  // yaw_rate
  // yaw_rate_sigma
  // number_of_contour_points
  // contour_point_list
  if (!ibeo_msgs__msg__ContourPointSigma__Sequence__init(&msg->contour_point_list, 0)) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__TrackedProperties__fini(ibeo_msgs__msg__TrackedProperties * msg)
{
  if (!msg) {
    return;
  }
  // object_age
  // hidden_status_age
  // object_phase
  // dynamic_property
  // relative_time_of_measure
  // position_closest_point
  ibeo_msgs__msg__Point2Di__fini(&msg->position_closest_point);
  // relative_velocity
  ibeo_msgs__msg__Point2Di__fini(&msg->relative_velocity);
  // relative_velocity_sigma
  ibeo_msgs__msg__Point2Dui__fini(&msg->relative_velocity_sigma);
  // classification
  // classification_age
  // object_box_size
  ibeo_msgs__msg__Point2Di__fini(&msg->object_box_size);
  // object_box_size_sigma
  ibeo_msgs__msg__Point2Dui__fini(&msg->object_box_size_sigma);
  // object_box_orientation
  // object_box_orientation_sigma
  // tracking_point_location
  // tracking_point_coordinate
  ibeo_msgs__msg__Point2Di__fini(&msg->tracking_point_coordinate);
  // tracking_point_coordinate_sigma
  ibeo_msgs__msg__Point2Dui__fini(&msg->tracking_point_coordinate_sigma);
  // velocity
  ibeo_msgs__msg__Point2Di__fini(&msg->velocity);
  // velocity_sigma
  ibeo_msgs__msg__Point2Dui__fini(&msg->velocity_sigma);
  // acceleration
  ibeo_msgs__msg__Point2Di__fini(&msg->acceleration);
  // acceleration_sigma
  ibeo_msgs__msg__Point2Dui__fini(&msg->acceleration_sigma);
  // yaw_rate
  // yaw_rate_sigma
  // number_of_contour_points
  // contour_point_list
  ibeo_msgs__msg__ContourPointSigma__Sequence__fini(&msg->contour_point_list);
}

bool
ibeo_msgs__msg__TrackedProperties__are_equal(const ibeo_msgs__msg__TrackedProperties * lhs, const ibeo_msgs__msg__TrackedProperties * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_age
  if (lhs->object_age != rhs->object_age) {
    return false;
  }
  // hidden_status_age
  if (lhs->hidden_status_age != rhs->hidden_status_age) {
    return false;
  }
  // object_phase
  if (lhs->object_phase != rhs->object_phase) {
    return false;
  }
  // dynamic_property
  if (lhs->dynamic_property != rhs->dynamic_property) {
    return false;
  }
  // relative_time_of_measure
  if (lhs->relative_time_of_measure != rhs->relative_time_of_measure) {
    return false;
  }
  // position_closest_point
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->position_closest_point), &(rhs->position_closest_point)))
  {
    return false;
  }
  // relative_velocity
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->relative_velocity), &(rhs->relative_velocity)))
  {
    return false;
  }
  // relative_velocity_sigma
  if (!ibeo_msgs__msg__Point2Dui__are_equal(
      &(lhs->relative_velocity_sigma), &(rhs->relative_velocity_sigma)))
  {
    return false;
  }
  // classification
  if (lhs->classification != rhs->classification) {
    return false;
  }
  // classification_age
  if (lhs->classification_age != rhs->classification_age) {
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
  // tracking_point_location
  if (lhs->tracking_point_location != rhs->tracking_point_location) {
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
  // velocity
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // velocity_sigma
  if (!ibeo_msgs__msg__Point2Dui__are_equal(
      &(lhs->velocity_sigma), &(rhs->velocity_sigma)))
  {
    return false;
  }
  // acceleration
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->acceleration), &(rhs->acceleration)))
  {
    return false;
  }
  // acceleration_sigma
  if (!ibeo_msgs__msg__Point2Dui__are_equal(
      &(lhs->acceleration_sigma), &(rhs->acceleration_sigma)))
  {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // yaw_rate_sigma
  if (lhs->yaw_rate_sigma != rhs->yaw_rate_sigma) {
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
ibeo_msgs__msg__TrackedProperties__copy(
  const ibeo_msgs__msg__TrackedProperties * input,
  ibeo_msgs__msg__TrackedProperties * output)
{
  if (!input || !output) {
    return false;
  }
  // object_age
  output->object_age = input->object_age;
  // hidden_status_age
  output->hidden_status_age = input->hidden_status_age;
  // object_phase
  output->object_phase = input->object_phase;
  // dynamic_property
  output->dynamic_property = input->dynamic_property;
  // relative_time_of_measure
  output->relative_time_of_measure = input->relative_time_of_measure;
  // position_closest_point
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->position_closest_point), &(output->position_closest_point)))
  {
    return false;
  }
  // relative_velocity
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->relative_velocity), &(output->relative_velocity)))
  {
    return false;
  }
  // relative_velocity_sigma
  if (!ibeo_msgs__msg__Point2Dui__copy(
      &(input->relative_velocity_sigma), &(output->relative_velocity_sigma)))
  {
    return false;
  }
  // classification
  output->classification = input->classification;
  // classification_age
  output->classification_age = input->classification_age;
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
  // tracking_point_location
  output->tracking_point_location = input->tracking_point_location;
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
  // velocity
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // velocity_sigma
  if (!ibeo_msgs__msg__Point2Dui__copy(
      &(input->velocity_sigma), &(output->velocity_sigma)))
  {
    return false;
  }
  // acceleration
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->acceleration), &(output->acceleration)))
  {
    return false;
  }
  // acceleration_sigma
  if (!ibeo_msgs__msg__Point2Dui__copy(
      &(input->acceleration_sigma), &(output->acceleration_sigma)))
  {
    return false;
  }
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // yaw_rate_sigma
  output->yaw_rate_sigma = input->yaw_rate_sigma;
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

ibeo_msgs__msg__TrackedProperties *
ibeo_msgs__msg__TrackedProperties__create()
{
  ibeo_msgs__msg__TrackedProperties * msg = (ibeo_msgs__msg__TrackedProperties *)malloc(sizeof(ibeo_msgs__msg__TrackedProperties));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__TrackedProperties));
  bool success = ibeo_msgs__msg__TrackedProperties__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__TrackedProperties__destroy(ibeo_msgs__msg__TrackedProperties * msg)
{
  if (msg) {
    ibeo_msgs__msg__TrackedProperties__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__TrackedProperties__Sequence__init(ibeo_msgs__msg__TrackedProperties__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__TrackedProperties * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__TrackedProperties *)calloc(size, sizeof(ibeo_msgs__msg__TrackedProperties));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__TrackedProperties__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__TrackedProperties__fini(&data[i - 1]);
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
ibeo_msgs__msg__TrackedProperties__Sequence__fini(ibeo_msgs__msg__TrackedProperties__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__TrackedProperties__fini(&array->data[i]);
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

ibeo_msgs__msg__TrackedProperties__Sequence *
ibeo_msgs__msg__TrackedProperties__Sequence__create(size_t size)
{
  ibeo_msgs__msg__TrackedProperties__Sequence * array = (ibeo_msgs__msg__TrackedProperties__Sequence *)malloc(sizeof(ibeo_msgs__msg__TrackedProperties__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__TrackedProperties__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__TrackedProperties__Sequence__destroy(ibeo_msgs__msg__TrackedProperties__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__TrackedProperties__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__TrackedProperties__Sequence__are_equal(const ibeo_msgs__msg__TrackedProperties__Sequence * lhs, const ibeo_msgs__msg__TrackedProperties__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__TrackedProperties__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__TrackedProperties__Sequence__copy(
  const ibeo_msgs__msg__TrackedProperties__Sequence * input,
  ibeo_msgs__msg__TrackedProperties__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__TrackedProperties);
    ibeo_msgs__msg__TrackedProperties * data =
      (ibeo_msgs__msg__TrackedProperties *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__TrackedProperties__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__TrackedProperties__fini(&data[i]);
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
    if (!ibeo_msgs__msg__TrackedProperties__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
