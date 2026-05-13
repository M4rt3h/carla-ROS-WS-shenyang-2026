// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from neobotix_usboard_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__STRUCT_H_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__STRUCT_H_

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
// Member 'sensors'
#include "neobotix_usboard_msgs/msg/detail/sensor_data__struct.h"

// Struct defined in msg/Sensors in the package neobotix_usboard_msgs.
typedef struct neobotix_usboard_msgs__msg__Sensors
{
  std_msgs__msg__Header header;
  neobotix_usboard_msgs__msg__SensorData__Sequence sensors;
} neobotix_usboard_msgs__msg__Sensors;

// Struct for a sequence of neobotix_usboard_msgs__msg__Sensors.
typedef struct neobotix_usboard_msgs__msg__Sensors__Sequence
{
  neobotix_usboard_msgs__msg__Sensors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} neobotix_usboard_msgs__msg__Sensors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__SENSORS__STRUCT_H_
