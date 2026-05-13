// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg3.idl
// generated code does not contain a copyright notice
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_mrr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__struct.h"
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__functions.h"
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
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_mrr_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_mrr_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_mrr_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _VehicleStateMsg3__ros_msg_type = delphi_mrr_msgs__msg__VehicleStateMsg3;

static bool _VehicleStateMsg3__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleStateMsg3__ros_msg_type * ros_message = static_cast<const _VehicleStateMsg3__ros_msg_type *>(untyped_ros_message);
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

  // Field name: yaw_rate_reference_valid
  {
    cdr << (ros_message->yaw_rate_reference_valid ? true : false);
  }

  // Field name: yaw_rate_reference
  {
    cdr << ros_message->yaw_rate_reference;
  }

  // Field name: can_veh_long_accel_qf
  {
    cdr << ros_message->can_veh_long_accel_qf;
  }

  // Field name: can_veh_long_accel
  {
    cdr << ros_message->can_veh_long_accel;
  }

  return true;
}

static bool _VehicleStateMsg3__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleStateMsg3__ros_msg_type * ros_message = static_cast<_VehicleStateMsg3__ros_msg_type *>(untyped_ros_message);
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

  // Field name: yaw_rate_reference_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->yaw_rate_reference_valid = tmp ? true : false;
  }

  // Field name: yaw_rate_reference
  {
    cdr >> ros_message->yaw_rate_reference;
  }

  // Field name: can_veh_long_accel_qf
  {
    cdr >> ros_message->can_veh_long_accel_qf;
  }

  // Field name: can_veh_long_accel
  {
    cdr >> ros_message->can_veh_long_accel;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t get_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg3(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleStateMsg3__ros_msg_type * ros_message = static_cast<const _VehicleStateMsg3__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name yaw_rate_reference_valid
  {
    size_t item_size = sizeof(ros_message->yaw_rate_reference_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate_reference
  {
    size_t item_size = sizeof(ros_message->yaw_rate_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_veh_long_accel_qf
  {
    size_t item_size = sizeof(ros_message->can_veh_long_accel_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_veh_long_accel
  {
    size_t item_size = sizeof(ros_message->can_veh_long_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleStateMsg3__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg3(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_mrr_msgs
size_t max_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg3(
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
  // member: yaw_rate_reference_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: yaw_rate_reference
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: can_veh_long_accel_qf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_veh_long_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleStateMsg3__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_mrr_msgs__msg__VehicleStateMsg3(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleStateMsg3 = {
  "delphi_mrr_msgs::msg",
  "VehicleStateMsg3",
  _VehicleStateMsg3__cdr_serialize,
  _VehicleStateMsg3__cdr_deserialize,
  _VehicleStateMsg3__get_serialized_size,
  _VehicleStateMsg3__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStateMsg3__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleStateMsg3,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_mrr_msgs, msg, VehicleStateMsg3)() {
  return &_VehicleStateMsg3__type_support;
}

#if defined(__cplusplus)
}
#endif
