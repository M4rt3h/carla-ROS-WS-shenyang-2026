// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrStatus4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__STRUCT_H_

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
// Member 'canmsg'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/EsrStatus4 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrStatus4
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String canmsg;
  bool truck_target_det;
  bool lr_only_grating_lobe_det;
  bool sidelobe_blockage;
  bool partial_blockage;
  uint8_t mr_lr_mode;
  uint8_t rolling_count_3;
  uint8_t path_id_acc;
  uint8_t path_id_cmbb_move;
  uint8_t path_id_cmbb_stat;
  uint8_t path_id_fcw_move;
  uint8_t path_id_fcw_stat;
  float auto_align_angle;
  uint8_t path_id_acc_stat;
} delphi_esr_msgs__msg__EsrStatus4;

// Struct for a sequence of delphi_esr_msgs__msg__EsrStatus4.
typedef struct delphi_esr_msgs__msg__EsrStatus4__Sequence
{
  delphi_esr_msgs__msg__EsrStatus4 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrStatus4__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__STRUCT_H_
