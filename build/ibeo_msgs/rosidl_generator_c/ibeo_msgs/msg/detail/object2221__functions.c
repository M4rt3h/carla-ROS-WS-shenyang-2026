// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/Object2221.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object2221__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `reference_point`
// Member `reference_point_sigma`
// Member `closest_point`
// Member `bounding_box_center`
// Member `object_box_center`
// Member `absolute_velocity`
// Member `relative_velocity`
// Member `contour_point_list`
#include "ibeo_msgs/msg/detail/point2_di__functions.h"
// Member `object_box_size`
// Member `absolute_velocity_sigma`
#include "ibeo_msgs/msg/detail/size2_d__functions.h"

bool
ibeo_msgs__msg__Object2221__init(ibeo_msgs__msg__Object2221 * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // age
  // prediction_age
  // relative_timestamp
  // reference_point
  if (!ibeo_msgs__msg__Point2Di__init(&msg->reference_point)) {
    ibeo_msgs__msg__Object2221__fini(msg);
    return false;
  }
  // reference_point_sigma
  if (!ibeo_msgs__msg__Point2Di__init(&msg->reference_point_sigma)) {
    ibeo_msgs__msg__Object2221__fini(msg);
    return false;
  }
  // closest_point
  if (!ibeo_msgs__msg__Point2Di__init(&msg->closest_point)) {
    ibeo_msgs__msg__Object2221__fini(msg);
    return false;
  }
  // bounding_box_center
  if (!ibeo_msgs__msg__Point2Di__init(&msg->bounding_box_center)) {
    ibeo_msgs__msg__Object2221__fini(msg);
    return false;
  }
  // bounding_box_width
  // bounding_box_length
  // object_box_center
  if (!ibeo_msgs__msg__Point2Di__init(&msg->object_box_center)) {
    ibeo_msgs__msg__Object2221__fini(msg);
    return false;
  }
  // object_box_size
  if (!ibeo_msgs__msg__Size2D__init(&msg->object_box_size)) {
    ibeo_msgs__msg__Object2221__fini(msg);
    return false;
  }
  // object_box_orientation
  // absolute_velocity
  if (!ibeo_msgs__msg__Point2Di__init(&msg->absolute_velocity)) {
    ibeo_msgs__msg__Object2221__fini(msg);
    return false;
  }
  // absolute_velocity_sigma
  if (!ibeo_msgs__msg__Size2D__init(&msg->absolute_velocity_sigma)) {
    ibeo_msgs__msg__Object2221__fini(msg);
    return false;
  }
  // relative_velocity
  if (!ibeo_msgs__msg__Point2Di__init(&msg->relative_velocity)) {
    ibeo_msgs__msg__Object2221__fini(msg);
    return false;
  }
  // classification
  // classification_age
  // classification_certainty
  // number_of_contour_points
  // contour_point_list
  if (!ibeo_msgs__msg__Point2Di__Sequence__init(&msg->contour_point_list, 0)) {
    ibeo_msgs__msg__Object2221__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__Object2221__fini(ibeo_msgs__msg__Object2221 * msg)
{
  if (!msg) {
    return;
  }
  // id
  // age
  // prediction_age
  // relative_timestamp
  // reference_point
  ibeo_msgs__msg__Point2Di__fini(&msg->reference_point);
  // reference_point_sigma
  ibeo_msgs__msg__Point2Di__fini(&msg->reference_point_sigma);
  // closest_point
  ibeo_msgs__msg__Point2Di__fini(&msg->closest_point);
  // bounding_box_center
  ibeo_msgs__msg__Point2Di__fini(&msg->bounding_box_center);
  // bounding_box_width
  // bounding_box_length
  // object_box_center
  ibeo_msgs__msg__Point2Di__fini(&msg->object_box_center);
  // object_box_size
  ibeo_msgs__msg__Size2D__fini(&msg->object_box_size);
  // object_box_orientation
  // absolute_velocity
  ibeo_msgs__msg__Point2Di__fini(&msg->absolute_velocity);
  // absolute_velocity_sigma
  ibeo_msgs__msg__Size2D__fini(&msg->absolute_velocity_sigma);
  // relative_velocity
  ibeo_msgs__msg__Point2Di__fini(&msg->relative_velocity);
  // classification
  // classification_age
  // classification_certainty
  // number_of_contour_points
  // contour_point_list
  ibeo_msgs__msg__Point2Di__Sequence__fini(&msg->contour_point_list);
}

bool
ibeo_msgs__msg__Object2221__are_equal(const ibeo_msgs__msg__Object2221 * lhs, const ibeo_msgs__msg__Object2221 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // age
  if (lhs->age != rhs->age) {
    return false;
  }
  // prediction_age
  if (lhs->prediction_age != rhs->prediction_age) {
    return false;
  }
  // relative_timestamp
  if (lhs->relative_timestamp != rhs->relative_timestamp) {
    return false;
  }
  // reference_point
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->reference_point), &(rhs->reference_point)))
  {
    return false;
  }
  // reference_point_sigma
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->reference_point_sigma), &(rhs->reference_point_sigma)))
  {
    return false;
  }
  // closest_point
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->closest_point), &(rhs->closest_point)))
  {
    return false;
  }
  // bounding_box_center
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->bounding_box_center), &(rhs->bounding_box_center)))
  {
    return false;
  }
  // bounding_box_width
  if (lhs->bounding_box_width != rhs->bounding_box_width) {
    return false;
  }
  // bounding_box_length
  if (lhs->bounding_box_length != rhs->bounding_box_length) {
    return false;
  }
  // object_box_center
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->object_box_center), &(rhs->object_box_center)))
  {
    return false;
  }
  // object_box_size
  if (!ibeo_msgs__msg__Size2D__are_equal(
      &(lhs->object_box_size), &(rhs->object_box_size)))
  {
    return false;
  }
  // object_box_orientation
  if (lhs->object_box_orientation != rhs->object_box_orientation) {
    return false;
  }
  // absolute_velocity
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->absolute_velocity), &(rhs->absolute_velocity)))
  {
    return false;
  }
  // absolute_velocity_sigma
  if (!ibeo_msgs__msg__Size2D__are_equal(
      &(lhs->absolute_velocity_sigma), &(rhs->absolute_velocity_sigma)))
  {
    return false;
  }
  // relative_velocity
  if (!ibeo_msgs__msg__Point2Di__are_equal(
      &(lhs->relative_velocity), &(rhs->relative_velocity)))
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
  // classification_certainty
  if (lhs->classification_certainty != rhs->classification_certainty) {
    return false;
  }
  // number_of_contour_points
  if (lhs->number_of_contour_points != rhs->number_of_contour_points) {
    return false;
  }
  // contour_point_list
  if (!ibeo_msgs__msg__Point2Di__Sequence__are_equal(
      &(lhs->contour_point_list), &(rhs->contour_point_list)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__Object2221__copy(
  const ibeo_msgs__msg__Object2221 * input,
  ibeo_msgs__msg__Object2221 * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // age
  output->age = input->age;
  // prediction_age
  output->prediction_age = input->prediction_age;
  // relative_timestamp
  output->relative_timestamp = input->relative_timestamp;
  // reference_point
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->reference_point), &(output->reference_point)))
  {
    return false;
  }
  // reference_point_sigma
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->reference_point_sigma), &(output->reference_point_sigma)))
  {
    return false;
  }
  // closest_point
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->closest_point), &(output->closest_point)))
  {
    return false;
  }
  // bounding_box_center
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->bounding_box_center), &(output->bounding_box_center)))
  {
    return false;
  }
  // bounding_box_width
  output->bounding_box_width = input->bounding_box_width;
  // bounding_box_length
  output->bounding_box_length = input->bounding_box_length;
  // object_box_center
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->object_box_center), &(output->object_box_center)))
  {
    return false;
  }
  // object_box_size
  if (!ibeo_msgs__msg__Size2D__copy(
      &(input->object_box_size), &(output->object_box_size)))
  {
    return false;
  }
  // object_box_orientation
  output->object_box_orientation = input->object_box_orientation;
  // absolute_velocity
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->absolute_velocity), &(output->absolute_velocity)))
  {
    return false;
  }
  // absolute_velocity_sigma
  if (!ibeo_msgs__msg__Size2D__copy(
      &(input->absolute_velocity_sigma), &(output->absolute_velocity_sigma)))
  {
    return false;
  }
  // relative_velocity
  if (!ibeo_msgs__msg__Point2Di__copy(
      &(input->relative_velocity), &(output->relative_velocity)))
  {
    return false;
  }
  // classification
  output->classification = input->classification;
  // classification_age
  output->classification_age = input->classification_age;
  // classification_certainty
  output->classification_certainty = input->classification_certainty;
  // number_of_contour_points
  output->number_of_contour_points = input->number_of_contour_points;
  // contour_point_list
  if (!ibeo_msgs__msg__Point2Di__Sequence__copy(
      &(input->contour_point_list), &(output->contour_point_list)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__Object2221 *
ibeo_msgs__msg__Object2221__create()
{
  ibeo_msgs__msg__Object2221 * msg = (ibeo_msgs__msg__Object2221 *)malloc(sizeof(ibeo_msgs__msg__Object2221));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__Object2221));
  bool success = ibeo_msgs__msg__Object2221__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__Object2221__destroy(ibeo_msgs__msg__Object2221 * msg)
{
  if (msg) {
    ibeo_msgs__msg__Object2221__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__Object2221__Sequence__init(ibeo_msgs__msg__Object2221__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__Object2221 * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__Object2221 *)calloc(size, sizeof(ibeo_msgs__msg__Object2221));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__Object2221__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__Object2221__fini(&data[i - 1]);
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
ibeo_msgs__msg__Object2221__Sequence__fini(ibeo_msgs__msg__Object2221__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__Object2221__fini(&array->data[i]);
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

ibeo_msgs__msg__Object2221__Sequence *
ibeo_msgs__msg__Object2221__Sequence__create(size_t size)
{
  ibeo_msgs__msg__Object2221__Sequence * array = (ibeo_msgs__msg__Object2221__Sequence *)malloc(sizeof(ibeo_msgs__msg__Object2221__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__Object2221__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__Object2221__Sequence__destroy(ibeo_msgs__msg__Object2221__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__Object2221__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__Object2221__Sequence__are_equal(const ibeo_msgs__msg__Object2221__Sequence * lhs, const ibeo_msgs__msg__Object2221__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__Object2221__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__Object2221__Sequence__copy(
  const ibeo_msgs__msg__Object2221__Sequence * input,
  ibeo_msgs__msg__Object2221__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__Object2221);
    ibeo_msgs__msg__Object2221 * data =
      (ibeo_msgs__msg__Object2221 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__Object2221__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__Object2221__fini(&data[i]);
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
    if (!ibeo_msgs__msg__Object2221__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
