// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobileye_560_660_msgs:msg/AhbcGradual.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/ahbc_gradual__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mobileye_560_660_msgs__msg__AhbcGradual__init(mobileye_560_660_msgs__msg__AhbcGradual * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobileye_560_660_msgs__msg__AhbcGradual__fini(msg);
    return false;
  }
  // boundary_domain_bottom_non_glare_hlb
  // boundary_domain_non_glare_left_hand_hlb
  // boundary_domain_non_glare_right_hand_hlb
  // object_distance_hlb
  // status_boundary_domain_bottom_non_glare_hlb
  // status_boundary_domain_non_glare_left_hand_hlb
  // status_boundary_domain_non_glare_right_hand_hlb
  // status_object_distance_hlb
  // left_target_change
  // right_target_change
  // too_many_cars
  // busy_scene
  return true;
}

void
mobileye_560_660_msgs__msg__AhbcGradual__fini(mobileye_560_660_msgs__msg__AhbcGradual * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // boundary_domain_bottom_non_glare_hlb
  // boundary_domain_non_glare_left_hand_hlb
  // boundary_domain_non_glare_right_hand_hlb
  // object_distance_hlb
  // status_boundary_domain_bottom_non_glare_hlb
  // status_boundary_domain_non_glare_left_hand_hlb
  // status_boundary_domain_non_glare_right_hand_hlb
  // status_object_distance_hlb
  // left_target_change
  // right_target_change
  // too_many_cars
  // busy_scene
}

bool
mobileye_560_660_msgs__msg__AhbcGradual__are_equal(const mobileye_560_660_msgs__msg__AhbcGradual * lhs, const mobileye_560_660_msgs__msg__AhbcGradual * rhs)
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
  // boundary_domain_bottom_non_glare_hlb
  if (lhs->boundary_domain_bottom_non_glare_hlb != rhs->boundary_domain_bottom_non_glare_hlb) {
    return false;
  }
  // boundary_domain_non_glare_left_hand_hlb
  if (lhs->boundary_domain_non_glare_left_hand_hlb != rhs->boundary_domain_non_glare_left_hand_hlb) {
    return false;
  }
  // boundary_domain_non_glare_right_hand_hlb
  if (lhs->boundary_domain_non_glare_right_hand_hlb != rhs->boundary_domain_non_glare_right_hand_hlb) {
    return false;
  }
  // object_distance_hlb
  if (lhs->object_distance_hlb != rhs->object_distance_hlb) {
    return false;
  }
  // status_boundary_domain_bottom_non_glare_hlb
  if (lhs->status_boundary_domain_bottom_non_glare_hlb != rhs->status_boundary_domain_bottom_non_glare_hlb) {
    return false;
  }
  // status_boundary_domain_non_glare_left_hand_hlb
  if (lhs->status_boundary_domain_non_glare_left_hand_hlb != rhs->status_boundary_domain_non_glare_left_hand_hlb) {
    return false;
  }
  // status_boundary_domain_non_glare_right_hand_hlb
  if (lhs->status_boundary_domain_non_glare_right_hand_hlb != rhs->status_boundary_domain_non_glare_right_hand_hlb) {
    return false;
  }
  // status_object_distance_hlb
  if (lhs->status_object_distance_hlb != rhs->status_object_distance_hlb) {
    return false;
  }
  // left_target_change
  if (lhs->left_target_change != rhs->left_target_change) {
    return false;
  }
  // right_target_change
  if (lhs->right_target_change != rhs->right_target_change) {
    return false;
  }
  // too_many_cars
  if (lhs->too_many_cars != rhs->too_many_cars) {
    return false;
  }
  // busy_scene
  if (lhs->busy_scene != rhs->busy_scene) {
    return false;
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__AhbcGradual__copy(
  const mobileye_560_660_msgs__msg__AhbcGradual * input,
  mobileye_560_660_msgs__msg__AhbcGradual * output)
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
  // boundary_domain_bottom_non_glare_hlb
  output->boundary_domain_bottom_non_glare_hlb = input->boundary_domain_bottom_non_glare_hlb;
  // boundary_domain_non_glare_left_hand_hlb
  output->boundary_domain_non_glare_left_hand_hlb = input->boundary_domain_non_glare_left_hand_hlb;
  // boundary_domain_non_glare_right_hand_hlb
  output->boundary_domain_non_glare_right_hand_hlb = input->boundary_domain_non_glare_right_hand_hlb;
  // object_distance_hlb
  output->object_distance_hlb = input->object_distance_hlb;
  // status_boundary_domain_bottom_non_glare_hlb
  output->status_boundary_domain_bottom_non_glare_hlb = input->status_boundary_domain_bottom_non_glare_hlb;
  // status_boundary_domain_non_glare_left_hand_hlb
  output->status_boundary_domain_non_glare_left_hand_hlb = input->status_boundary_domain_non_glare_left_hand_hlb;
  // status_boundary_domain_non_glare_right_hand_hlb
  output->status_boundary_domain_non_glare_right_hand_hlb = input->status_boundary_domain_non_glare_right_hand_hlb;
  // status_object_distance_hlb
  output->status_object_distance_hlb = input->status_object_distance_hlb;
  // left_target_change
  output->left_target_change = input->left_target_change;
  // right_target_change
  output->right_target_change = input->right_target_change;
  // too_many_cars
  output->too_many_cars = input->too_many_cars;
  // busy_scene
  output->busy_scene = input->busy_scene;
  return true;
}

