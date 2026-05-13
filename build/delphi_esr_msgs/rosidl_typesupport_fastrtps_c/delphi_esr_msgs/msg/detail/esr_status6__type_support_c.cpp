// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_esr_msgs:msg/EsrStatus6.idl
// generated code does not contain a copyright notice
#include "delphi_esr_msgs/msg/detail/esr_status6__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_esr_msgs/msg/detail/esr_status6__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_status6__functions.h"
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


using _EsrStatus6__ros_msg_type = delphi_esr_msgs__msg__EsrStatus6;

static bool _EsrStatus6__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EsrStatus6__ros_msg_type * ros_message = static_cast<const _EsrStatus6__ros_msg_type *>(untyped_ros_message);
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

  // Field name: supply_1p8v_a2d
  {
    cdr << ros_message->supply_1p8v_a2d;
  }

  // Field name: supply_n5v_a2d
  {
    cdr << ros_message->supply_n5v_a2d;
  }

  // Field name: wave_diff_a2d
  {
    cdr << ros_message->wave_diff_a2d;
  }

  // Field name: sw_version_dsp_3rd_byte
  {
    cdr << ros_message->sw_version_dsp_3rd_byte;
  }

  // Field name: vertical_align_updated
  {
    cdr << (ros_message->vertical_align_updated ? true : false);
  }

  // Field name: system_power_mode
  {
    cdr << ros_message->system_power_mode;
  }

  // Field name: found_target
  {
    cdr << (ros_message->found_target ? true : false);
  }

  // Field name: recommend_unconverge
  {
    cdr << (ros_message->recommend_unconverge ? true : false);
  }

  // Field name: factory_align_status_1
  {
    cdr << ros_message->factory_align_status_1;
  }

  // Field name: factory_align_status_2
  {
    cdr << ros_message->factory_align_status_2;
  }

  // Field name: factory_misalignment
  {
    cdr << ros_message->factory_misalignment;
  }

  // Field name: serv_align_updates_done
  {
    cdr << ros_message->serv_align_updates_done;
  }

  // Field name: vertical_misalignment
  {
    cdr << ros_message->vertical_misalignment;
  }

  return true;
}

static bool _EsrStatus6__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EsrStatus6__ros_msg_type * ros_message = static_cast<_EsrStatus6__ros_msg_type *>(untyped_ros_message);
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

  // Field name: supply_1p8v_a2d
  {
    cdr >> ros_message->supply_1p8v_a2d;
  }

  // Field name: supply_n5v_a2d
  {
    cdr >> ros_message->supply_n5v_a2d;
  }

  // Field name: wave_diff_a2d
  {
    cdr >> ros_message->wave_diff_a2d;
  }

  // Field name: sw_version_dsp_3rd_byte
  {
    cdr >> ros_message->sw_version_dsp_3rd_byte;
  }

  // Field name: vertical_align_updated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vertical_align_updated = tmp ? true : false;
  }

  // Field name: system_power_mode
  {
    cdr >> ros_message->system_power_mode;
  }

  // Field name: found_target
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->found_target = tmp ? true : false;
  }

  // Field name: recommend_unconverge
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->recommend_unconverge = tmp ? true : false;
  }

  // Field name: factory_align_status_1
  {
    cdr >> ros_message->factory_align_status_1;
  }

  // Field name: factory_align_status_2
  {
    cdr >> ros_message->factory_align_status_2;
  }

  // Field name: factory_misalignment
  {
    cdr >> ros_message->factory_misalignment;
  }

  // Field name: serv_align_updates_done
  {
    cdr >> ros_message->serv_align_updates_done;
  }

  // Field name: vertical_misalignment
  {
    cdr >> ros_message->vertical_misalignment;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t get_serialized_size_delphi_esr_msgs__msg__EsrStatus6(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EsrStatus6__ros_msg_type * ros_message = static_cast<const _EsrStatus6__ros_msg_type *>(untyped_ros_message);
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
  // field.name supply_1p8v_a2d
  {
    size_t item_size = sizeof(ros_message->supply_1p8v_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name supply_n5v_a2d
  {
    size_t item_size = sizeof(ros_message->supply_n5v_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wave_diff_a2d
  {
    size_t item_size = sizeof(ros_message->wave_diff_a2d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sw_version_dsp_3rd_byte
  {
    size_t item_size = sizeof(ros_message->sw_version_dsp_3rd_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_align_updated
  {
    size_t item_size = sizeof(ros_message->vertical_align_updated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_power_mode
  {
    size_t item_size = sizeof(ros_message->system_power_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name found_target
  {
    size_t item_size = sizeof(ros_message->found_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name recommend_unconverge
  {
    size_t item_size = sizeof(ros_message->recommend_unconverge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name factory_align_status_1
  {
    size_t item_size = sizeof(ros_message->factory_align_status_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name factory_align_status_2
  {
    size_t item_size = sizeof(ros_message->factory_align_status_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name factory_misalignment
  {
    size_t item_size = sizeof(ros_message->factory_misalignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name serv_align_updates_done
  {
    size_t item_size = sizeof(ros_message->serv_align_updates_done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_misalignment
  {
    size_t item_size = sizeof(ros_message->vertical_misalignment);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EsrStatus6__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_esr_msgs__msg__EsrStatus6(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_esr_msgs
size_t max_serialized_size_delphi_esr_msgs__msg__EsrStatus6(
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
  // member: supply_1p8v_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: supply_n5v_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wave_diff_a2d
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sw_version_dsp_3rd_byte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vertical_align_updated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: system_power_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: found_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: recommend_unconverge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: factory_align_status_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: factory_align_status_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: factory_misalignment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: serv_align_updates_done
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vertical_misalignment
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _EsrStatus6__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_esr_msgs__msg__EsrStatus6(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EsrStatus6 = {
  "delphi_esr_msgs::msg",
  "EsrStatus6",
  _EsrStatus6__cdr_serialize,
  _EsrStatus6__cdr_deserialize,
  _EsrStatus6__get_serialized_size,
  _EsrStatus6__max_serialized_size
};

static rosidl_message_type_support_t _EsrStatus6__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EsrStatus6,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_esr_msgs, msg, EsrStatus6)() {
  return &_EsrStatus6__type_support;
}

#if defined(__cplusplus)
}
#endif
