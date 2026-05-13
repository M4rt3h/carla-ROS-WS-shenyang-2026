// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from derived_object_msgs:msg/LaneModels.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__STRUCT_H_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__STRUCT_H_

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
// Member 'left_lane'
// Member 'right_lane'
// Member 'additional_lanes'
#include "derived_object_msgs/msg/detail/lane__struct.h"

// Struct defined in msg/LaneModels in the package derived_object_msgs.
typedef struct derived_object_msgs__msg__LaneModels
{
  std_msgs__msg__Header header;
  derived_object_msgs__msg__Lane left_lane;
  derived_object_msgs__msg__Lane right_lane;
  derived_object_msgs__msg__Lane__Sequence additional_lanes;
} derived_object_msgs__msg__LaneModels;

// Struct for a sequence of derived_object_msgs__msg__LaneModels.
typedef struct derived_object_msgs__msg__LaneModels__Sequence
{
  derived_object_msgs__msg__LaneModels * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} derived_object_msgs__msg__LaneModels__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__STRUCT_H_
