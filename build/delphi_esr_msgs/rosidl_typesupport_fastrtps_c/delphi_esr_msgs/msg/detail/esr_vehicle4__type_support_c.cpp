// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle4.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_vehicle4__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle4__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle4__functions.h"
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


using _EsrVehicle4__ros_msg_type = delphi_esr_msgs__msg__EsrVehicle4;

static bool _EsrVehicle4__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsrVehicle4__ros_msg_type * ros_message = static_cast<const _EsrVehicle4__ros_msg_type *>(untyped_ros_message);
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

  // Field name: fac_align_cmd_1
  {
    cdr << (ros_message->fac_align_cmd_1 ? true : false);
  }

  // Field name: fac_align_cmd_2
  {
    cdr << (ros_message->fac_align_cmd_2 ? true : false);
  }

  // Field name: fac_align_max_nt
  {
    cdr << ros_message->fac_align_max_nt;
  }

  // Field name: fac_align_samp_req
  {
    cdr << ros_message->fac_align_samp_req;
  }

  // Field name: fac_tgt_mtg_offset
  {
    cdr << ros_message->fac_tgt_mtg_offset;
  }

  // Field name: fac_tgt_mtg_space_hor
  {
    cdr << ros_message->fac_tgt_mtg_space_hor;
  }

  // Field name: fac_tgt_mtg_space_ver
  {
    cdr << ros_message->fac_tgt_mtg_space_ver;
  }

  // Field name: fac_tgt_range_1
  {
    cdr << ros_message->fac_tgt_range_1;
  }

  // Field name: fac_tgt_range_r2m
  {
    cdr << ros_message->fac_tgt_range_r2m;
  }

  // Field name: fac_tgt_range_m2t
  {
    cdr << ros_message->fac_tgt_range_m2t;
  }

  return true;
}

static bool _EsrVehicle4__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsrVehicle4__ros_msg_type * ros_message = static_cast<_EsrVehicle4__ros_msg_type *>(untyped_ros_message);
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

  // Field name: fac_align_cmd_1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fac_align_cmd_1 = tmp ? true : false;
  }

  // Field name: fac_align_cmd_2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fac_align_cmd_2 = tmp ? true : false;
  }

  // Field name: fac_align_max_nt
  {
    cdr >> ros_message->fac_align_max_nt;
  }

  // Field name: fac_align_samp_req
  {
    cdr >> ros_message->fac_align_samp_req;
  }

  // Field name: fac_tgt_mtg_offset
  {
    cdr >> ros_message->fac_tgt_mtg_offset;
  }

  // Field name: fac_tgt_mtg_space_hor
  {
    cdr >> ros_message->fac_tgt_mtg_space_hor;
  }

  // Field name: fac_tgt_mtg_space_ver
  {
    cdr >> ros_message->fac_tgt_mtg_space_ver;
  }

  // Field name: fac_tgt_range_1
  {
    cdr >> ros_message->fac_tgt_range_1;
  }

  // Field name: fac_tgt_range_r2m
  {
    cdr >> ros_message->fac_tgt_range_r2m;
  }

  // Field name: fac_tgt_range_m2t
  {
    cdr >> ros_message->fac_tgt_range_m2t;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t get_serialized_size_delphi_esr_msgs__msg__EsrVehicle4(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsrVehicle4__ros_msg_type * ros_message = static_cast<const _EsrVehicle4__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name fac_align_cmd_1
  {
    size_t item_size = sizeof(ros_message->fac_align_cmd_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fac_align_cmd_2
  {
    size_t item_size = sizeof(ros_message->fac_align_cmd_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fac_align_max_nt
  {
    size_t item_size = sizeof(ros_message->fac_align_max_nt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fac_align_samp_req
  {
    size_t item_size = sizeof(ros_message->fac_align_samp_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fac_tgt_mtg_offset
  {
    size_t item_size = sizeof(ros_message->fac_tgt_mtg_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fac_tgt_mtg_space_hor
  {
    size_t item_size = sizeof(ros_message->fac_tgt_mtg_space_hor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fac_tgt_mtg_space_ver
  {
    size_t item_size = sizeof(ros_message->fac_tgt_mtg_space_ver);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fac_tgt_range_1
  {
    size_t item_size = sizeof(ros_message->fac_tgt_range_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fac_tgt_range_r2m
  {
    size_t item_size = sizeof(ros_message->fac_tgt_range_r2m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fac_tgt_range_m2t
  {
    size_t item_size = sizeof(ros_message->fac_tgt_range_m2t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsrVehicle4__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_esr_msgs__msg__EsrVehicle4(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t max_serialized_size_delphi_esr_msgs__msg__EsrVehicle4(
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
  // member: fac_align_cmd_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fac_align_cmd_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fac_align_max_nt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fac_align_samp_req
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fac_tgt_mtg_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fac_tgt_mtg_space_hor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fac_tgt_mtg_space_ver
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fac_tgt_range_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fac_tgt_range_r2m
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fac_tgt_range_m2t
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EsrVehicle4__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_esr_msgs__msg__EsrVehicle4(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EsrVehicle4 = {
  "delphi_esr_msgs::msg",
  "EsrVehicle4",
  _EsrVehicle4__cdr_serialize,
  _EsrVehicle4__cdr_deserialize,
  _EsrVehicle4__get_serialized_size,
  _EsrVehicle4__max_serialized_size
};

static rosidl_message_type_support_t _EsrVehicle4__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsrVehicle4,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_esr_msgs, msg, EsrVehicle4)() {
  return &_EsrVehicle4__type_support;
}

#if defined(__cplusplus)
}
#endif
