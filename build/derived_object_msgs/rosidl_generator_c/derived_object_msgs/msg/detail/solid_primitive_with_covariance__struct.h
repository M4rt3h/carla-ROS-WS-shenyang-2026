// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from derived_object_msgs:msg/SolidPrimitiveWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__STRUCT_H_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BOX'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__BOX = 1
};

/// Constant 'SPHERE'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__SPHERE = 2
};

/// Constant 'CYLINDER'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CYLINDER = 3
};

/// Constant 'CONE'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CONE = 4
};

/// Constant 'BOX_X'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__BOX_X = 0
};

/// Constant 'BOX_Y'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__BOX_Y = 1
};

/// Constant 'BOX_Z'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__BOX_Z = 2
};

/// Constant 'SPHERE_RADIUS'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__SPHERE_RADIUS = 0
};

/// Constant 'CYLINDER_HEIGHT'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CYLINDER_HEIGHT = 0
};

/// Constant 'CYLINDER_RADIUS'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CYLINDER_RADIUS = 1
};

/// Constant 'CONE_HEIGHT'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CONE_HEIGHT = 0
};

/// Constant 'CONE_RADIUS'.
enum
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance__CONE_RADIUS = 1
};

// Include directives for member types
// Member 'dimensions'
// Member 'covariance'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/SolidPrimitiveWithCovariance in the package derived_object_msgs.
typedef struct derived_object_msgs__msg__SolidPrimitiveWithCovariance
{
  uint8_t type;
  rosidl_runtime_c__double__Sequence dimensions;
  rosidl_runtime_c__double__Sequence covariance;
} derived_object_msgs__msg__SolidPrimitiveWithCovariance;

// Struct for a sequence of derived_object_msgs__msg__SolidPrimitiveWithCovariance.
typedef struct derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence
{
  derived_object_msgs__msg__SolidPrimitiveWithCovariance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} derived_object_msgs__msg__SolidPrimitiveWithCovariance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__SOLID_PRIMITIVE_WITH_COVARIANCE__STRUCT_H_
