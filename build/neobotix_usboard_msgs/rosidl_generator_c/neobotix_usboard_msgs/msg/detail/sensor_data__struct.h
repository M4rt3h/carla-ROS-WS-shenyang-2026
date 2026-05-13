// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neobotix_usboard_msgs:msg/SensorData.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SensorData in the package neobotix_usboard_msgs.
typedef struct neobotix_usboard_msgs__msg__SensorData
{
  uint8_t distance;
  bool warn;
  bool alarm;
  bool active;
} neobotix_usboard_msgs__msg__SensorData;

// Struct for a sequence of neobotix_usboard_msgs__msg__SensorData.
typedef struct neobotix_usboard_msgs__msg__SensorData__Sequence
{
  neobotix_usboard_msgs__msg__SensorData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neobotix_usboard_msgs__msg__SensorData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSOR_DATA__STRUCT_H_
