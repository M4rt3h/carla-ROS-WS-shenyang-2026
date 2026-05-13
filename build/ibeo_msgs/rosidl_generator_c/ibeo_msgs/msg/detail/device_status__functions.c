// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/device_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"

bool
ibeo_msgs__msg__DeviceStatus__init(ibeo_msgs__msg__DeviceStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ibeo_msgs__msg__DeviceStatus__fini(msg);
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__init(&msg->ibeo_header)) {
    ibeo_msgs__msg__DeviceStatus__fini(msg);
    return false;
  }
  // scanner_type
  // sensor_temperature
  // frequency
  return true;
}

void
ibeo_msgs__msg__DeviceStatus__fini(ibeo_msgs__msg__DeviceStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ibeo_header
  ibeo_msgs__msg__IbeoDataHeader__fini(&msg->ibeo_header);
  // scanner_type
  // sensor_temperature
  // frequency
}

bool
ibeo_msgs__msg__DeviceStatus__are_equal(const ibeo_msgs__msg__DeviceStatus * lhs, const ibeo_msgs__msg__DeviceStatus * rhs)
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
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__are_equal(
      &(lhs->ibeo_header), &(rhs->ibeo_header)))
  {
    return false;
  }
  // scanner_type
  if (lhs->scanner_type != rhs->scanner_type) {
    return false;
  }
  // sensor_temperature
  if (lhs->sensor_temperature != rhs->sensor_temperature) {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__DeviceStatus__copy(
  const ibeo_msgs__msg__DeviceStatus * input,
  ibeo_msgs__msg__DeviceStatus * output)
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
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__copy(
      &(input->ibeo_header), &(output->ibeo_header)))
  {
    return false;
  }
  // scanner_type
  output->scanner_type = input->scanner_type;
  // sensor_temperature
  output->sensor_temperature = input->sensor_temperature;
  // frequency
  output->frequency = input->frequency;
  return true;
}

ibeo_msgs__msg__DeviceStatus *
ibeo_msgs__msg__DeviceStatus__create()
{
  ibeo_msgs__msg__DeviceStatus * msg = (ibeo_msgs__msg__DeviceStatus *)malloc(sizeof(ibeo_msgs__msg__DeviceStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__DeviceStatus));
  bool success = ibeo_msgs__msg__DeviceStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__DeviceStatus__destroy(ibeo_msgs__msg__DeviceStatus * msg)
{
  if (msg) {
    ibeo_msgs__msg__DeviceStatus__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__DeviceStatus__Sequence__init(ibeo_msgs__msg__DeviceStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__DeviceStatus * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__DeviceStatus *)calloc(size, sizeof(ibeo_msgs__msg__DeviceStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__DeviceStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__DeviceStatus__fini(&data[i - 1]);
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
ibeo_msgs__msg__DeviceStatus__Sequence__fini(ibeo_msgs__msg__DeviceStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__DeviceStatus__fini(&array->data[i]);
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

ibeo_msgs__msg__DeviceStatus__Sequence *
ibeo_msgs__msg__DeviceStatus__Sequence__create(size_t size)
{
  ibeo_msgs__msg__DeviceStatus__Sequence * array = (ibeo_msgs__msg__DeviceStatus__Sequence *)malloc(sizeof(ibeo_msgs__msg__DeviceStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__DeviceStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__DeviceStatus__Sequence__destroy(ibeo_msgs__msg__DeviceStatus__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__DeviceStatus__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__DeviceStatus__Sequence__are_equal(const ibeo_msgs__msg__DeviceStatus__Sequence * lhs, const ibeo_msgs__msg__DeviceStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__DeviceStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__DeviceStatus__Sequence__copy(
  const ibeo_msgs__msg__DeviceStatus__Sequence * input,
  ibeo_msgs__msg__DeviceStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__DeviceStatus);
    ibeo_msgs__msg__DeviceStatus * data =
      (ibeo_msgs__msg__DeviceStatus *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__DeviceStatus__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__DeviceStatus__fini(&data[i]);
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
    if (!ibeo_msgs__msg__DeviceStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
