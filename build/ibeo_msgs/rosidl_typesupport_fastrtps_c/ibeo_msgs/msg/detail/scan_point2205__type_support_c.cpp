// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/ScanPoint2205.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_point2205__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/scan_point2205__struct.h"
#include "ibeo_msgs/msg/detail/scan_point2205__functions.h"
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


using _ScanPoint2205__ros_msg_type = ibeo_msgs__msg__ScanPoint2205;

static bool _ScanPoint2205__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ScanPoint2205__ros_msg_type * ros_message = static_cast<const _ScanPoint2205__ros_msg_type *>(untyped_ros_message);
  // Field name: x_position
  {
    cdr << ros_message->x_position;
  }

  // Field name: y_position
  {
    cdr << ros_message->y_position;
  }

  // Field name: z_position
  {
    cdr << ros_message->z_position;
  }

  // Field name: echo_width
  {
    cdr << ros_message->echo_width;
  }

  // Field name: device_id
  {
    cdr << ros_message->device_id;
  }

  // Field name: layer
  {
    cdr << ros_message->layer;
  }

  // Field name: echo
  {
    cdr << ros_message->echo;
  }

  // Field name: time_offset
  {
    cdr << ros_message->time_offset;
  }

  // Field name: ground
  {
    cdr << (ros_message->ground ? true : false);
  }

  // Field name: dirt
  {
    cdr << (ros_message->dirt ? true : false);
  }

  // Field name: precipitation
  {
    cdr << (ros_message->precipitation ? true : false);
  }

  // Field name: transparent
  {
    cdr << (ros_message->transparent ? true : false);
  }

  return true;
}

static bool _ScanPoint2205__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ScanPoint2205__ros_msg_type * ros_message = static_cast<_ScanPoint2205__ros_msg_type *>(untyped_ros_message);
  // Field name: x_position
  {
    cdr >> ros_message->x_position;
  }

  // Field name: y_position
  {
    cdr >> ros_message->y_position;
  }

  // Field name: z_position
  {
    cdr >> ros_message->z_position;
  }

  // Field name: echo_width
  {
    cdr >> ros_message->echo_width;
  }

  // Field name: device_id
  {
    cdr >> ros_message->device_id;
  }

  // Field name: layer
  {
    cdr >> ros_message->layer;
  }

  // Field name: echo
  {
    cdr >> ros_message->echo;
  }

  // Field name: time_offset
  {
    cdr >> ros_message->time_offset;
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

  // Field name: precipitation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->precipitation = tmp ? true : false;
  }

  // Field name: transparent
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->transparent = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t get_serialized_size_ibeo_msgs__msg__ScanPoint2205(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScanPoint2205__ros_msg_type * ros_message = static_cast<const _ScanPoint2205__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_position
  {
    size_t item_size = sizeof(ros_message->x_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_position
  {
    size_t item_size = sizeof(ros_message->y_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_position
  {
    size_t item_size = sizeof(ros_message->z_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name echo_width
  {
    size_t item_size = sizeof(ros_message->echo_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name device_id
  {
    size_t item_size = sizeof(ros_message->device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
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
  // field.name time_offset
  {
    size_t item_size = sizeof(ros_message->time_offset);
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
  // field.name precipitation
  {
    size_t item_size = sizeof(ros_message->precipitation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transparent
  {
    size_t item_size = sizeof(ros_message->transparent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ScanPoint2205__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__ScanPoint2205(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__ScanPoint2205(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: echo_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
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
  // member: time_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
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
  // member: precipitation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: transparent
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ScanPoint2205__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__ScanPoint2205(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ScanPoint2205 = {
  "ibeo_msgs::msg",
  "ScanPoint2205",
  _ScanPoint2205__cdr_serialize,
  _ScanPoint2205__cdr_deserialize,
  _ScanPoint2205__get_serialized_size,
  _ScanPoint2205__max_serialized_size
};

static rosidl_message_type_support_t _ScanPoint2205__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScanPoint2205,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScanPoint2205)() {
  return &_ScanPoint2205__type_support;
}

#if defined(__cplusplus)
}
#endif
