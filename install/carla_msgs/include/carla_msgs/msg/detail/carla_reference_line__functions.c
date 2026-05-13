// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_msgs:msg/CarlaReferenceLine.idl
// generated code does not contain a copyright notice
#include "carla_msgs/msg/detail/carla_reference_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `reference_line`
#include "carla_msgs/msg/detail/carla_reference_point__functions.h"

bool
carla_msgs__msg__CarlaReferenceLine__init(carla_msgs__msg__CarlaReferenceLine * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    carla_msgs__msg__CarlaReferenceLine__fini(msg);
    return false;
  }
  // reference_line
  if (!carla_msgs__msg__CarlaReferencePoint__Sequence__init(&msg->reference_line, 0)) {
    carla_msgs__msg__CarlaReferenceLine__fini(msg);
    return false;
  }
  return true;
}

void
carla_msgs__msg__CarlaReferenceLine__fini(carla_msgs__msg__CarlaReferenceLine * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // reference_line
  carla_msgs__msg__CarlaReferencePoint__Sequence__fini(&msg->reference_line);
}

bool
carla_msgs__msg__CarlaReferenceLine__are_equal(const carla_msgs__msg__CarlaReferenceLine * lhs, const carla_msgs__msg__CarlaReferenceLine * rhs)
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
  // reference_line
  if (!carla_msgs__msg__CarlaReferencePoint__Sequence__are_equal(
      &(lhs->reference_line), &(rhs->reference_line)))
  {
    return false;
  }
  return true;
}

bool
carla_msgs__msg__CarlaReferenceLine__copy(
  const carla_msgs__msg__CarlaReferenceLine * input,
  carla_msgs__msg__CarlaReferenceLine * output)
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
  // reference_line
  if (!carla_msgs__msg__CarlaReferencePoint__Sequence__copy(
      &(input->reference_line), &(output->reference_line)))
  {
    return false;
  }
  return true;
}

carla_msgs__msg__CarlaReferenceLine *
carla_msgs__msg__CarlaReferenceLine__create()
{
  carla_msgs__msg__CarlaReferenceLine * msg = (carla_msgs__msg__CarlaReferenceLine *)malloc(sizeof(carla_msgs__msg__CarlaReferenceLine));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_msgs__msg__CarlaReferenceLine));
  bool success = carla_msgs__msg__CarlaReferenceLine__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
carla_msgs__msg__CarlaReferenceLine__destroy(carla_msgs__msg__CarlaReferenceLine * msg)
{
  if (msg) {
    carla_msgs__msg__CarlaReferenceLine__fini(msg);
  }
  free(msg);
}


bool
carla_msgs__msg__CarlaReferenceLine__Sequence__init(carla_msgs__msg__CarlaReferenceLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  carla_msgs__msg__CarlaReferenceLine * data = NULL;
  if (size) {
    data = (carla_msgs__msg__CarlaReferenceLine *)calloc(size, sizeof(carla_msgs__msg__CarlaReferenceLine));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_msgs__msg__CarlaReferenceLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_msgs__msg__CarlaReferenceLine__fini(&data[i - 1]);
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
carla_msgs__msg__CarlaReferenceLine__Sequence__fini(carla_msgs__msg__CarlaReferenceLine__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carla_msgs__msg__CarlaReferenceLine__fini(&array->data[i]);
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

carla_msgs__msg__CarlaReferenceLine__Sequence *
carla_msgs__msg__CarlaReferenceLine__Sequence__create(size_t size)
{
  carla_msgs__msg__CarlaReferenceLine__Sequence * array = (carla_msgs__msg__CarlaReferenceLine__Sequence *)malloc(sizeof(carla_msgs__msg__CarlaReferenceLine__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = carla_msgs__msg__CarlaReferenceLine__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
carla_msgs__msg__CarlaReferenceLine__Sequence__destroy(carla_msgs__msg__CarlaReferenceLine__Sequence * array)
{
  if (array) {
    carla_msgs__msg__CarlaReferenceLine__Sequence__fini(array);
  }
  free(array);
}

bool
carla_msgs__msg__CarlaReferenceLine__Sequence__are_equal(const carla_msgs__msg__CarlaReferenceLine__Sequence * lhs, const carla_msgs__msg__CarlaReferenceLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_msgs__msg__CarlaReferenceLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_msgs__msg__CarlaReferenceLine__Sequence__copy(
  const carla_msgs__msg__CarlaReferenceLine__Sequence * input,
  carla_msgs__msg__CarlaReferenceLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_msgs__msg__CarlaReferenceLine);
    carla_msgs__msg__CarlaReferenceLine * data =
      (carla_msgs__msg__CarlaReferenceLine *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_msgs__msg__CarlaReferenceLine__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_msgs__msg__CarlaReferenceLine__fini(&data[i]);
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
    if (!carla_msgs__msg__CarlaReferenceLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
