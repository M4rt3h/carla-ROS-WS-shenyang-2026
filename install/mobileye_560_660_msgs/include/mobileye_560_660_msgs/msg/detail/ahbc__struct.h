// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobileye_560_660_msgs:msg/Ahbc.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC__STRUCT_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HIGH_LOW_BEAM_DECISION_NO_RECOMMENDATION'.
enum
{
  mobileye_560_660_msgs__msg__Ahbc__HIGH_LOW_BEAM_DECISION_NO_RECOMMENDATION = 0
};

/// Constant 'HIGH_LOW_BEAM_DECISION_RECOMMENDATION_OFF'.
enum
{
  mobileye_560_660_msgs__msg__Ahbc__HIGH_LOW_BEAM_DECISION_RECOMMENDATION_OFF = 1
};

/// Constant 'HIGH_LOW_BEAM_DECISION_RECOMMENDATION_ON'.
enum
{
  mobileye_560_660_msgs__msg__Ahbc__HIGH_LOW_BEAM_DECISION_RECOMMENDATION_ON = 2
};

/// Constant 'HIGH_LOW_BEAM_DECISION_INVALID'.
enum
{
  mobileye_560_660_msgs__msg__Ahbc__HIGH_LOW_BEAM_DECISION_INVALID = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/Ahbc in the package mobileye_560_660_msgs.
typedef struct mobileye_560_660_msgs__msg__Ahbc
{
  std_msgs__msg__Header header;
  uint8_t high_low_beam_decision;
  uint16_t reasons_for_switch_to_low_beam;
} mobileye_560_660_msgs__msg__Ahbc;

// Struct for a sequence of mobileye_560_660_msgs__msg__Ahbc.
typedef struct mobileye_560_660_msgs__msg__Ahbc__Sequence
{
  mobileye_560_660_msgs__msg__Ahbc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobileye_560_660_msgs__msg__Ahbc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC__STRUCT_H_
