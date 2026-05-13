// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobileye_560_660_msgs:msg/ObstacleStatus.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/obstacle_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mobileye_560_660_msgs__msg__ObstacleStatus__init(mobileye_560_660_msgs__msg__ObstacleStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobileye_560_660_msgs__msg__ObstacleStatus__fini(msg);
    return false;
  }
  // num_obstacles
  // timestamp
  // application_version
  // active_version_number_section
  // left_close_range_cut_in
  // right_close_range_cut_in
  // stop_go
  // protocol_version
  // close_car
  // failsafe
  return true;
}

void
mobileye_560_660_msgs__msg__ObstacleStatus__fini(mobileye_560_660_msgs__msg__ObstacleStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // num_obstacles
  // timestamp
  // application_version
  // active_version_number_section
  // left_close_range_cut_in
  // right_close_range_cut_in
  // stop_go
  // protocol_version
  // close_car
  // failsafe
}

bool
mobileye_560_660_msgs__msg__ObstacleStatus__are_equal(const mobileye_560_660_msgs__msg__ObstacleStatus * lhs, const mobileye_560_660_msgs__msg__ObstacleStatus * rhs)
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
  // num_obstacles
  if (lhs->num_obstacles != rhs->num_obstacles) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // application_version
  if (lhs->application_version != rhs->application_version) {
    return false;
  }
  // active_version_number_section
  if (lhs->active_version_number_section != rhs->active_version_number_section) {
    return false;
  }
  // left_close_range_cut_in
  if (lhs->left_close_range_cut_in != rhs->left_close_range_cut_in) {
    return false;
  }
  // right_close_range_cut_in
  if (lhs->right_close_range_cut_in != rhs->right_close_range_cut_in) {
    return false;
  }
  // stop_go
  if (lhs->stop_go != rhs->stop_go) {
    return false;
  }
  // protocol_version
  if (lhs->protocol_version != rhs->protocol_version) {
    return false;
  }
  // close_car
  if (lhs->close_car != rhs->close_car) {
    return false;
  }
  // failsafe
  if (lhs->failsafe != rhs->failsafe) {
    return false;
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__ObstacleStatus__copy(
  const mobileye_560_660_msgs__msg__ObstacleStatus * input,
  mobileye_560_660_msgs__msg__ObstacleStatus * output)
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
  // num_obstacles
  output->num_obstacles = input->num_obstacles;
  // timestamp
  output->timestamp = input->timestamp;
  // application_version
  output->application_version = input->application_version;
  // active_version_number_section
  output->active_version_number_section = input->active_version_number_section;
  // left_close_range_cut_in
  output->left_close_range_cut_in = input->left_close_range_cut_in;
  // right_close_range_cut_in
  output->right_close_range_cut_in = input->right_close_range_cut_in;
  // stop_go
  output->stop_go = input->stop_go;
  // protocol_version
  output->protocol_version = input->protocol_version;
  // close_car
  output->close_car = input->close_car;
  // failsafe
  output->failsafe = input->failsafe;
  return true;
}

mobileye_560_660_msgs__msg__ObstacleStatus *
mobileye_560_660_msgs__msg__ObstacleStatus__create()
{
  mobileye_560_660_msgs__msg__ObstacleStatus * msg = (mobileye_560_660_msgs__msg__ObstacleStatus *)malloc(sizeof(mobileye_560_660_msgs__msg__ObstacleStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobileye_560_660_msgs__msg__ObstacleStatus));
  bool success = mobileye_560_660_msgs__msg__ObstacleStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mobileye_560_660_msgs__msg__ObstacleStatus__destroy(mobileye_560_660_msgs__msg__ObstacleStatus * msg)
{
  if (msg) {
    mobileye_560_660_msgs__msg__ObstacleStatus__fini(msg);
  }
  free(msg);
}


bool
mobileye_560_660_msgs__msg__ObstacleStatus__Sequence__init(mobileye_560_660_msgs__msg__ObstacleStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mobileye_560_660_msgs__msg__ObstacleStatus * data = NULL;
  if (size) {
    data = (mobileye_560_660_msgs__msg__ObstacleStatus *)calloc(size, sizeof(mobileye_560_660_msgs__msg__ObstacleStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobileye_560_660_msgs__msg__ObstacleStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobileye_560_660_msgs__msg__ObstacleStatus__fini(&data[i - 1]);
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
mobileye_560_660_msgs__msg__ObstacleStatus__Sequence__fini(mobileye_560_660_msgs__msg__ObstacleStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mobileye_560_660_msgs__msg__ObstacleStatus__fini(&array->data[i]);
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

mobileye_560_660_msgs__msg__ObstacleStatus__Sequence *
mobileye_560_660_msgs__msg__ObstacleStatus__Sequence__create(size_t size)
{
  mobileye_560_660_msgs__msg__ObstacleStatus__Sequence * array = (mobileye_560_660_msgs__msg__ObstacleStatus__Sequence *)malloc(sizeof(mobileye_560_660_msgs__msg__ObstacleStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mobileye_560_660_msgs__msg__ObstacleStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mobileye_560_660_msgs__msg__ObstacleStatus__Sequence__destroy(mobileye_560_660_msgs__msg__ObstacleStatus__Sequence * array)
{
  if (array) {
    mobileye_560_660_msgs__msg__ObstacleStatus__Sequence__fini(array);
  }
  free(array);
}

bool
mobileye_560_660_msgs__msg__ObstacleStatus__Sequence__are_equal(const mobileye_560_660_msgs__msg__ObstacleStatus__Sequence * lhs, const mobileye_560_660_msgs__msg__ObstacleStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobileye_560_660_msgs__msg__ObstacleStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobileye_560_660_msgs__msg__ObstacleStatus__Sequence__copy(
  const mobileye_560_660_msgs__msg__ObstacleStatus__Sequence * input,
  mobileye_560_660_msgs__msg__ObstacleStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobileye_560_660_msgs__msg__ObstacleStatus);
    mobileye_560_660_msgs__msg__ObstacleStatus * data =
      (mobileye_560_660_msgs__msg__ObstacleStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobileye_560_660_msgs__msg__ObstacleStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mobileye_560_660_msgs__msg__ObstacleStatus__fini(&data[i]);
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
    if (!mobileye_560_660_msgs__msg__ObstacleStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
