// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrHeaderAlignmentState.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__STRUCT_H_

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

// Struct defined in msg/MrrHeaderAlignmentState in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrHeaderAlignmentState
{
  std_msgs__msg__Header header;
  uint8_t can_auto_align_hangle_qf;
  uint8_t can_alignment_status;
  uint8_t can_alignment_state;
  float can_auto_align_hangle_ref;
  float can_auto_align_hangle;
} delphi_mrr_msgs__msg__MrrHeaderAlignmentState;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrHeaderAlignmentState.
typedef struct delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence
{
  delphi_mrr_msgs__msg__MrrHeaderAlignmentState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrHeaderAlignmentState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__STRUCT_H_
