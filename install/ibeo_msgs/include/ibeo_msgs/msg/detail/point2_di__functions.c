// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/Point2Di.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/point2_di__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ibeo_msgs__msg__Point2Di__init(ibeo_msgs__msg__Point2Di * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
ibeo_msgs__msg__Point2Di__fini(ibeo_msgs__msg__Point2Di * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
ibeo_msgs__msg__Point2Di__are_equal(const ibeo_msgs__msg__Point2Di * lhs, const ibeo_msgs__msg__Point2Di * rhs)
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
ibeo_msgs__msg__Point2Di__copy(
  const ibeo_msgs__msg__Point2Di * input,
  ibeo_msgs__msg__Point2Di * output)
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

ibeo_msgs__msg__Point2Di *
ibeo_msgs__msg__Point2Di__create()
{
  ibeo_msgs__msg__Point2Di * msg = (ibeo_msgs__msg__Point2Di *)malloc(sizeof(ibeo_msgs__msg__Point2Di));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__Point2Di));
  bool success = ibeo_msgs__msg__Point2Di__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__Point2Di__destroy(ibeo_msgs__msg__Point2Di * msg)
{
  if (msg) {
    ibeo_msgs__msg__Point2Di__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__Point2Di__Sequence__init(ibeo_msgs__msg__Point2Di__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__Point2Di * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__Point2Di *)calloc(size, sizeof(ibeo_msgs__msg__Point2Di));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__Point2Di__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__Point2Di__fini(&data[i - 1]);
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
ibeo_msgs__msg__Point2Di__Sequence__fini(ibeo_msgs__msg__Point2Di__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__Point2Di__fini(&array->data[i]);
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

ibeo_msgs__msg__Point2Di__Sequence *
ibeo_msgs__msg__Point2Di__Sequence__create(size_t size)
{
  ibeo_msgs__msg__Point2Di__Sequence * array = (ibeo_msgs__msg__Point2Di__Sequence *)malloc(sizeof(ibeo_msgs__msg__Point2Di__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__Point2Di__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__Point2Di__Sequence__destroy(ibeo_msgs__msg__Point2Di__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__Point2Di__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__Point2Di__Sequence__are_equal(const ibeo_msgs__msg__Point2Di__Sequence * lhs, const ibeo_msgs__msg__Point2Di__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__Point2Di__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__Point2Di__Sequence__copy(
  const ibeo_msgs__msg__Point2Di__Sequence * input,
  ibeo_msgs__msg__Point2Di__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__Point2Di);
    ibeo_msgs__msg__Point2Di * data =
      (ibeo_msgs__msg__Point2Di *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__Point2Di__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__Point2Di__fini(&data[i]);
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
    if (!ibeo_msgs__msg__Point2Di__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
