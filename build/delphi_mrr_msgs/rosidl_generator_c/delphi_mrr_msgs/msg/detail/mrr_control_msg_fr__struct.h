// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgFR.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__STRUCT_H_

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

// Struct defined in msg/MrrControlMsgFR in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrControlMsgFR
{
  std_msgs__msg__Header header;
  uint8_t can_sensitivity_profile_select;
  uint16_t can_stop_frequency_frml;
  uint16_t can_stop_frequency_frll;
  float can_prp_factor_frml;
  float can_prp_factor_frll;
  uint8_t can_desired_sweep_bw_frml;
  uint8_t can_desired_sweep_bw_frll;
} delphi_mrr_msgs__msg__MrrControlMsgFR;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrControlMsgFR.
typedef struct delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence
{
  delphi_mrr_msgs__msg__MrrControlMsgFR * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrControlMsgFR__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__STRUCT_H_
