// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/ScanPoint2202.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_point2202__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/scan_point2202__struct.h"
#include "ibeo_msgs/msg/detail/scan_point2202__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ScanPoint2202__ros_msg_type = ibeo_msgs__msg__ScanPoint2202;

static bool _ScanPoint2202__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ScanPoint2202__ros_msg_type * ros_message = static_cast<const _ScanPoint2202__ros_msg_type *>(untyped_ros_message);
  // Field name: layer
  {
    cdr << ros_message->layer;
  }

  // Field name: echo
  {
    cdr << ros_message->echo;
  }

  // Field name: transparent_point
  {
    cdr << (ros_message->transparent_point ? true : false);
  }

  // Field name: clutter_atmospheric
  {
    cdr << (ros_message->clutter_atmospheric ? true : false);
  }

  // Field name: ground
  {
    cdr << (ros_message->ground ? true : false);
  }

  // Field name: dirt
  {
    cdr << (ros_message->dirt ? true : false);
  }

  // Field name: horizontal_angle
  {
    cdr << ros_message->horizontal_angle;
  }

  // Field name: radial_distance
  {
    cdr << ros_message->radial_distance;
  }

  // Field name: echo_pulse_width
  {
    cdr << ros_message->echo_pulse_width;
  }

  return true;
}

static bool _ScanPoint2202__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ScanPoint2202__ros_msg_type * ros_message = static_cast<_ScanPoint2202__ros_msg_type *>(untyped_ros_message);
  // Field name: layer
  {
    cdr >> ros_message->layer;
  }

  // Field name: echo
  {
    cdr >> ros_message->echo;
  }

  // Field name: transparent_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->transparent_point = tmp ? true : false;
  }

  // Field name: clutter_atmospheric
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->clutter_atmospheric = tmp ? true : false;
  }

  // Field name: ground
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ground = tmp ? true : false;
  }

  // Field name: dirt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dirt = tmp ? true : false;
  }

  // Field name: horizontal_angle
  {
    cdr >> ros_message->horizontal_angle;
  }

  // Field name: radial_distance
  {
    cdr >> ros_message->radial_distance;
  }

  // Field name: echo_pulse_width
  {
    cdr >> ros_message->echo_pulse_width;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t get_serialized_size_ibeo_msgs__msg__ScanPoint2202(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScanPoint2202__ros_msg_type * ros_message = static_cast<const _ScanPoint2202__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name layer
  {
    size_t item_size = sizeof(ros_message->layer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name echo
  {
    size_t item_size = sizeof(ros_message->echo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transparent_point
  {
    size_t item_size = sizeof(ros_message->transparent_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clutter_atmospheric
  {
    size_t item_size = sizeof(ros_message->clutter_atmospheric);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ground
  {
    size_t item_size = sizeof(ros_message->ground);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dirt
  {
    size_t item_size = sizeof(ros_message->dirt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horizontal_angle
  {
    size_t item_size = sizeof(ros_message->horizontal_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radial_distance
  {
    size_t item_size = sizeof(ros_message->radial_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name echo_pulse_width
  {
    size_t item_size = sizeof(ros_message->echo_pulse_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ScanPoint2202__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__ScanPoint2202(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__ScanPoint2202(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: layer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: echo
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: transparent_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: clutter_atmospheric
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ground
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dirt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: horizontal_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: radial_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: echo_pulse_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ScanPoint2202__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__ScanPoint2202(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ScanPoint2202 = {
  "ibeo_msgs::msg",
  "ScanPoint2202",
  _ScanPoint2202__cdr_serialize,
  _ScanPoint2202__cdr_deserialize,
  _ScanPoint2202__get_serialized_size,
  _ScanPoint2202__max_serialized_size
};

static rosidl_message_type_support_t _ScanPoint2202__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScanPoint2202,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScanPoint2202)() {
  return &_ScanPoint2202__type_support;
}

#if defined(__cplusplus)
}
#endif
