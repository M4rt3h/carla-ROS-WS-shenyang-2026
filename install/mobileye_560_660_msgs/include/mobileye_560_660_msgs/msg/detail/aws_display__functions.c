// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobileye_560_660_msgs:msg/AwsDisplay.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/aws_display__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mobileye_560_660_msgs__msg__AwsDisplay__init(mobileye_560_660_msgs__msg__AwsDisplay * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobileye_560_660_msgs__msg__AwsDisplay__fini(msg);
    return false;
  }
  // suppress_sound
  // night_time
  // dusk_time
  // sound_type
  // headway_valid
  // headway_measurement
  // lanes_on
  // left_ldw_on
  // right_ldw_on
  // fcw_on
  // left_crossing
  // right_crossing
  // maintenance
  // failsafe
  // ped_fcw
  // ped_in_dz
  // headway_warning_level
  return true;
}

void
mobileye_560_660_msgs__msg__AwsDisplay__fini(mobileye_560_660_msgs__msg__AwsDisplay * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // suppress_sound
  // night_time
  // dusk_time
  // sound_type
  // headway_valid
  // headway_measurement
  // lanes_on
  // left_ldw_on
  // right_ldw_on
  // fcw_on
  // left_crossing
  // right_crossing
  // maintenance
  // failsafe
  // ped_fcw
  // ped_in_dz
  // headway_warning_level
}

bool
mobileye_560_660_msgs__msg__AwsDisplay__are_equal(const mobileye_560_660_msgs__msg__AwsDisplay * lhs, const mobileye_560_660_msgs__msg__AwsDisplay * rhs)
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
  // suppress_sound
  if (lhs->suppress_sound != rhs->suppress_sound) {
    return false;
  }
  // night_time
  if (lhs->night_time != rhs->night_time) {
    return false;
  }
  // dusk_time
  if (lhs->dusk_time != rhs->dusk_time) {
    return false;
  }
  // sound_type
  if (lhs->sound_type != rhs->sound_type) {
    return false;
  }
  // headway_valid
  if (lhs->headway_valid != rhs->headway_valid) {
    return false;
  }
  // headway_measurement
  if (lhs->headway_measurement != rhs->headway_measurement) {
    return false;
  }
  // lanes_on
  if (lhs->lanes_on != rhs->lanes_on) {
    return false;
  }
  // left_ldw_on
  if (lhs->left_ldw_on != rhs->left_ldw_on) {
    return false;
  }
  // right_ldw_on
  if (lhs->right_ldw_on != rhs->right_ldw_on) {
    return false;
  }
  // fcw_on
  if (lhs->fcw_on != rhs->fcw_on) {
    return false;
  }
  // left_crossing
  if (lhs->left_crossing != rhs->left_crossing) {
    return false;
  }
  // right_crossing
  if (lhs->right_crossing != rhs->right_crossing) {
    return false;
  }
  // maintenance
  if (lhs->maintenance != rhs->maintenance) {
    return false;
  }
  // failsafe
  if (lhs->failsafe != rhs->failsafe) {
    return false;
  }
  // ped_fcw
  if (lhs->ped_fcw != rhs->ped_fcw) {
    return false;
  }
  // ped_in_dz
  if (lhs->ped_in_dz != rhs->ped_in_dz) {
    return false;
  }
  // headway_warning_level
  if (lhs->headway_warning_level != rhs->headway_warning_level) {
    return false;
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__AwsDisplay__copy(
  const mobileye_560_660_msgs__msg__AwsDisplay * input,
  mobileye_560_660_msgs__msg__AwsDisplay * output)
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
  // suppress_sound
  output->suppress_sound = input->suppress_sound;
  // night_time
  output->night_time = input->night_time;
  // dusk_time
  output->dusk_time = input->dusk_time;
  // sound_type
  output->sound_type = input->sound_type;
  // headway_valid
  output->headway_valid = input->headway_valid;
  // headway_measurement
  output->headway_measurement = input->headway_measurement;
  // lanes_on
  output->lanes_on = input->lanes_on;
  // left_ldw_on
  output->left_ldw_on = input->left_ldw_on;
  // right_ldw_on
  output->right_ldw_on = input->right_ldw_on;
  // fcw_on
  output->fcw_on = input->fcw_on;
  // left_crossing
  output->left_crossing = input->left_crossing;
  // right_crossing
  output->right_crossing = input->right_crossing;
  // maintenance
  output->maintenance = input->maintenance;
  // failsafe
  output->failsafe = input->failsafe;
  // ped_fcw
  output->ped_fcw = input->ped_fcw;
  // ped_in_dz
  output->ped_in_dz = input->ped_in_dz;
  // headway_warning_level
  output->headway_warning_level = input->headway_warning_level;
  return true;
}

