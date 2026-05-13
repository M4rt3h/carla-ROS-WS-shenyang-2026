// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/Object2221.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2221__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2221__STRUCT_H_

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
  ibeo_msgs__msg__Object2221__UNCLASSIFIED = 0
};

/// Constant 'UNKNOWN_SMALL'.
enum
{
  ibeo_msgs__msg__Object2221__UNKNOWN_SMALL = 1
};

/// Constant 'UNKNOWN_BIG'.
enum
{
  ibeo_msgs__msg__Object2221__UNKNOWN_BIG = 2
};

/// Constant 'PEDESTRIAN'.
enum
{
  ibeo_msgs__msg__Object2221__PEDESTRIAN = 3
};

/// Constant 'BIKE'.
enum
{
  ibeo_msgs__msg__Object2221__BIKE = 4
};

/// Constant 'CAR'.
enum
{
  ibeo_msgs__msg__Object2221__CAR = 5
};

/// Constant 'TRUCK'.
enum
{
  ibeo_msgs__msg__Object2221__TRUCK = 6
};

// Include directives for member types
// Member 'reference_point'
// Member 'reference_point_sigma'
// Member 'closest_point'
// Member 'bounding_box_center'
// Member 'object_box_center'
// Member 'absolute_velocity'
// Member 'relative_velocity'
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_di__struct.h"
// Member 'object_box_size'
// Member 'absolute_velocity_sigma'
#include "ibeo_msgs/msg/detail/size2_d__struct.h"

// Struct defined in msg/Object2221 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__Object2221
{
  uint16_t id;
  uint16_t age;
  uint16_t prediction_age;
  uint16_t relative_timestamp;
  ibeo_msgs__msg__Point2Di reference_point;
  ibeo_msgs__msg__Point2Di reference_point_sigma;
  ibeo_msgs__msg__Point2Di closest_point;
  ibeo_msgs__msg__Point2Di bounding_box_center;
  uint16_t bounding_box_width;
  uint16_t bounding_box_length;
  ibeo_msgs__msg__Point2Di object_box_center;
  ibeo_msgs__msg__Size2D object_box_size;
  int16_t object_box_orientation;
  ibeo_msgs__msg__Point2Di absolute_velocity;
  ibeo_msgs__msg__Size2D absolute_velocity_sigma;
  ibeo_msgs__msg__Point2Di relative_velocity;
  uint8_t classification;
  uint16_t classification_age;
  uint16_t classification_certainty;
  uint16_t number_of_contour_points;
  ibeo_msgs__msg__Point2Di__Sequence contour_point_list;
} ibeo_msgs__msg__Object2221;

// Struct for a sequence of ibeo_msgs__msg__Object2221.
typedef struct ibeo_msgs__msg__Object2221__Sequence
{
  ibeo_msgs__msg__Object2221 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__Object2221__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2221__STRUCT_H_
