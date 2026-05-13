// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerTrack.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__functions.h"
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


using _EsrTrackMotionPowerTrack__ros_msg_type = delphi_esr_msgs__msg__EsrTrackMotionPowerTrack;

static bool _EsrTrackMotionPowerTrack__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsrTrackMotionPowerTrack__ros_msg_type * ros_message = static_cast<const _EsrTrackMotionPowerTrack__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: movable_fast
  {
    cdr << (ros_message->movable_fast ? true : false);
  }

  // Field name: movable_slow
  {
    cdr << (ros_message->movable_slow ? true : false);
  }

  // Field name: moving
  {
    cdr << (ros_message->moving ? true : false);
  }

  // Field name: power
  {
    cdr << ros_message->power;
  }

  return true;
}

static bool _EsrTrackMotionPowerTrack__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsrTrackMotionPowerTrack__ros_msg_type * ros_message = static_cast<_EsrTrackMotionPowerTrack__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: movable_fast
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->movable_fast = tmp ? true : false;
  }

  // Field name: movable_slow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->movable_slow = tmp ? true : false;
  }

  // Field name: moving
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->moving = tmp ? true : false;
  }

  // Field name: power
  {
    cdr >> ros_message->power;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t get_serialized_size_delphi_esr_msgs__msg__EsrTrackMotionPowerTrack(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsrTrackMotionPowerTrack__ros_msg_type * ros_message = static_cast<const _EsrTrackMotionPowerTrack__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name movable_fast
  {
    size_t item_size = sizeof(ros_message->movable_fast);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name movable_slow
  {
    size_t item_size = sizeof(ros_message->movable_slow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name moving
  {
    size_t item_size = sizeof(ros_message->moving);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power
  {
    size_t item_size = sizeof(ros_message->power);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsrTrackMotionPowerTrack__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_esr_msgs__msg__EsrTrackMotionPowerTrack(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t max_serialized_size_delphi_esr_msgs__msg__EsrTrackMotionPowerTrack(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: movable_fast
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: movable_slow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: moving
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EsrTrackMotionPowerTrack__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_esr_msgs__msg__EsrTrackMotionPowerTrack(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EsrTrackMotionPowerTrack = {
  "delphi_esr_msgs::msg",
  "EsrTrackMotionPowerTrack",
  _EsrTrackMotionPowerTrack__cdr_serialize,
  _EsrTrackMotionPowerTrack__cdr_deserialize,
  _EsrTrackMotionPowerTrack__get_serialized_size,
  _EsrTrackMotionPowerTrack__max_serialized_size
};

static rosidl_message_type_support_t _EsrTrackMotionPowerTrack__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsrTrackMotionPowerTrack,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_esr_msgs, msg, EsrTrackMotionPowerTrack)() {
  return &_EsrTrackMotionPowerTrack__type_support;
}

#if defined(__cplusplus)
}
#endif
