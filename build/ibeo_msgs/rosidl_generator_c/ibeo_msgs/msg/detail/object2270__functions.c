// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/Object2270.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object2270__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `contour_point_list`
#include "ibeo_msgs/msg/detail/point2_di__functions.h"

bool
ibeo_msgs__msg__Object2270__init(ibeo_msgs__msg__Object2270 * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // age
  // prediction_age
  // relative_moment_of_measurement
  // reference_point_location
  // reference_point_position_x
  // reference_point_position_y
  // reference_point_position_sigma_x
  // reference_point_position_sigma_y
  // contour_points_cog_x
  // contour_points_cog_y
  // object_box_length
  // object_box_width
  // object_box_orientation_angle
  // object_box_orientation_angle_sigma
  // absolute_velocity_x
  // absolute_velocity_y
  // absolute_velocity_sigma_x
  // absolute_velocity_sigma_y
  // relative_velocity_x
  // relative_velocity_y
  // relative_velocity_sigma_x
  // relative_velocity_sigma_y
  // classification
  // tracking_model
  // mobile_detected
  // track_valid
  // classification_age
  // classification_confidence
  // number_of_contour_points
  // contour_point_list
  if (!ibeo_msgs__msg__Point2Di__Sequence__init(&msg->contour_point_list, 0)) {
    ibeo_msgs__msg__Object2270__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__Object2270__fini(ibeo_msgs__msg__Object2270 * msg)
{
  if (!msg) {
    return;
  }
  // id
  // age
  // prediction_age
  // relative_moment_of_measurement
  // reference_point_location
  // reference_point_position_x
  // reference_point_position_y
  // reference_point_position_sigma_x
  // reference_point_position_sigma_y
  // contour_points_cog_x
  // contour_points_cog_y
  // object_box_length
  // object_box_width
  // object_box_orientation_angle
  // object_box_orientation_angle_sigma
  // absolute_velocity_x
  // absolute_velocity_y
  // absolute_velocity_sigma_x
  // absolute_velocity_sigma_y
  // relative_velocity_x
  // relative_velocity_y
  // relative_velocity_sigma_x
  // relative_velocity_sigma_y
  // classification
  // tracking_model
  // mobile_detected
  // track_valid
  // classification_age
  // classification_confidence
  // number_of_contour_points
  // contour_point_list
  ibeo_msgs__msg__Point2Di__Sequence__fini(&msg->contour_point_list);
}

bool
ibeo_msgs__msg__Object2270__are_equal(const ibeo_msgs__msg__Object2270 * lhs, const ibeo_msgs__msg__Object2270 * rhs)
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
  // relative_moment_of_measurement
  if (lhs->relative_moment_of_measurement != rhs->relative_moment_of_measurement) {
    return false;
  }
  // reference_point_location
  if (lhs->reference_point_location != rhs->reference_point_location) {
    return false;
  }
  // reference_point_position_x
  if (lhs->reference_point_position_x != rhs->reference_point_position_x) {
    return false;
  }
  // reference_point_position_y
  if (lhs->reference_point_position_y != rhs->reference_point_position_y) {
    return false;
  }
  // reference_point_position_sigma_x
  if (lhs->reference_point_position_sigma_x != rhs->reference_point_position_sigma_x) {
    return false;
  }
  // reference_point_position_sigma_y
  if (lhs->reference_point_position_sigma_y != rhs->reference_point_position_sigma_y) {
    return false;
  }
  // contour_points_cog_x
  if (lhs->contour_points_cog_x != rhs->contour_points_cog_x) {
    return false;
  }
  // contour_points_cog_y
  if (lhs->contour_points_cog_y != rhs->contour_points_cog_y) {
    return false;
  }
  // object_box_length
  if (lhs->object_box_length != rhs->object_box_length) {
    return false;
  }
  // object_box_width
  if (lhs->object_box_width != rhs->object_box_width) {
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
  // absolute_velocity_x
  if (lhs->absolute_velocity_x != rhs->absolute_velocity_x) {
    return false;
  }
  // absolute_velocity_y
  if (lhs->absolute_velocity_y != rhs->absolute_velocity_y) {
    return false;
  }
  // absolute_velocity_sigma_x
  if (lhs->absolute_velocity_sigma_x != rhs->absolute_velocity_sigma_x) {
    return false;
  }
  // absolute_velocity_sigma_y
  if (lhs->absolute_velocity_sigma_y != rhs->absolute_velocity_sigma_y) {
    return false;
  }
  // relative_velocity_x
  if (lhs->relative_velocity_x != rhs->relative_velocity_x) {
    return false;
  }
  // relative_velocity_y
  if (lhs->relative_velocity_y != rhs->relative_velocity_y) {
    return false;
  }
  // relative_velocity_sigma_x
  if (lhs->relative_velocity_sigma_x != rhs->relative_velocity_sigma_x) {
    return false;
  }
  // relative_velocity_sigma_y
  if (lhs->relative_velocity_sigma_y != rhs->relative_velocity_sigma_y) {
    return false;
  }
  // classification
  if (lhs->classification != rhs->classification) {
    return false;
  }
  // tracking_model
  if (lhs->tracking_model != rhs->tracking_model) {
    return false;
  }
  // mobile_detected
  if (lhs->mobile_detected != rhs->mobile_detected) {
    return false;
  }
  // track_valid
  if (lhs->track_valid != rhs->track_valid) {
    return false;
  }
  // classification_age
  if (lhs->classification_age != rhs->classification_age) {
    return false;
  }
  // classification_confidence
  if (lhs->classification_confidence != rhs->classification_confidence) {
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
ibeo_msgs__msg__Object2270__copy(
  const ibeo_msgs__msg__Object2270 * input,
  ibeo_msgs__msg__Object2270 * output)
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
  // relative_moment_of_measurement
  output->relative_moment_of_measurement = input->relative_moment_of_measurement;
  // reference_point_location
  output->reference_point_location = input->reference_point_location;
  // reference_point_position_x
  output->reference_point_position_x = input->reference_point_position_x;
  // reference_point_position_y
  output->reference_point_position_y = input->reference_point_position_y;
  // reference_point_position_sigma_x
  output->reference_point_position_sigma_x = input->reference_point_position_sigma_x;
  // reference_point_position_sigma_y
  output->reference_point_position_sigma_y = input->reference_point_position_sigma_y;
  // contour_points_cog_x
  output->contour_points_cog_x = input->contour_points_cog_x;
  // contour_points_cog_y
  output->contour_points_cog_y = input->contour_points_cog_y;
  // object_box_length
  output->object_box_length = input->object_box_length;
  // object_box_width
  output->object_box_width = input->object_box_width;
  // object_box_orientation_angle
  output->object_box_orientation_angle = input->object_box_orientation_angle;
  // object_box_orientation_angle_sigma
  output->object_box_orientation_angle_sigma = input->object_box_orientation_angle_sigma;
  // absolute_velocity_x
  output->absolute_velocity_x = input->absolute_velocity_x;
  // absolute_velocity_y
  output->absolute_velocity_y = input->absolute_velocity_y;
  // absolute_velocity_sigma_x
  output->absolute_velocity_sigma_x = input->absolute_velocity_sigma_x;
  // absolute_velocity_sigma_y
  output->absolute_velocity_sigma_y = input->absolute_velocity_sigma_y;
  // relative_velocity_x
  output->relative_velocity_x = input->relative_velocity_x;
  // relative_velocity_y
  output->relative_velocity_y = input->relative_velocity_y;
  // relative_velocity_sigma_x
  output->relative_velocity_sigma_x = input->relative_velocity_sigma_x;
  // relative_velocity_sigma_y
  output->relative_velocity_sigma_y = input->relative_velocity_sigma_y;
  // classification
  output->classification = input->classification;
  // tracking_model
  output->tracking_model = input->tracking_model;
  // mobile_detected
  output->mobile_detected = input->mobile_detected;
  // track_valid
  output->track_valid = input->track_valid;
  // classification_age
  output->classification_age = input->classification_age;
  // classification_confidence
  output->classification_confidence = input->classification_confidence;
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

ibeo_msgs__msg__Object2270 *
ibeo_msgs__msg__Object2270__create()
{
  ibeo_msgs__msg__Object2270 * msg = (ibeo_msgs__msg__Object2270 *)malloc(sizeof(ibeo_msgs__msg__Object2270));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__Object2270));
  bool success = ibeo_msgs__msg__Object2270__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__Object2270__destroy(ibeo_msgs__msg__Object2270 * msg)
{
  if (msg) {
    ibeo_msgs__msg__Object2270__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__Object2270__Sequence__init(ibeo_msgs__msg__Object2270__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__Object2270 * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__Object2270 *)calloc(size, sizeof(ibeo_msgs__msg__Object2270));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__Object2270__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__Object2270__fini(&data[i - 1]);
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
ibeo_msgs__msg__Object2270__Sequence__fini(ibeo_msgs__msg__Object2270__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__Object2270__fini(&array->data[i]);
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

ibeo_msgs__msg__Object2270__Sequence *
ibeo_msgs__msg__Object2270__Sequence__create(size_t size)
{
  ibeo_msgs__msg__Object2270__Sequence * array = (ibeo_msgs__msg__Object2270__Sequence *)malloc(sizeof(ibeo_msgs__msg__Object2270__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__Object2270__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__Object2270__Sequence__destroy(ibeo_msgs__msg__Object2270__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__Object2270__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__Object2270__Sequence__are_equal(const ibeo_msgs__msg__Object2270__Sequence * lhs, const ibeo_msgs__msg__Object2270__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__Object2270__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__Object2270__Sequence__copy(
  const ibeo_msgs__msg__Object2270__Sequence * input,
  ibeo_msgs__msg__Object2270__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__Object2270);
    ibeo_msgs__msg__Object2270 * data =
      (ibeo_msgs__msg__Object2270 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__Object2270__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__Object2270__fini(&data[i]);
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
    if (!ibeo_msgs__msg__Object2270__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
