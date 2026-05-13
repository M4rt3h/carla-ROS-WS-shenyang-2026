// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__STRUCT_H_

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

// Struct defined in msg/ActiveFaultLatched2 in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__ActiveFaultLatched2
{
  std_msgs__msg__Header header;
  bool ipma_pcan_data_range_check;
  bool ipma_pcan_missing_msg;
  bool vin_signal_compare_failure;
  bool module_not_configured_error;
  bool car_cfg_not_configured_error;
} delphi_mrr_msgs__msg__ActiveFaultLatched2;

// Struct for a sequence of delphi_mrr_msgs__msg__ActiveFaultLatched2.
typedef struct delphi_mrr_msgs__msg__ActiveFaultLatched2__Sequence
{
  delphi_mrr_msgs__msg__ActiveFaultLatched2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__ActiveFaultLatched2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__STRUCT_H_
