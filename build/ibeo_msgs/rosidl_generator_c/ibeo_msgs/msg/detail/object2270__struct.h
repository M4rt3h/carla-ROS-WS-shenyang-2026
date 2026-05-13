// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/Object2270.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2270__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2270__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CENTER_OF_GRAVITY'.
enum
{
  ibeo_msgs__msg__Object2270__CENTER_OF_GRAVITY = 0
};

/// Constant 'TOP_FRONT_LEFT_CORNER'.
enum
{
  ibeo_msgs__msg__Object2270__TOP_FRONT_LEFT_CORNER = 1
};

/// Constant 'TOP_FRONT_RIGHT_CORNER'.
enum
{
  ibeo_msgs__msg__Object2270__TOP_FRONT_RIGHT_CORNER = 2
};

/// Constant 'BOTTOM_REAR_RIGHT_CORNER'.
enum
{
  ibeo_msgs__msg__Object2270__BOTTOM_REAR_RIGHT_CORNER = 3
};

/// Constant 'BOTTOM_REAR_LEFT_CORNER'.
enum
{
  ibeo_msgs__msg__Object2270__BOTTOM_REAR_LEFT_CORNER = 4
};

/// Constant 'CENTER_OF_TOP_FRONT_EDGE'.
enum
{
  ibeo_msgs__msg__Object2270__CENTER_OF_TOP_FRONT_EDGE = 5
};

/// Constant 'CENTER_OF_RIGHT_EDGE'.
enum
{
  ibeo_msgs__msg__Object2270__CENTER_OF_RIGHT_EDGE = 6
};

/// Constant 'CENTER_OF_BOTTOM_REAR_EDGE'.
enum
{
  ibeo_msgs__msg__Object2270__CENTER_OF_BOTTOM_REAR_EDGE = 7
};

/// Constant 'CENTER_OF_LEFT_EDGE'.
enum
{
  ibeo_msgs__msg__Object2270__CENTER_OF_LEFT_EDGE = 8
};

/// Constant 'BOX_CENTER'.
enum
{
  ibeo_msgs__msg__Object2270__BOX_CENTER = 9
};

/// Constant 'INVALID'.
enum
{
  ibeo_msgs__msg__Object2270__INVALID = 255
};

/// Constant 'UNCLASSIFIED'.
enum
{
  ibeo_msgs__msg__Object2270__UNCLASSIFIED = 0
};

/// Constant 'UNKNOWN_SMALL'.
enum
{
  ibeo_msgs__msg__Object2270__UNKNOWN_SMALL = 1
};

/// Constant 'UNKNOWN_BIG'.
enum
{
  ibeo_msgs__msg__Object2270__UNKNOWN_BIG = 2
};

/// Constant 'PEDESTRIAN'.
enum
{
  ibeo_msgs__msg__Object2270__PEDESTRIAN = 3
};

/// Constant 'BIKE'.
enum
{
  ibeo_msgs__msg__Object2270__BIKE = 4
};

/// Constant 'CAR'.
enum
{
  ibeo_msgs__msg__Object2270__CAR = 5
};

/// Constant 'TRUCK'.
enum
{
  ibeo_msgs__msg__Object2270__TRUCK = 6
};

/// Constant 'OVER_DRIVABLE'.
enum
{
  ibeo_msgs__msg__Object2270__OVER_DRIVABLE = 10
};

/// Constant 'UNDER_DRIVABLE'.
enum
{
  ibeo_msgs__msg__Object2270__UNDER_DRIVABLE = 11
};

/// Constant 'DYNAMIC_MODEL'.
enum
{
  ibeo_msgs__msg__Object2270__DYNAMIC_MODEL = 0
};

/// Constant 'STATIC_MODEL'.
enum
{
  ibeo_msgs__msg__Object2270__STATIC_MODEL = 1
};

// Include directives for member types
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_di__struct.h"

// Struct defined in msg/Object2270 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__Object2270
{
  uint16_t id;
  uint16_t age;
  uint16_t prediction_age;
  uint16_t relative_moment_of_measurement;
  uint8_t reference_point_location;
  int16_t reference_point_position_x;
  int16_t reference_point_position_y;
  uint16_t reference_point_position_sigma_x;
  uint16_t reference_point_position_sigma_y;
  int16_t contour_points_cog_x;
  int16_t contour_points_cog_y;
  uint16_t object_box_length;
  uint16_t object_box_width;
  int16_t object_box_orientation_angle;
  int16_t object_box_orientation_angle_sigma;
  int16_t absolute_velocity_x;
  int16_t absolute_velocity_y;
  uint16_t absolute_velocity_sigma_x;
  uint16_t absolute_velocity_sigma_y;
  int16_t relative_velocity_x;
  int16_t relative_velocity_y;
  uint16_t relative_velocity_sigma_x;
  uint16_t relative_velocity_sigma_y;
  uint8_t classification;
  uint8_t tracking_model;
  bool mobile_detected;
  bool track_valid;
  uint16_t classification_age;
  uint16_t classification_confidence;
  uint16_t number_of_contour_points;
  ibeo_msgs__msg__Point2Di__Sequence contour_point_list;
} ibeo_msgs__msg__Object2270;

// Struct for a sequence of ibeo_msgs__msg__Object2270.
typedef struct ibeo_msgs__msg__Object2270__Sequence
{
  ibeo_msgs__msg__Object2270 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__Object2270__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2270__STRUCT_H_
