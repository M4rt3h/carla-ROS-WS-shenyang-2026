// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from neobotix_usboard_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/sensor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
neobotix_usboard_msgs__msg__SensorData__init(neobotix_usboard_msgs__msg__SensorData * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  // warn
  // alarm
  // active
  return true;
}

void
neobotix_usboard_msgs__msg__SensorData__fini(neobotix_usboard_msgs__msg__SensorData * msg)
{
  if (!msg) {
    return;
  }
  // distance
  // warn
  // alarm
  // active
}

bool
neobotix_usboard_msgs__msg__SensorData__are_equal(const neobotix_usboard_msgs__msg__SensorData * lhs, const neobotix_usboard_msgs__msg__SensorData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // warn
  if (lhs->warn != rhs->warn) {
    return false;
  }
  // alarm
  if (lhs->alarm != rhs->alarm) {
    return false;
  }
  // active
  if (lhs->active != rhs->active) {
    return false;
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__SensorData__copy(
  const neobotix_usboard_msgs__msg__SensorData * input,
  neobotix_usboard_msgs__msg__SensorData * output)
{
  if (!input || !output) {
    return false;
  }
  // distance
  output->distance = input->distance;
  // warn
  output->warn = input->warn;
  // alarm
  output->alarm = input->alarm;
  // active
  output->active = input->active;
  return true;
}

neobotix_usboard_msgs__msg__SensorData *
neobotix_usboard_msgs__msg__SensorData__create()
{
  neobotix_usboard_msgs__msg__SensorData * msg = (neobotix_usboard_msgs__msg__SensorData *)malloc(sizeof(neobotix_usboard_msgs__msg__SensorData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(neobotix_usboard_msgs__msg__SensorData));
  bool success = neobotix_usboard_msgs__msg__SensorData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
neobotix_usboard_msgs__msg__SensorData__destroy(neobotix_usboard_msgs__msg__SensorData * msg)
{
  if (msg) {
    neobotix_usboard_msgs__msg__SensorData__fini(msg);
  }
  free(msg);
}


bool
neobotix_usboard_msgs__msg__SensorData__Sequence__init(neobotix_usboard_msgs__msg__SensorData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  neobotix_usboard_msgs__msg__SensorData * data = NULL;
  if (size) {
    data = (neobotix_usboard_msgs__msg__SensorData *)calloc(size, sizeof(neobotix_usboard_msgs__msg__SensorData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = neobotix_usboard_msgs__msg__SensorData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        neobotix_usboard_msgs__msg__SensorData__fini(&data[i - 1]);
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
neobotix_usboard_msgs__msg__SensorData__Sequence__fini(neobotix_usboard_msgs__msg__SensorData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      neobotix_usboard_msgs__msg__SensorData__fini(&array->data[i]);
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

neobotix_usboard_msgs__msg__SensorData__Sequence *
neobotix_usboard_msgs__msg__SensorData__Sequence__create(size_t size)
{
  neobotix_usboard_msgs__msg__SensorData__Sequence * array = (neobotix_usboard_msgs__msg__SensorData__Sequence *)malloc(sizeof(neobotix_usboard_msgs__msg__SensorData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = neobotix_usboard_msgs__msg__SensorData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
neobotix_usboard_msgs__msg__SensorData__Sequence__destroy(neobotix_usboard_msgs__msg__SensorData__Sequence * array)
{
  if (array) {
    neobotix_usboard_msgs__msg__SensorData__Sequence__fini(array);
  }
  free(array);
}

bool
neobotix_usboard_msgs__msg__SensorData__Sequence__are_equal(const neobotix_usboard_msgs__msg__SensorData__Sequence * lhs, const neobotix_usboard_msgs__msg__SensorData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!neobotix_usboard_msgs__msg__SensorData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
neobotix_usboard_msgs__msg__SensorData__Sequence__copy(
  const neobotix_usboard_msgs__msg__SensorData__Sequence * input,
  neobotix_usboard_msgs__msg__SensorData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(neobotix_usboard_msgs__msg__SensorData);
    neobotix_usboard_msgs__msg__SensorData * data =
      (neobotix_usboard_msgs__msg__SensorData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!neobotix_usboard_msgs__msg__SensorData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          neobotix_usboard_msgs__msg__SensorData__fini(&data[i]);
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
    if (!neobotix_usboard_msgs__msg__SensorData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
