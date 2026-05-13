// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from derived_object_msgs:msg/Lane.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__STRUCT_H_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_QUALITY_INVALID'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_INVALID = 0
};

/// Constant 'LANE_QUALITY_UNKNOWN'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_UNKNOWN = 1
};

/// Constant 'LANE_QUALITY_NOT_AVAILABLE'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_NOT_AVAILABLE = 2
};

/// Constant 'LANE_QUALITY_0'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_0 = 3
};

/// Constant 'LANE_QUALITY_1'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_1 = 4
};

/// Constant 'LANE_QUALITY_2'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_2 = 5
};

/// Constant 'LANE_QUALITY_3'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_3 = 6
};

/// Constant 'LANE_QUALITY_4'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_4 = 7
};

/// Constant 'LANE_QUALITY_5'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_5 = 8
};

/// Constant 'LANE_QUALITY_6'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_6 = 9
};

/// Constant 'LANE_QUALITY_7'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_7 = 10
};

/// Constant 'LANE_QUALITY_8'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_8 = 11
};

/// Constant 'LANE_QUALITY_9'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_9 = 12
};

/// Constant 'LANE_QUALITY_KIND_COUNT'.
enum
{
  derived_object_msgs__msg__Lane__LANE_QUALITY_KIND_COUNT = 13
};

/// Constant 'LANE_MARKER_INVALID'.
enum
{
  derived_object_msgs__msg__Lane__LANE_MARKER_INVALID = 0
};

/// Constant 'LANE_MARKER_UNKNOWN'.
enum
{
  derived_object_msgs__msg__Lane__LANE_MARKER_UNKNOWN = 1
};

/// Constant 'LANE_MARKER_NOT_AVAILABLE'.
enum
{
  derived_object_msgs__msg__Lane__LANE_MARKER_NOT_AVAILABLE = 2
};

/// Constant 'LANE_MARKER_NONE'.
enum
{
  derived_object_msgs__msg__Lane__LANE_MARKER_NONE = 3
};

/// Constant 'LANE_MARKER_SOLID'.
enum
{
  derived_object_msgs__msg__Lane__LANE_MARKER_SOLID = 4
};

/// Constant 'LANE_MARKER_DASHED'.
enum
{
  derived_object_msgs__msg__Lane__LANE_MARKER_DASHED = 5
};

/// Constant 'LANE_MARKER_VIRTUAL'.
enum
{
  derived_object_msgs__msg__Lane__LANE_MARKER_VIRTUAL = 6
};

/// Constant 'LANE_MARKER_DOTS'.
enum
{
  derived_object_msgs__msg__Lane__LANE_MARKER_DOTS = 7
};

/// Constant 'LANE_MARKER_ROAD_EDGE'.
enum
{
  derived_object_msgs__msg__Lane__LANE_MARKER_ROAD_EDGE = 8
};

/// Constant 'LANE_MARKER_DOUBLE_LINE'.
enum
{
  derived_object_msgs__msg__Lane__LANE_MARKER_DOUBLE_LINE = 9
};

/// Constant 'LANE_MARKER_KIND_COUNT'.
enum
{
  derived_object_msgs__msg__Lane__LANE_MARKER_KIND_COUNT = 10
};

/// Constant 'LANE_CURVE_MODEL_INVALID'.
enum
{
  derived_object_msgs__msg__Lane__LANE_CURVE_MODEL_INVALID = 0
};

/// Constant 'LANE_CURVE_MODEL_UNKNOWN'.
enum
{
  derived_object_msgs__msg__Lane__LANE_CURVE_MODEL_UNKNOWN = 1
};

/// Constant 'LANE_CURVE_MODEL_NOT_AVAILABLE'.
enum
{
  derived_object_msgs__msg__Lane__LANE_CURVE_MODEL_NOT_AVAILABLE = 2
};

/// Constant 'LANE_CURVE_MODEL_LINEAR'.
enum
{
  derived_object_msgs__msg__Lane__LANE_CURVE_MODEL_LINEAR = 3
};

/// Constant 'LANE_CURVE_MODEL_PARABOLIC'.
enum
{
  derived_object_msgs__msg__Lane__LANE_CURVE_MODEL_PARABOLIC = 4
};

/// Constant 'LANE_CURVE_MODEL_3D'.
enum
{
  derived_object_msgs__msg__Lane__LANE_CURVE_MODEL_3D = 5
};

/// Constant 'LANE_CURVE_MODEL_KIND_COUNT'.
enum
{
  derived_object_msgs__msg__Lane__LANE_CURVE_MODEL_KIND_COUNT = 6
};

// Struct defined in msg/Lane in the package derived_object_msgs.
typedef struct derived_object_msgs__msg__Lane
{
  uint8_t quality;
  uint8_t marker_kind;
  uint8_t curve_model_kind;
  double marker_offset;
  double heading_angle;
  double curvature;
  double curvature_derivative;
  double marker_width;
  double view_range;
} derived_object_msgs__msg__Lane;

// Struct for a sequence of derived_object_msgs__msg__Lane.
typedef struct derived_object_msgs__msg__Lane__Sequence
{
  derived_object_msgs__msg__Lane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} derived_object_msgs__msg__Lane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE__STRUCT_H_
