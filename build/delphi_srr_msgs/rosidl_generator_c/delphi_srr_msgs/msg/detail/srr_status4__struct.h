// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_srr_msgs:msg/SrrStatus4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__STRUCT_H_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__STRUCT_H_

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

// Struct defined in msg/SrrStatus4 in the package delphi_srr_msgs.
typedef struct delphi_srr_msgs__msg__SrrStatus4
{
  std_msgs__msg__Header header;
  uint16_t can_tx_sw_version_host;
  uint8_t can_tx_path_id_blis_ignore;
  uint8_t can_tx_path_id_blis;
  float can_tx_angle_misalignment;
  float can_tx_auto_align_angle;
} delphi_srr_msgs__msg__SrrStatus4;

// Struct for a sequence of delphi_srr_msgs__msg__SrrStatus4.
typedef struct delphi_srr_msgs__msg__SrrStatus4__Sequence
{
  delphi_srr_msgs__msg__SrrStatus4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_srr_msgs__msg__SrrStatus4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__STRUCT_H_
