// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ResolutionInfo.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/resolution_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ibeo_msgs__msg__ResolutionInfo__init(ibeo_msgs__msg__ResolutionInfo * msg)
{
  if (!msg) {
    return false;
  }
  // resolution_start_angle
  // resolution
  return true;
}

void
ibeo_msgs__msg__ResolutionInfo__fini(ibeo_msgs__msg__ResolutionInfo * msg)
{
  if (!msg) {
    return;
  }
  // resolution_start_angle
  // resolution
}

bool
ibeo_msgs__msg__ResolutionInfo__are_equal(const ibeo_msgs__msg__ResolutionInfo * lhs, const ibeo_msgs__msg__ResolutionInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resolution_start_angle
  if (lhs->resolution_start_angle != rhs->resolution_start_angle) {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ResolutionInfo__copy(
  const ibeo_msgs__msg__ResolutionInfo * input,
  ibeo_msgs__msg__ResolutionInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // resolution_start_angle
  output->resolution_start_angle = input->resolution_start_angle;
  // resolution
  output->resolution = input->resolution;
  return true;
}

ibeo_msgs__msg__ResolutionInfo *
ibeo_msgs__msg__ResolutionInfo__create()
{
  ibeo_msgs__msg__ResolutionInfo * msg = (ibeo_msgs__msg__ResolutionInfo *)malloc(sizeof(ibeo_msgs__msg__ResolutionInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ResolutionInfo));
  bool success = ibeo_msgs__msg__ResolutionInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ResolutionInfo__destroy(ibeo_msgs__msg__ResolutionInfo * msg)
{
  if (msg) {
    ibeo_msgs__msg__ResolutionInfo__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__ResolutionInfo__Sequence__init(ibeo_msgs__msg__ResolutionInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__ResolutionInfo * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__ResolutionInfo *)calloc(size, sizeof(ibeo_msgs__msg__ResolutionInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ResolutionInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ResolutionInfo__fini(&data[i - 1]);
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
ibeo_msgs__msg__ResolutionInfo__Sequence__fini(ibeo_msgs__msg__ResolutionInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__ResolutionInfo__fini(&array->data[i]);
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

ibeo_msgs__msg__ResolutionInfo__Sequence *
ibeo_msgs__msg__ResolutionInfo__Sequence__create(size_t size)
{
  ibeo_msgs__msg__ResolutionInfo__Sequence * array = (ibeo_msgs__msg__ResolutionInfo__Sequence *)malloc(sizeof(ibeo_msgs__msg__ResolutionInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ResolutionInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ResolutionInfo__Sequence__destroy(ibeo_msgs__msg__ResolutionInfo__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__ResolutionInfo__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__ResolutionInfo__Sequence__are_equal(const ibeo_msgs__msg__ResolutionInfo__Sequence * lhs, const ibeo_msgs__msg__ResolutionInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ResolutionInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ResolutionInfo__Sequence__copy(
  const ibeo_msgs__msg__ResolutionInfo__Sequence * input,
  ibeo_msgs__msg__ResolutionInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ResolutionInfo);
    ibeo_msgs__msg__ResolutionInfo * data =
      (ibeo_msgs__msg__ResolutionInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ResolutionInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ResolutionInfo__fini(&data[i]);
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
    if (!ibeo_msgs__msg__ResolutionInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
