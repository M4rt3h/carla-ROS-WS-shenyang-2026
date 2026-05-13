// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_srr_msgs:msg/SrrStatus1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS1__STRUCT_H_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS1__STRUCT_H_

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

// Struct defined in msg/SrrStatus1 in the package delphi_srr_msgs.
typedef struct delphi_srr_msgs__msg__SrrStatus1
{
  std_msgs__msg__Header header;
  bool can_tx_look_type;
  uint32_t can_tx_dsp_timestamp;
  float can_tx_yaw_rate_calc;
  float can_tx_vehicle_speed_calc;
  uint16_t can_tx_scan_index;
  float can_tx_curvature;
} delphi_srr_msgs__msg__SrrStatus1;

// Struct for a sequence of delphi_srr_msgs__msg__SrrStatus1.
typedef struct delphi_srr_msgs__msg__SrrStatus1__Sequence
{
  delphi_srr_msgs__msg__SrrStatus1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_srr_msgs__msg__SrrStatus1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS1__STRUCT_H_
