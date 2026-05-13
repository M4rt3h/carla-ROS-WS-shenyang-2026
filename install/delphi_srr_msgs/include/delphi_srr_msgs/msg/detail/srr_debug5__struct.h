// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_srr_msgs:msg/SrrDebug5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG5__STRUCT_H_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG5__STRUCT_H_

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

// Struct defined in msg/SrrDebug5 in the package delphi_srr_msgs.
typedef struct delphi_srr_msgs__msg__SrrDebug5
{
  std_msgs__msg__Header header;
  uint16_t can_tx_align_updates;
} delphi_srr_msgs__msg__SrrDebug5;

// Struct for a sequence of delphi_srr_msgs__msg__SrrDebug5.
typedef struct delphi_srr_msgs__msg__SrrDebug5__Sequence
{
  delphi_srr_msgs__msg__SrrDebug5 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_srr_msgs__msg__SrrDebug5__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG5__STRUCT_H_
