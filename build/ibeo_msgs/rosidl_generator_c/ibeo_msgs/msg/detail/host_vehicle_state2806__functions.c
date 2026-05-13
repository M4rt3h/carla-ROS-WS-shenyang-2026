// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ibeo_msgs:msg/HostVehicleState2806.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/host_vehicle_state2806__functions.h"

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

bool
ibeo_msgs__msg__HostVehicleState2806__init(ibeo_msgs__msg__HostVehicleState2806 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ibeo_msgs__msg__HostVehicleState2806__fini(msg);
    return false;
  }
  // ibeo_header
  if (!ibeo_msgs__msg__IbeoDataHeader__init(&msg->ibeo_header)) {
    ibeo_msgs__msg__HostVehicleState2806__fini(msg);
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    ibeo_msgs__msg__HostVehicleState2806__fini(msg);
    return false;
  }
  // distance_x
  // distance_y
  // course_angle
  // longitudinal_velocity
  // yaw_rate
  // steering_wheel_angle
  // cross_acceleration
  // front_wheel_angle
  // vehicle_width
  // vehicle_front_to_front_axle
  // rear_axle_to_front_axle
  // rear_axle_to_vehicle_rear
  // steer_ratio_poly_0
  // steer_ratio_poly_1
  // steer_ratio_poly_2
  // steer_ratio_poly_3
  return true;
}

void
ibeo_msgs__msg__HostVehicleState2806__fini(ibeo_msgs__msg__HostVehicleState2806 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // ibeo_header
  ibeo_msgs__msg__IbeoDataHeader__fini(&msg->ibeo_header);
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // distance_x
  // distance_y
  // course_angle
  // longitudinal_velocity
  // yaw_rate
  // steering_wheel_angle
  // cross_acceleration
  // front_wheel_angle
  // vehicle_width
  // vehicle_front_to_front_axle
  // rear_axle_to_front_axle
  // rear_axle_to_vehicle_rear
  // steer_ratio_poly_0
  // steer_ratio_poly_1
  // steer_ratio_poly_2
  // steer_ratio_poly_3
}

bool
ibeo_msgs__msg__HostVehicleState2806__are_equal(const ibeo_msgs__msg__HostVehicleState2806 * lhs, const ibeo_msgs__msg__HostVehicleState2806 * rhs)
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
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // distance_x
  if (lhs->distance_x != rhs->distance_x) {
    return false;
  }
  // distance_y
  if (lhs->distance_y != rhs->distance_y) {
    return false;
  }
  // course_angle
  if (lhs->course_angle != rhs->course_angle) {
    return false;
  }
  // longitudinal_velocity
  if (lhs->longitudinal_velocity != rhs->longitudinal_velocity) {
    return false;
  }
  // yaw_rate
  if (lhs->yaw_rate != rhs->yaw_rate) {
    return false;
  }
  // steering_wheel_angle
  if (lhs->steering_wheel_angle != rhs->steering_wheel_angle) {
    return false;
  }
  // cross_acceleration
  if (lhs->cross_acceleration != rhs->cross_acceleration) {
    return false;
  }
  // front_wheel_angle
  if (lhs->front_wheel_angle != rhs->front_wheel_angle) {
    return false;
  }
  // vehicle_width
  if (lhs->vehicle_width != rhs->vehicle_width) {
    return false;
  }
  // vehicle_front_to_front_axle
  if (lhs->vehicle_front_to_front_axle != rhs->vehicle_front_to_front_axle) {
    return false;
  }
  // rear_axle_to_front_axle
  if (lhs->rear_axle_to_front_axle != rhs->rear_axle_to_front_axle) {
    return false;
  }
  // rear_axle_to_vehicle_rear
  if (lhs->rear_axle_to_vehicle_rear != rhs->rear_axle_to_vehicle_rear) {
    return false;
  }
  // steer_ratio_poly_0
  if (lhs->steer_ratio_poly_0 != rhs->steer_ratio_poly_0) {
    return false;
  }
  // steer_ratio_poly_1
  if (lhs->steer_ratio_poly_1 != rhs->steer_ratio_poly_1) {
    return false;
  }
  // steer_ratio_poly_2
  if (lhs->steer_ratio_poly_2 != rhs->steer_ratio_poly_2) {
    return false;
  }
  // steer_ratio_poly_3
  if (lhs->steer_ratio_poly_3 != rhs->steer_ratio_poly_3) {
    return false;
  }
  return true;
}

