// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrHeaderInformationDetections.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_INFORMATION_DETECTIONS__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_INFORMATION_DETECTIONS__STRUCT_H_

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

// Struct defined in msg/MrrHeaderInformationDetections in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrHeaderInformationDetections
{
  std_msgs__msg__Header header;
  uint16_t can_align_updates_done;
  uint16_t can_scan_index;
  uint8_t can_number_of_det;
  uint8_t can_look_id;
  uint16_t can_look_index;
} delphi_mrr_msgs__msg__MrrHeaderInformationDetections;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrHeaderInformationDetections.
typedef struct delphi_mrr_msgs__msg__MrrHeaderInformationDetections__Sequence
{
  delphi_mrr_msgs__msg__MrrHeaderInformationDetections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrHeaderInformationDetections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_INFORMATION_DETECTIONS__STRUCT_H_
