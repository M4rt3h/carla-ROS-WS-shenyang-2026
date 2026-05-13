// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrStatusCanVersion.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_CAN_VERSION__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_CAN_VERSION__STRUCT_H_

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

// Struct defined in msg/MrrStatusCanVersion in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrStatusCanVersion
{
  std_msgs__msg__Header header;
  uint16_t can_usc_section_compatibility;
  uint8_t can_pcan_minor_mrr;
  uint8_t can_pcan_major_mrr;
} delphi_mrr_msgs__msg__MrrStatusCanVersion;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrStatusCanVersion.
typedef struct delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence
{
  delphi_mrr_msgs__msg__MrrStatusCanVersion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrStatusCanVersion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_CAN_VERSION__STRUCT_H_
