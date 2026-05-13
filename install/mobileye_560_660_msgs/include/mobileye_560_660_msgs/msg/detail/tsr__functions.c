// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobileye_560_660_msgs:msg/Tsr.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/tsr__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mobileye_560_660_msgs__msg__Tsr__init(mobileye_560_660_msgs__msg__Tsr * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobileye_560_660_msgs__msg__Tsr__fini(msg);
    return false;
  }
  // vision_only_sign_type
  // vision_only_supplementary_sign_type
  // sign_position_x
  // sign_position_y
  // sign_position_z
  // filter_type
  return true;
}

void
mobileye_560_660_msgs__msg__Tsr__fini(mobileye_560_660_msgs__msg__Tsr * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vision_only_sign_type
  // vision_only_supplementary_sign_type
  // sign_position_x
  // sign_position_y
  // sign_position_z
  // filter_type
}

bool
mobileye_560_660_msgs__msg__Tsr__are_equal(const mobileye_560_660_msgs__msg__Tsr * lhs, const mobileye_560_660_msgs__msg__Tsr * rhs)
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
  // vision_only_sign_type
  if (lhs->vision_only_sign_type != rhs->vision_only_sign_type) {
    return false;
  }
  // vision_only_supplementary_sign_type
  if (lhs->vision_only_supplementary_sign_type != rhs->vision_only_supplementary_sign_type) {
    return false;
  }
  // sign_position_x
  if (lhs->sign_position_x != rhs->sign_position_x) {
    return false;
  }
  // sign_position_y
  if (lhs->sign_position_y != rhs->sign_position_y) {
    return false;
  }
  // sign_position_z
  if (lhs->sign_position_z != rhs->sign_position_z) {
    return false;
  }
  // filter_type
  if (lhs->filter_type != rhs->filter_type) {
    return false;
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__Tsr__copy(
  const mobileye_560_660_msgs__msg__Tsr * input,
  mobileye_560_660_msgs__msg__Tsr * output)
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
  // vision_only_sign_type
  output->vision_only_sign_type = input->vision_only_sign_type;
  // vision_only_supplementary_sign_type
  output->vision_only_supplementary_sign_type = input->vision_only_supplementary_sign_type;
  // sign_position_x
  output->sign_position_x = input->sign_position_x;
  // sign_position_y
  output->sign_position_y = input->sign_position_y;
  // sign_position_z
  output->sign_position_z = input->sign_position_z;
  // filter_type
  output->filter_type = input->filter_type;
  return true;
}

mobileye_560_660_msgs__msg__Tsr *
mobileye_560_660_msgs__msg__Tsr__create()
{
  mobileye_560_660_msgs__msg__Tsr * msg = (mobileye_560_660_msgs__msg__Tsr *)malloc(sizeof(mobileye_560_660_msgs__msg__Tsr));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobileye_560_660_msgs__msg__Tsr));
  bool success = mobileye_560_660_msgs__msg__Tsr__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mobileye_560_660_msgs__msg__Tsr__destroy(mobileye_560_660_msgs__msg__Tsr * msg)
{
  if (msg) {
    mobileye_560_660_msgs__msg__Tsr__fini(msg);
  }
  free(msg);
}


bool
mobileye_560_660_msgs__msg__Tsr__Sequence__init(mobileye_560_660_msgs__msg__Tsr__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mobileye_560_660_msgs__msg__Tsr * data = NULL;
  if (size) {
    data = (mobileye_560_660_msgs__msg__Tsr *)calloc(size, sizeof(mobileye_560_660_msgs__msg__Tsr));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobileye_560_660_msgs__msg__Tsr__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobileye_560_660_msgs__msg__Tsr__fini(&data[i - 1]);
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
mobileye_560_660_msgs__msg__Tsr__Sequence__fini(mobileye_560_660_msgs__msg__Tsr__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mobileye_560_660_msgs__msg__Tsr__fini(&array->data[i]);
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

mobileye_560_660_msgs__msg__Tsr__Sequence *
mobileye_560_660_msgs__msg__Tsr__Sequence__create(size_t size)
{
  mobileye_560_660_msgs__msg__Tsr__Sequence * array = (mobileye_560_660_msgs__msg__Tsr__Sequence *)malloc(sizeof(mobileye_560_660_msgs__msg__Tsr__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mobileye_560_660_msgs__msg__Tsr__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mobileye_560_660_msgs__msg__Tsr__Sequence__destroy(mobileye_560_660_msgs__msg__Tsr__Sequence * array)
{
  if (array) {
    mobileye_560_660_msgs__msg__Tsr__Sequence__fini(array);
  }
  free(array);
}

bool
mobileye_560_660_msgs__msg__Tsr__Sequence__are_equal(const mobileye_560_660_msgs__msg__Tsr__Sequence * lhs, const mobileye_560_660_msgs__msg__Tsr__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobileye_560_660_msgs__msg__Tsr__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__Tsr__Sequence__copy(
  const mobileye_560_660_msgs__msg__Tsr__Sequence * input,
  mobileye_560_660_msgs__msg__Tsr__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobileye_560_660_msgs__msg__Tsr);
    mobileye_560_660_msgs__msg__Tsr * data =
      (mobileye_560_660_msgs__msg__Tsr *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobileye_560_660_msgs__msg__Tsr__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mobileye_560_660_msgs__msg__Tsr__fini(&data[i]);
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
    if (!mobileye_560_660_msgs__msg__Tsr__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
