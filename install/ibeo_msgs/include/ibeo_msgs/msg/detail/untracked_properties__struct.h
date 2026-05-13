// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/UntrackedProperties.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position_closest_point'
// Member 'object_box_size'
// Member 'tracking_point_coordinate'
#include "ibeo_msgs/msg/detail/point2_di__struct.h"
// Member 'object_box_size_sigma'
// Member 'tracking_point_coordinate_sigma'
#include "ibeo_msgs/msg/detail/point2_dui__struct.h"
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/contour_point_sigma__struct.h"

// Struct defined in msg/UntrackedProperties in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__UntrackedProperties
{
  uint16_t relative_time_of_measurement;
  ibeo_msgs__msg__Point2Di position_closest_point;
  ibeo_msgs__msg__Point2Di object_box_size;
  ibeo_msgs__msg__Point2Dui object_box_size_sigma;
  int16_t object_box_orientation;
  uint16_t object_box_orientation_sigma;
  ibeo_msgs__msg__Point2Di tracking_point_coordinate;
  ibeo_msgs__msg__Point2Dui tracking_point_coordinate_sigma;
  uint8_t number_of_contour_points;
  ibeo_msgs__msg__ContourPointSigma__Sequence contour_point_list;
} ibeo_msgs__msg__UntrackedProperties;

// Struct for a sequence of ibeo_msgs__msg__UntrackedProperties.
typedef struct ibeo_msgs__msg__UntrackedProperties__Sequence
{
  ibeo_msgs__msg__UntrackedProperties * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__UntrackedProperties__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__UNTRACKED_PROPERTIES__STRUCT_H_
