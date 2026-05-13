// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from derived_object_msgs:msg/Lane.idl
// generated code does not contain a copyright notice
#include "derived_object_msgs/msg/detail/lane__rosidl_typesupport_fastrtps_cpp.hpp"
#include "derived_object_msgs/msg/detail/lane__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace derived_object_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
cdr_serialize(
  const derived_object_msgs::msg::Lane & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: quality
  cdr << ros_message.quality;
  // Member: marker_kind
  cdr << ros_message.marker_kind;
  // Member: curve_model_kind
  cdr << ros_message.curve_model_kind;
  // Member: marker_offset
  cdr << ros_message.marker_offset;
  // Member: heading_angle
  cdr << ros_message.heading_angle;
  // Member: curvature
  cdr << ros_message.curvature;
  // Member: curvature_derivative
  cdr << ros_message.curvature_derivative;
  // Member: marker_width
  cdr << ros_message.marker_width;
  // Member: view_range
  cdr << ros_message.view_range;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  derived_object_msgs::msg::Lane & ros_message)
{
  // Member: quality
  cdr >> ros_message.quality;

  // Member: marker_kind
  cdr >> ros_message.marker_kind;

  // Member: curve_model_kind
  cdr >> ros_message.curve_model_kind;

  // Member: marker_offset
  cdr >> ros_message.marker_offset;

  // Member: heading_angle
  cdr >> ros_message.heading_angle;

  // Member: curvature
  cdr >> ros_message.curvature;

  // Member: curvature_derivative
  cdr >> ros_message.curvature_derivative;

  // Member: marker_width
  cdr >> ros_message.marker_width;

  // Member: view_range
  cdr >> ros_message.view_range;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
get_serialized_size(
  const derived_object_msgs::msg::Lane & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: quality
  {
    size_t item_size = sizeof(ros_message.quality);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: marker_kind
  {
    size_t item_size = sizeof(ros_message.marker_kind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curve_model_kind
  {
    size_t item_size = sizeof(ros_message.curve_model_kind);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: marker_offset
  {
    size_t item_size = sizeof(ros_message.marker_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_angle
  {
    size_t item_size = sizeof(ros_message.heading_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curvature
  {
    size_t item_size = sizeof(ros_message.curvature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: curvature_derivative
  {
    size_t item_size = sizeof(ros_message.curvature_derivative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: marker_width
  {
    size_t item_size = sizeof(ros_message.marker_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: view_range
  {
    size_t item_size = sizeof(ros_message.view_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
max_serialized_size_Lane(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: quality
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: marker_kind
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: curve_model_kind
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: marker_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: curvature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: curvature_derivative
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: marker_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: view_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Lane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const derived_object_msgs::msg::Lane *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Lane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<derived_object_msgs::msg::Lane *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Lane__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const derived_object_msgs::msg::Lane *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Lane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Lane(full_bounded, 0);
}

static message_type_support_callbacks_t _Lane__callbacks = {
  "derived_object_msgs::msg",
  "Lane",
  _Lane__cdr_serialize,
  _Lane__cdr_deserialize,
  _Lane__get_serialized_size,
  _Lane__max_serialized_size
};

static rosidl_message_type_support_t _Lane__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Lane__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace derived_object_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_derived_object_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<derived_object_msgs::msg::Lane>()
{
  return &derived_object_msgs::msg::typesupport_fastrtps_cpp::_Lane__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, derived_object_msgs, msg, Lane)() {
  return &derived_object_msgs::msg::typesupport_fastrtps_cpp::_Lane__handle;
}

#ifdef __cplusplus
}
#endif
