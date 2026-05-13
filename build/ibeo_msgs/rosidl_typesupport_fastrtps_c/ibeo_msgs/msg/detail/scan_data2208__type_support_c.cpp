// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/ScanData2208.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_data2208__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/scan_data2208__struct.h"
#include "ibeo_msgs/msg/detail/scan_data2208__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // scan_end_time, scan_start_time
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"  // ibeo_header
#include "ibeo_msgs/msg/detail/scan_point2208__functions.h"  // scan_point_list
#include "std_msgs/msg/detail/header__functions.h"  // header

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
size_t get_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, IbeoDataHeader)();
size_t get_serialized_size_ibeo_msgs__msg__ScanPoint2208(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__ScanPoint2208(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScanPoint2208)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ScanData2208__ros_msg_type = ibeo_msgs__msg__ScanData2208;

static bool _ScanData2208__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ScanData2208__ros_msg_type * ros_message = static_cast<const _ScanData2208__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ibeo_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, IbeoDataHeader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ibeo_header, cdr))
    {
      return false;
    }
  }

  // Field name: scan_number
  {
    cdr << ros_message->scan_number;
  }

  // Field name: scanner_type
  {
    cdr << ros_message->scanner_type;
  }

  // Field name: motor_on
  {
    cdr << (ros_message->motor_on ? true : false);
  }

  // Field name: laser_on
  {
    cdr << (ros_message->laser_on ? true : false);
  }

  // Field name: frequency_locked
  {
    cdr << (ros_message->frequency_locked ? true : false);
  }

  // Field name: motor_rotating_direction
  {
    cdr << ros_message->motor_rotating_direction;
  }

  // Field name: angle_ticks_per_rotation
  {
    cdr << ros_message->angle_ticks_per_rotation;
  }

  // Field name: scan_flags
  {
    cdr << ros_message->scan_flags;
  }

  // Field name: mounting_yaw_angle_ticks
  {
    cdr << ros_message->mounting_yaw_angle_ticks;
  }

  // Field name: mounting_pitch_angle_ticks
  {
    cdr << ros_message->mounting_pitch_angle_ticks;
  }

  // Field name: mounting_roll_angle_ticks
  {
    cdr << ros_message->mounting_roll_angle_ticks;
  }

  // Field name: mounting_position_x
  {
    cdr << ros_message->mounting_position_x;
  }

  // Field name: mounting_position_y
  {
    cdr << ros_message->mounting_position_y;
  }

  // Field name: mounting_position_z
  {
    cdr << ros_message->mounting_position_z;
  }

  // Field name: device_id
  {
    cdr << ros_message->device_id;
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

  // Field name: start_angle_ticks
  {
    cdr << ros_message->start_angle_ticks;
  }

  // Field name: end_angle_ticks
  {
    cdr << ros_message->end_angle_ticks;
  }

  // Field name: mirror_side
  {
    cdr << ros_message->mirror_side;
  }

  // Field name: mirror_tilt
  {
    cdr << ros_message->mirror_tilt;
  }

  // Field name: scan_point_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScanPoint2208
      )()->data);
    size_t size = ros_message->scan_point_list.size;
    auto array_ptr = ros_message->scan_point_list.data;
    cdr << static_cast<uint32_t>(size);
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

