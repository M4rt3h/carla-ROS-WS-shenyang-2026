// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobileye_560_660_msgs:msg/ObstacleStatus.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__STRUCT_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STOP_GO_STOP'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleStatus__STOP_GO_STOP = 0
};

/// Constant 'STOP_GO_GO'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleStatus__STOP_GO_GO = 1
};

/// Constant 'STOP_GO_UNDECIDED'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleStatus__STOP_GO_UNDECIDED = 2
};

/// Constant 'STOP_GO_DRIVER_DECISION_REQUIRED'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleStatus__STOP_GO_DRIVER_DECISION_REQUIRED = 3
};

/// Constant 'STOP_GO_NOT_CALCULATED'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleStatus__STOP_GO_NOT_CALCULATED = 15
};

/// Constant 'FAILSAFE_NONE'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleStatus__FAILSAFE_NONE = 0
};

/// Constant 'FAILSAFE_LOW_SUN'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleStatus__FAILSAFE_LOW_SUN = 1
};

/// Constant 'FAILSAFE_BLUR_IMAGE'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleStatus__FAILSAFE_BLUR_IMAGE = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ObstacleStatus in the package mobileye_560_660_msgs.
typedef struct mobileye_560_660_msgs__msg__ObstacleStatus
{
  std_msgs__msg__Header header;
  uint16_t num_obstacles;
  uint16_t timestamp;
  uint16_t application_version;
  uint16_t active_version_number_section;
  bool left_close_range_cut_in;
  bool right_close_range_cut_in;
  uint8_t stop_go;
  uint8_t protocol_version;
  bool close_car;
  uint8_t failsafe;
} mobileye_560_660_msgs__msg__ObstacleStatus;

// Struct for a sequence of mobileye_560_660_msgs__msg__ObstacleStatus.
typedef struct mobileye_560_660_msgs__msg__ObstacleStatus__Sequence
{
  mobileye_560_660_msgs__msg__ObstacleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobileye_560_660_msgs__msg__ObstacleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_STATUS__STRUCT_H_