bool
ibeo_msgs__msg__HostVehicleState2806__copy(
  const ibeo_msgs__msg__HostVehicleState2806 * input,
  ibeo_msgs__msg__HostVehicleState2806 * output)
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
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // distance_x
  output->distance_x = input->distance_x;
  // distance_y
  output->distance_y = input->distance_y;
  // course_angle
  output->course_angle = input->course_angle;
  // longitudinal_velocity
  output->longitudinal_velocity = input->longitudinal_velocity;
  // yaw_rate
  output->yaw_rate = input->yaw_rate;
  // steering_wheel_angle
  output->steering_wheel_angle = input->steering_wheel_angle;
  // cross_acceleration
  output->cross_acceleration = input->cross_acceleration;
  // front_wheel_angle
  output->front_wheel_angle = input->front_wheel_angle;
  // vehicle_width
  output->vehicle_width = input->vehicle_width;
  // vehicle_front_to_front_axle
  output->vehicle_front_to_front_axle = input->vehicle_front_to_front_axle;
  // rear_axle_to_front_axle
  output->rear_axle_to_front_axle = input->rear_axle_to_front_axle;
  // rear_axle_to_vehicle_rear
  output->rear_axle_to_vehicle_rear = input->rear_axle_to_vehicle_rear;
  // steer_ratio_poly_0
  output->steer_ratio_poly_0 = input->steer_ratio_poly_0;
  // steer_ratio_poly_1
  output->steer_ratio_poly_1 = input->steer_ratio_poly_1;
  // steer_ratio_poly_2
  output->steer_ratio_poly_2 = input->steer_ratio_poly_2;
  // steer_ratio_poly_3
  output->steer_ratio_poly_3 = input->steer_ratio_poly_3;
  return true;
}

ibeo_msgs__msg__HostVehicleState2806 *
ibeo_msgs__msg__HostVehicleState2806__create()
{
  ibeo_msgs__msg__HostVehicleState2806 * msg = (ibeo_msgs__msg__HostVehicleState2806 *)malloc(sizeof(ibeo_msgs__msg__HostVehicleState2806));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ibeo_msgs__msg__HostVehicleState2806));
  bool success = ibeo_msgs__msg__HostVehicleState2806__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ibeo_msgs__msg__HostVehicleState2806__destroy(ibeo_msgs__msg__HostVehicleState2806 * msg)
{
  if (msg) {
    ibeo_msgs__msg__HostVehicleState2806__fini(msg);
  }
  free(msg);
}


bool
ibeo_msgs__msg__HostVehicleState2806__Sequence__init(ibeo_msgs__msg__HostVehicleState2806__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ibeo_msgs__msg__HostVehicleState2806 * data = NULL;
  if (size) {
    data = (ibeo_msgs__msg__HostVehicleState2806 *)calloc(size, sizeof(ibeo_msgs__msg__HostVehicleState2806));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ibeo_msgs__msg__HostVehicleState2806__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ibeo_msgs__msg__HostVehicleState2806__fini(&data[i - 1]);
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
ibeo_msgs__msg__HostVehicleState2806__Sequence__fini(ibeo_msgs__msg__HostVehicleState2806__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ibeo_msgs__msg__HostVehicleState2806__fini(&array->data[i]);
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

ibeo_msgs__msg__HostVehicleState2806__Sequence *
ibeo_msgs__msg__HostVehicleState2806__Sequence__create(size_t size)
{
  ibeo_msgs__msg__HostVehicleState2806__Sequence * array = (ibeo_msgs__msg__HostVehicleState2806__Sequence *)malloc(sizeof(ibeo_msgs__msg__HostVehicleState2806__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ibeo_msgs__msg__HostVehicleState2806__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ibeo_msgs__msg__HostVehicleState2806__Sequence__destroy(ibeo_msgs__msg__HostVehicleState2806__Sequence * array)
{
  if (array) {
    ibeo_msgs__msg__HostVehicleState2806__Sequence__fini(array);
  }
  free(array);
}

bool
ibeo_msgs__msg__HostVehicleState2806__Sequence__are_equal(const ibeo_msgs__msg__HostVehicleState2806__Sequence * lhs, const ibeo_msgs__msg__HostVehicleState2806__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ibeo_msgs__msg__HostVehicleState2806__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ibeo_msgs__msg__HostVehicleState2806__Sequence__copy(
  const ibeo_msgs__msg__HostVehicleState2806__Sequence * input,
  ibeo_msgs__msg__HostVehicleState2806__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ibeo_msgs__msg__HostVehicleState2806);
    ibeo_msgs__msg__HostVehicleState2806 * data =
      (ibeo_msgs__msg__HostVehicleState2806 *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ibeo_msgs__msg__HostVehicleState2806__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ibeo_msgs__msg__HostVehicleState2806__fini(&data[i]);
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
    if (!ibeo_msgs__msg__HostVehicleState2806__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
