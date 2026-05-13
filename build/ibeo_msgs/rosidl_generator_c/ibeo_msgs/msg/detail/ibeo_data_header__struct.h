// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/IbeoDataHeader.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/IbeoDataHeader in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__IbeoDataHeader
{
  uint32_t previous_message_size;
  uint32_t message_size;
  uint8_t device_id;
  uint16_t data_type_id;
  builtin_interfaces__msg__Time stamp;
} ibeo_msgs__msg__IbeoDataHeader;

// Struct for a sequence of ibeo_msgs__msg__IbeoDataHeader.
typedef struct ibeo_msgs__msg__IbeoDataHeader__Sequence
{
  ibeo_msgs__msg__IbeoDataHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__IbeoDataHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__STRUCT_H_
