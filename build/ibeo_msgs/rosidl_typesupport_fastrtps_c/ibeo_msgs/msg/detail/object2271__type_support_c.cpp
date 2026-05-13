// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/Object2271.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/object2271__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/object2271__struct.h"
#include "ibeo_msgs/msg/detail/object2271__functions.h"
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

#include "ibeo_msgs/msg/detail/tracked_properties__functions.h"  // tracked_properties
#include "ibeo_msgs/msg/detail/untracked_properties__functions.h"  // untracked_properties

// forward declare type support functions
size_t get_serialized_size_ibeo_msgs__msg__TrackedProperties(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__TrackedProperties(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, TrackedProperties)();
size_t get_serialized_size_ibeo_msgs__msg__UntrackedProperties(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__UntrackedProperties(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, UntrackedProperties)();


using _Object2271__ros_msg_type = ibeo_msgs__msg__Object2271;

static bool _Object2271__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Object2271__ros_msg_type * ros_message = static_cast<const _Object2271__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: tracked_properties_available
  {
    cdr << (ros_message->tracked_properties_available ? true : false);
  }

  // Field name: untracked_properties_available
  {
    cdr << (ros_message->untracked_properties_available ? true : false);
  }

  // Field name: tracked_properties
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, TrackedProperties
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tracked_properties, cdr))
    {
      return false;
    }
  }

  // Field name: untracked_properties
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, UntrackedProperties
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->untracked_properties, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Object2271__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Object2271__ros_msg_type * ros_message = static_cast<_Object2271__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: tracked_properties_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tracked_properties_available = tmp ? true : false;
  }

  // Field name: untracked_properties_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->untracked_properties_available = tmp ? true : false;
  }

  // Field name: tracked_properties
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, TrackedProperties
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tracked_properties))
    {
      return false;
    }
  }

  // Field name: untracked_properties
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, UntrackedProperties
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->untracked_properties))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t get_serialized_size_ibeo_msgs__msg__Object2271(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Object2271__ros_msg_type * ros_message = static_cast<const _Object2271__ros_msg_type *>(untyped_ros_message);
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
  // field.name tracked_properties_available
  {
    size_t item_size = sizeof(ros_message->tracked_properties_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name untracked_properties_available
  {
    size_t item_size = sizeof(ros_message->untracked_properties_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tracked_properties

  current_alignment += get_serialized_size_ibeo_msgs__msg__TrackedProperties(
    &(ros_message->tracked_properties), current_alignment);
  // field.name untracked_properties

  current_alignment += get_serialized_size_ibeo_msgs__msg__UntrackedProperties(
    &(ros_message->untracked_properties), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Object2271__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__Object2271(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__Object2271(
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

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tracked_properties_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: untracked_properties_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tracked_properties
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__TrackedProperties(
        full_bounded, current_alignment);
    }
  }
  // member: untracked_properties
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__UntrackedProperties(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Object2271__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__Object2271(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Object2271 = {
  "ibeo_msgs::msg",
  "Object2271",
  _Object2271__cdr_serialize,
  _Object2271__cdr_deserialize,
  _Object2271__get_serialized_size,
  _Object2271__max_serialized_size
};

static rosidl_message_type_support_t _Object2271__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Object2271,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, Object2271)() {
  return &_Object2271__type_support;
}

#if defined(__cplusplus)
}
#endif
