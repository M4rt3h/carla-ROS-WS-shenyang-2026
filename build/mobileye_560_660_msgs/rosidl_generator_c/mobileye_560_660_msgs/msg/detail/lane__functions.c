// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobileye_560_660_msgs:msg/Lane.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mobileye_560_660_msgs__msg__Lane__init(mobileye_560_660_msgs__msg__Lane * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobileye_560_660_msgs__msg__Lane__fini(msg);
    return false;
  }
  // lane_curvature
  // lane_heading
  // construction_area
  // pitch_angle
  // yaw_angle
  // right_ldw_availability
  // left_ldw_availability
  return true;
}

void
mobileye_560_660_msgs__msg__Lane__fini(mobileye_560_660_msgs__msg__Lane * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // lane_curvature
  // lane_heading
  // construction_area
  // pitch_angle
  // yaw_angle
  // right_ldw_availability
  // left_ldw_availability
}

bool
mobileye_560_660_msgs__msg__Lane__are_equal(const mobileye_560_660_msgs__msg__Lane * lhs, const mobileye_560_660_msgs__msg__Lane * rhs)
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
  // lane_curvature
  if (lhs->lane_curvature != rhs->lane_curvature) {
    return false;
  }
  // lane_heading
  if (lhs->lane_heading != rhs->lane_heading) {
    return false;
  }
  // construction_area
  if (lhs->construction_area != rhs->construction_area) {
    return false;
  }
  // pitch_angle
  if (lhs->pitch_angle != rhs->pitch_angle) {
    return false;
  }
  // yaw_angle
  if (lhs->yaw_angle != rhs->yaw_angle) {
    return false;
  }
  // right_ldw_availability
  if (lhs->right_ldw_availability != rhs->right_ldw_availability) {
    return false;
  }
  // left_ldw_availability
  if (lhs->left_ldw_availability != rhs->left_ldw_availability) {
    return false;
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__Lane__copy(
  const mobileye_560_660_msgs__msg__Lane * input,
  mobileye_560_660_msgs__msg__Lane * output)
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
  // lane_curvature
  output->lane_curvature = input->lane_curvature;
  // lane_heading
  output->lane_heading = input->lane_heading;
  // construction_area
  output->construction_area = input->construction_area;
  // pitch_angle
  output->pitch_angle = input->pitch_angle;
  // yaw_angle
  output->yaw_angle = input->yaw_angle;
  // right_ldw_availability
  output->right_ldw_availability = input->right_ldw_availability;
  // left_ldw_availability
  output->left_ldw_availability = input->left_ldw_availability;
  return true;
}

mobileye_560_660_msgs__msg__Lane *
mobileye_560_660_msgs__msg__Lane__create()
{
  mobileye_560_660_msgs__msg__Lane * msg = (mobileye_560_660_msgs__msg__Lane *)malloc(sizeof(mobileye_560_660_msgs__msg__Lane));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobileye_560_660_msgs__msg__Lane));
  bool success = mobileye_560_660_msgs__msg__Lane__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mobileye_560_660_msgs__msg__Lane__destroy(mobileye_560_660_msgs__msg__Lane * msg)
{
  if (msg) {
    mobileye_560_660_msgs__msg__Lane__fini(msg);
  }
  free(msg);
}


bool
mobileye_560_660_msgs__msg__Lane__Sequence__init(mobileye_560_660_msgs__msg__Lane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mobileye_560_660_msgs__msg__Lane * data = NULL;
  if (size) {
    data = (mobileye_560_660_msgs__msg__Lane *)calloc(size, sizeof(mobileye_560_660_msgs__msg__Lane));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobileye_560_660_msgs__msg__Lane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobileye_560_660_msgs__msg__Lane__fini(&data[i - 1]);
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
mobileye_560_660_msgs__msg__Lane__Sequence__fini(mobileye_560_660_msgs__msg__Lane__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mobileye_560_660_msgs__msg__Lane__fini(&array->data[i]);
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

mobileye_560_660_msgs__msg__Lane__Sequence *
mobileye_560_660_msgs__msg__Lane__Sequence__create(size_t size)
{
  mobileye_560_660_msgs__msg__Lane__Sequence * array = (mobileye_560_660_msgs__msg__Lane__Sequence *)malloc(sizeof(mobileye_560_660_msgs__msg__Lane__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mobileye_560_660_msgs__msg__Lane__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mobileye_560_660_msgs__msg__Lane__Sequence__destroy(mobileye_560_660_msgs__msg__Lane__Sequence * array)
{
  if (array) {
    mobileye_560_660_msgs__msg__Lane__Sequence__fini(array);
  }
  free(array);
}

bool
mobileye_560_660_msgs__msg__Lane__Sequence__are_equal(const mobileye_560_660_msgs__msg__Lane__Sequence * lhs, const mobileye_560_660_msgs__msg__Lane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobileye_560_660_msgs__msg__Lane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__Lane__Sequence__copy(
  const mobileye_560_660_msgs__msg__Lane__Sequence * input,
  mobileye_560_660_msgs__msg__Lane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobileye_560_660_msgs__msg__Lane);
    mobileye_560_660_msgs__msg__Lane * data =
      (mobileye_560_660_msgs__msg__Lane *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobileye_560_660_msgs__msg__Lane__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mobileye_560_660_msgs__msg__Lane__fini(&data[i]);
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
    if (!mobileye_560_660_msgs__msg__Lane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