static bool _ScanData2208__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ScanData2208__ros_msg_type * ros_message = static_cast<_ScanData2208__ros_msg_type *>(untyped_ros_message);
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

  // Field name: ibeo_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, IbeoDataHeader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ibeo_header))
    {
      return false;
    }
  }

  // Field name: scan_number
  {
    cdr >> ros_message->scan_number;
  }

  // Field name: scanner_type
  {
    cdr >> ros_message->scanner_type;
  }

  // Field name: motor_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->motor_on = tmp ? true : false;
  }

  // Field name: laser_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->laser_on = tmp ? true : false;
  }

  // Field name: frequency_locked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->frequency_locked = tmp ? true : false;
  }

  // Field name: motor_rotating_direction
  {
    cdr >> ros_message->motor_rotating_direction;
  }

  // Field name: angle_ticks_per_rotation
  {
    cdr >> ros_message->angle_ticks_per_rotation;
  }

  // Field name: scan_flags
  {
    cdr >> ros_message->scan_flags;
  }

  // Field name: mounting_yaw_angle_ticks
  {
    cdr >> ros_message->mounting_yaw_angle_ticks;
  }

  // Field name: mounting_pitch_angle_ticks
  {
    cdr >> ros_message->mounting_pitch_angle_ticks;
  }

  // Field name: mounting_roll_angle_ticks
  {
    cdr >> ros_message->mounting_roll_angle_ticks;
  }

  // Field name: mounting_position_x
  {
    cdr >> ros_message->mounting_position_x;
  }

  // Field name: mounting_position_y
  {
    cdr >> ros_message->mounting_position_y;
  }

  // Field name: mounting_position_z
  {
    cdr >> ros_message->mounting_position_z;
  }

  // Field name: device_id
  {
    cdr >> ros_message->device_id;
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

  // Field name: start_angle_ticks
  {
    cdr >> ros_message->start_angle_ticks;
  }

  // Field name: end_angle_ticks
  {
    cdr >> ros_message->end_angle_ticks;
  }

  // Field name: mirror_side
  {
    cdr >> ros_message->mirror_side;
  }

  // Field name: mirror_tilt
  {
    cdr >> ros_message->mirror_tilt;
  }

  // Field name: scan_point_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScanPoint2208
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->scan_point_list.data) {
      ibeo_msgs__msg__ScanPoint2208__Sequence__fini(&ros_message->scan_point_list);
    }
    if (!ibeo_msgs__msg__ScanPoint2208__Sequence__init(&ros_message->scan_point_list, size)) {
      fprintf(stderr, "failed to create array for field 'scan_point_list'");
      return false;
    }
    auto array_ptr = ros_message->scan_point_list.data;
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
size_t get_serialized_size_ibeo_msgs__msg__ScanData2208(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScanData2208__ros_msg_type * ros_message = static_cast<const _ScanData2208__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ibeo_header

  current_alignment += get_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
    &(ros_message->ibeo_header), current_alignment);
  // field.name scan_number
  {
    size_t item_size = sizeof(ros_message->scan_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scanner_type
  {
    size_t item_size = sizeof(ros_message->scanner_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_on
  {
    size_t item_size = sizeof(ros_message->motor_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_on
  {
    size_t item_size = sizeof(ros_message->laser_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frequency_locked
  {
    size_t item_size = sizeof(ros_message->frequency_locked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_rotating_direction
  {
    size_t item_size = sizeof(ros_message->motor_rotating_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_ticks_per_rotation
  {
    size_t item_size = sizeof(ros_message->angle_ticks_per_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan_flags
  {
    size_t item_size = sizeof(ros_message->scan_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mounting_yaw_angle_ticks
  {
    size_t item_size = sizeof(ros_message->mounting_yaw_angle_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mounting_pitch_angle_ticks
  {
    size_t item_size = sizeof(ros_message->mounting_pitch_angle_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mounting_roll_angle_ticks
  {
    size_t item_size = sizeof(ros_message->mounting_roll_angle_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mounting_position_x
  {
    size_t item_size = sizeof(ros_message->mounting_position_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mounting_position_y
  {
    size_t item_size = sizeof(ros_message->mounting_position_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mounting_position_z
  {
    size_t item_size = sizeof(ros_message->mounting_position_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name device_id
  {
    size_t item_size = sizeof(ros_message->device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan_start_time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->scan_start_time), current_alignment);
  // field.name scan_end_time

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->scan_end_time), current_alignment);
  // field.name start_angle_ticks
  {
    size_t item_size = sizeof(ros_message->start_angle_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name end_angle_ticks
  {
    size_t item_size = sizeof(ros_message->end_angle_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mirror_side
  {
    size_t item_size = sizeof(ros_message->mirror_side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mirror_tilt
  {
    size_t item_size = sizeof(ros_message->mirror_tilt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan_point_list
  {
    size_t array_size = ros_message->scan_point_list.size;
    auto array_ptr = ros_message->scan_point_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ibeo_msgs__msg__ScanPoint2208(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ScanData2208__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__ScanData2208(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__ScanData2208(
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
  // member: ibeo_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
        full_bounded, current_alignment);
    }
  }
  // member: scan_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: scanner_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: motor_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: laser_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: frequency_locked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_rotating_direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: angle_ticks_per_rotation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: scan_flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mounting_yaw_angle_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mounting_pitch_angle_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mounting_roll_angle_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mounting_position_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mounting_position_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mounting_position_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
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
  // member: start_angle_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: end_angle_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: mirror_side
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mirror_tilt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: scan_point_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__ScanPoint2208(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ScanData2208__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__ScanData2208(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ScanData2208 = {
  "ibeo_msgs::msg",
  "ScanData2208",
  _ScanData2208__cdr_serialize,
  _ScanData2208__cdr_deserialize,
  _ScanData2208__get_serialized_size,
  _ScanData2208__max_serialized_size
};

static rosidl_message_type_support_t _ScanData2208__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScanData2208,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScanData2208)() {
  return &_ScanData2208__type_support;
}

#if defined(__cplusplus)
}
#endif
