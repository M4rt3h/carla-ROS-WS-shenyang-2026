// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from delphi_mrr_msgs:msg/MrrStatusTempVolt.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__STRUCT_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__STRUCT_H_

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

// Struct defined in msg/MrrStatusTempVolt in the package delphi_mrr_msgs.
typedef struct delphi_mrr_msgs__msg__MrrStatusTempVolt
{
  std_msgs__msg__Header header;
  float can_batt_volts;
  float can_1_25_v;
  float can_5_v;
  float can_3_3_v_raw;
  float can_3_3_v_dac;
  int8_t can_mmic_temp1;
  int8_t can_processor_thermistor;
  int8_t can_processor_temp1;
} delphi_mrr_msgs__msg__MrrStatusTempVolt;

// Struct for a sequence of delphi_mrr_msgs__msg__MrrStatusTempVolt.
typedef struct delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence
{
  delphi_mrr_msgs__msg__MrrStatusTempVolt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__STRUCT_H_
