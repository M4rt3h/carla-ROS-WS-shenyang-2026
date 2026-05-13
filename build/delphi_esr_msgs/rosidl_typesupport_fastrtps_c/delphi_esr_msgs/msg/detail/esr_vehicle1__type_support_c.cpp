// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle1.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_vehicle1__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle1__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle1__functions.h"
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_esr_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_esr_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_esr_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _EsrVehicle1__ros_msg_type = delphi_esr_msgs__msg__EsrVehicle1;

static bool _EsrVehicle1__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsrVehicle1__ros_msg_type * ros_message = static_cast<const _EsrVehicle1__ros_msg_type *>(untyped_ros_message);
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

  // Field name: vehicle_speed
  {
    cdr << ros_message->vehicle_speed;
  }

  // Field name: vehicle_speed_direction
  {
    cdr << (ros_message->vehicle_speed_direction ? true : false);
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  // Field name: yaw_rate_validity
  {
    cdr << (ros_message->yaw_rate_validity ? true : false);
  }

  // Field name: steering_angle_rate_sign
  {
    cdr << (ros_message->steering_angle_rate_sign ? true : false);
  }

  // Field name: radius_curvature
  {
    cdr << ros_message->radius_curvature;
  }

  // Field name: steering_angle_validity
  {
    cdr << (ros_message->steering_angle_validity ? true : false);
  }

  // Field name: steering_angle_sign
  {
    cdr << (ros_message->steering_angle_sign ? true : false);
  }

  // Field name: steering_angle
  {
    cdr << ros_message->steering_angle;
  }

  // Field name: steering_angle_rate
  {
    cdr << ros_message->steering_angle_rate;
  }

  return true;
}

static bool _EsrVehicle1__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsrVehicle1__ros_msg_type * ros_message = static_cast<_EsrVehicle1__ros_msg_type *>(untyped_ros_message);
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

  // Field name: vehicle_speed
  {
    cdr >> ros_message->vehicle_speed;
  }

  // Field name: vehicle_speed_direction
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vehicle_speed_direction = tmp ? true : false;
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  // Field name: yaw_rate_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->yaw_rate_validity = tmp ? true : false;
  }

  // Field name: steering_angle_rate_sign
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->steering_angle_rate_sign = tmp ? true : false;
  }

  // Field name: radius_curvature
  {
    cdr >> ros_message->radius_curvature;
  }

  // Field name: steering_angle_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->steering_angle_validity = tmp ? true : false;
  }

  // Field name: steering_angle_sign
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->steering_angle_sign = tmp ? true : false;
  }

  // Field name: steering_angle
  {
    cdr >> ros_message->steering_angle;
  }

  // Field name: steering_angle_rate
  {
    cdr >> ros_message->steering_angle_rate;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t get_serialized_size_delphi_esr_msgs__msg__EsrVehicle1(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsrVehicle1__ros_msg_type * ros_message = static_cast<const _EsrVehicle1__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name vehicle_speed
  {
    size_t item_size = sizeof(ros_message->vehicle_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vehicle_speed_direction
  {
    size_t item_size = sizeof(ros_message->vehicle_speed_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate_validity
  {
    size_t item_size = sizeof(ros_message->yaw_rate_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle_rate_sign
  {
    size_t item_size = sizeof(ros_message->steering_angle_rate_sign);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radius_curvature
  {
    size_t item_size = sizeof(ros_message->radius_curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle_validity
  {
    size_t item_size = sizeof(ros_message->steering_angle_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle_sign
  {
    size_t item_size = sizeof(ros_message->steering_angle_sign);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle
  {
    size_t item_size = sizeof(ros_message->steering_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steering_angle_rate
  {
    size_t item_size = sizeof(ros_message->steering_angle_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsrVehicle1__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_esr_msgs__msg__EsrVehicle1(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t max_serialized_size_delphi_esr_msgs__msg__EsrVehicle1(
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
  // member: vehicle_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vehicle_speed_direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steering_angle_rate_sign
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radius_curvature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: steering_angle_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steering_angle_sign
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steering_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: steering_angle_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EsrVehicle1__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_esr_msgs__msg__EsrVehicle1(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EsrVehicle1 = {
  "delphi_esr_msgs::msg",
  "EsrVehicle1",
  _EsrVehicle1__cdr_serialize,
  _EsrVehicle1__cdr_deserialize,
  _EsrVehicle1__get_serialized_size,
  _EsrVehicle1__max_serialized_size
};

static rosidl_message_type_support_t _EsrVehicle1__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsrVehicle1,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_esr_msgs, msg, EsrVehicle1)() {
  return &_EsrVehicle1__type_support;
}

#if defined(__cplusplus)
}
#endif
