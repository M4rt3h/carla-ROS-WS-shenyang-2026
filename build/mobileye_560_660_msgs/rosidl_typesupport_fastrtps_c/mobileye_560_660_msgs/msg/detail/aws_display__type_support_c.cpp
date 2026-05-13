// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mobileye_560_660_msgs:msg/AwsDisplay.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/aws_display__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mobileye_560_660_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mobileye_560_660_msgs/msg/detail/aws_display__struct.h"
#include "mobileye_560_660_msgs/msg/detail/aws_display__functions.h"
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


using _AwsDisplay__ros_msg_type = mobileye_560_660_msgs__msg__AwsDisplay;

static bool _AwsDisplay__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AwsDisplay__ros_msg_type * ros_message = static_cast<const _AwsDisplay__ros_msg_type *>(untyped_ros_message);
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

  // Field name: suppress_sound
  {
    cdr << (ros_message->suppress_sound ? true : false);
  }

  // Field name: night_time
  {
    cdr << (ros_message->night_time ? true : false);
  }

  // Field name: dusk_time
  {
    cdr << (ros_message->dusk_time ? true : false);
  }

  // Field name: sound_type
  {
    cdr << ros_message->sound_type;
  }

  // Field name: headway_valid
  {
    cdr << (ros_message->headway_valid ? true : false);
  }

  // Field name: headway_measurement
  {
    cdr << ros_message->headway_measurement;
  }

  // Field name: lanes_on
  {
    cdr << (ros_message->lanes_on ? true : false);
  }

  // Field name: left_ldw_on
  {
    cdr << (ros_message->left_ldw_on ? true : false);
  }

  // Field name: right_ldw_on
  {
    cdr << (ros_message->right_ldw_on ? true : false);
  }

  // Field name: fcw_on
  {
    cdr << (ros_message->fcw_on ? true : false);
  }

  // Field name: left_crossing
  {
    cdr << (ros_message->left_crossing ? true : false);
  }

  // Field name: right_crossing
  {
    cdr << (ros_message->right_crossing ? true : false);
  }

  // Field name: maintenance
  {
    cdr << (ros_message->maintenance ? true : false);
  }

  // Field name: failsafe
  {
    cdr << (ros_message->failsafe ? true : false);
  }

  // Field name: ped_fcw
  {
    cdr << (ros_message->ped_fcw ? true : false);
  }

  // Field name: ped_in_dz
  {
    cdr << (ros_message->ped_in_dz ? true : false);
  }

  // Field name: headway_warning_level
  {
    cdr << ros_message->headway_warning_level;
  }

  return true;
}

static bool _AwsDisplay__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AwsDisplay__ros_msg_type * ros_message = static_cast<_AwsDisplay__ros_msg_type *>(untyped_ros_message);
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

  // Field name: suppress_sound
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->suppress_sound = tmp ? true : false;
  }

  // Field name: night_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->night_time = tmp ? true : false;
  }

  // Field name: dusk_time
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dusk_time = tmp ? true : false;
  }

  // Field name: sound_type
  {
    cdr >> ros_message->sound_type;
  }

  // Field name: headway_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->headway_valid = tmp ? true : false;
  }

  // Field name: headway_measurement
  {
    cdr >> ros_message->headway_measurement;
  }

  // Field name: lanes_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lanes_on = tmp ? true : false;
  }

  // Field name: left_ldw_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_ldw_on = tmp ? true : false;
  }

  // Field name: right_ldw_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_ldw_on = tmp ? true : false;
  }

  // Field name: fcw_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fcw_on = tmp ? true : false;
  }

  // Field name: left_crossing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_crossing = tmp ? true : false;
  }

  // Field name: right_crossing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_crossing = tmp ? true : false;
  }

  // Field name: maintenance
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->maintenance = tmp ? true : false;
  }

  // Field name: failsafe
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->failsafe = tmp ? true : false;
  }

  // Field name: ped_fcw
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ped_fcw = tmp ? true : false;
  }

  // Field name: ped_in_dz
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ped_in_dz = tmp ? true : false;
  }

  // Field name: headway_warning_level
  {
    cdr >> ros_message->headway_warning_level;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t get_serialized_size_mobileye_560_660_msgs__msg__AwsDisplay(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AwsDisplay__ros_msg_type * ros_message = static_cast<const _AwsDisplay__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name suppress_sound
  {
    size_t item_size = sizeof(ros_message->suppress_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name night_time
  {
    size_t item_size = sizeof(ros_message->night_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dusk_time
  {
    size_t item_size = sizeof(ros_message->dusk_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sound_type
  {
    size_t item_size = sizeof(ros_message->sound_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name headway_valid
  {
    size_t item_size = sizeof(ros_message->headway_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name headway_measurement
  {
    size_t item_size = sizeof(ros_message->headway_measurement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanes_on
  {
    size_t item_size = sizeof(ros_message->lanes_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_ldw_on
  {
    size_t item_size = sizeof(ros_message->left_ldw_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_ldw_on
  {
    size_t item_size = sizeof(ros_message->right_ldw_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fcw_on
  {
    size_t item_size = sizeof(ros_message->fcw_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_crossing
  {
    size_t item_size = sizeof(ros_message->left_crossing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_crossing
  {
    size_t item_size = sizeof(ros_message->right_crossing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maintenance
  {
    size_t item_size = sizeof(ros_message->maintenance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name failsafe
  {
    size_t item_size = sizeof(ros_message->failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ped_fcw
  {
    size_t item_size = sizeof(ros_message->ped_fcw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ped_in_dz
  {
    size_t item_size = sizeof(ros_message->ped_in_dz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name headway_warning_level
  {
    size_t item_size = sizeof(ros_message->headway_warning_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AwsDisplay__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mobileye_560_660_msgs__msg__AwsDisplay(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t max_serialized_size_mobileye_560_660_msgs__msg__AwsDisplay(
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
  // member: suppress_sound
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: night_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dusk_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sound_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: headway_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: headway_measurement
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lanes_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_ldw_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_ldw_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fcw_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_crossing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_crossing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: maintenance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ped_fcw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ped_in_dz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: headway_warning_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AwsDisplay__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mobileye_560_660_msgs__msg__AwsDisplay(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AwsDisplay = {
  "mobileye_560_660_msgs::msg",
  "AwsDisplay",
  _AwsDisplay__cdr_serialize,
  _AwsDisplay__cdr_deserialize,
  _AwsDisplay__get_serialized_size,
  _AwsDisplay__max_serialized_size
};

static rosidl_message_type_support_t _AwsDisplay__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AwsDisplay,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mobileye_560_660_msgs, msg, AwsDisplay)() {
  return &_AwsDisplay__type_support;
}

#if defined(__cplusplus)
}
#endif
