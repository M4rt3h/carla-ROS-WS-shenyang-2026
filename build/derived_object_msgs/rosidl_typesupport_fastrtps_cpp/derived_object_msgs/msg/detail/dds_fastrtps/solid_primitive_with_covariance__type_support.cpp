// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from derived_object_msgs:msg/SolidPrimitiveWithCovariance.idl
// generated code does not contain a copyright notice
#include "derived_object_msgs/msg/detail/solid_primitive_with_covariance__rosidl_typesupport_fastrtps_cpp.hpp"
#include "derived_object_msgs/msg/detail/solid_primitive_with_covariance__struct.hpp"

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
  const derived_object_msgs::msg::SolidPrimitiveWithCovariance & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: type
  cdr << ros_message.type;
  // Member: dimensions
  {
    cdr << ros_message.dimensions;
  }
  // Member: covariance
  {
    cdr << ros_message.covariance;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  derived_object_msgs::msg::SolidPrimitiveWithCovariance & ros_message)
{
  // Member: type
  cdr >> ros_message.type;

  // Member: dimensions
  {
    cdr >> ros_message.dimensions;
  }

  // Member: covariance
  {
    cdr >> ros_message.covariance;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
get_serialized_size(
  const derived_object_msgs::msg::SolidPrimitiveWithCovariance & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dimensions
  {
    size_t array_size = ros_message.dimensions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.dimensions[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: covariance
  {
    size_t array_size = ros_message.covariance.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.covariance[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_derived_object_msgs
max_serialized_size_SolidPrimitiveWithCovariance(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dimensions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: covariance
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SolidPrimitiveWithCovariance__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const derived_object_msgs::msg::SolidPrimitiveWithCovariance *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SolidPrimitiveWithCovariance__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<derived_object_msgs::msg::SolidPrimitiveWithCovariance *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SolidPrimitiveWithCovariance__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const derived_object_msgs::msg::SolidPrimitiveWithCovariance *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SolidPrimitiveWithCovariance__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SolidPrimitiveWithCovariance(full_bounded, 0);
}

static message_type_support_callbacks_t _SolidPrimitiveWithCovariance__callbacks = {
  "derived_object_msgs::msg",
  "SolidPrimitiveWithCovariance",
  _SolidPrimitiveWithCovariance__cdr_serialize,
  _SolidPrimitiveWithCovariance__cdr_deserialize,
  _SolidPrimitiveWithCovariance__get_serialized_size,
  _SolidPrimitiveWithCovariance__max_serialized_size
};

static rosidl_message_type_support_t _SolidPrimitiveWithCovariance__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SolidPrimitiveWithCovariance__callbacks,
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
get_message_type_support_handle<derived_object_msgs::msg::SolidPrimitiveWithCovariance>()
{
  return &derived_object_msgs::msg::typesupport_fastrtps_cpp::_SolidPrimitiveWithCovariance__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, derived_object_msgs, msg, SolidPrimitiveWithCovariance)() {
  return &derived_object_msgs::msg::typesupport_fastrtps_cpp::_SolidPrimitiveWithCovariance__handle;
}

#ifdef __cplusplus
}
#endif
