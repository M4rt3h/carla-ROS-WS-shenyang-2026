// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrStatusSerialNumber.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SERIAL_NUMBER__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SERIAL_NUMBER__STRUCT_H_

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

// Struct defined in msg/MrrStatusSerialNumber in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrStatusSerialNumber
{
  std_msgs__msg__Header header;
  uint16_t can_sequence_number;
  uint64_t can_serial_number;
} delphi_mrr_msgs__msg__MrrStatusSerialNumber;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrStatusSerialNumber.
typedef struct delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence
{
  delphi_mrr_msgs__msg__MrrStatusSerialNumber * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrStatusSerialNumber__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SERIAL_NUMBER__STRUCT_H_
