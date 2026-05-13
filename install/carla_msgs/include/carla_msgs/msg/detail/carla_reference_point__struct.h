// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carla_msgs:msg/CarlaReferencePoint.idl
// generated code does not contain a copyright notice

#ifndef CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__STRUCT_H_
#define CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/CarlaReferencePoint in the package carla_msgs.
typedef struct carla_msgs__msg__CarlaReferencePoint
{
  double x;
  double y;
  double heading;
  double kappa;
  double dkappa;
  double s;
} carla_msgs__msg__CarlaReferencePoint;

// Struct for a sequence of carla_msgs__msg__CarlaReferencePoint.
typedef struct carla_msgs__msg__CarlaReferencePoint__Sequence
{
  carla_msgs__msg__CarlaReferencePoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carla_msgs__msg__CarlaReferencePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARLA_MSGS__MSG__DETAIL__CARLA_REFERENCE_POINT__STRUCT_H_
