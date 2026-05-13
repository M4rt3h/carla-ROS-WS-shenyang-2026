// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mobileye_560_660_msgs:msg/AhbcGradual.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/ahbc_gradual__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mobileye_560_660_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mobileye_560_660_msgs/msg/detail/ahbc_gradual__struct.h"
#include "mobileye_560_660_msgs/msg/detail/ahbc_gradual__functions.h"
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


using _AhbcGradual__ros_msg_type = mobileye_560_660_msgs__msg__AhbcGradual;

static bool _AhbcGradual__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AhbcGradual__ros_msg_type * ros_message = static_cast<const _AhbcGradual__ros_msg_type *>(untyped_ros_message);
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

  // Field name: boundary_domain_bottom_non_glare_hlb
  {
    cdr << ros_message->boundary_domain_bottom_non_glare_hlb;
  }

  // Field name: boundary_domain_non_glare_left_hand_hlb
  {
    cdr << ros_message->boundary_domain_non_glare_left_hand_hlb;
  }

  // Field name: boundary_domain_non_glare_right_hand_hlb
  {
    cdr << ros_message->boundary_domain_non_glare_right_hand_hlb;
  }

  // Field name: object_distance_hlb
  {
    cdr << ros_message->object_distance_hlb;
  }

  // Field name: status_boundary_domain_bottom_non_glare_hlb
  {
    cdr << ros_message->status_boundary_domain_bottom_non_glare_hlb;
  }

  // Field name: status_boundary_domain_non_glare_left_hand_hlb
  {
    cdr << ros_message->status_boundary_domain_non_glare_left_hand_hlb;
  }

  // Field name: status_boundary_domain_non_glare_right_hand_hlb
  {
    cdr << ros_message->status_boundary_domain_non_glare_right_hand_hlb;
  }

  // Field name: status_object_distance_hlb
  {
    cdr << ros_message->status_object_distance_hlb;
  }

  // Field name: left_target_change
  {
    cdr << (ros_message->left_target_change ? true : false);
  }

  // Field name: right_target_change
  {
    cdr << (ros_message->right_target_change ? true : false);
  }

  // Field name: too_many_cars
  {
    cdr << (ros_message->too_many_cars ? true : false);
  }

  // Field name: busy_scene
  {
    cdr << (ros_message->busy_scene ? true : false);
  }

  return true;
}

static bool _AhbcGradual__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AhbcGradual__ros_msg_type * ros_message = static_cast<_AhbcGradual__ros_msg_type *>(untyped_ros_message);
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

  // Field name: boundary_domain_bottom_non_glare_hlb
  {
    cdr >> ros_message->boundary_domain_bottom_non_glare_hlb;
  }

  // Field name: boundary_domain_non_glare_left_hand_hlb
  {
    cdr >> ros_message->boundary_domain_non_glare_left_hand_hlb;
  }

  // Field name: boundary_domain_non_glare_right_hand_hlb
  {
    cdr >> ros_message->boundary_domain_non_glare_right_hand_hlb;
  }

  // Field name: object_distance_hlb
  {
    cdr >> ros_message->object_distance_hlb;
  }

  // Field name: status_boundary_domain_bottom_non_glare_hlb
  {
    cdr >> ros_message->status_boundary_domain_bottom_non_glare_hlb;
  }

  // Field name: status_boundary_domain_non_glare_left_hand_hlb
  {
    cdr >> ros_message->status_boundary_domain_non_glare_left_hand_hlb;
  }

  // Field name: status_boundary_domain_non_glare_right_hand_hlb
  {
    cdr >> ros_message->status_boundary_domain_non_glare_right_hand_hlb;
  }

  // Field name: status_object_distance_hlb
  {
    cdr >> ros_message->status_object_distance_hlb;
  }

  // Field name: left_target_change
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->left_target_change = tmp ? true : false;
  }

  // Field name: right_target_change
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->right_target_change = tmp ? true : false;
  }

  // Field name: too_many_cars
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->too_many_cars = tmp ? true : false;
  }

  // Field name: busy_scene
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->busy_scene = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t get_serialized_size_mobileye_560_660_msgs__msg__AhbcGradual(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AhbcGradual__ros_msg_type * ros_message = static_cast<const _AhbcGradual__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name boundary_domain_bottom_non_glare_hlb
  {
    size_t item_size = sizeof(ros_message->boundary_domain_bottom_non_glare_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name boundary_domain_non_glare_left_hand_hlb
  {
    size_t item_size = sizeof(ros_message->boundary_domain_non_glare_left_hand_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name boundary_domain_non_glare_right_hand_hlb
  {
    size_t item_size = sizeof(ros_message->boundary_domain_non_glare_right_hand_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_distance_hlb
  {
    size_t item_size = sizeof(ros_message->object_distance_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_boundary_domain_bottom_non_glare_hlb
  {
    size_t item_size = sizeof(ros_message->status_boundary_domain_bottom_non_glare_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_boundary_domain_non_glare_left_hand_hlb
  {
    size_t item_size = sizeof(ros_message->status_boundary_domain_non_glare_left_hand_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_boundary_domain_non_glare_right_hand_hlb
  {
    size_t item_size = sizeof(ros_message->status_boundary_domain_non_glare_right_hand_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status_object_distance_hlb
  {
    size_t item_size = sizeof(ros_message->status_object_distance_hlb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_target_change
  {
    size_t item_size = sizeof(ros_message->left_target_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_target_change
  {
    size_t item_size = sizeof(ros_message->right_target_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name too_many_cars
  {
    size_t item_size = sizeof(ros_message->too_many_cars);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name busy_scene
  {
    size_t item_size = sizeof(ros_message->busy_scene);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AhbcGradual__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mobileye_560_660_msgs__msg__AhbcGradual(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t max_serialized_size_mobileye_560_660_msgs__msg__AhbcGradual(
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
  // member: boundary_domain_bottom_non_glare_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: boundary_domain_non_glare_left_hand_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: boundary_domain_non_glare_right_hand_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_distance_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: status_boundary_domain_bottom_non_glare_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_boundary_domain_non_glare_left_hand_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_boundary_domain_non_glare_right_hand_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: status_object_distance_hlb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: left_target_change
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: right_target_change
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: too_many_cars
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: busy_scene
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AhbcGradual__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mobileye_560_660_msgs__msg__AhbcGradual(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AhbcGradual = {
  "mobileye_560_660_msgs::msg",
  "AhbcGradual",
  _AhbcGradual__cdr_serialize,
  _AhbcGradual__cdr_deserialize,
  _AhbcGradual__get_serialized_size,
  _AhbcGradual__max_serialized_size
};

static rosidl_message_type_support_t _AhbcGradual__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AhbcGradual,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mobileye_560_660_msgs, msg, AhbcGradual)() {
  return &_AhbcGradual__type_support;
}

#if defined(__cplusplus)
}
#endif
