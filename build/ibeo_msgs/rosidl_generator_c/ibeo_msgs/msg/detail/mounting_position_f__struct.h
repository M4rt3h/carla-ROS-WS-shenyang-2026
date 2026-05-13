// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/MountingPositionF.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MountingPositionF in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__MountingPositionF
{
  float yaw_angle;
  float pitch_angle;
  float roll_angle;
  float x_position;
  float y_position;
  float z_position;
} ibeo_msgs__msg__MountingPositionF;

// Struct for a sequence of ibeo_msgs__msg__MountingPositionF.
typedef struct ibeo_msgs__msg__MountingPositionF__Sequence
{
  ibeo_msgs__msg__MountingPositionF * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__MountingPositionF__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__MOUNTING_POSITION_F__STRUCT_H_
