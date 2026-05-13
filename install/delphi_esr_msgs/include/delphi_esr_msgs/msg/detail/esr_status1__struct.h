// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrStatus1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__STRUCT_H_

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

// Struct defined in msg/EsrStatus1 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrStatus1
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String canmsg;
  uint8_t rolling_count_1;
  uint8_t dsp_timestamp;
  bool comm_error;
  int16_t radius_curvature_calc;
  uint16_t scan_index;
  float yaw_rate_calc;
  float vehicle_speed_calc;
} delphi_esr_msgs__msg__EsrStatus1;

// Struct for a sequence of delphi_esr_msgs__msg__EsrStatus1.
typedef struct delphi_esr_msgs__msg__EsrStatus1__Sequence
{
  delphi_esr_msgs__msg__EsrStatus1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrStatus1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__STRUCT_H_
