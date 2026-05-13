// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobileye_560_660_msgs:msg/LkaNumOfNextLaneMarkersReported.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_NUM_OF_NEXT_LANE_MARKERS_REPORTED__STRUCT_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_NUM_OF_NEXT_LANE_MARKERS_REPORTED__STRUCT_H_

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

// Struct defined in msg/LkaNumOfNextLaneMarkersReported in the package mobileye_560_660_msgs.
typedef struct mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported
{
  std_msgs__msg__Header header;
  uint16_t num_of_next_lane_markers_reported;
} mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported;

// Struct for a sequence of mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported.
typedef struct mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence
{
  mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_NUM_OF_NEXT_LANE_MARKERS_REPORTED__STRUCT_H_
