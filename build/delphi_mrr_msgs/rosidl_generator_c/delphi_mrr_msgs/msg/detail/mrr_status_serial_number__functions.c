// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/MrrStatusSerialNumber.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_status_serial_number__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__MrrStatusSerialNumber__init(delphi_mrr_msgs__msg__MrrStatusSerialNumber * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__MrrStatusSerialNumber__fini(msg);
    return false;
  }
  // can_sequence_number
  // can_serial_number
  return true;
}

void
delphi_mrr_msgs__msg__MrrStatusSerialNumber__fini(delphi_mrr_msgs__msg__MrrStatusSerialNumber * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_sequence_number
  // can_serial_number
}

bool
delphi_mrr_msgs__msg__MrrStatusSerialNumber__are_equal(const delphi_mrr_msgs__msg__MrrStatusSerialNumber * lhs, const delphi_mrr_msgs__msg__MrrStatusSerialNumber * rhs)
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
  // can_sequence_number
  if (lhs->can_sequence_number != rhs->can_sequence_number) {
    return false;
  }
  // can_serial_number
  if (lhs->can_serial_number != rhs->can_serial_number) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrStatusSerialNumber__copy(
  const delphi_mrr_msgs__msg__MrrStatusSerialNumber * input,
  delphi_mrr_msgs__msg__MrrStatusSerialNumber * output)
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
  // can_sequence_number
  output->can_sequence_number = input->can_sequence_number;
  // can_serial_number
  output->can_serial_number = input->can_serial_number;
  return true;
}

delphi_mrr_msgs__msg__MrrStatusSerialNumber *
delphi_mrr_msgs__msg__MrrStatusSerialNumber__create()
{
  delphi_mrr_msgs__msg__MrrStatusSerialNumber * msg = (delphi_mrr_msgs__msg__MrrStatusSerialNumber *)malloc(sizeof(delphi_mrr_msgs__msg__MrrStatusSerialNumber));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__MrrStatusSerialNumber));
  bool success = delphi_mrr_msgs__msg__MrrStatusSerialNumber__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__MrrStatusSerialNumber__destroy(delphi_mrr_msgs__msg__MrrStatusSerialNumber * msg)
{
  if (msg) {
    delphi_mrr_msgs__msg__MrrStatusSerialNumber__fini(msg);
  }
  free(msg);
}


bool
delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence__init(delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_mrr_msgs__msg__MrrStatusSerialNumber * data = NULL;
  if (size) {
    data = (delphi_mrr_msgs__msg__MrrStatusSerialNumber *)calloc(size, sizeof(delphi_mrr_msgs__msg__MrrStatusSerialNumber));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__MrrStatusSerialNumber__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__MrrStatusSerialNumber__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence__fini(delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_mrr_msgs__msg__MrrStatusSerialNumber__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence *
delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence__create(size_t size)
{
  delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence * array = (delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence *)malloc(sizeof(delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence__destroy(delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence * array)
{
  if (array) {
    delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence * lhs, const delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrStatusSerialNumber__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence * input,
  delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__MrrStatusSerialNumber);
    delphi_mrr_msgs__msg__MrrStatusSerialNumber * data =
      (delphi_mrr_msgs__msg__MrrStatusSerialNumber *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__MrrStatusSerialNumber__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__MrrStatusSerialNumber__fini(&data[i]);
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
    if (!delphi_mrr_msgs__msg__MrrStatusSerialNumber__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
