// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mobileye_560_660_msgs:msg/LkaReferencePoints.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/lka_reference_points__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mobileye_560_660_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mobileye_560_660_msgs/msg/detail/lka_reference_points__struct.h"
#include "mobileye_560_660_msgs/msg/detail/lka_reference_points__functions.h"
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mobileye_560_660_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mobileye_560_660_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mobileye_560_660_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _LkaReferencePoints__ros_msg_type = mobileye_560_660_msgs__msg__LkaReferencePoints;

static bool _LkaReferencePoints__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LkaReferencePoints__ros_msg_type * ros_message = static_cast<const _LkaReferencePoints__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ref_point_1_position
  {
    cdr << ros_message->ref_point_1_position;
  }

  // Field name: ref_point_1_distance
  {
    cdr << ros_message->ref_point_1_distance;
  }

  // Field name: ref_point_1_validity
  {
    cdr << (ros_message->ref_point_1_validity ? true : false);
  }

  // Field name: ref_point_2_position
  {
    cdr << ros_message->ref_point_2_position;
  }

  // Field name: ref_point_2_distance
  {
    cdr << ros_message->ref_point_2_distance;
  }

  // Field name: ref_point_2_validity
  {
    cdr << (ros_message->ref_point_2_validity ? true : false);
  }

  return true;
}

static bool _LkaReferencePoints__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LkaReferencePoints__ros_msg_type * ros_message = static_cast<_LkaReferencePoints__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ref_point_1_position
  {
    cdr >> ros_message->ref_point_1_position;
  }

  // Field name: ref_point_1_distance
  {
    cdr >> ros_message->ref_point_1_distance;
  }

  // Field name: ref_point_1_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ref_point_1_validity = tmp ? true : false;
  }

  // Field name: ref_point_2_position
  {
    cdr >> ros_message->ref_point_2_position;
  }

  // Field name: ref_point_2_distance
  {
    cdr >> ros_message->ref_point_2_distance;
  }

  // Field name: ref_point_2_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ref_point_2_validity = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t get_serialized_size_mobileye_560_660_msgs__msg__LkaReferencePoints(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LkaReferencePoints__ros_msg_type * ros_message = static_cast<const _LkaReferencePoints__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ref_point_1_position
  {
    size_t item_size = sizeof(ros_message->ref_point_1_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_point_1_distance
  {
    size_t item_size = sizeof(ros_message->ref_point_1_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_point_1_validity
  {
    size_t item_size = sizeof(ros_message->ref_point_1_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_point_2_position
  {
    size_t item_size = sizeof(ros_message->ref_point_2_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_point_2_distance
  {
    size_t item_size = sizeof(ros_message->ref_point_2_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_point_2_validity
  {
    size_t item_size = sizeof(ros_message->ref_point_2_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LkaReferencePoints__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mobileye_560_660_msgs__msg__LkaReferencePoints(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t max_serialized_size_mobileye_560_660_msgs__msg__LkaReferencePoints(
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
  // member: ref_point_1_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_point_1_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_point_1_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ref_point_2_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_point_2_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_point_2_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _LkaReferencePoints__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mobileye_560_660_msgs__msg__LkaReferencePoints(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LkaReferencePoints = {
  "mobileye_560_660_msgs::msg",
  "LkaReferencePoints",
  _LkaReferencePoints__cdr_serialize,
  _LkaReferencePoints__cdr_deserialize,
  _LkaReferencePoints__get_serialized_size,
  _LkaReferencePoints__max_serialized_size
};

static rosidl_message_type_support_t _LkaReferencePoints__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LkaReferencePoints,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mobileye_560_660_msgs, msg, LkaReferencePoints)() {
  return &_LkaReferencePoints__type_support;
}

#if defined(__cplusplus)
}
#endif
