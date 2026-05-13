// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from derived_object_msgs:msg/SolidPrimitiveWithCovariance.idl
// generated code does not contain a copyright notice
#include "derived_object_msgs/msg/detail/solid_primitive_with_covariance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `dimensions`
// Member `covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
derived_object_msgs__msg__SolidPrimitiveWithCovariance__init(derived_object_msgs__msg__SolidPrimitiveWithCovariance * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // dimensions
  if (!rosidl_runtime_c__double__Sequence__init(&msg->dimensions, 0)) {
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__fini(msg);
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->covariance, 0)) {
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__fini(msg);
    return false;
  }
  return true;
}

void
derived_object_msgs__msg__SolidPrimitiveWithCovariance__fini(derived_object_msgs__msg__SolidPrimitiveWithCovariance * msg)
{
  if (!msg) {
    return;
  }
  // type
  // dimensions
  rosidl_runtime_c__double__Sequence__fini(&msg->dimensions);
  // covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->covariance);
}

bool
derived_object_msgs__msg__SolidPrimitiveWithCovariance__are_equal(const derived_object_msgs__msg__SolidPrimitiveWithCovariance * lhs, const derived_object_msgs__msg__SolidPrimitiveWithCovariance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // dimensions
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->dimensions), &(rhs->dimensions)))
  {
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->covariance), &(rhs->covariance)))
  {
    return false;
  }
  return true;
}

bool
derived_object_msgs__msg__SolidPrimitiveWithCovariance__copy(
  const derived_object_msgs__msg__SolidPrimitiveWithCovariance * input,
  derived_object_msgs__msg__SolidPrimitiveWithCovariance * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // dimensions
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->dimensions), &(output->dimensions)))
  {
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->covariance), &(output->covariance)))
  {
    return false;
  }
  return true;
}

derived_object_msgs__msg__SolidPrimitiveWithCovariance *
derived_object_msgs__msg__SolidPrimitiveWithCovariance__create()
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance * msg = (derived_object_msgs__msg__SolidPrimitiveWithCovariance *)malloc(sizeof(derived_object_msgs__msg__SolidPrimitiveWithCovariance));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(derived_object_msgs__msg__SolidPrimitiveWithCovariance));
  bool success = derived_object_msgs__msg__SolidPrimitiveWithCovariance__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
derived_object_msgs__msg__SolidPrimitiveWithCovariance__destroy(derived_object_msgs__msg__SolidPrimitiveWithCovariance * msg)
{
  if (msg) {
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__fini(msg);
  }
  free(msg);
}


bool
derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence__init(derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  derived_object_msgs__msg__SolidPrimitiveWithCovariance * data = NULL;
  if (size) {
    data = (derived_object_msgs__msg__SolidPrimitiveWithCovariance *)calloc(size, sizeof(derived_object_msgs__msg__SolidPrimitiveWithCovariance));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = derived_object_msgs__msg__SolidPrimitiveWithCovariance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        derived_object_msgs__msg__SolidPrimitiveWithCovariance__fini(&data[i - 1]);
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
derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence__fini(derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      derived_object_msgs__msg__SolidPrimitiveWithCovariance__fini(&array->data[i]);
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

derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence *
derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence__create(size_t size)
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence * array = (derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence *)malloc(sizeof(derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence__destroy(derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence * array)
{
  if (array) {
    derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence__fini(array);
  }
  free(array);
}

bool
derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence__are_equal(const derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence * lhs, const derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!derived_object_msgs__msg__SolidPrimitiveWithCovariance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence__copy(
  const derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence * input,
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(derived_object_msgs__msg__SolidPrimitiveWithCovariance);
    derived_object_msgs__msg__SolidPrimitiveWithCovariance * data =
      (derived_object_msgs__msg__SolidPrimitiveWithCovariance *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!derived_object_msgs__msg__SolidPrimitiveWithCovariance__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          derived_object_msgs__msg__SolidPrimitiveWithCovariance__fini(&data[i]);
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
    if (!derived_object_msgs__msg__SolidPrimitiveWithCovariance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
