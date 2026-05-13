// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/CameraImage.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/camera_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `mounting_position`
#include "ibeo_msgs/msg/detail/mounting_position_f__functions.h"
// Member `image_buffer`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ibeo_msgs__msg__CameraImage__init(ibeo_msgs__msg__CameraImage * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ibeo_msgs__msg__CameraImage__fini(msg);
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__init(&msg->ibeo_header)) {
    ibeo_msgs__msg__CameraImage__fini(msg);
    return false;
  }
  // image_format
  // us_since_power_on
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    ibeo_msgs__msg__CameraImage__fini(msg);
    return false;
  }
  // device_id
  // mounting_position
  if (!ibeo_msgs__msg__MountingPositionF__init(&msg->mounting_position)) {
    ibeo_msgs__msg__CameraImage__fini(msg);
    return false;
  }
  // horizontal_opening_angle
  // vertical_opening_angle
  // image_width
  // image_height
  // compressed_size
  // image_buffer
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->image_buffer, 0)) {
    ibeo_msgs__msg__CameraImage__fini(msg);
    return false;
  }
  return true;
}

void
ibeo_msgs__msg__CameraImage__fini(ibeo_msgs__msg__CameraImage * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ibeo_header
  ibeo_msgs__msg__IbeoDataHeader__fini(&msg->ibeo_header);
  // image_format
  // us_since_power_on
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // device_id
  // mounting_position
  ibeo_msgs__msg__MountingPositionF__fini(&msg->mounting_position);
  // horizontal_opening_angle
  // vertical_opening_angle
  // image_width
  // image_height
  // compressed_size
  // image_buffer
  rosidl_runtime_c__uint8__Sequence__fini(&msg->image_buffer);
}

bool
ibeo_msgs__msg__CameraImage__are_equal(const ibeo_msgs__msg__CameraImage * lhs, const ibeo_msgs__msg__CameraImage * rhs)
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
  // image_format
  if (lhs->image_format != rhs->image_format) {
    return false;
  }
  // us_since_power_on
  if (lhs->us_since_power_on != rhs->us_since_power_on) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // mounting_position
  if (!ibeo_msgs__msg__MountingPositionF__are_equal(
      &(lhs->mounting_position), &(rhs->mounting_position)))
  {
    return false;
  }
  // horizontal_opening_angle
  if (lhs->horizontal_opening_angle != rhs->horizontal_opening_angle) {
    return false;
  }
  // vertical_opening_angle
  if (lhs->vertical_opening_angle != rhs->vertical_opening_angle) {
    return false;
  }
  // image_width
  if (lhs->image_width != rhs->image_width) {
    return false;
  }
  // image_height
  if (lhs->image_height != rhs->image_height) {
    return false;
  }
  // compressed_size
  if (lhs->compressed_size != rhs->compressed_size) {
    return false;
  }
  // image_buffer
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->image_buffer), &(rhs->image_buffer)))
  {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__CameraImage__copy(
  const ibeo_msgs__msg__CameraImage * input,
  ibeo_msgs__msg__CameraImage * output)
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
  // image_format
  output->image_format = input->image_format;
  // us_since_power_on
  output->us_since_power_on = input->us_since_power_on;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // device_id
  output->device_id = input->device_id;
  // mounting_position
  if (!ibeo_msgs__msg__MountingPositionF__copy(
      &(input->mounting_position), &(output->mounting_position)))
  {
    return false;
  }
  // horizontal_opening_angle
  output->horizontal_opening_angle = input->horizontal_opening_angle;
  // vertical_opening_angle
  output->vertical_opening_angle = input->vertical_opening_angle;
  // image_width
  output->image_width = input->image_width;
  // image_height
  output->image_height = input->image_height;
  // compressed_size
  output->compressed_size = input->compressed_size;
  // image_buffer
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->image_buffer), &(output->image_buffer)))
  {
    return false;
  }
  return true;
}

ibeo_msgs__msg__CameraImage *
ibeo_msgs__msg__CameraImage__create()
{
  ibeo_msgs__msg__CameraImage * msg = (ibeo_msgs__msg__CameraImage *)malloc(sizeof(ibeo_msgs__msg__CameraImage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__CameraImage));
  bool success = ibeo_msgs__msg__CameraImage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__CameraImage__destroy(ibeo_msgs__msg__CameraImage * msg)
{
  if (msg) {
    ibeo_msgs__msg__CameraImage__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__CameraImage__Sequence__init(ibeo_msgs__msg__CameraImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__CameraImage * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__CameraImage *)calloc(size, sizeof(ibeo_msgs__msg__CameraImage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__CameraImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__CameraImage__fini(&data[i - 1]);
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
ibeo_msgs__msg__CameraImage__Sequence__fini(ibeo_msgs__msg__CameraImage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__CameraImage__fini(&array->data[i]);
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

ibeo_msgs__msg__CameraImage__Sequence *
ibeo_msgs__msg__CameraImage__Sequence__create(size_t size)
{
  ibeo_msgs__msg__CameraImage__Sequence * array = (ibeo_msgs__msg__CameraImage__Sequence *)malloc(sizeof(ibeo_msgs__msg__CameraImage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__CameraImage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__CameraImage__Sequence__destroy(ibeo_msgs__msg__CameraImage__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__CameraImage__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__CameraImage__Sequence__are_equal(const ibeo_msgs__msg__CameraImage__Sequence * lhs, const ibeo_msgs__msg__CameraImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__CameraImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__CameraImage__Sequence__copy(
  const ibeo_msgs__msg__CameraImage__Sequence * input,
  ibeo_msgs__msg__CameraImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__CameraImage);
    ibeo_msgs__msg__CameraImage * data =
      (ibeo_msgs__msg__CameraImage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__CameraImage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__CameraImage__fini(&data[i]);
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
    if (!ibeo_msgs__msg__CameraImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
