// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/ScanPoint2208.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_point2208__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ibeo_msgs__msg__ScanPoint2208__init(ibeo_msgs__msg__ScanPoint2208 * msg)
{
  if (!msg) {
    return false;
  }
  // echo
  // layer
  // transparent_point
  // clutter_atmospheric
  // ground
  // dirt
  // horizontal_angle
  // radial_distance
  // echo_pulse_width
  return true;
}

void
ibeo_msgs__msg__ScanPoint2208__fini(ibeo_msgs__msg__ScanPoint2208 * msg)
{
  if (!msg) {
    return;
  }
  // echo
  // layer
  // transparent_point
  // clutter_atmospheric
  // ground
  // dirt
  // horizontal_angle
  // radial_distance
  // echo_pulse_width
}

bool
ibeo_msgs__msg__ScanPoint2208__are_equal(const ibeo_msgs__msg__ScanPoint2208 * lhs, const ibeo_msgs__msg__ScanPoint2208 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // echo
  if (lhs->echo != rhs->echo) {
    return false;
  }
  // layer
  if (lhs->layer != rhs->layer) {
    return false;
  }
  // transparent_point
  if (lhs->transparent_point != rhs->transparent_point) {
    return false;
  }
  // clutter_atmospheric
  if (lhs->clutter_atmospheric != rhs->clutter_atmospheric) {
    return false;
  }
  // ground
  if (lhs->ground != rhs->ground) {
    return false;
  }
  // dirt
  if (lhs->dirt != rhs->dirt) {
    return false;
  }
  // horizontal_angle
  if (lhs->horizontal_angle != rhs->horizontal_angle) {
    return false;
  }
  // radial_distance
  if (lhs->radial_distance != rhs->radial_distance) {
    return false;
  }
  // echo_pulse_width
  if (lhs->echo_pulse_width != rhs->echo_pulse_width) {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__ScanPoint2208__copy(
  const ibeo_msgs__msg__ScanPoint2208 * input,
  ibeo_msgs__msg__ScanPoint2208 * output)
{
  if (!input || !output) {
    return false;
  }
  // echo
  output->echo = input->echo;
  // layer
  output->layer = input->layer;
  // transparent_point
  output->transparent_point = input->transparent_point;
  // clutter_atmospheric
  output->clutter_atmospheric = input->clutter_atmospheric;
  // ground
  output->ground = input->ground;
  // dirt
  output->dirt = input->dirt;
  // horizontal_angle
  output->horizontal_angle = input->horizontal_angle;
  // radial_distance
  output->radial_distance = input->radial_distance;
  // echo_pulse_width
  output->echo_pulse_width = input->echo_pulse_width;
  return true;
}

ibeo_msgs__msg__ScanPoint2208 *
ibeo_msgs__msg__ScanPoint2208__create()
{
  ibeo_msgs__msg__ScanPoint2208 * msg = (ibeo_msgs__msg__ScanPoint2208 *)malloc(sizeof(ibeo_msgs__msg__ScanPoint2208));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__ScanPoint2208));
  bool success = ibeo_msgs__msg__ScanPoint2208__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__ScanPoint2208__destroy(ibeo_msgs__msg__ScanPoint2208 * msg)
{
  if (msg) {
    ibeo_msgs__msg__ScanPoint2208__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__ScanPoint2208__Sequence__init(ibeo_msgs__msg__ScanPoint2208__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__ScanPoint2208 * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__ScanPoint2208 *)calloc(size, sizeof(ibeo_msgs__msg__ScanPoint2208));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__ScanPoint2208__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__ScanPoint2208__fini(&data[i - 1]);
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
ibeo_msgs__msg__ScanPoint2208__Sequence__fini(ibeo_msgs__msg__ScanPoint2208__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__ScanPoint2208__fini(&array->data[i]);
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

ibeo_msgs__msg__ScanPoint2208__Sequence *
ibeo_msgs__msg__ScanPoint2208__Sequence__create(size_t size)
{
  ibeo_msgs__msg__ScanPoint2208__Sequence * array = (ibeo_msgs__msg__ScanPoint2208__Sequence *)malloc(sizeof(ibeo_msgs__msg__ScanPoint2208__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__ScanPoint2208__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__ScanPoint2208__Sequence__destroy(ibeo_msgs__msg__ScanPoint2208__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__ScanPoint2208__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__ScanPoint2208__Sequence__are_equal(const ibeo_msgs__msg__ScanPoint2208__Sequence * lhs, const ibeo_msgs__msg__ScanPoint2208__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__ScanPoint2208__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__ScanPoint2208__Sequence__copy(
  const ibeo_msgs__msg__ScanPoint2208__Sequence * input,
  ibeo_msgs__msg__ScanPoint2208__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__ScanPoint2208);
    ibeo_msgs__msg__ScanPoint2208 * data =
      (ibeo_msgs__msg__ScanPoint2208 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__ScanPoint2208__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__ScanPoint2208__fini(&data[i]);
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
    if (!ibeo_msgs__msg__ScanPoint2208__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
