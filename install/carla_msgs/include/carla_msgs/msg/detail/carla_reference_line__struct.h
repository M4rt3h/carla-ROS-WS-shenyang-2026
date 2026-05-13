// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaReferenceLine.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_LINE__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_LINE__STRUCT_H_

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
// Member 'reference_line'
#include "carla_msgs/msg/detail/carla_reference_point__struct.h"

// Struct defined in msg/CarlaReferenceLine in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaReferenceLine
{
  std_msgs__msg__Header header;
  carla_msgs__msg__CarlaReferencePoint__Sequence reference_line;
} carla_msgs__msg__CarlaReferenceLine;

// Struct for a sequence of carla_msgs__msg__CarlaReferenceLine.
typedef struct carla_msgs__msg__CarlaReferenceLine__Sequence
{
  carla_msgs__msg__CarlaReferenceLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaReferenceLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_LINE__STRUCT_H_
