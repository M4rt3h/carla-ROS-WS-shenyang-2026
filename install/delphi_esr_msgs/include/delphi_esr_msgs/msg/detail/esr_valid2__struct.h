// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_esr_msgs:msg/EsrValid2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__STRUCT_H_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__STRUCT_H_

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

// Struct defined in msg/EsrValid2 in the package delphi_esr_msgs.
typedef struct delphi_esr_msgs__msg__EsrValid2
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String canmsg;
  uint8_t mr_sn;
  float mr_range;
  float mr_range_rate;
  float mr_angle;
  int8_t mr_power;
} delphi_esr_msgs__msg__EsrValid2;

// Struct for a sequence of delphi_esr_msgs__msg__EsrValid2.
typedef struct delphi_esr_msgs__msg__EsrValid2__Sequence
{
  delphi_esr_msgs__msg__EsrValid2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_esr_msgs__msg__EsrValid2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VALID2__STRUCT_H_
