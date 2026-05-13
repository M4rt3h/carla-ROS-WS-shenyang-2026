// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/ScannerInfo2205.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scanner_info2205__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/scanner_info2205__struct.h"
#include "ibeo_msgs/msg/detail/scanner_info2205__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // scan_end_time, scan_end_time_from_device, scan_start_time, scan_start_time_from_device
#include "ibeo_msgs/msg/detail/mounting_position_f__functions.h"  // mounting_position
#include "ibeo_msgs/msg/detail/resolution_info__functions.h"  // resolutions

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();
size_t get_serialized_size_ibeo_msgs__msg__MountingPositionF(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__MountingPositionF(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, MountingPositionF)();
size_t get_serialized_size_ibeo_msgs__msg__ResolutionInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__ResolutionInfo(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ResolutionInfo)();


using _ScannerInfo2205__ros_msg_type = ibeo_msgs__msg__ScannerInfo2205;

static bool _ScannerInfo2205__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ScannerInfo2205__ros_msg_type * ros_message = static_cast<const _ScannerInfo2205__ros_msg_type *>(untyped_ros_message);
  // Field name: device_id
  {
    cdr << ros_message->device_id;
  }

  // Field name: scanner_type
  {
    cdr << ros_message->scanner_type;
  }

  // Field name: scan_number
  {
    cdr << ros_message->scan_number;
  }

  // Field name: start_angle
  {
    cdr << ros_message->start_angle;
  }

  // Field name: end_angle
  {
    cdr << ros_message->end_angle;
  }

  // Field name: scan_start_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->scan_start_time, cdr))
    {
      return false;
    }
  }

  // Field name: scan_end_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->scan_end_time, cdr))
    {
      return false;
    }
  }

  // Field name: scan_start_time_from_device
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->scan_start_time_from_device, cdr))
    {
      return false;
    }
  }

  // Field name: scan_end_time_from_device
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->scan_end_time_from_device, cdr))
    {
      return false;
    }
  }

  // Field name: scan_frequency
  {
    cdr << ros_message->scan_frequency;
  }

  // Field name: beam_tilt
  {
    cdr << ros_message->beam_tilt;
  }

  // Field name: scan_flags
  {
    cdr << ros_message->scan_flags;
  }

  // Field name: mounting_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, MountingPositionF
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mounting_position, cdr))
    {
      return false;
    }
  }

  // Field name: resolutions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ResolutionInfo
      )()->data);
    size_t size = 8;
    auto array_ptr = ros_message->resolutions;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ScannerInfo2205__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ScannerInfo2205__ros_msg_type * ros_message = static_cast<_ScannerInfo2205__ros_msg_type *>(untyped_ros_message);
  // Field name: device_id
  {
    cdr >> ros_message->device_id;
  }

  // Field name: scanner_type
  {
    cdr >> ros_message->scanner_type;
  }

  // Field name: scan_number
  {
    cdr >> ros_message->scan_number;
  }

  // Field name: start_angle
  {
    cdr >> ros_message->start_angle;
  }

  // Field name: end_angle
  {
    cdr >> ros_message->end_angle;
  }

  // Field name: scan_start_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->scan_start_time))
    {
      return false;
    }
  }

  // Field name: scan_end_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->scan_end_time))
    {
      return false;
    }
  }

  // Field name: scan_start_time_from_device
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->scan_start_time_from_device))
    {
      return false;
    }
  }

  // Field name: scan_end_time_from_device
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->scan_end_time_from_device))
    {
      return false;
    }
  }

  // Field name: scan_frequency
  {
    cdr >> ros_message->scan_frequency;
  }

  // Field name: beam_tilt
  {
    cdr >> ros_message->beam_tilt;
  }

  // Field name: scan_flags
  {
    cdr >> ros_message->scan_flags;
  }

  // Field name: mounting_position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, MountingPositionF
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mounting_position))
    {
      return false;
    }
  }

  // Field name: resolutions
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ResolutionInfo
      )()->data);
    size_t size = 8;
    auto array_ptr = ros_message->resolutions;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t get_serialized_size_ibeo_msgs__msg__ScannerInfo2205(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScannerInfo2205__ros_msg_type * ros_message = static_cast<const _ScannerInfo2205__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name device_id
  {
    size_t item_size = sizeof(ros_message->device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scanner_type
  {
    size_t item_size = sizeof(ros_message->scanner_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan_number
  {
    size_t item_size = sizeof(ros_message->scan_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name start_angle
  {
    size_t item_size = sizeof(ros_message->start_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_angle
  {
    size_t item_size = sizeof(ros_message->end_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan_start_time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->scan_start_time), current_alignment);
  // field.name scan_end_time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->scan_end_time), current_alignment);
  // field.name scan_start_time_from_device

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->scan_start_time_from_device), current_alignment);
  // field.name scan_end_time_from_device

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->scan_end_time_from_device), current_alignment);
  // field.name scan_frequency
  {
    size_t item_size = sizeof(ros_message->scan_frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name beam_tilt
  {
    size_t item_size = sizeof(ros_message->beam_tilt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan_flags
  {
    size_t item_size = sizeof(ros_message->scan_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mounting_position

  current_alignment += get_serialized_size_ibeo_msgs__msg__MountingPositionF(
    &(ros_message->mounting_position), current_alignment);
  // field.name resolutions
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->resolutions;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ibeo_msgs__msg__ResolutionInfo(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ScannerInfo2205__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__ScannerInfo2205(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__ScannerInfo2205(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scanner_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scan_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: start_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: end_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scan_start_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: scan_end_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: scan_start_time_from_device
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: scan_end_time_from_device
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: scan_frequency
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: beam_tilt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: scan_flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mounting_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__MountingPositionF(
        full_bounded, current_alignment);
    }
  }
  // member: resolutions
  {
    size_t array_size = 8;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__ResolutionInfo(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ScannerInfo2205__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__ScannerInfo2205(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ScannerInfo2205 = {
  "ibeo_msgs::msg",
  "ScannerInfo2205",
  _ScannerInfo2205__cdr_serialize,
  _ScannerInfo2205__cdr_deserialize,
  _ScannerInfo2205__get_serialized_size,
  _ScannerInfo2205__max_serialized_size
};

static rosidl_message_type_support_t _ScannerInfo2205__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScannerInfo2205,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScannerInfo2205)() {
  return &_ScannerInfo2205__type_support;
}

#if defined(__cplusplus)
}
#endif
