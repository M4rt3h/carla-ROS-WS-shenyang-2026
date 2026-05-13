// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrStatusSwVersion.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__STRUCT_H_

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

// Struct defined in msg/MrrStatusSwVersion in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrStatusSwVersion
{
  std_msgs__msg__Header header;
  uint8_t can_pbl_field_revision;
  uint8_t can_pbl_promote_revision;
  uint8_t can_sw_field_revision;
  uint8_t can_sw_promote_revision;
  uint8_t can_sw_release_revision;
  uint8_t can_pbl_release_revision;
} delphi_mrr_msgs__msg__MrrStatusSwVersion;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrStatusSwVersion.
typedef struct delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence
{
  delphi_mrr_msgs__msg__MrrStatusSwVersion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrStatusSwVersion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__STRUCT_H_
