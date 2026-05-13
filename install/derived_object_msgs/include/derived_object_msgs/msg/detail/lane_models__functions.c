// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from derived_object_msgs:msg/LaneModels.idl
// generated code does not contain a copyright notice
#include "derived_object_msgs/msg/detail/lane_models__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `left_lane`
// Member `right_lane`
// Member `additional_lanes`
#include "derived_object_msgs/msg/detail/lane__functions.h"

bool
derived_object_msgs__msg__LaneModels__init(derived_object_msgs__msg__LaneModels * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    derived_object_msgs__msg__LaneModels__fini(msg);
    return false;
  }
  // left_lane
  if (!derived_object_msgs__msg__Lane__init(&msg->left_lane)) {
    derived_object_msgs__msg__LaneModels__fini(msg);
    return false;
  }
  // right_lane
  if (!derived_object_msgs__msg__Lane__init(&msg->right_lane)) {
    derived_object_msgs__msg__LaneModels__fini(msg);
    return false;
  }
  // additional_lanes
  if (!derived_object_msgs__msg__Lane__Sequence__init(&msg->additional_lanes, 0)) {
    derived_object_msgs__msg__LaneModels__fini(msg);
    return false;
  }
  return true;
}

void
derived_object_msgs__msg__LaneModels__fini(derived_object_msgs__msg__LaneModels * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // left_lane
  derived_object_msgs__msg__Lane__fini(&msg->left_lane);
  // right_lane
  derived_object_msgs__msg__Lane__fini(&msg->right_lane);
  // additional_lanes
  derived_object_msgs__msg__Lane__Sequence__fini(&msg->additional_lanes);
}

bool
derived_object_msgs__msg__LaneModels__are_equal(const derived_object_msgs__msg__LaneModels * lhs, const derived_object_msgs__msg__LaneModels * rhs)
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
  // left_lane
  if (!derived_object_msgs__msg__Lane__are_equal(
      &(lhs->left_lane), &(rhs->left_lane)))
  {
    return false;
  }
  // right_lane
  if (!derived_object_msgs__msg__Lane__are_equal(
      &(lhs->right_lane), &(rhs->right_lane)))
  {
    return false;
  }
  // additional_lanes
  if (!derived_object_msgs__msg__Lane__Sequence__are_equal(
      &(lhs->additional_lanes), &(rhs->additional_lanes)))
  {
    return false;
  }
  return true;
}

bool
derived_object_msgs__msg__LaneModels__copy(
  const derived_object_msgs__msg__LaneModels * input,
  derived_object_msgs__msg__LaneModels * output)
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
  // left_lane
  if (!derived_object_msgs__msg__Lane__copy(
      &(input->left_lane), &(output->left_lane)))
  {
    return false;
  }
  // right_lane
  if (!derived_object_msgs__msg__Lane__copy(
      &(input->right_lane), &(output->right_lane)))
  {
    return false;
  }
  // additional_lanes
  if (!derived_object_msgs__msg__Lane__Sequence__copy(
      &(input->additional_lanes), &(output->additional_lanes)))
  {
    return false;
  }
  return true;
}

derived_object_msgs__msg__LaneModels *
derived_object_msgs__msg__LaneModels__create()
{
  derived_object_msgs__msg__LaneModels * msg = (derived_object_msgs__msg__LaneModels *)malloc(sizeof(derived_object_msgs__msg__LaneModels));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(derived_object_msgs__msg__LaneModels));
  bool success = derived_object_msgs__msg__LaneModels__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
derived_object_msgs__msg__LaneModels__destroy(derived_object_msgs__msg__LaneModels * msg)
{
  if (msg) {
    derived_object_msgs__msg__LaneModels__fini(msg);
  }
  free(msg);
}


bool
derived_object_msgs__msg__LaneModels__Sequence__init(derived_object_msgs__msg__LaneModels__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  derived_object_msgs__msg__LaneModels * data = NULL;
  if (size) {
    data = (derived_object_msgs__msg__LaneModels *)calloc(size, sizeof(derived_object_msgs__msg__LaneModels));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = derived_object_msgs__msg__LaneModels__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        derived_object_msgs__msg__LaneModels__fini(&data[i - 1]);
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
derived_object_msgs__msg__LaneModels__Sequence__fini(derived_object_msgs__msg__LaneModels__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      derived_object_msgs__msg__LaneModels__fini(&array->data[i]);
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

derived_object_msgs__msg__LaneModels__Sequence *
derived_object_msgs__msg__LaneModels__Sequence__create(size_t size)
{
  derived_object_msgs__msg__LaneModels__Sequence * array = (derived_object_msgs__msg__LaneModels__Sequence *)malloc(sizeof(derived_object_msgs__msg__LaneModels__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = derived_object_msgs__msg__LaneModels__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
derived_object_msgs__msg__LaneModels__Sequence__destroy(derived_object_msgs__msg__LaneModels__Sequence * array)
{
  if (array) {
    derived_object_msgs__msg__LaneModels__Sequence__fini(array);
  }
  free(array);
}

bool
derived_object_msgs__msg__LaneModels__Sequence__are_equal(const derived_object_msgs__msg__LaneModels__Sequence * lhs, const derived_object_msgs__msg__LaneModels__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!derived_object_msgs__msg__LaneModels__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
derived_object_msgs__msg__LaneModels__Sequence__copy(
  const derived_object_msgs__msg__LaneModels__Sequence * input,
  derived_object_msgs__msg__LaneModels__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(derived_object_msgs__msg__LaneModels);
    derived_object_msgs__msg__LaneModels * data =
      (derived_object_msgs__msg__LaneModels *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!derived_object_msgs__msg__LaneModels__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          derived_object_msgs__msg__LaneModels__fini(&data[i]);
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
    if (!derived_object_msgs__msg__LaneModels__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
