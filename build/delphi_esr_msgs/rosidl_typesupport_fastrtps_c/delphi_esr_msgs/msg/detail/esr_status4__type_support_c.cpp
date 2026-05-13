// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_esr_msgs:msg/EsrStatus4.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status4__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_esr_msgs/msg/detail/esr_status4__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_status4__functions.h"
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

#include "rosidl_runtime_c/string.h"  // canmsg
#include "rosidl_runtime_c/string_functions.h"  // canmsg
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


using _EsrStatus4__ros_msg_type = delphi_esr_msgs__msg__EsrStatus4;

static bool _EsrStatus4__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsrStatus4__ros_msg_type * ros_message = static_cast<const _EsrStatus4__ros_msg_type *>(untyped_ros_message);
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

  // Field name: canmsg
  {
    const rosidl_runtime_c__String * str = &ros_message->canmsg;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: truck_target_det
  {
    cdr << (ros_message->truck_target_det ? true : false);
  }

  // Field name: lr_only_grating_lobe_det
  {
    cdr << (ros_message->lr_only_grating_lobe_det ? true : false);
  }

  // Field name: sidelobe_blockage
  {
    cdr << (ros_message->sidelobe_blockage ? true : false);
  }

  // Field name: partial_blockage
  {
    cdr << (ros_message->partial_blockage ? true : false);
  }

  // Field name: mr_lr_mode
  {
    cdr << ros_message->mr_lr_mode;
  }

  // Field name: rolling_count_3
  {
    cdr << ros_message->rolling_count_3;
  }

  // Field name: path_id_acc
  {
    cdr << ros_message->path_id_acc;
  }

  // Field name: path_id_cmbb_move
  {
    cdr << ros_message->path_id_cmbb_move;
  }

  // Field name: path_id_cmbb_stat
  {
    cdr << ros_message->path_id_cmbb_stat;
  }

  // Field name: path_id_fcw_move
  {
    cdr << ros_message->path_id_fcw_move;
  }

  // Field name: path_id_fcw_stat
  {
    cdr << ros_message->path_id_fcw_stat;
  }

  // Field name: auto_align_angle
  {
    cdr << ros_message->auto_align_angle;
  }

  // Field name: path_id_acc_stat
  {
    cdr << ros_message->path_id_acc_stat;
  }

  return true;
}

static bool _EsrStatus4__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsrStatus4__ros_msg_type * ros_message = static_cast<_EsrStatus4__ros_msg_type *>(untyped_ros_message);
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

  // Field name: canmsg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->canmsg.data) {
      rosidl_runtime_c__String__init(&ros_message->canmsg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->canmsg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'canmsg'\n");
      return false;
    }
  }

  // Field name: truck_target_det
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->truck_target_det = tmp ? true : false;
  }

  // Field name: lr_only_grating_lobe_det
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lr_only_grating_lobe_det = tmp ? true : false;
  }

  // Field name: sidelobe_blockage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sidelobe_blockage = tmp ? true : false;
  }

  // Field name: partial_blockage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->partial_blockage = tmp ? true : false;
  }

  // Field name: mr_lr_mode
  {
    cdr >> ros_message->mr_lr_mode;
  }

  // Field name: rolling_count_3
  {
    cdr >> ros_message->rolling_count_3;
  }

  // Field name: path_id_acc
  {
    cdr >> ros_message->path_id_acc;
  }

  // Field name: path_id_cmbb_move
  {
    cdr >> ros_message->path_id_cmbb_move;
  }

  // Field name: path_id_cmbb_stat
  {
    cdr >> ros_message->path_id_cmbb_stat;
  }

  // Field name: path_id_fcw_move
  {
    cdr >> ros_message->path_id_fcw_move;
  }

  // Field name: path_id_fcw_stat
  {
    cdr >> ros_message->path_id_fcw_stat;
  }

  // Field name: auto_align_angle
  {
    cdr >> ros_message->auto_align_angle;
  }

  // Field name: path_id_acc_stat
  {
    cdr >> ros_message->path_id_acc_stat;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t get_serialized_size_delphi_esr_msgs__msg__EsrStatus4(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsrStatus4__ros_msg_type * ros_message = static_cast<const _EsrStatus4__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name canmsg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->canmsg.size + 1);
  // field.name truck_target_det
  {
    size_t item_size = sizeof(ros_message->truck_target_det);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lr_only_grating_lobe_det
  {
    size_t item_size = sizeof(ros_message->lr_only_grating_lobe_det);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sidelobe_blockage
  {
    size_t item_size = sizeof(ros_message->sidelobe_blockage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name partial_blockage
  {
    size_t item_size = sizeof(ros_message->partial_blockage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mr_lr_mode
  {
    size_t item_size = sizeof(ros_message->mr_lr_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rolling_count_3
  {
    size_t item_size = sizeof(ros_message->rolling_count_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_id_acc
  {
    size_t item_size = sizeof(ros_message->path_id_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_id_cmbb_move
  {
    size_t item_size = sizeof(ros_message->path_id_cmbb_move);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_id_cmbb_stat
  {
    size_t item_size = sizeof(ros_message->path_id_cmbb_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_id_fcw_move
  {
    size_t item_size = sizeof(ros_message->path_id_fcw_move);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_id_fcw_stat
  {
    size_t item_size = sizeof(ros_message->path_id_fcw_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_align_angle
  {
    size_t item_size = sizeof(ros_message->auto_align_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path_id_acc_stat
  {
    size_t item_size = sizeof(ros_message->path_id_acc_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsrStatus4__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_esr_msgs__msg__EsrStatus4(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t max_serialized_size_delphi_esr_msgs__msg__EsrStatus4(
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
  // member: canmsg
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: truck_target_det
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lr_only_grating_lobe_det
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sidelobe_blockage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: partial_blockage
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mr_lr_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rolling_count_3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: path_id_acc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: path_id_cmbb_move
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: path_id_cmbb_stat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: path_id_fcw_move
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: path_id_fcw_stat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_align_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: path_id_acc_stat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EsrStatus4__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_esr_msgs__msg__EsrStatus4(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EsrStatus4 = {
  "delphi_esr_msgs::msg",
  "EsrStatus4",
  _EsrStatus4__cdr_serialize,
  _EsrStatus4__cdr_deserialize,
  _EsrStatus4__get_serialized_size,
  _EsrStatus4__max_serialized_size
};

static rosidl_message_type_support_t _EsrStatus4__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsrStatus4,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_esr_msgs, msg, EsrStatus4)() {
  return &_EsrStatus4__type_support;
}

#if defined(__cplusplus)
}
#endif
