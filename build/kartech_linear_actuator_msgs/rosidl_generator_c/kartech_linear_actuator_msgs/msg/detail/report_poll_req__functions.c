// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kartech_linear_actuator_msgs:msg/ReportPollReq.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/report_poll_req__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `report_indices`
#include "kartech_linear_actuator_msgs/msg/detail/report_index__functions.h"

bool
kartech_linear_actuator_msgs__msg__ReportPollReq__init(kartech_linear_actuator_msgs__msg__ReportPollReq * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kartech_linear_actuator_msgs__msg__ReportPollReq__fini(msg);
    return false;
  }
  // confirm
  // report_indices
  if (!kartech_linear_actuator_msgs__msg__ReportIndex__Sequence__init(&msg->report_indices, 0)) {
    kartech_linear_actuator_msgs__msg__ReportPollReq__fini(msg);
    return false;
  }
  return true;
}

void
kartech_linear_actuator_msgs__msg__ReportPollReq__fini(kartech_linear_actuator_msgs__msg__ReportPollReq * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // confirm
  // report_indices
  kartech_linear_actuator_msgs__msg__ReportIndex__Sequence__fini(&msg->report_indices);
}

bool
kartech_linear_actuator_msgs__msg__ReportPollReq__are_equal(const kartech_linear_actuator_msgs__msg__ReportPollReq * lhs, const kartech_linear_actuator_msgs__msg__ReportPollReq * rhs)
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
  // confirm
  if (lhs->confirm != rhs->confirm) {
    return false;
  }
  // report_indices
  if (!kartech_linear_actuator_msgs__msg__ReportIndex__Sequence__are_equal(
      &(lhs->report_indices), &(rhs->report_indices)))
  {
    return false;
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ReportPollReq__copy(
  const kartech_linear_actuator_msgs__msg__ReportPollReq * input,
  kartech_linear_actuator_msgs__msg__ReportPollReq * output)
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
  // confirm
  output->confirm = input->confirm;
  // report_indices
  if (!kartech_linear_actuator_msgs__msg__ReportIndex__Sequence__copy(
      &(input->report_indices), &(output->report_indices)))
  {
    return false;
  }
  return true;
}

kartech_linear_actuator_msgs__msg__ReportPollReq *
kartech_linear_actuator_msgs__msg__ReportPollReq__create()
{
  kartech_linear_actuator_msgs__msg__ReportPollReq * msg = (kartech_linear_actuator_msgs__msg__ReportPollReq *)malloc(sizeof(kartech_linear_actuator_msgs__msg__ReportPollReq));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kartech_linear_actuator_msgs__msg__ReportPollReq));
  bool success = kartech_linear_actuator_msgs__msg__ReportPollReq__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
kartech_linear_actuator_msgs__msg__ReportPollReq__destroy(kartech_linear_actuator_msgs__msg__ReportPollReq * msg)
{
  if (msg) {
    kartech_linear_actuator_msgs__msg__ReportPollReq__fini(msg);
  }
  free(msg);
}


bool
kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence__init(kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  kartech_linear_actuator_msgs__msg__ReportPollReq * data = NULL;
  if (size) {
    data = (kartech_linear_actuator_msgs__msg__ReportPollReq *)calloc(size, sizeof(kartech_linear_actuator_msgs__msg__ReportPollReq));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kartech_linear_actuator_msgs__msg__ReportPollReq__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kartech_linear_actuator_msgs__msg__ReportPollReq__fini(&data[i - 1]);
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
kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence__fini(kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kartech_linear_actuator_msgs__msg__ReportPollReq__fini(&array->data[i]);
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

kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence *
kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence__create(size_t size)
{
  kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence * array = (kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence *)malloc(sizeof(kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence__destroy(kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence * array)
{
  if (array) {
    kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence__fini(array);
  }
  free(array);
}

bool
kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence__are_equal(const kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence * lhs, const kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kartech_linear_actuator_msgs__msg__ReportPollReq__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence__copy(
  const kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence * input,
  kartech_linear_actuator_msgs__msg__ReportPollReq__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kartech_linear_actuator_msgs__msg__ReportPollReq);
    kartech_linear_actuator_msgs__msg__ReportPollReq * data =
      (kartech_linear_actuator_msgs__msg__ReportPollReq *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kartech_linear_actuator_msgs__msg__ReportPollReq__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          kartech_linear_actuator_msgs__msg__ReportPollReq__fini(&data[i]);
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
    if (!kartech_linear_actuator_msgs__msg__ReportPollReq__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
