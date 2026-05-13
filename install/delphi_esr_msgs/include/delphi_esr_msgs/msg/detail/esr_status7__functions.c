// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrStatus7.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status7__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `canmsg`
#include "rosidl_runtime_c/string_functions.h"

bool
delphi_esr_msgs__msg__EsrStatus7__init(delphi_esr_msgs__msg__EsrStatus7 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrStatus7__fini(msg);
    return false;
  }
  // canmsg
  if (!rosidl_runtime_c__String__init(&msg->canmsg)) {
    delphi_esr_msgs__msg__EsrStatus7__fini(msg);
    return false;
  }
  // active_fault_0
  // active_fault_1
  // active_fault_2
  // active_fault_3
  // active_fault_4
  // active_fault_5
  // active_fault_6
  // active_fault_7
  return true;
}

void
delphi_esr_msgs__msg__EsrStatus7__fini(delphi_esr_msgs__msg__EsrStatus7 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // canmsg
  rosidl_runtime_c__String__fini(&msg->canmsg);
  // active_fault_0
  // active_fault_1
  // active_fault_2
  // active_fault_3
  // active_fault_4
  // active_fault_5
  // active_fault_6
  // active_fault_7
}

bool
delphi_esr_msgs__msg__EsrStatus7__are_equal(const delphi_esr_msgs__msg__EsrStatus7 * lhs, const delphi_esr_msgs__msg__EsrStatus7 * rhs)
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
  // canmsg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->canmsg), &(rhs->canmsg)))
  {
    return false;
  }
  // active_fault_0
  if (lhs->active_fault_0 != rhs->active_fault_0) {
    return false;
  }
  // active_fault_1
  if (lhs->active_fault_1 != rhs->active_fault_1) {
    return false;
  }
  // active_fault_2
  if (lhs->active_fault_2 != rhs->active_fault_2) {
    return false;
  }
  // active_fault_3
  if (lhs->active_fault_3 != rhs->active_fault_3) {
    return false;
  }
  // active_fault_4
  if (lhs->active_fault_4 != rhs->active_fault_4) {
    return false;
  }
  // active_fault_5
  if (lhs->active_fault_5 != rhs->active_fault_5) {
    return false;
  }
  // active_fault_6
  if (lhs->active_fault_6 != rhs->active_fault_6) {
    return false;
  }
  // active_fault_7
  if (lhs->active_fault_7 != rhs->active_fault_7) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus7__copy(
  const delphi_esr_msgs__msg__EsrStatus7 * input,
  delphi_esr_msgs__msg__EsrStatus7 * output)
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
  // canmsg
  if (!rosidl_runtime_c__String__copy(
      &(input->canmsg), &(output->canmsg)))
  {
    return false;
  }
  // active_fault_0
  output->active_fault_0 = input->active_fault_0;
  // active_fault_1
  output->active_fault_1 = input->active_fault_1;
  // active_fault_2
  output->active_fault_2 = input->active_fault_2;
  // active_fault_3
  output->active_fault_3 = input->active_fault_3;
  // active_fault_4
  output->active_fault_4 = input->active_fault_4;
  // active_fault_5
  output->active_fault_5 = input->active_fault_5;
  // active_fault_6
  output->active_fault_6 = input->active_fault_6;
  // active_fault_7
  output->active_fault_7 = input->active_fault_7;
  return true;
}

delphi_esr_msgs__msg__EsrStatus7 *
delphi_esr_msgs__msg__EsrStatus7__create()
{
  delphi_esr_msgs__msg__EsrStatus7 * msg = (delphi_esr_msgs__msg__EsrStatus7 *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus7));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrStatus7));
  bool success = delphi_esr_msgs__msg__EsrStatus7__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrStatus7__destroy(delphi_esr_msgs__msg__EsrStatus7 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrStatus7__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrStatus7__Sequence__init(delphi_esr_msgs__msg__EsrStatus7__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrStatus7 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrStatus7 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrStatus7));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrStatus7__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrStatus7__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrStatus7__Sequence__fini(delphi_esr_msgs__msg__EsrStatus7__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrStatus7__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrStatus7__Sequence *
delphi_esr_msgs__msg__EsrStatus7__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrStatus7__Sequence * array = (delphi_esr_msgs__msg__EsrStatus7__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus7__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrStatus7__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrStatus7__Sequence__destroy(delphi_esr_msgs__msg__EsrStatus7__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrStatus7__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrStatus7__Sequence__are_equal(const delphi_esr_msgs__msg__EsrStatus7__Sequence * lhs, const delphi_esr_msgs__msg__EsrStatus7__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrStatus7__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus7__Sequence__copy(
  const delphi_esr_msgs__msg__EsrStatus7__Sequence * input,
  delphi_esr_msgs__msg__EsrStatus7__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrStatus7);
    delphi_esr_msgs__msg__EsrStatus7 * data =
      (delphi_esr_msgs__msg__EsrStatus7 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrStatus7__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrStatus7__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrStatus7__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
