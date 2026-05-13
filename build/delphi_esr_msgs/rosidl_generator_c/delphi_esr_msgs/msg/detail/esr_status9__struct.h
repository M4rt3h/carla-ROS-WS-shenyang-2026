// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrStatus9.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__STRUCT_H_

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

// Struct defined in msg/EsrStatus9 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrStatus9
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String canmsg;
  uint16_t avg_pwr_cwblkg;
  float sideslip_angle;
  uint8_t serial_num_3rd_byte;
  uint8_t water_spray_target_id;
  float filtered_xohp_acc_cipv;
  uint8_t path_id_acc_2;
  uint8_t path_id_acc_3;
} delphi_esr_msgs__msg__EsrStatus9;

// Struct for a sequence of delphi_esr_msgs__msg__EsrStatus9.
typedef struct delphi_esr_msgs__msg__EsrStatus9__Sequence
{
  delphi_esr_msgs__msg__EsrStatus9 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrStatus9__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__STRUCT_H_