mobileye_560_660_msgs__msg__AwsDisplay *
mobileye_560_660_msgs__msg__AwsDisplay__create()
{
  mobileye_560_660_msgs__msg__AwsDisplay * msg = (mobileye_560_660_msgs__msg__AwsDisplay *)malloc(sizeof(mobileye_560_660_msgs__msg__AwsDisplay));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobileye_560_660_msgs__msg__AwsDisplay));
  bool success = mobileye_560_660_msgs__msg__AwsDisplay__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mobileye_560_660_msgs__msg__AwsDisplay__destroy(mobileye_560_660_msgs__msg__AwsDisplay * msg)
{
  if (msg) {
    mobileye_560_660_msgs__msg__AwsDisplay__fini(msg);
  }
  free(msg);
}


bool
mobileye_560_660_msgs__msg__AwsDisplay__Sequence__init(mobileye_560_660_msgs__msg__AwsDisplay__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mobileye_560_660_msgs__msg__AwsDisplay * data = NULL;
  if (size) {
    data = (mobileye_560_660_msgs__msg__AwsDisplay *)calloc(size, sizeof(mobileye_560_660_msgs__msg__AwsDisplay));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobileye_560_660_msgs__msg__AwsDisplay__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobileye_560_660_msgs__msg__AwsDisplay__fini(&data[i - 1]);
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
mobileye_560_660_msgs__msg__AwsDisplay__Sequence__fini(mobileye_560_660_msgs__msg__AwsDisplay__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mobileye_560_660_msgs__msg__AwsDisplay__fini(&array->data[i]);
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

mobileye_560_660_msgs__msg__AwsDisplay__Sequence *
mobileye_560_660_msgs__msg__AwsDisplay__Sequence__create(size_t size)
{
  mobileye_560_660_msgs__msg__AwsDisplay__Sequence * array = (mobileye_560_660_msgs__msg__AwsDisplay__Sequence *)malloc(sizeof(mobileye_560_660_msgs__msg__AwsDisplay__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mobileye_560_660_msgs__msg__AwsDisplay__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mobileye_560_660_msgs__msg__AwsDisplay__Sequence__destroy(mobileye_560_660_msgs__msg__AwsDisplay__Sequence * array)
{
  if (array) {
    mobileye_560_660_msgs__msg__AwsDisplay__Sequence__fini(array);
  }
  free(array);
}

bool
mobileye_560_660_msgs__msg__AwsDisplay__Sequence__are_equal(const mobileye_560_660_msgs__msg__AwsDisplay__Sequence * lhs, const mobileye_560_660_msgs__msg__AwsDisplay__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobileye_560_660_msgs__msg__AwsDisplay__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__AwsDisplay__Sequence__copy(
  const mobileye_560_660_msgs__msg__AwsDisplay__Sequence * input,
  mobileye_560_660_msgs__msg__AwsDisplay__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobileye_560_660_msgs__msg__AwsDisplay);
    mobileye_560_660_msgs__msg__AwsDisplay * data =
      (mobileye_560_660_msgs__msg__AwsDisplay *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobileye_560_660_msgs__msg__AwsDisplay__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mobileye_560_660_msgs__msg__AwsDisplay__fini(&data[i]);
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
    if (!mobileye_560_660_msgs__msg__AwsDisplay__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
