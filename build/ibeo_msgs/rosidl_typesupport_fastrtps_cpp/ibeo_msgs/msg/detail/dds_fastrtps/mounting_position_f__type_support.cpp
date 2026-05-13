// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ibeo_msgs:msg/MountingPositionF.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/mounting_position_f__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ibeo_msgs/msg/detail/mounting_position_f__struct.hpp"

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
  const ibeo_msgs::msg::MountingPositionF & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: yaw_angle
  cdr << ros_message.yaw_angle;
  // Member: pitch_angle
  cdr << ros_message.pitch_angle;
  // Member: roll_angle
  cdr << ros_message.roll_angle;
  // Member: x_position
  cdr << ros_message.x_position;
  // Member: y_position
  cdr << ros_message.y_position;
  // Member: z_position
  cdr << ros_message.z_position;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ibeo_msgs::msg::MountingPositionF & ros_message)
{
  // Member: yaw_angle
  cdr >> ros_message.yaw_angle;

  // Member: pitch_angle
  cdr >> ros_message.pitch_angle;

  // Member: roll_angle
  cdr >> ros_message.roll_angle;

  // Member: x_position
  cdr >> ros_message.x_position;

  // Member: y_position
  cdr >> ros_message.y_position;

  // Member: z_position
  cdr >> ros_message.z_position;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
get_serialized_size(
  const ibeo_msgs::msg::MountingPositionF & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: yaw_angle
  {
    size_t item_size = sizeof(ros_message.yaw_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pitch_angle
  {
    size_t item_size = sizeof(ros_message.pitch_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: roll_angle
  {
    size_t item_size = sizeof(ros_message.roll_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
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

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
max_serialized_size_MountingPositionF(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: yaw_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pitch_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: roll_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

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

  return current_alignment - initial_alignment;
}

static bool _MountingPositionF__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::MountingPositionF *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MountingPositionF__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ibeo_msgs::msg::MountingPositionF *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MountingPositionF__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::MountingPositionF *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MountingPositionF__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MountingPositionF(full_bounded, 0);
}

static message_type_support_callbacks_t _MountingPositionF__callbacks = {
  "ibeo_msgs::msg",
  "MountingPositionF",
  _MountingPositionF__cdr_serialize,
  _MountingPositionF__cdr_deserialize,
  _MountingPositionF__get_serialized_size,
  _MountingPositionF__max_serialized_size
};

static rosidl_message_type_support_t _MountingPositionF__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MountingPositionF__callbacks,
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
get_message_type_support_handle<ibeo_msgs::msg::MountingPositionF>()
{
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_MountingPositionF__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ibeo_msgs, msg, MountingPositionF)() {
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_MountingPositionF__handle;
}

#ifdef __cplusplus
}
#endif
