// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/Point2Df.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/point2_df__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ibeo_msgs__msg__Point2Df__init(ibeo_msgs__msg__Point2Df * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
ibeo_msgs__msg__Point2Df__fini(ibeo_msgs__msg__Point2Df * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
ibeo_msgs__msg__Point2Df__are_equal(const ibeo_msgs__msg__Point2Df * lhs, const ibeo_msgs__msg__Point2Df * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__Point2Df__copy(
  const ibeo_msgs__msg__Point2Df * input,
  ibeo_msgs__msg__Point2Df * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

ibeo_msgs__msg__Point2Df *
ibeo_msgs__msg__Point2Df__create()
{
  ibeo_msgs__msg__Point2Df * msg = (ibeo_msgs__msg__Point2Df *)malloc(sizeof(ibeo_msgs__msg__Point2Df));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__Point2Df));
  bool success = ibeo_msgs__msg__Point2Df__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__Point2Df__destroy(ibeo_msgs__msg__Point2Df * msg)
{
  if (msg) {
    ibeo_msgs__msg__Point2Df__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__Point2Df__Sequence__init(ibeo_msgs__msg__Point2Df__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__Point2Df * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__Point2Df *)calloc(size, sizeof(ibeo_msgs__msg__Point2Df));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__Point2Df__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__Point2Df__fini(&data[i - 1]);
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
ibeo_msgs__msg__Point2Df__Sequence__fini(ibeo_msgs__msg__Point2Df__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__Point2Df__fini(&array->data[i]);
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

ibeo_msgs__msg__Point2Df__Sequence *
ibeo_msgs__msg__Point2Df__Sequence__create(size_t size)
{
  ibeo_msgs__msg__Point2Df__Sequence * array = (ibeo_msgs__msg__Point2Df__Sequence *)malloc(sizeof(ibeo_msgs__msg__Point2Df__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__Point2Df__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__Point2Df__Sequence__destroy(ibeo_msgs__msg__Point2Df__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__Point2Df__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__Point2Df__Sequence__are_equal(const ibeo_msgs__msg__Point2Df__Sequence * lhs, const ibeo_msgs__msg__Point2Df__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__Point2Df__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__Point2Df__Sequence__copy(
  const ibeo_msgs__msg__Point2Df__Sequence * input,
  ibeo_msgs__msg__Point2Df__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__Point2Df);
    ibeo_msgs__msg__Point2Df * data =
      (ibeo_msgs__msg__Point2Df *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__Point2Df__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__Point2Df__fini(&data[i]);
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
    if (!ibeo_msgs__msg__Point2Df__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
