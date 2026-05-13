// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobileye_560_660_msgs:msg/AwsDisplay.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__STRUCT_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SOUND_SILENT'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__SOUND_SILENT = 0
};

/// Constant 'SOUND_LDWL'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__SOUND_LDWL = 1
};

/// Constant 'SOUND_LDWR'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__SOUND_LDWR = 2
};

/// Constant 'SOUND_FAR_HW'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__SOUND_FAR_HW = 3
};

/// Constant 'SOUND_NEAR_HW'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__SOUND_NEAR_HW = 4
};

/// Constant 'SOUND_SOFT_FCW'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__SOUND_SOFT_FCW = 5
};

/// Constant 'SOUND_HARD_FCW'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__SOUND_HARD_FCW = 6
};

/// Constant 'SOUND_RESERVED'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__SOUND_RESERVED = 7
};

/// Constant 'HEADWAY_LEVEL_OFF'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__HEADWAY_LEVEL_OFF = 0
};

/// Constant 'HEADWAY_LEVEL_GREEN'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__HEADWAY_LEVEL_GREEN = 1
};

/// Constant 'HEADWAY_LEVEL_ORANGE'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__HEADWAY_LEVEL_ORANGE = 2
};

/// Constant 'HEADWAY_LEVEL_RED'.
enum
{
  mobileye_560_660_msgs__msg__AwsDisplay__HEADWAY_LEVEL_RED = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/AwsDisplay in the package mobileye_560_660_msgs.
typedef struct mobileye_560_660_msgs__msg__AwsDisplay
{
  std_msgs__msg__Header header;
  bool suppress_sound;
  bool night_time;
  bool dusk_time;
  uint8_t sound_type;
  bool headway_valid;
  float headway_measurement;
  bool lanes_on;
  bool left_ldw_on;
  bool right_ldw_on;
  bool fcw_on;
  bool left_crossing;
  bool right_crossing;
  bool maintenance;
  bool failsafe;
  bool ped_fcw;
  bool ped_in_dz;
  uint8_t headway_warning_level;
} mobileye_560_660_msgs__msg__AwsDisplay;

// Struct for a sequence of mobileye_560_660_msgs__msg__AwsDisplay.
typedef struct mobileye_560_660_msgs__msg__AwsDisplay__Sequence
{
  mobileye_560_660_msgs__msg__AwsDisplay * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobileye_560_660_msgs__msg__AwsDisplay__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__STRUCT_H_
