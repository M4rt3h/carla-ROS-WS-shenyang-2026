// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_esr_msgs:msg/EsrStatus5.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status5__functions.h"

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
delphi_esr_msgs__msg__EsrStatus5__init(delphi_esr_msgs__msg__EsrStatus5 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_esr_msgs__msg__EsrStatus5__fini(msg);
    return false;
  }
  // canmsg
  if (!rosidl_runtime_c__String__init(&msg->canmsg)) {
    delphi_esr_msgs__msg__EsrStatus5__fini(msg);
    return false;
  }
  // swbatt_a2d
  // ignp_a2d
  // temp1_a2d
  // temp2_a2d
  // supply_5va_a2d
  // supply_5vdx_a2d
  // supply_3p3v_a2d
  // supply_10v_a2d
  return true;
}

void
delphi_esr_msgs__msg__EsrStatus5__fini(delphi_esr_msgs__msg__EsrStatus5 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // canmsg
  rosidl_runtime_c__String__fini(&msg->canmsg);
  // swbatt_a2d
  // ignp_a2d
  // temp1_a2d
  // temp2_a2d
  // supply_5va_a2d
  // supply_5vdx_a2d
  // supply_3p3v_a2d
  // supply_10v_a2d
}

bool
delphi_esr_msgs__msg__EsrStatus5__are_equal(const delphi_esr_msgs__msg__EsrStatus5 * lhs, const delphi_esr_msgs__msg__EsrStatus5 * rhs)
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
  // swbatt_a2d
  if (lhs->swbatt_a2d != rhs->swbatt_a2d) {
    return false;
  }
  // ignp_a2d
  if (lhs->ignp_a2d != rhs->ignp_a2d) {
    return false;
  }
  // temp1_a2d
  if (lhs->temp1_a2d != rhs->temp1_a2d) {
    return false;
  }
  // temp2_a2d
  if (lhs->temp2_a2d != rhs->temp2_a2d) {
    return false;
  }
  // supply_5va_a2d
  if (lhs->supply_5va_a2d != rhs->supply_5va_a2d) {
    return false;
  }
  // supply_5vdx_a2d
  if (lhs->supply_5vdx_a2d != rhs->supply_5vdx_a2d) {
    return false;
  }
  // supply_3p3v_a2d
  if (lhs->supply_3p3v_a2d != rhs->supply_3p3v_a2d) {
    return false;
  }
  // supply_10v_a2d
  if (lhs->supply_10v_a2d != rhs->supply_10v_a2d) {
    return false;
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus5__copy(
  const delphi_esr_msgs__msg__EsrStatus5 * input,
  delphi_esr_msgs__msg__EsrStatus5 * output)
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
  // swbatt_a2d
  output->swbatt_a2d = input->swbatt_a2d;
  // ignp_a2d
  output->ignp_a2d = input->ignp_a2d;
  // temp1_a2d
  output->temp1_a2d = input->temp1_a2d;
  // temp2_a2d
  output->temp2_a2d = input->temp2_a2d;
  // supply_5va_a2d
  output->supply_5va_a2d = input->supply_5va_a2d;
  // supply_5vdx_a2d
  output->supply_5vdx_a2d = input->supply_5vdx_a2d;
  // supply_3p3v_a2d
  output->supply_3p3v_a2d = input->supply_3p3v_a2d;
  // supply_10v_a2d
  output->supply_10v_a2d = input->supply_10v_a2d;
  return true;
}

delphi_esr_msgs__msg__EsrStatus5 *
delphi_esr_msgs__msg__EsrStatus5__create()
{
  delphi_esr_msgs__msg__EsrStatus5 * msg = (delphi_esr_msgs__msg__EsrStatus5 *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus5));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_esr_msgs__msg__EsrStatus5));
  bool success = delphi_esr_msgs__msg__EsrStatus5__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_esr_msgs__msg__EsrStatus5__destroy(delphi_esr_msgs__msg__EsrStatus5 * msg)
{
  if (msg) {
    delphi_esr_msgs__msg__EsrStatus5__fini(msg);
  }
  free(msg);
}


bool
delphi_esr_msgs__msg__EsrStatus5__Sequence__init(delphi_esr_msgs__msg__EsrStatus5__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_esr_msgs__msg__EsrStatus5 * data = NULL;
  if (size) {
    data = (delphi_esr_msgs__msg__EsrStatus5 *)calloc(size, sizeof(delphi_esr_msgs__msg__EsrStatus5));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_esr_msgs__msg__EsrStatus5__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_esr_msgs__msg__EsrStatus5__fini(&data[i - 1]);
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
delphi_esr_msgs__msg__EsrStatus5__Sequence__fini(delphi_esr_msgs__msg__EsrStatus5__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_esr_msgs__msg__EsrStatus5__fini(&array->data[i]);
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

delphi_esr_msgs__msg__EsrStatus5__Sequence *
delphi_esr_msgs__msg__EsrStatus5__Sequence__create(size_t size)
{
  delphi_esr_msgs__msg__EsrStatus5__Sequence * array = (delphi_esr_msgs__msg__EsrStatus5__Sequence *)malloc(sizeof(delphi_esr_msgs__msg__EsrStatus5__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_esr_msgs__msg__EsrStatus5__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_esr_msgs__msg__EsrStatus5__Sequence__destroy(delphi_esr_msgs__msg__EsrStatus5__Sequence * array)
{
  if (array) {
    delphi_esr_msgs__msg__EsrStatus5__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_esr_msgs__msg__EsrStatus5__Sequence__are_equal(const delphi_esr_msgs__msg__EsrStatus5__Sequence * lhs, const delphi_esr_msgs__msg__EsrStatus5__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_esr_msgs__msg__EsrStatus5__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_esr_msgs__msg__EsrStatus5__Sequence__copy(
  const delphi_esr_msgs__msg__EsrStatus5__Sequence * input,
  delphi_esr_msgs__msg__EsrStatus5__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_esr_msgs__msg__EsrStatus5);
    delphi_esr_msgs__msg__EsrStatus5 * data =
      (delphi_esr_msgs__msg__EsrStatus5 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_esr_msgs__msg__EsrStatus5__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_esr_msgs__msg__EsrStatus5__fini(&data[i]);
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
    if (!delphi_esr_msgs__msg__EsrStatus5__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
