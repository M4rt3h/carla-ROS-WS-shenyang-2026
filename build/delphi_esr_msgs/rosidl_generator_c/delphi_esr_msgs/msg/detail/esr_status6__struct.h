// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrStatus6.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__STRUCT_H_

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

// Struct defined in msg/EsrStatus6 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrStatus6
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String canmsg;
  uint8_t supply_1p8v_a2d;
  uint8_t supply_n5v_a2d;
  uint8_t wave_diff_a2d;
  uint8_t sw_version_dsp_3rd_byte;
  bool vertical_align_updated;
  uint8_t system_power_mode;
  bool found_target;
  bool recommend_unconverge;
  uint8_t factory_align_status_1;
  uint8_t factory_align_status_2;
  float factory_misalignment;
  uint8_t serv_align_updates_done;
  float vertical_misalignment;
} delphi_esr_msgs__msg__EsrStatus6;

// Struct for a sequence of delphi_esr_msgs__msg__EsrStatus6.
typedef struct delphi_esr_msgs__msg__EsrStatus6__Sequence
{
  delphi_esr_msgs__msg__EsrStatus6 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrStatus6__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__STRUCT_H_
