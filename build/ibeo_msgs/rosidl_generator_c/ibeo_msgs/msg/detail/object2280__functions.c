// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/Object2280.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object2280__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `object_box_center`
// Member `object_box_center_sigma`
// Member `object_box_size`
// Member `relative_velocity`
// Member `relative_velocity_sigma`
// Member `absolute_velocity`
// Member `absolute_velocity_sigma`
// Member `reference_point_coordinate`
// Member `reference_point_coordinate_sigma`
// Member `contour_point_list`
#include "ibeo_msgs/msg/detail/point2_df__functions.h"

bool
ibeo_msgs__msg__Object2280__init(ibeo_msgs__msg__Object2280 * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // tracking_model
  // mobility_of_dyn_object_detected
  // motion_model_validated
  // object_age
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    ibeo_msgs__msg__Object2280__fini(msg);
    return false;
  }
  // object_prediction_age
  // classification
  // classification_certainty
  // classification_age
  // object_box_center
  if (!ibeo_msgs__msg__Point2Df__init(&msg->object_box_center)) {
    ibeo_msgs__msg__Object2280__fini(msg);
    return false;
  }
  // object_box_center_sigma
  if (!ibeo_msgs__msg__Point2Df__init(&msg->object_box_center_sigma)) {
    ibeo_msgs__msg__Object2280__fini(msg);
    return false;
  }
  // object_box_size
  if (!ibeo_msgs__msg__Point2Df__init(&msg->object_box_size)) {
    ibeo_msgs__msg__Object2280__fini(msg);
    return false;
  }
  // object_box_orientation_angle
  // object_box_orientation_angle_sigma
  // relative_velocity
  if (!ibeo_msgs__msg__Point2Df__init(&msg->relative_velocity)) {
    ibeo_msgs__msg__Object2280__fini(msg);
    return false;
  }
  // relative_velocity_sigma
  if (!ibeo_msgs__msg__Point2Df__init(&msg->relative_velocity_sigma)) {
    ibeo_msgs__msg__Object2280__fini(msg);
    return false;
  }
  // absolute_velocity
  if (!ibeo_msgs__msg__Point2Df__init(&msg->absolute_velocity)) {
    ibeo_msgs__msg__Object2280__fini(msg);
    return false;
  }
  // absolute_velocity_sigma
  if (!ibeo_msgs__msg__Point2Df__init(&msg->absolute_velocity_sigma)) {
    ibeo_msgs__msg__Object2280__fini(msg);
    return false;
  }
  // number_of_contour_points
  // closest_point_index
  // reference_point_location
  // reference_point_coordinate
  if (!ibeo_msgs__msg__Point2Df__init(&msg->reference_point_coordinate)) {
    ibeo_msgs__msg__Object2280__fini(msg);
    return false;
  }
  // reference_point_coordinate_sigma
  if (!ibeo_msgs__msg__Point2Df__init(&msg->reference_point_coordinate_sigma)) {
    ibeo_msgs__msg__Object2280__fini(msg);
    return false;
  }
  // reference_point_position_correction_coefficient
  // object_priority
  // object_existence_measurement
  // contour_point_list
  if (!ibeo_msgs__msg__Point2Df__Sequence__init(&msg->contour_point_list, 0)) {
    ibeo_msgs__msg__Object2280__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__Object2280__fini(ibeo_msgs__msg__Object2280 * msg)
{
  if (!msg) {
    return;
  }
  // id
  // tracking_model
  // mobility_of_dyn_object_detected
  // motion_model_validated
  // object_age
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // object_prediction_age
  // classification
  // classification_certainty
  // classification_age
  // object_box_center
  ibeo_msgs__msg__Point2Df__fini(&msg->object_box_center);
  // object_box_center_sigma
  ibeo_msgs__msg__Point2Df__fini(&msg->object_box_center_sigma);
  // object_box_size
  ibeo_msgs__msg__Point2Df__fini(&msg->object_box_size);
  // object_box_orientation_angle
  // object_box_orientation_angle_sigma
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
  // reference_point_location
  // reference_point_coordinate
  ibeo_msgs__msg__Point2Df__fini(&msg->reference_point_coordinate);
  // reference_point_coordinate_sigma
  ibeo_msgs__msg__Point2Df__fini(&msg->reference_point_coordinate_sigma);
  // reference_point_position_correction_coefficient
  // object_priority
  // object_existence_measurement
  // contour_point_list
  ibeo_msgs__msg__Point2Df__Sequence__fini(&msg->contour_point_list);
}

bool
ibeo_msgs__msg__Object2280__are_equal(const ibeo_msgs__msg__Object2280 * lhs, const ibeo_msgs__msg__Object2280 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // tracking_model
  if (lhs->tracking_model != rhs->tracking_model) {
    return false;
  }
  // mobility_of_dyn_object_detected
  if (lhs->mobility_of_dyn_object_detected != rhs->mobility_of_dyn_object_detected) {
    return false;
  }
  // motion_model_validated
  if (lhs->motion_model_validated != rhs->motion_model_validated) {
    return false;
  }
  // object_age
  if (lhs->object_age != rhs->object_age) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // object_prediction_age
  if (lhs->object_prediction_age != rhs->object_prediction_age) {
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
  // object_box_orientation_angle
  if (lhs->object_box_orientation_angle != rhs->object_box_orientation_angle) {
    return false;
  }
  // object_box_orientation_angle_sigma
  if (lhs->object_box_orientation_angle_sigma != rhs->object_box_orientation_angle_sigma) {
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
  // reference_point_location
  if (lhs->reference_point_location != rhs->reference_point_location) {
    return false;
  }
  // reference_point_coordinate
  if (!ibeo_msgs__msg__Point2Df__are_equal(
      &(lhs->reference_point_coordinate), &(rhs->reference_point_coordinate)))
  {
    return false;
  }
  // reference_point_coordinate_sigma
  if (!ibeo_msgs__msg__Point2Df__are_equal(
      &(lhs->reference_point_coordinate_sigma), &(rhs->reference_point_coordinate_sigma)))
  {
    return false;
  }
  // reference_point_position_correction_coefficient
  if (lhs->reference_point_position_correction_coefficient != rhs->reference_point_position_correction_coefficient) {
    return false;
  }
  // object_priority
  if (lhs->object_priority != rhs->object_priority) {
    return false;
  }
  // object_existence_measurement
  if (lhs->object_existence_measurement != rhs->object_existence_measurement) {
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
ibeo_msgs__msg__Object2280__copy(
  const ibeo_msgs__msg__Object2280 * input,
  ibeo_msgs__msg__Object2280 * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // tracking_model
  output->tracking_model = input->tracking_model;
  // mobility_of_dyn_object_detected
  output->mobility_of_dyn_object_detected = input->mobility_of_dyn_object_detected;
  // motion_model_validated
  output->motion_model_validated = input->motion_model_validated;
  // object_age
  output->object_age = input->object_age;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // object_prediction_age
  output->object_prediction_age = input->object_prediction_age;
  // classification
  output->classification = input->classification;
  // classification_certainty
  output->classification_certainty = input->classification_certainty;
  // classification_age
  output->classification_age = input->classification_age;
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
  // object_box_orientation_angle
  output->object_box_orientation_angle = input->object_box_orientation_angle;
  // object_box_orientation_angle_sigma
  output->object_box_orientation_angle_sigma = input->object_box_orientation_angle_sigma;
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
  // reference_point_location
  output->reference_point_location = input->reference_point_location;
  // reference_point_coordinate
  if (!ibeo_msgs__msg__Point2Df__copy(
      &(input->reference_point_coordinate), &(output->reference_point_coordinate)))
  {
    return false;
  }
  // reference_point_coordinate_sigma
  if (!ibeo_msgs__msg__Point2Df__copy(
      &(input->reference_point_coordinate_sigma), &(output->reference_point_coordinate_sigma)))
  {
    return false;
  }
  // reference_point_position_correction_coefficient
  output->reference_point_position_correction_coefficient = input->reference_point_position_correction_coefficient;
  // object_priority
  output->object_priority = input->object_priority;
  // object_existence_measurement
  output->object_existence_measurement = input->object_existence_measurement;
  // contour_point_list
  if (!ibeo_msgs__msg__Point2Df__Sequence__copy(
      &(input->contour_point_list), &(output->contour_point_list)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__Object2280 *
ibeo_msgs__msg__Object2280__create()
{
  ibeo_msgs__msg__Object2280 * msg = (ibeo_msgs__msg__Object2280 *)malloc(sizeof(ibeo_msgs__msg__Object2280));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__Object2280));
  bool success = ibeo_msgs__msg__Object2280__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__Object2280__destroy(ibeo_msgs__msg__Object2280 * msg)
{
  if (msg) {
    ibeo_msgs__msg__Object2280__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__Object2280__Sequence__init(ibeo_msgs__msg__Object2280__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__Object2280 * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__Object2280 *)calloc(size, sizeof(ibeo_msgs__msg__Object2280));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__Object2280__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__Object2280__fini(&data[i - 1]);
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
ibeo_msgs__msg__Object2280__Sequence__fini(ibeo_msgs__msg__Object2280__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__Object2280__fini(&array->data[i]);
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

ibeo_msgs__msg__Object2280__Sequence *
ibeo_msgs__msg__Object2280__Sequence__create(size_t size)
{
  ibeo_msgs__msg__Object2280__Sequence * array = (ibeo_msgs__msg__Object2280__Sequence *)malloc(sizeof(ibeo_msgs__msg__Object2280__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__Object2280__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__Object2280__Sequence__destroy(ibeo_msgs__msg__Object2280__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__Object2280__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__Object2280__Sequence__are_equal(const ibeo_msgs__msg__Object2280__Sequence * lhs, const ibeo_msgs__msg__Object2280__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__Object2280__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__Object2280__Sequence__copy(
  const ibeo_msgs__msg__Object2280__Sequence * input,
  ibeo_msgs__msg__Object2280__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__Object2280);
    ibeo_msgs__msg__Object2280 * data =
      (ibeo_msgs__msg__Object2280 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__Object2280__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__Object2280__fini(&data[i]);
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
    if (!ibeo_msgs__msg__Object2280__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
