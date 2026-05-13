// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/MountingPositionF.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/mounting_position_f__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/mounting_position_f__struct.h"
#include "ibeo_msgs/msg/detail/mounting_position_f__functions.h"
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


using _MountingPositionF__ros_msg_type = ibeo_msgs__msg__MountingPositionF;

static bool _MountingPositionF__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MountingPositionF__ros_msg_type * ros_message = static_cast<const _MountingPositionF__ros_msg_type *>(untyped_ros_message);
  // Field name: yaw_angle
  {
    cdr << ros_message->yaw_angle;
  }

  // Field name: pitch_angle
  {
    cdr << ros_message->pitch_angle;
  }

  // Field name: roll_angle
  {
    cdr << ros_message->roll_angle;
  }

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

  return true;
}

static bool _MountingPositionF__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MountingPositionF__ros_msg_type * ros_message = static_cast<_MountingPositionF__ros_msg_type *>(untyped_ros_message);
  // Field name: yaw_angle
  {
    cdr >> ros_message->yaw_angle;
  }

  // Field name: pitch_angle
  {
    cdr >> ros_message->pitch_angle;
  }

  // Field name: roll_angle
  {
    cdr >> ros_message->roll_angle;
  }

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

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t get_serialized_size_ibeo_msgs__msg__MountingPositionF(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MountingPositionF__ros_msg_type * ros_message = static_cast<const _MountingPositionF__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name yaw_angle
  {
    size_t item_size = sizeof(ros_message->yaw_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_angle
  {
    size_t item_size = sizeof(ros_message->pitch_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name roll_angle
  {
    size_t item_size = sizeof(ros_message->roll_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
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

  return current_alignment - initial_alignment;
}

static uint32_t _MountingPositionF__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__MountingPositionF(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__MountingPositionF(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: yaw_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pitch_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: roll_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
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

  return current_alignment - initial_alignment;
}

static size_t _MountingPositionF__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__MountingPositionF(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_MountingPositionF = {
  "ibeo_msgs::msg",
  "MountingPositionF",
  _MountingPositionF__cdr_serialize,
  _MountingPositionF__cdr_deserialize,
  _MountingPositionF__get_serialized_size,
  _MountingPositionF__max_serialized_size
};

static rosidl_message_type_support_t _MountingPositionF__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MountingPositionF,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, MountingPositionF)() {
  return &_MountingPositionF__type_support;
}

#if defined(__cplusplus)
}
#endif
