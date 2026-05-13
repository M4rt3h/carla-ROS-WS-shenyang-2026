// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/HostVehicleState2805.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/host_vehicle_state2805__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/host_vehicle_state2805__struct.h"
#include "ibeo_msgs/msg/detail/host_vehicle_state2805__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // timestamp
#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"  // ibeo_header
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


using _HostVehicleState2805__ros_msg_type = ibeo_msgs__msg__HostVehicleState2805;

static bool _HostVehicleState2805__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HostVehicleState2805__ros_msg_type * ros_message = static_cast<const _HostVehicleState2805__ros_msg_type *>(untyped_ros_message);
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

  // Field name: timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->timestamp, cdr))
    {
      return false;
    }
  }

  // Field name: scan_number
  {
    cdr << ros_message->scan_number;
  }

  // Field name: error_flags
  {
    cdr << ros_message->error_flags;
  }

  // Field name: longitudinal_velocity
  {
    cdr << ros_message->longitudinal_velocity;
  }

  // Field name: steering_wheel_angle
  {
    cdr << ros_message->steering_wheel_angle;
  }

  // Field name: front_wheel_angle
  {
    cdr << ros_message->front_wheel_angle;
  }

  // Field name: x_position
  {
    cdr << ros_message->x_position;
  }

  // Field name: y_position
  {
    cdr << ros_message->y_position;
  }

  // Field name: course_angle
  {
    cdr << ros_message->course_angle;
  }

  // Field name: time_difference
  {
    cdr << ros_message->time_difference;
  }

  // Field name: x_difference
  {
    cdr << ros_message->x_difference;
  }

  // Field name: y_difference
  {
    cdr << ros_message->y_difference;
  }

  // Field name: heading_difference
  {
    cdr << ros_message->heading_difference;
  }

  // Field name: current_yaw_rate
  {
    cdr << ros_message->current_yaw_rate;
  }

  return true;
}

static bool _HostVehicleState2805__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HostVehicleState2805__ros_msg_type * ros_message = static_cast<_HostVehicleState2805__ros_msg_type *>(untyped_ros_message);
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

  // Field name: timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->timestamp))
    {
      return false;
    }
  }

  // Field name: scan_number
  {
    cdr >> ros_message->scan_number;
  }

  // Field name: error_flags
  {
    cdr >> ros_message->error_flags;
  }

  // Field name: longitudinal_velocity
  {
    cdr >> ros_message->longitudinal_velocity;
  }

  // Field name: steering_wheel_angle
  {
    cdr >> ros_message->steering_wheel_angle;
  }

  // Field name: front_wheel_angle
  {
    cdr >> ros_message->front_wheel_angle;
  }

  // Field name: x_position
  {
    cdr >> ros_message->x_position;
  }

  // Field name: y_position
  {
    cdr >> ros_message->y_position;
  }

  // Field name: course_angle
  {
    cdr >> ros_message->course_angle;
  }

  // Field name: time_difference
  {
    cdr >> ros_message->time_difference;
  }

  // Field name: x_difference
  {
    cdr >> ros_message->x_difference;
  }

  // Field name: y_difference
  {
    cdr >> ros_message->y_difference;
  }

  // Field name: heading_difference
  {
    cdr >> ros_message->heading_difference;
  }

  // Field name: current_yaw_rate
  {
    cdr >> ros_message->current_yaw_rate;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t get_serialized_size_ibeo_msgs__msg__HostVehicleState2805(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HostVehicleState2805__ros_msg_type * ros_message = static_cast<const _HostVehicleState2805__ros_msg_type *>(untyped_ros_message);
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
  // field.name timestamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->timestamp), current_alignment);
  // field.name scan_number
  {
    size_t item_size = sizeof(ros_message->scan_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_flags
  {
    size_t item_size = sizeof(ros_message->error_flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitudinal_velocity
  {
    size_t item_size = sizeof(ros_message->longitudinal_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_wheel_angle
  {
    size_t item_size = sizeof(ros_message->steering_wheel_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_wheel_angle
  {
    size_t item_size = sizeof(ros_message->front_wheel_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_position
  {
    size_t item_size = sizeof(ros_message->x_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_position
  {
    size_t item_size = sizeof(ros_message->y_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name course_angle
  {
    size_t item_size = sizeof(ros_message->course_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_difference
  {
    size_t item_size = sizeof(ros_message->time_difference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_difference
  {
    size_t item_size = sizeof(ros_message->x_difference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_difference
  {
    size_t item_size = sizeof(ros_message->y_difference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_difference
  {
    size_t item_size = sizeof(ros_message->heading_difference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_yaw_rate
  {
    size_t item_size = sizeof(ros_message->current_yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _HostVehicleState2805__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__HostVehicleState2805(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__HostVehicleState2805(
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
  // member: timestamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }
  // member: scan_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: error_flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: longitudinal_velocity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steering_wheel_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: front_wheel_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: course_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: time_difference
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: x_difference
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: y_difference
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: heading_difference
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: current_yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _HostVehicleState2805__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__HostVehicleState2805(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HostVehicleState2805 = {
  "ibeo_msgs::msg",
  "HostVehicleState2805",
  _HostVehicleState2805__cdr_serialize,
  _HostVehicleState2805__cdr_deserialize,
  _HostVehicleState2805__get_serialized_size,
  _HostVehicleState2805__max_serialized_size
};

static rosidl_message_type_support_t _HostVehicleState2805__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HostVehicleState2805,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, HostVehicleState2805)() {
  return &_HostVehicleState2805__type_support;
}

#if defined(__cplusplus)
}
#endif
