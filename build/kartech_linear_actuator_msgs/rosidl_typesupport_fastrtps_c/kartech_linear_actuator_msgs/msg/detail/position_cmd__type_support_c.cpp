// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kartech_linear_actuator_msgs:msg/PositionCmd.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/position_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kartech_linear_actuator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kartech_linear_actuator_msgs/msg/detail/position_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/position_cmd__functions.h"
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


using _PositionCmd__ros_msg_type = kartech_linear_actuator_msgs__msg__PositionCmd;

static bool _PositionCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PositionCmd__ros_msg_type * ros_message = static_cast<const _PositionCmd__ros_msg_type *>(untyped_ros_message);
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

  // Field name: auto_reply
  {
    cdr << (ros_message->auto_reply ? true : false);
  }

  // Field name: position
  {
    cdr << ros_message->position;
  }

  // Field name: clutch_enable
  {
    cdr << (ros_message->clutch_enable ? true : false);
  }

  // Field name: motor_enable
  {
    cdr << (ros_message->motor_enable ? true : false);
  }

  return true;
}

static bool _PositionCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PositionCmd__ros_msg_type * ros_message = static_cast<_PositionCmd__ros_msg_type *>(untyped_ros_message);
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

  // Field name: auto_reply
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_reply = tmp ? true : false;
  }

  // Field name: position
  {
    cdr >> ros_message->position;
  }

  // Field name: clutch_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->clutch_enable = tmp ? true : false;
  }

  // Field name: motor_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motor_enable = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kartech_linear_actuator_msgs
size_t get_serialized_size_kartech_linear_actuator_msgs__msg__PositionCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PositionCmd__ros_msg_type * ros_message = static_cast<const _PositionCmd__ros_msg_type *>(untyped_ros_message);
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
  // field.name auto_reply
  {
    size_t item_size = sizeof(ros_message->auto_reply);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position
  {
    size_t item_size = sizeof(ros_message->position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name clutch_enable
  {
    size_t item_size = sizeof(ros_message->clutch_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_enable
  {
    size_t item_size = sizeof(ros_message->motor_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PositionCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kartech_linear_actuator_msgs__msg__PositionCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kartech_linear_actuator_msgs
size_t max_serialized_size_kartech_linear_actuator_msgs__msg__PositionCmd(
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
  // member: auto_reply
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: clutch_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PositionCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_kartech_linear_actuator_msgs__msg__PositionCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PositionCmd = {
  "kartech_linear_actuator_msgs::msg",
  "PositionCmd",
  _PositionCmd__cdr_serialize,
  _PositionCmd__cdr_deserialize,
  _PositionCmd__get_serialized_size,
  _PositionCmd__max_serialized_size
};

static rosidl_message_type_support_t _PositionCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PositionCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kartech_linear_actuator_msgs, msg, PositionCmd)() {
  return &_PositionCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
