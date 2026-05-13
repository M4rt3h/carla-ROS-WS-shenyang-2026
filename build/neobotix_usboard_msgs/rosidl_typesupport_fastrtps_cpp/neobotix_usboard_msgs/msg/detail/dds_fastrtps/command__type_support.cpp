// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from neobotix_usboard_msgs:msg/Command.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "neobotix_usboard_msgs/msg/detail/command__struct.hpp"

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


namespace neobotix_usboard_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
cdr_serialize(
  const neobotix_usboard_msgs::msg::Command & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: command
  cdr << ros_message.command;
  // Member: command_data
  cdr << ros_message.command_data;
  // Member: set_num
  cdr << ros_message.set_num;
  // Member: paraset_byte6
  cdr << ros_message.paraset_byte6;
  // Member: paraset_byte5
  cdr << ros_message.paraset_byte5;
  // Member: paraset_byte4
  cdr << ros_message.paraset_byte4;
  // Member: paraset_byte3
  cdr << ros_message.paraset_byte3;
  // Member: paraset_byte2
  cdr << ros_message.paraset_byte2;
  // Member: paraset_byte1
  cdr << ros_message.paraset_byte1;
  // Member: set_active_9to16
  cdr << ros_message.set_active_9to16;
  // Member: set_active_1to8
  cdr << ros_message.set_active_1to8;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  neobotix_usboard_msgs::msg::Command & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: command
  cdr >> ros_message.command;

  // Member: command_data
  cdr >> ros_message.command_data;

  // Member: set_num
  cdr >> ros_message.set_num;

  // Member: paraset_byte6
  cdr >> ros_message.paraset_byte6;

  // Member: paraset_byte5
  cdr >> ros_message.paraset_byte5;

  // Member: paraset_byte4
  cdr >> ros_message.paraset_byte4;

  // Member: paraset_byte3
  cdr >> ros_message.paraset_byte3;

  // Member: paraset_byte2
  cdr >> ros_message.paraset_byte2;

  // Member: paraset_byte1
  cdr >> ros_message.paraset_byte1;

  // Member: set_active_9to16
  cdr >> ros_message.set_active_9to16;

  // Member: set_active_1to8
  cdr >> ros_message.set_active_1to8;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
get_serialized_size(
  const neobotix_usboard_msgs::msg::Command & ros_message,
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
  // Member: command
  {
    size_t item_size = sizeof(ros_message.command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: command_data
  {
    size_t item_size = sizeof(ros_message.command_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_num
  {
    size_t item_size = sizeof(ros_message.set_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte6
  {
    size_t item_size = sizeof(ros_message.paraset_byte6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte5
  {
    size_t item_size = sizeof(ros_message.paraset_byte5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte4
  {
    size_t item_size = sizeof(ros_message.paraset_byte4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte3
  {
    size_t item_size = sizeof(ros_message.paraset_byte3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte2
  {
    size_t item_size = sizeof(ros_message.paraset_byte2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: paraset_byte1
  {
    size_t item_size = sizeof(ros_message.paraset_byte1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_active_9to16
  {
    size_t item_size = sizeof(ros_message.set_active_9to16);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: set_active_1to8
  {
    size_t item_size = sizeof(ros_message.set_active_1to8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
max_serialized_size_Command(
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

  // Member: command
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: command_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: set_num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte5
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte4
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: paraset_byte1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: set_active_9to16
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: set_active_1to8
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Command__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const neobotix_usboard_msgs::msg::Command *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Command__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<neobotix_usboard_msgs::msg::Command *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Command__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const neobotix_usboard_msgs::msg::Command *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Command__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Command(full_bounded, 0);
}

static message_type_support_callbacks_t _Command__callbacks = {
  "neobotix_usboard_msgs::msg",
  "Command",
  _Command__cdr_serialize,
  _Command__cdr_deserialize,
  _Command__get_serialized_size,
  _Command__max_serialized_size
};

static rosidl_message_type_support_t _Command__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Command__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace neobotix_usboard_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_neobotix_usboard_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<neobotix_usboard_msgs::msg::Command>()
{
  return &neobotix_usboard_msgs::msg::typesupport_fastrtps_cpp::_Command__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, neobotix_usboard_msgs, msg, Command)() {
  return &neobotix_usboard_msgs::msg::typesupport_fastrtps_cpp::_Command__handle;
}

#ifdef __cplusplus
}
#endif
