// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from kartech_linear_actuator_msgs:msg/AutoZeroCalCmd.idl
// generated code does not contain a copyright notice
#include "kartech_linear_actuator_msgs/msg/detail/auto_zero_cal_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "kartech_linear_actuator_msgs/msg/detail/auto_zero_cal_cmd__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace kartech_linear_actuator_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kartech_linear_actuator_msgs
cdr_serialize(
  const kartech_linear_actuator_msgs::msg::AutoZeroCalCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: confirm
  cdr << (ros_message.confirm ? true : false);
  // Member: auto_reply
  cdr << (ros_message.auto_reply ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kartech_linear_actuator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  kartech_linear_actuator_msgs::msg::AutoZeroCalCmd & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: confirm
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.confirm = tmp ? true : false;
  }

  // Member: auto_reply
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.auto_reply = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kartech_linear_actuator_msgs
get_serialized_size(
  const kartech_linear_actuator_msgs::msg::AutoZeroCalCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: confirm
  {
    size_t item_size = sizeof(ros_message.confirm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_reply
  {
    size_t item_size = sizeof(ros_message.auto_reply);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_kartech_linear_actuator_msgs
max_serialized_size_AutoZeroCalCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: confirm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: auto_reply
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AutoZeroCalCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const kartech_linear_actuator_msgs::msg::AutoZeroCalCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AutoZeroCalCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<kartech_linear_actuator_msgs::msg::AutoZeroCalCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AutoZeroCalCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const kartech_linear_actuator_msgs::msg::AutoZeroCalCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AutoZeroCalCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AutoZeroCalCmd(full_bounded, 0);
}

static message_type_support_callbacks_t _AutoZeroCalCmd__callbacks = {
  "kartech_linear_actuator_msgs::msg",
  "AutoZeroCalCmd",
  _AutoZeroCalCmd__cdr_serialize,
  _AutoZeroCalCmd__cdr_deserialize,
  _AutoZeroCalCmd__get_serialized_size,
  _AutoZeroCalCmd__max_serialized_size
};

static rosidl_message_type_support_t _AutoZeroCalCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AutoZeroCalCmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_kartech_linear_actuator_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<kartech_linear_actuator_msgs::msg::AutoZeroCalCmd>()
{
  return &kartech_linear_actuator_msgs::msg::typesupport_fastrtps_cpp::_AutoZeroCalCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, kartech_linear_actuator_msgs, msg, AutoZeroCalCmd)() {
  return &kartech_linear_actuator_msgs::msg::typesupport_fastrtps_cpp::_AutoZeroCalCmd__handle;
}

#ifdef __cplusplus
}
#endif
