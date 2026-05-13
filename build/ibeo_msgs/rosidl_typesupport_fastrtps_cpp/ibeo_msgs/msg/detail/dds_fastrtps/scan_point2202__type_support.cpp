// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ibeo_msgs:msg/ScanPoint2202.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_point2202__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ibeo_msgs/msg/detail/scan_point2202__struct.hpp"

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
  const ibeo_msgs::msg::ScanPoint2202 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: layer
  cdr << ros_message.layer;
  // Member: echo
  cdr << ros_message.echo;
  // Member: transparent_point
  cdr << (ros_message.transparent_point ? true : false);
  // Member: clutter_atmospheric
  cdr << (ros_message.clutter_atmospheric ? true : false);
  // Member: ground
  cdr << (ros_message.ground ? true : false);
  // Member: dirt
  cdr << (ros_message.dirt ? true : false);
  // Member: horizontal_angle
  cdr << ros_message.horizontal_angle;
  // Member: radial_distance
  cdr << ros_message.radial_distance;
  // Member: echo_pulse_width
  cdr << ros_message.echo_pulse_width;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ibeo_msgs::msg::ScanPoint2202 & ros_message)
{
  // Member: layer
  cdr >> ros_message.layer;

  // Member: echo
  cdr >> ros_message.echo;

  // Member: transparent_point
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.transparent_point = tmp ? true : false;
  }

  // Member: clutter_atmospheric
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.clutter_atmospheric = tmp ? true : false;
  }

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

  // Member: horizontal_angle
  cdr >> ros_message.horizontal_angle;

  // Member: radial_distance
  cdr >> ros_message.radial_distance;

  // Member: echo_pulse_width
  cdr >> ros_message.echo_pulse_width;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
get_serialized_size(
  const ibeo_msgs::msg::ScanPoint2202 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

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
  // Member: transparent_point
  {
    size_t item_size = sizeof(ros_message.transparent_point);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: clutter_atmospheric
  {
    size_t item_size = sizeof(ros_message.clutter_atmospheric);
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
  // Member: horizontal_angle
  {
    size_t item_size = sizeof(ros_message.horizontal_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radial_distance
  {
    size_t item_size = sizeof(ros_message.radial_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: echo_pulse_width
  {
    size_t item_size = sizeof(ros_message.echo_pulse_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
max_serialized_size_ScanPoint2202(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


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

  // Member: transparent_point
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: clutter_atmospheric
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
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

  // Member: horizontal_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: radial_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: echo_pulse_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ScanPoint2202__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::ScanPoint2202 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScanPoint2202__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ibeo_msgs::msg::ScanPoint2202 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScanPoint2202__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::ScanPoint2202 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScanPoint2202__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ScanPoint2202(full_bounded, 0);
}

static message_type_support_callbacks_t _ScanPoint2202__callbacks = {
  "ibeo_msgs::msg",
  "ScanPoint2202",
  _ScanPoint2202__cdr_serialize,
  _ScanPoint2202__cdr_deserialize,
  _ScanPoint2202__get_serialized_size,
  _ScanPoint2202__max_serialized_size
};

static rosidl_message_type_support_t _ScanPoint2202__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScanPoint2202__callbacks,
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
get_message_type_support_handle<ibeo_msgs::msg::ScanPoint2202>()
{
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_ScanPoint2202__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ibeo_msgs, msg, ScanPoint2202)() {
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_ScanPoint2202__handle;
}

#ifdef __cplusplus
}
#endif
