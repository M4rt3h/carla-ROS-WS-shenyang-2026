// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from neobotix_usboard_msgs:msg/AnalogIn.idl
// generated code does not contain a copyright notice
#include "neobotix_usboard_msgs/msg/detail/analog_in__rosidl_typesupport_fastrtps_cpp.hpp"
#include "neobotix_usboard_msgs/msg/detail/analog_in__struct.hpp"

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
  const neobotix_usboard_msgs::msg::AnalogIn & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: command
  cdr << ros_message.command;
  // Member: analog_data_ch4_low_byte
  cdr << ros_message.analog_data_ch4_low_byte;
  // Member: analog_data_ch4_high_bits
  cdr << ros_message.analog_data_ch4_high_bits;
  // Member: analog_data_ch3_low_byte
  cdr << ros_message.analog_data_ch3_low_byte;
  // Member: analog_data_ch3_high_bits
  cdr << ros_message.analog_data_ch3_high_bits;
  // Member: analog_data_ch2_low_byte
  cdr << ros_message.analog_data_ch2_low_byte;
  // Member: analog_data_ch2_high_bits
  cdr << ros_message.analog_data_ch2_high_bits;
  // Member: analog_data_ch1_low_byte
  cdr << ros_message.analog_data_ch1_low_byte;
  // Member: analog_data_ch1_high_bits
  cdr << ros_message.analog_data_ch1_high_bits;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  neobotix_usboard_msgs::msg::AnalogIn & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: command
  cdr >> ros_message.command;

  // Member: analog_data_ch4_low_byte
  cdr >> ros_message.analog_data_ch4_low_byte;

  // Member: analog_data_ch4_high_bits
  cdr >> ros_message.analog_data_ch4_high_bits;

  // Member: analog_data_ch3_low_byte
  cdr >> ros_message.analog_data_ch3_low_byte;

  // Member: analog_data_ch3_high_bits
  cdr >> ros_message.analog_data_ch3_high_bits;

  // Member: analog_data_ch2_low_byte
  cdr >> ros_message.analog_data_ch2_low_byte;

  // Member: analog_data_ch2_high_bits
  cdr >> ros_message.analog_data_ch2_high_bits;

  // Member: analog_data_ch1_low_byte
  cdr >> ros_message.analog_data_ch1_low_byte;

  // Member: analog_data_ch1_high_bits
  cdr >> ros_message.analog_data_ch1_high_bits;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
get_serialized_size(
  const neobotix_usboard_msgs::msg::AnalogIn & ros_message,
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
  // Member: analog_data_ch4_low_byte
  {
    size_t item_size = sizeof(ros_message.analog_data_ch4_low_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_data_ch4_high_bits
  {
    size_t item_size = sizeof(ros_message.analog_data_ch4_high_bits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_data_ch3_low_byte
  {
    size_t item_size = sizeof(ros_message.analog_data_ch3_low_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_data_ch3_high_bits
  {
    size_t item_size = sizeof(ros_message.analog_data_ch3_high_bits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_data_ch2_low_byte
  {
    size_t item_size = sizeof(ros_message.analog_data_ch2_low_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_data_ch2_high_bits
  {
    size_t item_size = sizeof(ros_message.analog_data_ch2_high_bits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_data_ch1_low_byte
  {
    size_t item_size = sizeof(ros_message.analog_data_ch1_low_byte);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: analog_data_ch1_high_bits
  {
    size_t item_size = sizeof(ros_message.analog_data_ch1_high_bits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_neobotix_usboard_msgs
max_serialized_size_AnalogIn(
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

  // Member: analog_data_ch4_low_byte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_data_ch4_high_bits
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_data_ch3_low_byte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_data_ch3_high_bits
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_data_ch2_low_byte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_data_ch2_high_bits
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_data_ch1_low_byte
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: analog_data_ch1_high_bits
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AnalogIn__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const neobotix_usboard_msgs::msg::AnalogIn *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AnalogIn__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<neobotix_usboard_msgs::msg::AnalogIn *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AnalogIn__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const neobotix_usboard_msgs::msg::AnalogIn *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AnalogIn__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AnalogIn(full_bounded, 0);
}

static message_type_support_callbacks_t _AnalogIn__callbacks = {
  "neobotix_usboard_msgs::msg",
  "AnalogIn",
  _AnalogIn__cdr_serialize,
  _AnalogIn__cdr_deserialize,
  _AnalogIn__get_serialized_size,
  _AnalogIn__max_serialized_size
};

static rosidl_message_type_support_t _AnalogIn__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AnalogIn__callbacks,
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
get_message_type_support_handle<neobotix_usboard_msgs::msg::AnalogIn>()
{
  return &neobotix_usboard_msgs::msg::typesupport_fastrtps_cpp::_AnalogIn__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, neobotix_usboard_msgs, msg, AnalogIn)() {
  return &neobotix_usboard_msgs::msg::typesupport_fastrtps_cpp::_AnalogIn__handle;
}

#ifdef __cplusplus
}
#endif
