// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kartech_linear_actuator_msgs:msg/PriorityConfigCmd.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/priority_config_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kartech_linear_actuator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kartech_linear_actuator_msgs/msg/detail/priority_config_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/priority_config_cmd__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kartech_linear_actuator_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kartech_linear_actuator_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_kartech_linear_actuator_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PriorityConfigCmd__ros_msg_type = kartech_linear_actuator_msgs__msg__PriorityConfigCmd;

static bool _PriorityConfigCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PriorityConfigCmd__ros_msg_type * ros_message = static_cast<const _PriorityConfigCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: confirm
  {
    cdr << (ros_message->confirm ? true : false);
  }

  // Field name: handshake_priority
  {
    cdr << ros_message->handshake_priority;
  }

  // Field name: auto_reply_priority
  {
    cdr << ros_message->auto_reply_priority;
  }

  // Field name: scheduled_priority
  {
    cdr << ros_message->scheduled_priority;
  }

  // Field name: polled_priority
  {
    cdr << ros_message->polled_priority;
  }

  return true;
}

static bool _PriorityConfigCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PriorityConfigCmd__ros_msg_type * ros_message = static_cast<_PriorityConfigCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: confirm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->confirm = tmp ? true : false;
  }

  // Field name: handshake_priority
  {
    cdr >> ros_message->handshake_priority;
  }

  // Field name: auto_reply_priority
  {
    cdr >> ros_message->auto_reply_priority;
  }

  // Field name: scheduled_priority
  {
    cdr >> ros_message->scheduled_priority;
  }

  // Field name: polled_priority
  {
    cdr >> ros_message->polled_priority;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kartech_linear_actuator_msgs
size_t get_serialized_size_kartech_linear_actuator_msgs__msg__PriorityConfigCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PriorityConfigCmd__ros_msg_type * ros_message = static_cast<const _PriorityConfigCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name confirm
  {
    size_t item_size = sizeof(ros_message->confirm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name handshake_priority
  {
    size_t item_size = sizeof(ros_message->handshake_priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_reply_priority
  {
    size_t item_size = sizeof(ros_message->auto_reply_priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scheduled_priority
  {
    size_t item_size = sizeof(ros_message->scheduled_priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name polled_priority
  {
    size_t item_size = sizeof(ros_message->polled_priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PriorityConfigCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kartech_linear_actuator_msgs__msg__PriorityConfigCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kartech_linear_actuator_msgs
size_t max_serialized_size_kartech_linear_actuator_msgs__msg__PriorityConfigCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: confirm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: handshake_priority
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_reply_priority
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scheduled_priority
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: polled_priority
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PriorityConfigCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_kartech_linear_actuator_msgs__msg__PriorityConfigCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PriorityConfigCmd = {
  "kartech_linear_actuator_msgs::msg",
  "PriorityConfigCmd",
  _PriorityConfigCmd__cdr_serialize,
  _PriorityConfigCmd__cdr_deserialize,
  _PriorityConfigCmd__get_serialized_size,
  _PriorityConfigCmd__max_serialized_size
};

static rosidl_message_type_support_t _PriorityConfigCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PriorityConfigCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kartech_linear_actuator_msgs, msg, PriorityConfigCmd)() {
  return &_PriorityConfigCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
