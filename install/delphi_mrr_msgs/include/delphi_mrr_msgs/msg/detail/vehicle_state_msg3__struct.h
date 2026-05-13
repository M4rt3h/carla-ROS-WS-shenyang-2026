// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__STRUCT_H_

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

// Struct defined in msg/VehicleStateMsg3 in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__VehicleStateMsg3
{
  std_msgs__msg__Header header;
  bool yaw_rate_reference_valid;
  float yaw_rate_reference;
  uint8_t can_veh_long_accel_qf;
  float can_veh_long_accel;
} delphi_mrr_msgs__msg__VehicleStateMsg3;

// Struct for a sequence of delphi_mrr_msgs__msg__VehicleStateMsg3.
typedef struct delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence
{
  delphi_mrr_msgs__msg__VehicleStateMsg3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__VehicleStateMsg3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__STRUCT_H_
