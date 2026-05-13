// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mobileye_560_660_msgs:msg/LkaLane.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/lka_lane__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mobileye_560_660_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mobileye_560_660_msgs/msg/detail/lka_lane__struct.h"
#include "mobileye_560_660_msgs/msg/detail/lka_lane__functions.h"
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


using _LkaLane__ros_msg_type = mobileye_560_660_msgs__msg__LkaLane;

static bool _LkaLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LkaLane__ros_msg_type * ros_message = static_cast<const _LkaLane__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lane_type
  {
    cdr << ros_message->lane_type;
  }

  // Field name: quality
  {
    cdr << ros_message->quality;
  }

  // Field name: model_degree
  {
    cdr << ros_message->model_degree;
  }

  // Field name: position_parameter_c0
  {
    cdr << ros_message->position_parameter_c0;
  }

  // Field name: curvature_parameter_c2
  {
    cdr << ros_message->curvature_parameter_c2;
  }

  // Field name: curvature_derivative_parameter_c3
  {
    cdr << ros_message->curvature_derivative_parameter_c3;
  }

  // Field name: marking_width
  {
    cdr << ros_message->marking_width;
  }

  // Field name: heading_angle_parameter_c1
  {
    cdr << ros_message->heading_angle_parameter_c1;
  }

  // Field name: view_range
  {
    cdr << ros_message->view_range;
  }

  // Field name: view_range_availability
  {
    cdr << (ros_message->view_range_availability ? true : false);
  }

  return true;
}

static bool _LkaLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LkaLane__ros_msg_type * ros_message = static_cast<_LkaLane__ros_msg_type *>(untyped_ros_message);
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

  // Field name: lane_type
  {
    cdr >> ros_message->lane_type;
  }

  // Field name: quality
  {
    cdr >> ros_message->quality;
  }

  // Field name: model_degree
  {
    cdr >> ros_message->model_degree;
  }

  // Field name: position_parameter_c0
  {
    cdr >> ros_message->position_parameter_c0;
  }

  // Field name: curvature_parameter_c2
  {
    cdr >> ros_message->curvature_parameter_c2;
  }

  // Field name: curvature_derivative_parameter_c3
  {
    cdr >> ros_message->curvature_derivative_parameter_c3;
  }

  // Field name: marking_width
  {
    cdr >> ros_message->marking_width;
  }

  // Field name: heading_angle_parameter_c1
  {
    cdr >> ros_message->heading_angle_parameter_c1;
  }

  // Field name: view_range
  {
    cdr >> ros_message->view_range;
  }

  // Field name: view_range_availability
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->view_range_availability = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t get_serialized_size_mobileye_560_660_msgs__msg__LkaLane(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LkaLane__ros_msg_type * ros_message = static_cast<const _LkaLane__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name lane_type
  {
    size_t item_size = sizeof(ros_message->lane_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name quality
  {
    size_t item_size = sizeof(ros_message->quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name model_degree
  {
    size_t item_size = sizeof(ros_message->model_degree);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_parameter_c0
  {
    size_t item_size = sizeof(ros_message->position_parameter_c0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature_parameter_c2
  {
    size_t item_size = sizeof(ros_message->curvature_parameter_c2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name curvature_derivative_parameter_c3
  {
    size_t item_size = sizeof(ros_message->curvature_derivative_parameter_c3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name marking_width
  {
    size_t item_size = sizeof(ros_message->marking_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_angle_parameter_c1
  {
    size_t item_size = sizeof(ros_message->heading_angle_parameter_c1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name view_range
  {
    size_t item_size = sizeof(ros_message->view_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name view_range_availability
  {
    size_t item_size = sizeof(ros_message->view_range_availability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LkaLane__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mobileye_560_660_msgs__msg__LkaLane(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mobileye_560_660_msgs
size_t max_serialized_size_mobileye_560_660_msgs__msg__LkaLane(
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
  // member: lane_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: model_degree
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position_parameter_c0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: curvature_parameter_c2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: curvature_derivative_parameter_c3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: marking_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_angle_parameter_c1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: view_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: view_range_availability
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _LkaLane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mobileye_560_660_msgs__msg__LkaLane(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LkaLane = {
  "mobileye_560_660_msgs::msg",
  "LkaLane",
  _LkaLane__cdr_serialize,
  _LkaLane__cdr_deserialize,
  _LkaLane__get_serialized_size,
  _LkaLane__max_serialized_size
};

static rosidl_message_type_support_t _LkaLane__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LkaLane,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mobileye_560_660_msgs, msg, LkaLane)() {
  return &_LkaLane__type_support;
}

#if defined(__cplusplus)
}
#endif
