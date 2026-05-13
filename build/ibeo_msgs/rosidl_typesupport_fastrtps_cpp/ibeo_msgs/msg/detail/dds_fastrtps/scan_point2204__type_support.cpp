// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ibeo_msgs:msg/ScanPoint2204.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_point2204__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ibeo_msgs/msg/detail/scan_point2204__struct.hpp"

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

namespace ibeo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_serialize(
  const ibeo_msgs::msg::ScanPoint2204 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x_position
  cdr << ros_message.x_position;
  // Member: y_position
  cdr << ros_message.y_position;
  // Member: z_position
  cdr << ros_message.z_position;
  // Member: echo_width
  cdr << ros_message.echo_width;
  // Member: device_id
  cdr << ros_message.device_id;
  // Member: layer
  cdr << ros_message.layer;
  // Member: echo
  cdr << ros_message.echo;
  // Member: time_offset
  cdr << ros_message.time_offset;
  // Member: ground
  cdr << (ros_message.ground ? true : false);
  // Member: dirt
  cdr << (ros_message.dirt ? true : false);
  // Member: precipitation
  cdr << (ros_message.precipitation ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ibeo_msgs::msg::ScanPoint2204 & ros_message)
{
  // Member: x_position
  cdr >> ros_message.x_position;

  // Member: y_position
  cdr >> ros_message.y_position;

  // Member: z_position
  cdr >> ros_message.z_position;

  // Member: echo_width
  cdr >> ros_message.echo_width;

  // Member: device_id
  cdr >> ros_message.device_id;

  // Member: layer
  cdr >> ros_message.layer;

  // Member: echo
  cdr >> ros_message.echo;

  // Member: time_offset
  cdr >> ros_message.time_offset;

  // Member: ground
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ground = tmp ? true : false;
  }

  // Member: dirt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dirt = tmp ? true : false;
  }

  // Member: precipitation
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.precipitation = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
get_serialized_size(
  const ibeo_msgs::msg::ScanPoint2204 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x_position
  {
    size_t item_size = sizeof(ros_message.x_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_position
  {
    size_t item_size = sizeof(ros_message.y_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_position
  {
    size_t item_size = sizeof(ros_message.z_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: echo_width
  {
    size_t item_size = sizeof(ros_message.echo_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: device_id
  {
    size_t item_size = sizeof(ros_message.device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: layer
  {
    size_t item_size = sizeof(ros_message.layer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: echo
  {
    size_t item_size = sizeof(ros_message.echo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_offset
  {
    size_t item_size = sizeof(ros_message.time_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ground
  {
    size_t item_size = sizeof(ros_message.ground);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dirt
  {
    size_t item_size = sizeof(ros_message.dirt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: precipitation
  {
    size_t item_size = sizeof(ros_message.precipitation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
max_serialized_size_ScanPoint2204(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: x_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: echo_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: layer
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: echo
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: time_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ground
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dirt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: precipitation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ScanPoint2204__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::ScanPoint2204 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScanPoint2204__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ibeo_msgs::msg::ScanPoint2204 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScanPoint2204__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::ScanPoint2204 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScanPoint2204__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ScanPoint2204(full_bounded, 0);
}

static message_type_support_callbacks_t _ScanPoint2204__callbacks = {
  "ibeo_msgs::msg",
  "ScanPoint2204",
  _ScanPoint2204__cdr_serialize,
  _ScanPoint2204__cdr_deserialize,
  _ScanPoint2204__get_serialized_size,
  _ScanPoint2204__max_serialized_size
};

static rosidl_message_type_support_t _ScanPoint2204__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScanPoint2204__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ibeo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ibeo_msgs::msg::ScanPoint2204>()
{
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_ScanPoint2204__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ibeo_msgs, msg, ScanPoint2204)() {
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_ScanPoint2204__handle;
}

#ifdef __cplusplus
}
#endif
