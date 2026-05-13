// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle3.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_vehicle3__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle3__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle3__functions.h"
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


using _EsrVehicle3__ros_msg_type = delphi_esr_msgs__msg__EsrVehicle3;

static bool _EsrVehicle3__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsrVehicle3__ros_msg_type * ros_message = static_cast<const _EsrVehicle3__ros_msg_type *>(untyped_ros_message);
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

  // Field name: long_accel_validity
  {
    cdr << (ros_message->long_accel_validity ? true : false);
  }

  // Field name: lat_accel_validity
  {
    cdr << (ros_message->lat_accel_validity ? true : false);
  }

  // Field name: lat_accel
  {
    cdr << ros_message->lat_accel;
  }

  // Field name: long_accel
  {
    cdr << ros_message->long_accel;
  }

  // Field name: radar_fov_lr
  {
    cdr << ros_message->radar_fov_lr;
  }

  // Field name: radar_fov_mr
  {
    cdr << ros_message->radar_fov_mr;
  }

  // Field name: auto_align_disable
  {
    cdr << (ros_message->auto_align_disable ? true : false);
  }

  // Field name: radar_height
  {
    cdr << ros_message->radar_height;
  }

  // Field name: serv_align_type
  {
    cdr << (ros_message->serv_align_type ? true : false);
  }

  // Field name: serv_align_enable
  {
    cdr << (ros_message->serv_align_enable ? true : false);
  }

  // Field name: aalign_avg_ctr_total
  {
    cdr << ros_message->aalign_avg_ctr_total;
  }

  // Field name: auto_align_converged
  {
    cdr << (ros_message->auto_align_converged ? true : false);
  }

  // Field name: wheel_slip
  {
    cdr << ros_message->wheel_slip;
  }

  // Field name: serv_align_updates_need
  {
    cdr << ros_message->serv_align_updates_need;
  }

  // Field name: angle_mounting_offset
  {
    cdr << ros_message->angle_mounting_offset;
  }

  return true;
}

static bool _EsrVehicle3__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsrVehicle3__ros_msg_type * ros_message = static_cast<_EsrVehicle3__ros_msg_type *>(untyped_ros_message);
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

  // Field name: long_accel_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->long_accel_validity = tmp ? true : false;
  }

  // Field name: lat_accel_validity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lat_accel_validity = tmp ? true : false;
  }

  // Field name: lat_accel
  {
    cdr >> ros_message->lat_accel;
  }

  // Field name: long_accel
  {
    cdr >> ros_message->long_accel;
  }

  // Field name: radar_fov_lr
  {
    cdr >> ros_message->radar_fov_lr;
  }

  // Field name: radar_fov_mr
  {
    cdr >> ros_message->radar_fov_mr;
  }

  // Field name: auto_align_disable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_align_disable = tmp ? true : false;
  }

  // Field name: radar_height
  {
    cdr >> ros_message->radar_height;
  }

  // Field name: serv_align_type
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->serv_align_type = tmp ? true : false;
  }

  // Field name: serv_align_enable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->serv_align_enable = tmp ? true : false;
  }

  // Field name: aalign_avg_ctr_total
  {
    cdr >> ros_message->aalign_avg_ctr_total;
  }

  // Field name: auto_align_converged
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_align_converged = tmp ? true : false;
  }

  // Field name: wheel_slip
  {
    cdr >> ros_message->wheel_slip;
  }

  // Field name: serv_align_updates_need
  {
    cdr >> ros_message->serv_align_updates_need;
  }

  // Field name: angle_mounting_offset
  {
    cdr >> ros_message->angle_mounting_offset;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t get_serialized_size_delphi_esr_msgs__msg__EsrVehicle3(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsrVehicle3__ros_msg_type * ros_message = static_cast<const _EsrVehicle3__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name long_accel_validity
  {
    size_t item_size = sizeof(ros_message->long_accel_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_accel_validity
  {
    size_t item_size = sizeof(ros_message->lat_accel_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_accel
  {
    size_t item_size = sizeof(ros_message->lat_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name long_accel
  {
    size_t item_size = sizeof(ros_message->long_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_fov_lr
  {
    size_t item_size = sizeof(ros_message->radar_fov_lr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_fov_mr
  {
    size_t item_size = sizeof(ros_message->radar_fov_mr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_align_disable
  {
    size_t item_size = sizeof(ros_message->auto_align_disable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_height
  {
    size_t item_size = sizeof(ros_message->radar_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name serv_align_type
  {
    size_t item_size = sizeof(ros_message->serv_align_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name serv_align_enable
  {
    size_t item_size = sizeof(ros_message->serv_align_enable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aalign_avg_ctr_total
  {
    size_t item_size = sizeof(ros_message->aalign_avg_ctr_total);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_align_converged
  {
    size_t item_size = sizeof(ros_message->auto_align_converged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_slip
  {
    size_t item_size = sizeof(ros_message->wheel_slip);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name serv_align_updates_need
  {
    size_t item_size = sizeof(ros_message->serv_align_updates_need);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angle_mounting_offset
  {
    size_t item_size = sizeof(ros_message->angle_mounting_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsrVehicle3__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_esr_msgs__msg__EsrVehicle3(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t max_serialized_size_delphi_esr_msgs__msg__EsrVehicle3(
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
  // member: long_accel_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lat_accel_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lat_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: long_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: radar_fov_lr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_fov_mr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_align_disable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: serv_align_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: serv_align_enable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aalign_avg_ctr_total
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: auto_align_converged
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wheel_slip
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: serv_align_updates_need
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: angle_mounting_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EsrVehicle3__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_esr_msgs__msg__EsrVehicle3(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EsrVehicle3 = {
  "delphi_esr_msgs::msg",
  "EsrVehicle3",
  _EsrVehicle3__cdr_serialize,
  _EsrVehicle3__cdr_deserialize,
  _EsrVehicle3__get_serialized_size,
  _EsrVehicle3__max_serialized_size
};

static rosidl_message_type_support_t _EsrVehicle3__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsrVehicle3,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_esr_msgs, msg, EsrVehicle3)() {
  return &_EsrVehicle3__type_support;
}

#if defined(__cplusplus)
}
#endif
