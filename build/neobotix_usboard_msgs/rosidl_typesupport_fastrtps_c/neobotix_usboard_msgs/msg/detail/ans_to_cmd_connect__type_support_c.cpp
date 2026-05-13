// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from neobotix_usboard_msgs:msg/AnsToCmdConnect.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/ans_to_cmd_connect__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "neobotix_usboard_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "neobotix_usboard_msgs/msg/detail/ans_to_cmd_connect__struct.h"
#include "neobotix_usboard_msgs/msg/detail/ans_to_cmd_connect__functions.h"
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_neobotix_usboard_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_neobotix_usboard_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_neobotix_usboard_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _AnsToCmdConnect__ros_msg_type = neobotix_usboard_msgs__msg__AnsToCmdConnect;

static bool _AnsToCmdConnect__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AnsToCmdConnect__ros_msg_type * ros_message = static_cast<const _AnsToCmdConnect__ros_msg_type *>(untyped_ros_message);
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

  // Field name: command
  {
    cdr << ros_message->command;
  }

  // Field name: cmd_connect_ans_d7
  {
    cdr << ros_message->cmd_connect_ans_d7;
  }

  // Field name: cmd_connect_ans_d6
  {
    cdr << ros_message->cmd_connect_ans_d6;
  }

  // Field name: cmd_connect_ans_d5
  {
    cdr << ros_message->cmd_connect_ans_d5;
  }

  // Field name: cmd_connect_ans_d4
  {
    cdr << ros_message->cmd_connect_ans_d4;
  }

  // Field name: cmd_connect_ans_d3
  {
    cdr << ros_message->cmd_connect_ans_d3;
  }

  // Field name: cmd_connect_ans_d2
  {
    cdr << ros_message->cmd_connect_ans_d2;
  }

  // Field name: cmd_connect_ans_d1
  {
    cdr << ros_message->cmd_connect_ans_d1;
  }

  return true;
}

static bool _AnsToCmdConnect__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AnsToCmdConnect__ros_msg_type * ros_message = static_cast<_AnsToCmdConnect__ros_msg_type *>(untyped_ros_message);
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

  // Field name: command
  {
    cdr >> ros_message->command;
  }

  // Field name: cmd_connect_ans_d7
  {
    cdr >> ros_message->cmd_connect_ans_d7;
  }

  // Field name: cmd_connect_ans_d6
  {
    cdr >> ros_message->cmd_connect_ans_d6;
  }

  // Field name: cmd_connect_ans_d5
  {
    cdr >> ros_message->cmd_connect_ans_d5;
  }

  // Field name: cmd_connect_ans_d4
  {
    cdr >> ros_message->cmd_connect_ans_d4;
  }

  // Field name: cmd_connect_ans_d3
  {
    cdr >> ros_message->cmd_connect_ans_d3;
  }

  // Field name: cmd_connect_ans_d2
  {
    cdr >> ros_message->cmd_connect_ans_d2;
  }

  // Field name: cmd_connect_ans_d1
  {
    cdr >> ros_message->cmd_connect_ans_d1;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_neobotix_usboard_msgs
size_t get_serialized_size_neobotix_usboard_msgs__msg__AnsToCmdConnect(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AnsToCmdConnect__ros_msg_type * ros_message = static_cast<const _AnsToCmdConnect__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name command
  {
    size_t item_size = sizeof(ros_message->command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_connect_ans_d7
  {
    size_t item_size = sizeof(ros_message->cmd_connect_ans_d7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_connect_ans_d6
  {
    size_t item_size = sizeof(ros_message->cmd_connect_ans_d6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_connect_ans_d5
  {
    size_t item_size = sizeof(ros_message->cmd_connect_ans_d5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_connect_ans_d4
  {
    size_t item_size = sizeof(ros_message->cmd_connect_ans_d4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_connect_ans_d3
  {
    size_t item_size = sizeof(ros_message->cmd_connect_ans_d3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_connect_ans_d2
  {
    size_t item_size = sizeof(ros_message->cmd_connect_ans_d2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd_connect_ans_d1
  {
    size_t item_size = sizeof(ros_message->cmd_connect_ans_d1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AnsToCmdConnect__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_neobotix_usboard_msgs__msg__AnsToCmdConnect(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_neobotix_usboard_msgs
size_t max_serialized_size_neobotix_usboard_msgs__msg__AnsToCmdConnect(
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
  // member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cmd_connect_ans_d7
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cmd_connect_ans_d6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cmd_connect_ans_d5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cmd_connect_ans_d4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cmd_connect_ans_d3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cmd_connect_ans_d2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cmd_connect_ans_d1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AnsToCmdConnect__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_neobotix_usboard_msgs__msg__AnsToCmdConnect(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AnsToCmdConnect = {
  "neobotix_usboard_msgs::msg",
  "AnsToCmdConnect",
  _AnsToCmdConnect__cdr_serialize,
  _AnsToCmdConnect__cdr_deserialize,
  _AnsToCmdConnect__get_serialized_size,
  _AnsToCmdConnect__max_serialized_size
};

static rosidl_message_type_support_t _AnsToCmdConnect__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AnsToCmdConnect,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, neobotix_usboard_msgs, msg, AnsToCmdConnect)() {
  return &_AnsToCmdConnect__type_support;
}

#if defined(__cplusplus)
}
#endif
