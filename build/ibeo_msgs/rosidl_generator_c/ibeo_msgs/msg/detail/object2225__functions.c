// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/Object2225.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object2225__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `bounding_box_center`
// Member `bounding_box_size`
// Member `object_box_center`
// Member `object_box_center_sigma`
// Member `object_box_size`
// Member `relative_velocity`
// Member `relative_velocity_sigma`
// Member `absolute_velocity`
// Member `absolute_velocity_sigma`
// Member `contour_point_list`
#include "ibeo_msgs/msg/detail/point2_df__functions.h"

bool
ibeo_msgs__msg__Object2225__init(ibeo_msgs__msg__Object2225 * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // age
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    ibeo_msgs__msg__Object2225__fini(msg);
    return false;
  }
  // hidden_status_age
  // classification
  // classification_certainty
  // classification_age
  // bounding_box_center
  if (!ibeo_msgs__msg__Point2Df__init(&msg->bounding_box_center)) {
    ibeo_msgs__msg__Object2225__fini(msg);
    return false;
  }
  // bounding_box_size
  if (!ibeo_msgs__msg__Point2Df__init(&msg->bounding_box_size)) {
    ibeo_msgs__msg__Object2225__fini(msg);
    return false;
  }
  // object_box_center
  if (!ibeo_msgs__msg__Point2Df__init(&msg->object_box_center)) {
    ibeo_msgs__msg__Object2225__fini(msg);
    return false;
  }
  // object_box_center_sigma
  if (!ibeo_msgs__msg__Point2Df__init(&msg->object_box_center_sigma)) {
    ibeo_msgs__msg__Object2225__fini(msg);
    return false;
  }
  // object_box_size
  if (!ibeo_msgs__msg__Point2Df__init(&msg->object_box_size)) {
    ibeo_msgs__msg__Object2225__fini(msg);
    return false;
  }
  // yaw_angle
  // relative_velocity
  if (!ibeo_msgs__msg__Point2Df__init(&msg->relative_velocity)) {
    ibeo_msgs__msg__Object2225__fini(msg);
    return false;
  }
  // relative_velocity_sigma
  if (!ibeo_msgs__msg__Point2Df__init(&msg->relative_velocity_sigma)) {
    ibeo_msgs__msg__Object2225__fini(msg);
    return false;
  }
  // absolute_velocity
  if (!ibeo_msgs__msg__Point2Df__init(&msg->absolute_velocity)) {
    ibeo_msgs__msg__Object2225__fini(msg);
    return false;
  }
  // absolute_velocity_sigma
  if (!ibeo_msgs__msg__Point2Df__init(&msg->absolute_velocity_sigma)) {
    ibeo_msgs__msg__Object2225__fini(msg);
    return false;
  }
  // number_of_contour_points
  // closest_point_index
  // contour_point_list
  if (!ibeo_msgs__msg__Point2Df__Sequence__init(&msg->contour_point_list, 0)) {
    ibeo_msgs__msg__Object2225__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__Object2225__fini(ibeo_msgs__msg__Object2225 * msg)
{
  if (!msg) {
    return;
  }
  // id
  // age
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // hidden_status_age
  // classification
  // classification_certainty
  // classification_age
  // bounding_box_center
  ibeo_msgs__msg__Point2Df__fini(&msg->bounding_box_center);
  // bounding_box_size
  ibeo_msgs__msg__Point2Df__fini(&msg->bounding_box_size);
  // object_box_center
  ibeo_msgs__msg__Point2Df__fini(&msg->object_box_center);
  // object_box_center_sigma
  ibeo_msgs__msg__Point2Df__fini(&msg->object_box_center_sigma);
  // object_box_size
  ibeo_msgs__msg__Point2Df__fini(&msg->object_box_size);
  // yaw_angle
  // relative_velocity
  ibeo_msgs__msg__Point2Df__fini(&msg->relative_velocity);
  // relative_velocity_sigma
  ibeo_msgs__msg__Point2Df__fini(&msg->relative_velocity_sigma);
  // absolute_velocity
  ibeo_msgs__msg__Point2Df__fini(&msg->absolute_velocity);
  // absolute_velocity_sigma
  ibeo_msgs__msg__Point2Df__fini(&msg->absolute_velocity_sigma);
  // number_of_contour_points
  // closest_point_index
  // contour_point_list
  ibeo_msgs__msg__Point2Df__Sequence__fini(&msg->contour_point_list);
}

bool
ibeo_msgs__msg__Object2225__are_equal(const ibeo_msgs__msg__Object2225 * lhs, const ibeo_msgs__msg__Object2225 * rhs)
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
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // hidden_status_age
  if (lhs->hidden_status_age != rhs->hidden_status_age) {
    return false;
  }
  // classification
  if (lhs->classification != rhs->classification) {
    return false;
  }
  // classification_certainty
  if (lhs->classification_certainty != rhs->classification_certainty) {
    return false;
  }
  // classification_age
  if (lhs->classification_age != rhs->classification_age) {
    return false;
  }
  // bounding_box_center
  if (!ibeo_msgs__msg__Point2Df__are_equal(
      &(lhs->bounding_box_center), &(rhs->bounding_box_center)))
  {
    return false;
  }
  // bounding_box_size
  if (!ibeo_msgs__msg__Point2Df__are_equal(
      &(lhs->bounding_box_size), &(rhs->bounding_box_size)))
  {
    return false;
  }
  // object_box_center
  if (!ibeo_msgs__msg__Point2Df__are_equal(
      &(lhs->object_box_center), &(rhs->object_box_center)))
  {
    return false;
  }
  // object_box_center_sigma
  if (!ibeo_msgs__msg__Point2Df__are_equal(
      &(lhs->object_box_center_sigma), &(rhs->object_box_center_sigma)))
  {
    return false;
  }
  // object_box_size
  if (!ibeo_msgs__msg__Point2Df__are_equal(
      &(lhs->object_box_size), &(rhs->object_box_size)))
  {
    return false;
  }
  // yaw_angle
  if (lhs->yaw_angle != rhs->yaw_angle) {
    return false;
  }
  // relative_velocity
  if (!ibeo_msgs__msg__Point2Df__are_equal(
      &(lhs->relative_velocity), &(rhs->relative_velocity)))
  {
    return false;
  }
  // relative_velocity_sigma
  if (!ibeo_msgs__msg__Point2Df__are_equal(
      &(lhs->relative_velocity_sigma), &(rhs->relative_velocity_sigma)))
  {
    return false;
  }
  // absolute_velocity
  if (!ibeo_msgs__msg__Point2Df__are_equal(
      &(lhs->absolute_velocity), &(rhs->absolute_velocity)))
  {
    return false;
  }
  // absolute_velocity_sigma
  if (!ibeo_msgs__msg__Point2Df__are_equal(
      &(lhs->absolute_velocity_sigma), &(rhs->absolute_velocity_sigma)))
  {
    return false;
  }
  // number_of_contour_points
  if (lhs->number_of_contour_points != rhs->number_of_contour_points) {
    return false;
  }
  // closest_point_index
  if (lhs->closest_point_index != rhs->closest_point_index) {
    return false;
  }
  // contour_point_list
  if (!ibeo_msgs__msg__Point2Df__Sequence__are_equal(
      &(lhs->contour_point_list), &(rhs->contour_point_list)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__Object2225__copy(
  const ibeo_msgs__msg__Object2225 * input,
  ibeo_msgs__msg__Object2225 * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // age
  output->age = input->age;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // hidden_status_age
  output->hidden_status_age = input->hidden_status_age;
  // classification
  output->classification = input->classification;
  // classification_certainty
  output->classification_certainty = input->classification_certainty;
  // classification_age
  output->classification_age = input->classification_age;
  // bounding_box_center
  if (!ibeo_msgs__msg__Point2Df__copy(
      &(input->bounding_box_center), &(output->bounding_box_center)))
  {
    return false;
  }
  // bounding_box_size
  if (!ibeo_msgs__msg__Point2Df__copy(
      &(input->bounding_box_size), &(output->bounding_box_size)))
  {
    return false;
  }
  // object_box_center
  if (!ibeo_msgs__msg__Point2Df__copy(
      &(input->object_box_center), &(output->object_box_center)))
  {
    return false;
  }
  // object_box_center_sigma
  if (!ibeo_msgs__msg__Point2Df__copy(
      &(input->object_box_center_sigma), &(output->object_box_center_sigma)))
  {
    return false;
  }
  // object_box_size
  if (!ibeo_msgs__msg__Point2Df__copy(
      &(input->object_box_size), &(output->object_box_size)))
  {
    return false;
  }
  // yaw_angle
  output->yaw_angle = input->yaw_angle;
  // relative_velocity
  if (!ibeo_msgs__msg__Point2Df__copy(
      &(input->relative_velocity), &(output->relative_velocity)))
  {
    return false;
  }
  // relative_velocity_sigma
  if (!ibeo_msgs__msg__Point2Df__copy(
      &(input->relative_velocity_sigma), &(output->relative_velocity_sigma)))
  {
    return false;
  }
  // absolute_velocity
  if (!ibeo_msgs__msg__Point2Df__copy(
      &(input->absolute_velocity), &(output->absolute_velocity)))
  {
    return false;
  }
  // absolute_velocity_sigma
  if (!ibeo_msgs__msg__Point2Df__copy(
      &(input->absolute_velocity_sigma), &(output->absolute_velocity_sigma)))
  {
    return false;
  }
  // number_of_contour_points
  output->number_of_contour_points = input->number_of_contour_points;
  // closest_point_index
  output->closest_point_index = input->closest_point_index;
  // contour_point_list
  if (!ibeo_msgs__msg__Point2Df__Sequence__copy(
      &(input->contour_point_list), &(output->contour_point_list)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__Object2225 *
ibeo_msgs__msg__Object2225__create()
{
  ibeo_msgs__msg__Object2225 * msg = (ibeo_msgs__msg__Object2225 *)malloc(sizeof(ibeo_msgs__msg__Object2225));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__Object2225));
  bool success = ibeo_msgs__msg__Object2225__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__Object2225__destroy(ibeo_msgs__msg__Object2225 * msg)
{
  if (msg) {
    ibeo_msgs__msg__Object2225__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__Object2225__Sequence__init(ibeo_msgs__msg__Object2225__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__Object2225 * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__Object2225 *)calloc(size, sizeof(ibeo_msgs__msg__Object2225));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__Object2225__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__Object2225__fini(&data[i - 1]);
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
ibeo_msgs__msg__Object2225__Sequence__fini(ibeo_msgs__msg__Object2225__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__Object2225__fini(&array->data[i]);
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

ibeo_msgs__msg__Object2225__Sequence *
ibeo_msgs__msg__Object2225__Sequence__create(size_t size)
{
  ibeo_msgs__msg__Object2225__Sequence * array = (ibeo_msgs__msg__Object2225__Sequence *)malloc(sizeof(ibeo_msgs__msg__Object2225__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__Object2225__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__Object2225__Sequence__destroy(ibeo_msgs__msg__Object2225__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__Object2225__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__Object2225__Sequence__are_equal(const ibeo_msgs__msg__Object2225__Sequence * lhs, const ibeo_msgs__msg__Object2225__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__Object2225__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__Object2225__Sequence__copy(
  const ibeo_msgs__msg__Object2225__Sequence * input,
  ibeo_msgs__msg__Object2225__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__Object2225);
    ibeo_msgs__msg__Object2225 * data =
      (ibeo_msgs__msg__Object2225 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__Object2225__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__Object2225__fini(&data[i]);
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
    if (!ibeo_msgs__msg__Object2225__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
