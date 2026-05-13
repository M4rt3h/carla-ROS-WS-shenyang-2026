// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/Sigma2D.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SIGMA2_D__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__SIGMA2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Sigma2D in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__Sigma2D
{
  uint16_t sigma_x;
  uint16_t sigma_y;
} ibeo_msgs__msg__Sigma2D;

// Struct for a sequence of ibeo_msgs__msg__Sigma2D.
typedef struct ibeo_msgs__msg__Sigma2D__Sequence
{
  ibeo_msgs__msg__Sigma2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__Sigma2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__SIGMA2_D__STRUCT_H_
