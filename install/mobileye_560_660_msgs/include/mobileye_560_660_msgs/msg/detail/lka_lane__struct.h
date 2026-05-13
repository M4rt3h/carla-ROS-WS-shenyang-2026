// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobileye_560_660_msgs:msg/LkaLane.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__STRUCT_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LANE_CONFIDENCE_NONE'.
enum
{
  mobileye_560_660_msgs__msg__LkaLane__LANE_CONFIDENCE_NONE = 0
};

/// Constant 'LANE_CONFIDENCE_LOW'.
enum
{
  mobileye_560_660_msgs__msg__LkaLane__LANE_CONFIDENCE_LOW = 1
};

/// Constant 'LANE_CONFIDENCE_MED'.
enum
{
  mobileye_560_660_msgs__msg__LkaLane__LANE_CONFIDENCE_MED = 2
};

/// Constant 'LANE_CONFIDENCE_HIGH'.
enum
{
  mobileye_560_660_msgs__msg__LkaLane__LANE_CONFIDENCE_HIGH = 3
};

/// Constant 'LANE_TYPE_DASHED'.
enum
{
  mobileye_560_660_msgs__msg__LkaLane__LANE_TYPE_DASHED = 0
};

/// Constant 'LANE_TYPE_SOLID'.
enum
{
  mobileye_560_660_msgs__msg__LkaLane__LANE_TYPE_SOLID = 1
};

/// Constant 'LANE_TYPE_NONE'.
enum
{
  mobileye_560_660_msgs__msg__LkaLane__LANE_TYPE_NONE = 2
};

/// Constant 'LANE_TYPE_ROAD_EDGE'.
enum
{
  mobileye_560_660_msgs__msg__LkaLane__LANE_TYPE_ROAD_EDGE = 3
};

/// Constant 'LANE_TYPE_DOUBLE_LANE_MARK'.
enum
{
  mobileye_560_660_msgs__msg__LkaLane__LANE_TYPE_DOUBLE_LANE_MARK = 4
};

/// Constant 'LANE_TYPE_BOTTS_DOTS'.
enum
{
  mobileye_560_660_msgs__msg__LkaLane__LANE_TYPE_BOTTS_DOTS = 5
};

/// Constant 'LANE_TYPE_INVALID'.
enum
{
  mobileye_560_660_msgs__msg__LkaLane__LANE_TYPE_INVALID = 6
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/LkaLane in the package mobileye_560_660_msgs.
typedef struct mobileye_560_660_msgs__msg__LkaLane
{
  std_msgs__msg__Header header;
  uint8_t lane_type;
  uint8_t quality;
  uint8_t model_degree;
  double position_parameter_c0;
  double curvature_parameter_c2;
  double curvature_derivative_parameter_c3;
  float marking_width;
  double heading_angle_parameter_c1;
  float view_range;
  bool view_range_availability;
} mobileye_560_660_msgs__msg__LkaLane;

// Struct for a sequence of mobileye_560_660_msgs__msg__LkaLane.
typedef struct mobileye_560_660_msgs__msg__LkaLane__Sequence
{
  mobileye_560_660_msgs__msg__LkaLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobileye_560_660_msgs__msg__LkaLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__STRUCT_H_
