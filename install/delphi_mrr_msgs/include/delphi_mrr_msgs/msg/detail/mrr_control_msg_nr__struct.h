// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgNR.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__STRUCT_H_

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

// Struct defined in msg/MrrControlMsgNR in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrControlMsgNR
{
  std_msgs__msg__Header header;
  uint16_t can_stop_frequency_nrml;
  uint16_t can_prp_factor_nrml;
  uint8_t can_desired_sweep_bw_nrml;
  bool can_radiation_ctrl;
  uint16_t can_stop_frequency_nrll;
  uint16_t can_prp_factor_nrll;
  uint8_t can_desired_sweep_bw_nrll;
} delphi_mrr_msgs__msg__MrrControlMsgNR;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrControlMsgNR.
typedef struct delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence
{
  delphi_mrr_msgs__msg__MrrControlMsgNR * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrControlMsgNR__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__STRUCT_H_
