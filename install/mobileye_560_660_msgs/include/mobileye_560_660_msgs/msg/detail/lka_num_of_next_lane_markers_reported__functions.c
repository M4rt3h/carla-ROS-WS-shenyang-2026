// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobileye_560_660_msgs:msg/LkaNumOfNextLaneMarkersReported.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/lka_num_of_next_lane_markers_reported__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__init(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__fini(msg);
    return false;
  }
  // num_of_next_lane_markers_reported
  return true;
}

void
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__fini(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // num_of_next_lane_markers_reported
}

bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__are_equal(const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * lhs, const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * rhs)
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
  // num_of_next_lane_markers_reported
  if (lhs->num_of_next_lane_markers_reported != rhs->num_of_next_lane_markers_reported) {
    return false;
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__copy(
  const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * input,
  mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * output)
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
  // num_of_next_lane_markers_reported
  output->num_of_next_lane_markers_reported = input->num_of_next_lane_markers_reported;
  return true;
}

mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported *
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__create()
{
  mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * msg = (mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported *)malloc(sizeof(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported));
  bool success = mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__destroy(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * msg)
{
  if (msg) {
    mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__fini(msg);
  }
  free(msg);
}


bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__init(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * data = NULL;
  if (size) {
    data = (mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported *)calloc(size, sizeof(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__fini(&data[i - 1]);
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
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__fini(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__fini(&array->data[i]);
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

mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence *
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__create(size_t size)
{
  mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * array = (mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence *)malloc(sizeof(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__destroy(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * array)
{
  if (array) {
    mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__fini(array);
  }
  free(array);
}

bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__are_equal(const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * lhs, const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__copy(
  const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * input,
  mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported);
    mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * data =
      (mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__fini(&data[i]);
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
    if (!mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
