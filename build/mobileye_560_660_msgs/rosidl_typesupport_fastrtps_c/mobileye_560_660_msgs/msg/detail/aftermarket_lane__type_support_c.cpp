// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mobileye_560_660_msgs:msg/AftermarketLane.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/aftermarket_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mobileye_560_660_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mobileye_560_660_msgs/msg/detail/aftermarket_lane__struct.h"
#include "mobileye_560_660_msgs/msg/detail/aftermarket_lane__functions.h"
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


using _AftermarketLane__ros_msg_type = mobileye_560_660_msgs__msg__AftermarketLane;

static bool _AftermarketLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AftermarketLane__ros_msg_type * ros_message = static_cast<const _AftermarketLane__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lane_confidence_left
  {
    cdr << ros_message->lane_confidence_left;
  }

  // Field name: ldw_available_left
  {
    cdr << (ros_message->ldw_available_left ? true : false);
  }

  // Field name: lane_type_left
  {
    cdr << ros_message->lane_type_left;
  }

  // Field name: distance_to_left_lane
  {
    cdr << ros_message->distance_to_left_lane;
  }

  // Field name: lane_confidence_right
  {
    cdr << ros_message->lane_confidence_right;
  }

  // Field name: ldw_available_right
  {
    cdr << (ros_message->ldw_available_right ? true : false);
  }

  // Field name: lane_type_right
  {
    cdr << ros_message->lane_type_right;
  }

  // Field name: distance_to_right_lane
  {
    cdr << ros_message->distance_to_right_lane;
  }

  return true;
}

static bool _AftermarketLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AftermarketLane__ros_msg_type * ros_message = static_cast<_AftermarketLane__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lane_confidence_left
  {
    cdr >> ros_message->lane_confidence_left;
  }

  // Field name: ldw_available_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ldw_available_left = tmp ? true : false;
  }

  // Field name: lane_type_left
  {
    cdr >> ros_message->lane_type_left;
  }

  // Field name: distance_to_left_lane
  {
    cdr >> ros_message->distance_to_left_lane;
  }

  // Field name: lane_confidence_right
  {
    cdr >> ros_message->lane_confidence_right;
  }

  // Field name: ldw_available_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ldw_available_right = tmp ? true : false;
  }

  // Field name: lane_type_right
  {
    cdr >> ros_message->lane_type_right;
  }

  // Field name: distance_to_right_lane
  {
    cdr >> ros_message->distance_to_right_lane;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t get_serialized_size_mobileye_560_660_msgs__msg__AftermarketLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AftermarketLane__ros_msg_type * ros_message = static_cast<const _AftermarketLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name lane_confidence_left
  {
    size_t item_size = sizeof(ros_message->lane_confidence_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ldw_available_left
  {
    size_t item_size = sizeof(ros_message->ldw_available_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_type_left
  {
    size_t item_size = sizeof(ros_message->lane_type_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_to_left_lane
  {
    size_t item_size = sizeof(ros_message->distance_to_left_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_confidence_right
  {
    size_t item_size = sizeof(ros_message->lane_confidence_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ldw_available_right
  {
    size_t item_size = sizeof(ros_message->ldw_available_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_type_right
  {
    size_t item_size = sizeof(ros_message->lane_type_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance_to_right_lane
  {
    size_t item_size = sizeof(ros_message->distance_to_right_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AftermarketLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mobileye_560_660_msgs__msg__AftermarketLane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t max_serialized_size_mobileye_560_660_msgs__msg__AftermarketLane(
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
  // member: lane_confidence_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ldw_available_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_type_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: distance_to_left_lane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lane_confidence_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ldw_available_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_type_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: distance_to_right_lane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _AftermarketLane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mobileye_560_660_msgs__msg__AftermarketLane(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AftermarketLane = {
  "mobileye_560_660_msgs::msg",
  "AftermarketLane",
  _AftermarketLane__cdr_serialize,
  _AftermarketLane__cdr_deserialize,
  _AftermarketLane__get_serialized_size,
  _AftermarketLane__max_serialized_size
};

static rosidl_message_type_support_t _AftermarketLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AftermarketLane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mobileye_560_660_msgs, msg, AftermarketLane)() {
  return &_AftermarketLane__type_support;
}

#if defined(__cplusplus)
}
#endif
