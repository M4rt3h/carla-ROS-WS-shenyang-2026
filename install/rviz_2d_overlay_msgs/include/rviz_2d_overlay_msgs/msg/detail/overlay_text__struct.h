// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_2d_overlay_msgs:msg/OverlayText.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__STRUCT_H_
#define RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADD'.
enum
{
  rviz_2d_overlay_msgs__msg__OverlayText__ADD = 0
};

/// Constant 'DELETE'.
enum
{
  rviz_2d_overlay_msgs__msg__OverlayText__DELETE = 1
};

/// Constant 'LEFT'.
enum
{
  rviz_2d_overlay_msgs__msg__OverlayText__LEFT = 0
};

/// Constant 'RIGHT'.
enum
{
  rviz_2d_overlay_msgs__msg__OverlayText__RIGHT = 1
};

/// Constant 'CENTER'.
enum
{
  rviz_2d_overlay_msgs__msg__OverlayText__CENTER = 2
};

/// Constant 'TOP'.
enum
{
  rviz_2d_overlay_msgs__msg__OverlayText__TOP = 3
};

/// Constant 'BOTTOM'.
enum
{
  rviz_2d_overlay_msgs__msg__OverlayText__BOTTOM = 4
};

// Include directives for member types
// Member 'bg_color'
// Member 'fg_color'
#include "std_msgs/msg/detail/color_rgba__struct.h"
// Member 'font'
// Member 'text'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/OverlayText in the package rviz_2d_overlay_msgs.
typedef struct rviz_2d_overlay_msgs__msg__OverlayText
{
  uint8_t action;
  int32_t width;
  int32_t height;
  int32_t horizontal_distance;
  int32_t vertical_distance;
  uint8_t horizontal_alignment;
  uint8_t vertical_alignment;
  std_msgs__msg__ColorRGBA bg_color;
  int32_t line_width;
  float text_size;
  rosidl_runtime_c__String font;
  std_msgs__msg__ColorRGBA fg_color;
  rosidl_runtime_c__String text;
} rviz_2d_overlay_msgs__msg__OverlayText;

// Struct for a sequence of rviz_2d_overlay_msgs__msg__OverlayText.
typedef struct rviz_2d_overlay_msgs__msg__OverlayText__Sequence
{
  rviz_2d_overlay_msgs__msg__OverlayText * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_2d_overlay_msgs__msg__OverlayText__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__STRUCT_H_
