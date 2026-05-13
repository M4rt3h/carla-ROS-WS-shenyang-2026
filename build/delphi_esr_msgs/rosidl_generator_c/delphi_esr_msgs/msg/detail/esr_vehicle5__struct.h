// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrVehicle5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__STRUCT_H_

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

// Struct defined in msg/EsrVehicle5 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrVehicle5
{
  std_msgs__msg__Header header;
  int8_t oversteer_understeer;
  bool yaw_rate_bias_shift;
  float beamwidth_vert;
  float funnel_offset_left;
  float funnel_offset_right;
  float cw_blockage_threshold;
  uint16_t distance_rear_axle;
  uint16_t wheelbase;
  float steering_gear_ratio;
} delphi_esr_msgs__msg__EsrVehicle5;

// Struct for a sequence of delphi_esr_msgs__msg__EsrVehicle5.
typedef struct delphi_esr_msgs__msg__EsrVehicle5__Sequence
{
  delphi_esr_msgs__msg__EsrVehicle5 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrVehicle5__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__STRUCT_H_
