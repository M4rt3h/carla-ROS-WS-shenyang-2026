// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrVehicle1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__STRUCT_H_

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

// Struct defined in msg/EsrVehicle1 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrVehicle1
{
  std_msgs__msg__Header header;
  float vehicle_speed;
  bool vehicle_speed_direction;
  float yaw_rate;
  bool yaw_rate_validity;
  bool steering_angle_rate_sign;
  int16_t radius_curvature;
  bool steering_angle_validity;
  bool steering_angle_sign;
  uint16_t steering_angle;
  uint16_t steering_angle_rate;
} delphi_esr_msgs__msg__EsrVehicle1;

// Struct for a sequence of delphi_esr_msgs__msg__EsrVehicle1.
typedef struct delphi_esr_msgs__msg__EsrVehicle1__Sequence
{
  delphi_esr_msgs__msg__EsrVehicle1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrVehicle1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE1__STRUCT_H_
