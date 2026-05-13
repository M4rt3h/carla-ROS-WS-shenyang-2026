// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/HostVehicleState2806.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2806__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2806__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/HostVehicleState2806 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__HostVehicleState2806
{
  std_msgs__msg__Header header;
  ibeo_msgs__msg__IbeoDataHeader ibeo_header;
  builtin_interfaces__msg__Time timestamp;
  int32_t distance_x;
  int32_t distance_y;
  float course_angle;
  float longitudinal_velocity;
  float yaw_rate;
  float steering_wheel_angle;
  float cross_acceleration;
  float front_wheel_angle;
  float vehicle_width;
  float vehicle_front_to_front_axle;
  float rear_axle_to_front_axle;
  float rear_axle_to_vehicle_rear;
  float steer_ratio_poly_0;
  float steer_ratio_poly_1;
  float steer_ratio_poly_2;
  float steer_ratio_poly_3;
} ibeo_msgs__msg__HostVehicleState2806;

// Struct for a sequence of ibeo_msgs__msg__HostVehicleState2806.
typedef struct ibeo_msgs__msg__HostVehicleState2806__Sequence
{
  ibeo_msgs__msg__HostVehicleState2806 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__HostVehicleState2806__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2806__STRUCT_H_
