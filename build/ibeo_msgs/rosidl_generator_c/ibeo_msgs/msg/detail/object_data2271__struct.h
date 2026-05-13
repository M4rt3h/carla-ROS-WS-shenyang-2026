// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/ObjectData2271.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2271__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2271__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.h"
// Member 'start_scan_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'object_list'
#include "ibeo_msgs/msg/detail/object2271__struct.h"

// Struct defined in msg/ObjectData2271 in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__ObjectData2271
{
  std_msgs__msg__Header header;
  ibeo_msgs__msg__IbeoDataHeader ibeo_header;
  builtin_interfaces__msg__Time start_scan_timestamp;
  uint16_t scan_number;
  uint16_t number_of_objects;
  ibeo_msgs__msg__Object2271__Sequence object_list;
} ibeo_msgs__msg__ObjectData2271;

// Struct for a sequence of ibeo_msgs__msg__ObjectData2271.
typedef struct ibeo_msgs__msg__ObjectData2271__Sequence
{
  ibeo_msgs__msg__ObjectData2271 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__ObjectData2271__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2271__STRUCT_H_
