// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/Object2280.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2280__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2280__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DYNAMIC_MODEL'.
enum
{
  ibeo_msgs__msg__Object2280__DYNAMIC_MODEL = 0
};

/// Constant 'STATIC_MODEL'.
enum
{
  ibeo_msgs__msg__Object2280__STATIC_MODEL = 1
};

/// Constant 'UNCLASSIFIED'.
enum
{
  ibeo_msgs__msg__Object2280__UNCLASSIFIED = 0
};

/// Constant 'UNKNOWN_SMALL'.
enum
{
  ibeo_msgs__msg__Object2280__UNKNOWN_SMALL = 1
};

/// Constant 'UNKNOWN_BIG'.
enum
{
  ibeo_msgs__msg__Object2280__UNKNOWN_BIG = 2
};

/// Constant 'PEDESTRIAN'.
enum
{
  ibeo_msgs__msg__Object2280__PEDESTRIAN = 3
};

/// Constant 'BIKE'.
enum
{
  ibeo_msgs__msg__Object2280__BIKE = 4
};

/// Constant 'CAR'.
enum
{
  ibeo_msgs__msg__Object2280__CAR = 5
};

/// Constant 'TRUCK'.
enum
{
  ibeo_msgs__msg__Object2280__TRUCK = 6
};

/// Constant 'UNDER_DRIVABLE'.
enum
{
  ibeo_msgs__msg__Object2280__UNDER_DRIVABLE = 12
};

/// Constant 'OVER_DRIVABLE'.
enum
{
  ibeo_msgs__msg__Object2280__OVER_DRIVABLE = 13
};

/// Constant 'CENTER_OF_GRAVITY'.
enum
{
  ibeo_msgs__msg__Object2280__CENTER_OF_GRAVITY = 0
};

/// Constant 'FRONT_LEFT'.
enum
{
  ibeo_msgs__msg__Object2280__FRONT_LEFT = 1
};

/// Constant 'FRONT_RIGHT'.
enum
{
  ibeo_msgs__msg__Object2280__FRONT_RIGHT = 2
};

/// Constant 'REAR_RIGHT'.
enum
{
  ibeo_msgs__msg__Object2280__REAR_RIGHT = 3
};

/// Constant 'REAR_LEFT'.
enum
{
  ibeo_msgs__msg__Object2280__REAR_LEFT = 4
};

/// Constant 'FRONT_CENTER'.
enum
{
  ibeo_msgs__msg__Object2280__FRONT_CENTER = 5
};

/// Constant 'RIGHT_CENTER'.
enum
{
  ibeo_msgs__msg__Object2280__RIGHT_CENTER = 6
};

/// Constant 'REAR_CENTER'.
enum
{
  ibeo_msgs__msg__Object2280__REAR_CENTER = 7
};

/// Constant 'LEFT_CENTER'.
enum
{
  ibeo_msgs__msg__Object2280__LEFT_CENTER = 8
};

/// Constant 'OBJECT_CENTER'.
enum
{
  ibeo_msgs__msg__Object2280__OBJECT_CENTER = 9
};

/// Constant 'UNKNOWN'.
enum
{
  ibeo_msgs__msg__Object2280__UNKNOWN = 255
};

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'object_box_center'
// Member 'object_box_center_sigma'
// Member 'object_box_size'
// Member 'relative_velocity'
// Member 'relative_velocity_sigma'
// Member 'absolute_velocity'
// Member 'absolute_velocity_sigma'
// Member 'reference_point_coordinate'
// Member 'reference_point_coordinate_sigma'
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_df__struct.h"

// Struct defined in msg/Object2280 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__Object2280
{
  uint16_t id;
  uint8_t tracking_model;
  bool mobility_of_dyn_object_detected;
  bool motion_model_validated;
  uint32_t object_age;
  builtin_interfaces__msg__Time timestamp;
  uint16_t object_prediction_age;
  uint8_t classification;
  uint8_t classification_certainty;
  uint32_t classification_age;
  ibeo_msgs__msg__Point2Df object_box_center;
  ibeo_msgs__msg__Point2Df object_box_center_sigma;
  ibeo_msgs__msg__Point2Df object_box_size;
  float object_box_orientation_angle;
  float object_box_orientation_angle_sigma;
  ibeo_msgs__msg__Point2Df relative_velocity;
  ibeo_msgs__msg__Point2Df relative_velocity_sigma;
  ibeo_msgs__msg__Point2Df absolute_velocity;
  ibeo_msgs__msg__Point2Df absolute_velocity_sigma;
  uint8_t number_of_contour_points;
  uint8_t closest_point_index;
  uint16_t reference_point_location;
  ibeo_msgs__msg__Point2Df reference_point_coordinate;
  ibeo_msgs__msg__Point2Df reference_point_coordinate_sigma;
  float reference_point_position_correction_coefficient;
  uint16_t object_priority;
  float object_existence_measurement;
  ibeo_msgs__msg__Point2Df__Sequence contour_point_list;
} ibeo_msgs__msg__Object2280;

// Struct for a sequence of ibeo_msgs__msg__Object2280.
typedef struct ibeo_msgs__msg__Object2280__Sequence
{
  ibeo_msgs__msg__Object2280 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__Object2280__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2280__STRUCT_H_
