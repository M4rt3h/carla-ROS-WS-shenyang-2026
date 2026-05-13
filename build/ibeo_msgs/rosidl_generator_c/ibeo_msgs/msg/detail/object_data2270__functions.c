// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ObjectData2270.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object_data2270__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"
// Member `start_scan_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `object_list`
#include "ibeo_msgs/msg/detail/object2270__functions.h"

bool
ibeo_msgs__msg__ObjectData2270__init(ibeo_msgs__msg__ObjectData2270 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ibeo_msgs__msg__ObjectData2270__fini(msg);
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__init(&msg->ibeo_header)) {
    ibeo_msgs__msg__ObjectData2270__fini(msg);
    return false;
  }
  // start_scan_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->start_scan_timestamp)) {
    ibeo_msgs__msg__ObjectData2270__fini(msg);
    return false;
  }
  // object_list_number
  // number_of_objects
  // object_list
  if (!ibeo_msgs__msg__Object2270__Sequence__init(&msg->object_list, 0)) {
    ibeo_msgs__msg__ObjectData2270__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__ObjectData2270__fini(ibeo_msgs__msg__ObjectData2270 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ibeo_header
  ibeo_msgs__msg__IbeoDataHeader__fini(&msg->ibeo_header);
  // start_scan_timestamp
  builtin_interfaces__msg__Time__fini(&msg->start_scan_timestamp);
  // object_list_number
  // number_of_objects
  // object_list
  ibeo_msgs__msg__Object2270__Sequence__fini(&msg->object_list);
}

bool
ibeo_msgs__msg__ObjectData2270__are_equal(const ibeo_msgs__msg__ObjectData2270 * lhs, const ibeo_msgs__msg__ObjectData2270 * rhs)
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
  // start_scan_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start_scan_timestamp), &(rhs->start_scan_timestamp)))
  {
    return false;
  }
  // object_list_number
  if (lhs->object_list_number != rhs->object_list_number) {
    return false;
  }
  // number_of_objects
  if (lhs->number_of_objects != rhs->number_of_objects) {
    return false;
  }
  // object_list
  if (!ibeo_msgs__msg__Object2270__Sequence__are_equal(
      &(lhs->object_list), &(rhs->object_list)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ObjectData2270__copy(
  const ibeo_msgs__msg__ObjectData2270 * input,
  ibeo_msgs__msg__ObjectData2270 * output)
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
  // start_scan_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start_scan_timestamp), &(output->start_scan_timestamp)))
  {
    return false;
  }
  // object_list_number
  output->object_list_number = input->object_list_number;
  // number_of_objects
  output->number_of_objects = input->number_of_objects;
  // object_list
  if (!ibeo_msgs__msg__Object2270__Sequence__copy(
      &(input->object_list), &(output->object_list)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__ObjectData2270 *
ibeo_msgs__msg__ObjectData2270__create()
{
  ibeo_msgs__msg__ObjectData2270 * msg = (ibeo_msgs__msg__ObjectData2270 *)malloc(sizeof(ibeo_msgs__msg__ObjectData2270));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ObjectData2270));
  bool success = ibeo_msgs__msg__ObjectData2270__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ObjectData2270__destroy(ibeo_msgs__msg__ObjectData2270 * msg)
{
  if (msg) {
    ibeo_msgs__msg__ObjectData2270__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__ObjectData2270__Sequence__init(ibeo_msgs__msg__ObjectData2270__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__ObjectData2270 * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__ObjectData2270 *)calloc(size, sizeof(ibeo_msgs__msg__ObjectData2270));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ObjectData2270__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ObjectData2270__fini(&data[i - 1]);
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
ibeo_msgs__msg__ObjectData2270__Sequence__fini(ibeo_msgs__msg__ObjectData2270__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__ObjectData2270__fini(&array->data[i]);
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

ibeo_msgs__msg__ObjectData2270__Sequence *
ibeo_msgs__msg__ObjectData2270__Sequence__create(size_t size)
{
  ibeo_msgs__msg__ObjectData2270__Sequence * array = (ibeo_msgs__msg__ObjectData2270__Sequence *)malloc(sizeof(ibeo_msgs__msg__ObjectData2270__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ObjectData2270__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ObjectData2270__Sequence__destroy(ibeo_msgs__msg__ObjectData2270__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__ObjectData2270__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__ObjectData2270__Sequence__are_equal(const ibeo_msgs__msg__ObjectData2270__Sequence * lhs, const ibeo_msgs__msg__ObjectData2270__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ObjectData2270__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ObjectData2270__Sequence__copy(
  const ibeo_msgs__msg__ObjectData2270__Sequence * input,
  ibeo_msgs__msg__ObjectData2270__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ObjectData2270);
    ibeo_msgs__msg__ObjectData2270 * data =
      (ibeo_msgs__msg__ObjectData2270 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ObjectData2270__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ObjectData2270__fini(&data[i]);
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
    if (!ibeo_msgs__msg__ObjectData2270__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
