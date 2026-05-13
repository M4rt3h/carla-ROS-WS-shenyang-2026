// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ibeo_msgs:msg/CameraImage.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__STRUCT_H_
#define IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'JPEG'.
enum
{
  ibeo_msgs__msg__CameraImage__JPEG = 0
};

/// Constant 'MJPEG'.
enum
{
  ibeo_msgs__msg__CameraImage__MJPEG = 1
};

/// Constant 'GRAY8'.
enum
{
  ibeo_msgs__msg__CameraImage__GRAY8 = 2
};

/// Constant 'YUV420'.
enum
{
  ibeo_msgs__msg__CameraImage__YUV420 = 3
};

/// Constant 'YUV422'.
enum
{
  ibeo_msgs__msg__CameraImage__YUV422 = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'mounting_position'
#include "ibeo_msgs/msg/detail/mounting_position_f__struct.h"
// Member 'image_buffer'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/CameraImage in the package ibeo_msgs.
typedef struct ibeo_msgs__msg__CameraImage
{
  std_msgs__msg__Header header;
  ibeo_msgs__msg__IbeoDataHeader ibeo_header;
  uint16_t image_format;
  uint32_t us_since_power_on;
  builtin_interfaces__msg__Time timestamp;
  uint8_t device_id;
  ibeo_msgs__msg__MountingPositionF mounting_position;
  double horizontal_opening_angle;
  double vertical_opening_angle;
  uint16_t image_width;
  uint16_t image_height;
  uint32_t compressed_size;
  rosidl_runtime_c__uint8__Sequence image_buffer;
} ibeo_msgs__msg__CameraImage;

// Struct for a sequence of ibeo_msgs__msg__CameraImage.
typedef struct ibeo_msgs__msg__CameraImage__Sequence
{
  ibeo_msgs__msg__CameraImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ibeo_msgs__msg__CameraImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__STRUCT_H_
