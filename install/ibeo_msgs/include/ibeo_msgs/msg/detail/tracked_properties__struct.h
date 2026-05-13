// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/TrackedProperties.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INITIALIZATION_PHASE'.
enum
{
  ibeo_msgs__msg__TrackedProperties__INITIALIZATION_PHASE = 0
};

/// Constant 'TRACKING_PHASE'.
enum
{
  ibeo_msgs__msg__TrackedProperties__TRACKING_PHASE = 1
};

/// Constant 'DYNAMIC_AND_MOVING'.
enum
{
  ibeo_msgs__msg__TrackedProperties__DYNAMIC_AND_MOVING = 0
};

/// Constant 'DYNAMIC_AND_STOPPED'.
enum
{
  ibeo_msgs__msg__TrackedProperties__DYNAMIC_AND_STOPPED = 1
};

/// Constant 'A_PRIORI_STATIONARY'.
enum
{
  ibeo_msgs__msg__TrackedProperties__A_PRIORI_STATIONARY = 2
};

/// Constant 'UNCLASSIFIED'.
enum
{
  ibeo_msgs__msg__TrackedProperties__UNCLASSIFIED = 0
};

/// Constant 'UNKNOWN_SMALL'.
enum
{
  ibeo_msgs__msg__TrackedProperties__UNKNOWN_SMALL = 1
};

/// Constant 'UNKNOWN_BIG'.
enum
{
  ibeo_msgs__msg__TrackedProperties__UNKNOWN_BIG = 2
};

/// Constant 'PEDESTRIAN'.
enum
{
  ibeo_msgs__msg__TrackedProperties__PEDESTRIAN = 3
};

/// Constant 'BIKE'.
enum
{
  ibeo_msgs__msg__TrackedProperties__BIKE = 4
};

/// Constant 'CAR'.
enum
{
  ibeo_msgs__msg__TrackedProperties__CAR = 5
};

/// Constant 'TRUCK'.
enum
{
  ibeo_msgs__msg__TrackedProperties__TRUCK = 6
};

/// Constant 'OVER_DRIVABLE'.
enum
{
  ibeo_msgs__msg__TrackedProperties__OVER_DRIVABLE = 10
};

/// Constant 'UNDER_DRIVABLE'.
enum
{
  ibeo_msgs__msg__TrackedProperties__UNDER_DRIVABLE = 11
};

/// Constant 'CENTER_OF_GRAVITY'.
enum
{
  ibeo_msgs__msg__TrackedProperties__CENTER_OF_GRAVITY = 0
};

/// Constant 'TOP_FRONT_LEFT_CORNER'.
enum
{
  ibeo_msgs__msg__TrackedProperties__TOP_FRONT_LEFT_CORNER = 1
};

/// Constant 'TOP_FRONT_RIGHT_CORNER'.
enum
{
  ibeo_msgs__msg__TrackedProperties__TOP_FRONT_RIGHT_CORNER = 2
};

/// Constant 'BOTTOM_REAR_RIGHT_CORNER'.
enum
{
  ibeo_msgs__msg__TrackedProperties__BOTTOM_REAR_RIGHT_CORNER = 3
};

/// Constant 'BOTTOM_REAR_LEFT_CORNER'.
enum
{
  ibeo_msgs__msg__TrackedProperties__BOTTOM_REAR_LEFT_CORNER = 4
};

/// Constant 'CENTER_OF_TOP_FRONT_EDGE'.
enum
{
  ibeo_msgs__msg__TrackedProperties__CENTER_OF_TOP_FRONT_EDGE = 5
};

/// Constant 'CENTER_OF_RIGHT_EDGE'.
enum
{
  ibeo_msgs__msg__TrackedProperties__CENTER_OF_RIGHT_EDGE = 6
};

/// Constant 'CENTER_OF_BOTTOM_REAR_EDGE'.
enum
{
  ibeo_msgs__msg__TrackedProperties__CENTER_OF_BOTTOM_REAR_EDGE = 7
};

/// Constant 'CENTER_OF_LEFT_EDGE'.
enum
{
  ibeo_msgs__msg__TrackedProperties__CENTER_OF_LEFT_EDGE = 8
};

/// Constant 'BOX_CENTER'.
enum
{
  ibeo_msgs__msg__TrackedProperties__BOX_CENTER = 9
};

/// Constant 'INVALID'.
enum
{
  ibeo_msgs__msg__TrackedProperties__INVALID = 255
};

// Include directives for member types
// Member 'position_closest_point'
// Member 'relative_velocity'
// Member 'object_box_size'
// Member 'tracking_point_coordinate'
// Member 'velocity'
// Member 'acceleration'
#include "ibeo_msgs/msg/detail/point2_di__struct.h"
// Member 'relative_velocity_sigma'
// Member 'object_box_size_sigma'
// Member 'tracking_point_coordinate_sigma'
// Member 'velocity_sigma'
// Member 'acceleration_sigma'
#include "ibeo_msgs/msg/detail/point2_dui__struct.h"
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/contour_point_sigma__struct.h"

// Struct defined in msg/TrackedProperties in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__TrackedProperties
{
  uint16_t object_age;
  uint16_t hidden_status_age;
  uint8_t object_phase;
  uint8_t dynamic_property;
  uint16_t relative_time_of_measure;
  ibeo_msgs__msg__Point2Di position_closest_point;
  ibeo_msgs__msg__Point2Di relative_velocity;
  ibeo_msgs__msg__Point2Dui relative_velocity_sigma;
  uint8_t classification;
  uint16_t classification_age;
  ibeo_msgs__msg__Point2Di object_box_size;
  ibeo_msgs__msg__Point2Dui object_box_size_sigma;
  int16_t object_box_orientation;
  uint16_t object_box_orientation_sigma;
  uint8_t tracking_point_location;
  ibeo_msgs__msg__Point2Di tracking_point_coordinate;
  ibeo_msgs__msg__Point2Dui tracking_point_coordinate_sigma;
  ibeo_msgs__msg__Point2Di velocity;
  ibeo_msgs__msg__Point2Dui velocity_sigma;
  ibeo_msgs__msg__Point2Di acceleration;
  ibeo_msgs__msg__Point2Dui acceleration_sigma;
  int16_t yaw_rate;
  uint16_t yaw_rate_sigma;
  uint8_t number_of_contour_points;
  ibeo_msgs__msg__ContourPointSigma__Sequence contour_point_list;
} ibeo_msgs__msg__TrackedProperties;

// Struct for a sequence of ibeo_msgs__msg__TrackedProperties.
typedef struct ibeo_msgs__msg__TrackedProperties__Sequence
{
  ibeo_msgs__msg__TrackedProperties * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__TrackedProperties__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__STRUCT_H_