mobileye_560_660_msgs__msg__AhbcGradual *
mobileye_560_660_msgs__msg__AhbcGradual__create()
{
  mobileye_560_660_msgs__msg__AhbcGradual * msg = (mobileye_560_660_msgs__msg__AhbcGradual *)malloc(sizeof(mobileye_560_660_msgs__msg__AhbcGradual));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobileye_560_660_msgs__msg__AhbcGradual));
  bool success = mobileye_560_660_msgs__msg__AhbcGradual__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mobileye_560_660_msgs__msg__AhbcGradual__destroy(mobileye_560_660_msgs__msg__AhbcGradual * msg)
{
  if (msg) {
    mobileye_560_660_msgs__msg__AhbcGradual__fini(msg);
  }
  free(msg);
}


bool
mobileye_560_660_msgs__msg__AhbcGradual__Sequence__init(mobileye_560_660_msgs__msg__AhbcGradual__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mobileye_560_660_msgs__msg__AhbcGradual * data = NULL;
  if (size) {
    data = (mobileye_560_660_msgs__msg__AhbcGradual *)calloc(size, sizeof(mobileye_560_660_msgs__msg__AhbcGradual));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobileye_560_660_msgs__msg__AhbcGradual__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobileye_560_660_msgs__msg__AhbcGradual__fini(&data[i - 1]);
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
mobileye_560_660_msgs__msg__AhbcGradual__Sequence__fini(mobileye_560_660_msgs__msg__AhbcGradual__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mobileye_560_660_msgs__msg__AhbcGradual__fini(&array->data[i]);
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

mobileye_560_660_msgs__msg__AhbcGradual__Sequence *
mobileye_560_660_msgs__msg__AhbcGradual__Sequence__create(size_t size)
{
  mobileye_560_660_msgs__msg__AhbcGradual__Sequence * array = (mobileye_560_660_msgs__msg__AhbcGradual__Sequence *)malloc(sizeof(mobileye_560_660_msgs__msg__AhbcGradual__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mobileye_560_660_msgs__msg__AhbcGradual__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mobileye_560_660_msgs__msg__AhbcGradual__Sequence__destroy(mobileye_560_660_msgs__msg__AhbcGradual__Sequence * array)
{
  if (array) {
    mobileye_560_660_msgs__msg__AhbcGradual__Sequence__fini(array);
  }
  free(array);
}

bool
mobileye_560_660_msgs__msg__AhbcGradual__Sequence__are_equal(const mobileye_560_660_msgs__msg__AhbcGradual__Sequence * lhs, const mobileye_560_660_msgs__msg__AhbcGradual__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobileye_560_660_msgs__msg__AhbcGradual__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__AhbcGradual__Sequence__copy(
  const mobileye_560_660_msgs__msg__AhbcGradual__Sequence * input,
  mobileye_560_660_msgs__msg__AhbcGradual__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobileye_560_660_msgs__msg__AhbcGradual);
    mobileye_560_660_msgs__msg__AhbcGradual * data =
      (mobileye_560_660_msgs__msg__AhbcGradual *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobileye_560_660_msgs__msg__AhbcGradual__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mobileye_560_660_msgs__msg__AhbcGradual__fini(&data[i]);
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
    if (!mobileye_560_660_msgs__msg__AhbcGradual__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
