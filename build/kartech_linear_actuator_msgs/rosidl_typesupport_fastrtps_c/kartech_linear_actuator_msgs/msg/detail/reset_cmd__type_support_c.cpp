// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from kartech_linear_actuator_msgs:msg/ResetCmd.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/reset_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "kartech_linear_actuator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "kartech_linear_actuator_msgs/msg/detail/reset_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/reset_cmd__functions.h"
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


using _ResetCmd__ros_msg_type = kartech_linear_actuator_msgs__msg__ResetCmd;

static bool _ResetCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ResetCmd__ros_msg_type * ros_message = static_cast<const _ResetCmd__ros_msg_type *>(untyped_ros_message);
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

  // Field name: reset_type
  {
    cdr << ros_message->reset_type;
  }

  // Field name: reset_user_rpt_id
  {
    cdr << (ros_message->reset_user_rpt_id ? true : false);
  }

  // Field name: reset_user_cmd_id_1
  {
    cdr << (ros_message->reset_user_cmd_id_1 ? true : false);
  }

  // Field name: reset_user_cmd_id_2
  {
    cdr << (ros_message->reset_user_cmd_id_2 ? true : false);
  }

  // Field name: reset_user_cmd_id_3
  {
    cdr << (ros_message->reset_user_cmd_id_3 ? true : false);
  }

  // Field name: reset_user_cmd_id_4
  {
    cdr << (ros_message->reset_user_cmd_id_4 ? true : false);
  }

  // Field name: disable_user_rpt_id
  {
    cdr << (ros_message->disable_user_rpt_id ? true : false);
  }

  // Field name: reenable_default_cmd_id
  {
    cdr << (ros_message->reenable_default_cmd_id ? true : false);
  }

  return true;
}

static bool _ResetCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ResetCmd__ros_msg_type * ros_message = static_cast<_ResetCmd__ros_msg_type *>(untyped_ros_message);
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

  // Field name: reset_type
  {
    cdr >> ros_message->reset_type;
  }

  // Field name: reset_user_rpt_id
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_user_rpt_id = tmp ? true : false;
  }

  // Field name: reset_user_cmd_id_1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_user_cmd_id_1 = tmp ? true : false;
  }

  // Field name: reset_user_cmd_id_2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_user_cmd_id_2 = tmp ? true : false;
  }

  // Field name: reset_user_cmd_id_3
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_user_cmd_id_3 = tmp ? true : false;
  }

  // Field name: reset_user_cmd_id_4
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reset_user_cmd_id_4 = tmp ? true : false;
  }

  // Field name: disable_user_rpt_id
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->disable_user_rpt_id = tmp ? true : false;
  }

  // Field name: reenable_default_cmd_id
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->reenable_default_cmd_id = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kartech_linear_actuator_msgs
size_t get_serialized_size_kartech_linear_actuator_msgs__msg__ResetCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ResetCmd__ros_msg_type * ros_message = static_cast<const _ResetCmd__ros_msg_type *>(untyped_ros_message);
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
  // field.name reset_type
  {
    size_t item_size = sizeof(ros_message->reset_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_user_rpt_id
  {
    size_t item_size = sizeof(ros_message->reset_user_rpt_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_user_cmd_id_1
  {
    size_t item_size = sizeof(ros_message->reset_user_cmd_id_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_user_cmd_id_2
  {
    size_t item_size = sizeof(ros_message->reset_user_cmd_id_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_user_cmd_id_3
  {
    size_t item_size = sizeof(ros_message->reset_user_cmd_id_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reset_user_cmd_id_4
  {
    size_t item_size = sizeof(ros_message->reset_user_cmd_id_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name disable_user_rpt_id
  {
    size_t item_size = sizeof(ros_message->disable_user_rpt_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reenable_default_cmd_id
  {
    size_t item_size = sizeof(ros_message->reenable_default_cmd_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ResetCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_kartech_linear_actuator_msgs__msg__ResetCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_kartech_linear_actuator_msgs
size_t max_serialized_size_kartech_linear_actuator_msgs__msg__ResetCmd(
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
  // member: reset_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_user_rpt_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_user_cmd_id_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_user_cmd_id_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_user_cmd_id_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reset_user_cmd_id_4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: disable_user_rpt_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: reenable_default_cmd_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ResetCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_kartech_linear_actuator_msgs__msg__ResetCmd(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ResetCmd = {
  "kartech_linear_actuator_msgs::msg",
  "ResetCmd",
  _ResetCmd__cdr_serialize,
  _ResetCmd__cdr_deserialize,
  _ResetCmd__get_serialized_size,
  _ResetCmd__max_serialized_size
};

static rosidl_message_type_support_t _ResetCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ResetCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kartech_linear_actuator_msgs, msg, ResetCmd)() {
  return &_ResetCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
