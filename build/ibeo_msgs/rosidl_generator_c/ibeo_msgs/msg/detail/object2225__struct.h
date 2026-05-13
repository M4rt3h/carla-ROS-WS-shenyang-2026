// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/Object2225.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2225__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2225__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNCLASSIFIED'.
enum
{
  ibeo_msgs__msg__Object2225__UNCLASSIFIED = 0
};

/// Constant 'UNKNOWN_SMALL'.
enum
{
  ibeo_msgs__msg__Object2225__UNKNOWN_SMALL = 1
};

/// Constant 'UNKNOWN_BIG'.
enum
{
  ibeo_msgs__msg__Object2225__UNKNOWN_BIG = 2
};

/// Constant 'PEDESTRIAN'.
enum
{
  ibeo_msgs__msg__Object2225__PEDESTRIAN = 3
};

/// Constant 'BIKE'.
enum
{
  ibeo_msgs__msg__Object2225__BIKE = 4
};

/// Constant 'CAR'.
enum
{
  ibeo_msgs__msg__Object2225__CAR = 5
};

/// Constant 'TRUCK'.
enum
{
  ibeo_msgs__msg__Object2225__TRUCK = 6
};

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'bounding_box_center'
// Member 'bounding_box_size'
// Member 'object_box_center'
// Member 'object_box_center_sigma'
// Member 'object_box_size'
// Member 'relative_velocity'
// Member 'relative_velocity_sigma'
// Member 'absolute_velocity'
// Member 'absolute_velocity_sigma'
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_df__struct.h"

// Struct defined in msg/Object2225 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__Object2225
{
  uint16_t id;
  uint32_t age;
  builtin_interfaces__msg__Time timestamp;
  uint16_t hidden_status_age;
  uint8_t classification;
  uint8_t classification_certainty;
  uint32_t classification_age;
  ibeo_msgs__msg__Point2Df bounding_box_center;
  ibeo_msgs__msg__Point2Df bounding_box_size;
  ibeo_msgs__msg__Point2Df object_box_center;
  ibeo_msgs__msg__Point2Df object_box_center_sigma;
  ibeo_msgs__msg__Point2Df object_box_size;
  float yaw_angle;
  ibeo_msgs__msg__Point2Df relative_velocity;
  ibeo_msgs__msg__Point2Df relative_velocity_sigma;
  ibeo_msgs__msg__Point2Df absolute_velocity;
  ibeo_msgs__msg__Point2Df absolute_velocity_sigma;
  uint8_t number_of_contour_points;
  uint8_t closest_point_index;
  ibeo_msgs__msg__Point2Df__Sequence contour_point_list;
} ibeo_msgs__msg__Object2225;

// Struct for a sequence of ibeo_msgs__msg__Object2225.
typedef struct ibeo_msgs__msg__Object2225__Sequence
{
  ibeo_msgs__msg__Object2225 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__Object2225__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2225__STRUCT_H_
