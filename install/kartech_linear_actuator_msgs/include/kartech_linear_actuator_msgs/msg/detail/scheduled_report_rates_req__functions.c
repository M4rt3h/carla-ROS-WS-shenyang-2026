// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from kartech_linear_actuator_msgs:msg/ScheduledReportRatesReq.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/scheduled_report_rates_req__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `index_1`
// Member `index_2`
#include "kartech_linear_actuator_msgs/msg/detail/report_index__functions.h"

bool
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__init(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__fini(msg);
    return false;
  }
  // confirm
  // index_1
  if (!kartech_linear_actuator_msgs__msg__ReportIndex__init(&msg->index_1)) {
    kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__fini(msg);
    return false;
  }
  // index_1_report_time
  // index_2
  if (!kartech_linear_actuator_msgs__msg__ReportIndex__init(&msg->index_2)) {
    kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__fini(msg);
    return false;
  }
  // index_2_report_time
  return true;
}

void
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__fini(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // confirm
  // index_1
  kartech_linear_actuator_msgs__msg__ReportIndex__fini(&msg->index_1);
  // index_1_report_time
  // index_2
  kartech_linear_actuator_msgs__msg__ReportIndex__fini(&msg->index_2);
  // index_2_report_time
}

bool
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__are_equal(const kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq * lhs, const kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq * rhs)
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
  // index_1
  if (!kartech_linear_actuator_msgs__msg__ReportIndex__are_equal(
      &(lhs->index_1), &(rhs->index_1)))
  {
    return false;
  }
  // index_1_report_time
  if (lhs->index_1_report_time != rhs->index_1_report_time) {
    return false;
  }
  // index_2
  if (!kartech_linear_actuator_msgs__msg__ReportIndex__are_equal(
      &(lhs->index_2), &(rhs->index_2)))
  {
    return false;
  }
  // index_2_report_time
  if (lhs->index_2_report_time != rhs->index_2_report_time) {
    return false;
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__copy(
  const kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq * input,
  kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq * output)
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
  // index_1
  if (!kartech_linear_actuator_msgs__msg__ReportIndex__copy(
      &(input->index_1), &(output->index_1)))
  {
    return false;
  }
  // index_1_report_time
  output->index_1_report_time = input->index_1_report_time;
  // index_2
  if (!kartech_linear_actuator_msgs__msg__ReportIndex__copy(
      &(input->index_2), &(output->index_2)))
  {
    return false;
  }
  // index_2_report_time
  output->index_2_report_time = input->index_2_report_time;
  return true;
}

kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq *
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__create()
{
  kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq * msg = (kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq *)malloc(sizeof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq));
  bool success = kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__destroy(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq * msg)
{
  if (msg) {
    kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__fini(msg);
  }
  free(msg);
}


bool
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence__init(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq * data = NULL;
  if (size) {
    data = (kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq *)calloc(size, sizeof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__fini(&data[i - 1]);
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
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence__fini(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__fini(&array->data[i]);
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

kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence *
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence__create(size_t size)
{
  kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence * array = (kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence *)malloc(sizeof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence__destroy(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence * array)
{
  if (array) {
    kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence__fini(array);
  }
  free(array);
}

bool
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence__are_equal(const kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence * lhs, const kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence__copy(
  const kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence * input,
  kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq);
    kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq * data =
      (kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__fini(&data[i]);
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
    if (!kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
