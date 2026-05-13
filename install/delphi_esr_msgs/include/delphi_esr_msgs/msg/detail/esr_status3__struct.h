// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrStatus3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__STRUCT_H_

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
// Member 'sw_version_host'
// Member 'serial_num'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/EsrStatus3 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrStatus3
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String canmsg;
  uint8_t interface_version;
  uint8_t hw_version;
  rosidl_runtime_c__String sw_version_host;
  rosidl_runtime_c__String serial_num;
  uint8_t sw_version_pld;
} delphi_esr_msgs__msg__EsrStatus3;

// Struct for a sequence of delphi_esr_msgs__msg__EsrStatus3.
typedef struct delphi_esr_msgs__msg__EsrStatus3__Sequence
{
  delphi_esr_msgs__msg__EsrStatus3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrStatus3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS3__STRUCT_H_
