// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delphi_mrr_msgs:msg/MrrHeaderAlignmentState.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/mrr_header_alignment_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__init(delphi_mrr_msgs__msg__MrrHeaderAlignmentState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    delphi_mrr_msgs__msg__MrrHeaderAlignmentState__fini(msg);
    return false;
  }
  // can_auto_align_hangle_qf
  // can_alignment_status
  // can_alignment_state
  // can_auto_align_hangle_ref
  // can_auto_align_hangle
  return true;
}

void
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__fini(delphi_mrr_msgs__msg__MrrHeaderAlignmentState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // can_auto_align_hangle_qf
  // can_alignment_status
  // can_alignment_state
  // can_auto_align_hangle_ref
  // can_auto_align_hangle
}

bool
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__are_equal(const delphi_mrr_msgs__msg__MrrHeaderAlignmentState * lhs, const delphi_mrr_msgs__msg__MrrHeaderAlignmentState * rhs)
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
  // can_auto_align_hangle_qf
  if (lhs->can_auto_align_hangle_qf != rhs->can_auto_align_hangle_qf) {
    return false;
  }
  // can_alignment_status
  if (lhs->can_alignment_status != rhs->can_alignment_status) {
    return false;
  }
  // can_alignment_state
  if (lhs->can_alignment_state != rhs->can_alignment_state) {
    return false;
  }
  // can_auto_align_hangle_ref
  if (lhs->can_auto_align_hangle_ref != rhs->can_auto_align_hangle_ref) {
    return false;
  }
  // can_auto_align_hangle
  if (lhs->can_auto_align_hangle != rhs->can_auto_align_hangle) {
    return false;
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__copy(
  const delphi_mrr_msgs__msg__MrrHeaderAlignmentState * input,
  delphi_mrr_msgs__msg__MrrHeaderAlignmentState * output)
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
  // can_auto_align_hangle_qf
  output->can_auto_align_hangle_qf = input->can_auto_align_hangle_qf;
  // can_alignment_status
  output->can_alignment_status = input->can_alignment_status;
  // can_alignment_state
  output->can_alignment_state = input->can_alignment_state;
  // can_auto_align_hangle_ref
  output->can_auto_align_hangle_ref = input->can_auto_align_hangle_ref;
  // can_auto_align_hangle
  output->can_auto_align_hangle = input->can_auto_align_hangle;
  return true;
}

delphi_mrr_msgs__msg__MrrHeaderAlignmentState *
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__create()
{
  delphi_mrr_msgs__msg__MrrHeaderAlignmentState * msg = (delphi_mrr_msgs__msg__MrrHeaderAlignmentState *)malloc(sizeof(delphi_mrr_msgs__msg__MrrHeaderAlignmentState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delphi_mrr_msgs__msg__MrrHeaderAlignmentState));
  bool success = delphi_mrr_msgs__msg__MrrHeaderAlignmentState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__destroy(delphi_mrr_msgs__msg__MrrHeaderAlignmentState * msg)
{
  if (msg) {
    delphi_mrr_msgs__msg__MrrHeaderAlignmentState__fini(msg);
  }
  free(msg);
}


bool
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence__init(delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  delphi_mrr_msgs__msg__MrrHeaderAlignmentState * data = NULL;
  if (size) {
    data = (delphi_mrr_msgs__msg__MrrHeaderAlignmentState *)calloc(size, sizeof(delphi_mrr_msgs__msg__MrrHeaderAlignmentState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delphi_mrr_msgs__msg__MrrHeaderAlignmentState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delphi_mrr_msgs__msg__MrrHeaderAlignmentState__fini(&data[i - 1]);
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
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence__fini(delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delphi_mrr_msgs__msg__MrrHeaderAlignmentState__fini(&array->data[i]);
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

delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence *
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence__create(size_t size)
{
  delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence * array = (delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence *)malloc(sizeof(delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence__destroy(delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence * array)
{
  if (array) {
    delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence__fini(array);
  }
  free(array);
}

bool
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence * lhs, const delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delphi_mrr_msgs__msg__MrrHeaderAlignmentState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence * input,
  delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(delphi_mrr_msgs__msg__MrrHeaderAlignmentState);
    delphi_mrr_msgs__msg__MrrHeaderAlignmentState * data =
      (delphi_mrr_msgs__msg__MrrHeaderAlignmentState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delphi_mrr_msgs__msg__MrrHeaderAlignmentState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          delphi_mrr_msgs__msg__MrrHeaderAlignmentState__fini(&data[i]);
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
    if (!delphi_mrr_msgs__msg__MrrHeaderAlignmentState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
