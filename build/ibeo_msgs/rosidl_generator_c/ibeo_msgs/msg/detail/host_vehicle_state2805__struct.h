// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/HostVehicleState2805.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__STRUCT_H_

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

// Struct defined in msg/HostVehicleState2805 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__HostVehicleState2805
{
  std_msgs__msg__Header header;
  ibeo_msgs__msg__IbeoDataHeader ibeo_header;
  builtin_interfaces__msg__Time timestamp;
  uint16_t scan_number;
  uint16_t error_flags;
  double longitudinal_velocity;
  double steering_wheel_angle;
  double front_wheel_angle;
  int32_t x_position;
  int32_t y_position;
  int16_t course_angle;
  uint16_t time_difference;
  int16_t x_difference;
  int16_t y_difference;
  int16_t heading_difference;
  int16_t current_yaw_rate;
} ibeo_msgs__msg__HostVehicleState2805;

// Struct for a sequence of ibeo_msgs__msg__HostVehicleState2805.
typedef struct ibeo_msgs__msg__HostVehicleState2805__Sequence
{
  ibeo_msgs__msg__HostVehicleState2805 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__HostVehicleState2805__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__HOST_VEHICLE_STATE2805__STRUCT_H_
