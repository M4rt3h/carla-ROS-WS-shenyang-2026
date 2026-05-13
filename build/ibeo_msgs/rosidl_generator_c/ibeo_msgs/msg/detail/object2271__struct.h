// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/Object2271.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2271__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2271__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tracked_properties'
#include "ibeo_msgs/msg/detail/tracked_properties__struct.h"
// Member 'untracked_properties'
#include "ibeo_msgs/msg/detail/untracked_properties__struct.h"

// Struct defined in msg/Object2271 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__Object2271
{
  uint32_t id;
  bool tracked_properties_available;
  bool untracked_properties_available;
  ibeo_msgs__msg__TrackedProperties tracked_properties;
  ibeo_msgs__msg__UntrackedProperties untracked_properties;
} ibeo_msgs__msg__Object2271;

// Struct for a sequence of ibeo_msgs__msg__Object2271.
typedef struct ibeo_msgs__msg__Object2271__Sequence
{
  ibeo_msgs__msg__Object2271 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__Object2271__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2271__STRUCT_H_
