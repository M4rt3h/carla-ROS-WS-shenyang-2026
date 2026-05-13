// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/DeviceStatus.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_H_

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

// Struct defined in msg/DeviceStatus in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__DeviceStatus
{
  std_msgs__msg__Header header;
  ibeo_msgs__msg__IbeoDataHeader ibeo_header;
  uint8_t scanner_type;
  float sensor_temperature;
  float frequency;
} ibeo_msgs__msg__DeviceStatus;

// Struct for a sequence of ibeo_msgs__msg__DeviceStatus.
typedef struct ibeo_msgs__msg__DeviceStatus__Sequence
{
  ibeo_msgs__msg__DeviceStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__DeviceStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__DEVICE_STATUS__STRUCT_H_
