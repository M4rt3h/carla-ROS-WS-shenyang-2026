// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mobileye_560_660_msgs:msg/AftermarketLane.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/aftermarket_lane__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mobileye_560_660_msgs/msg/detail/aftermarket_lane__struct.hpp"

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


namespace mobileye_560_660_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
cdr_serialize(
  const mobileye_560_660_msgs::msg::AftermarketLane & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: lane_confidence_left
  cdr << ros_message.lane_confidence_left;
  // Member: ldw_available_left
  cdr << (ros_message.ldw_available_left ? true : false);
  // Member: lane_type_left
  cdr << ros_message.lane_type_left;
  // Member: distance_to_left_lane
  cdr << ros_message.distance_to_left_lane;
  // Member: lane_confidence_right
  cdr << ros_message.lane_confidence_right;
  // Member: ldw_available_right
  cdr << (ros_message.ldw_available_right ? true : false);
  // Member: lane_type_right
  cdr << ros_message.lane_type_right;
  // Member: distance_to_right_lane
  cdr << ros_message.distance_to_right_lane;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mobileye_560_660_msgs::msg::AftermarketLane & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: lane_confidence_left
  cdr >> ros_message.lane_confidence_left;

  // Member: ldw_available_left
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ldw_available_left = tmp ? true : false;
  }

  // Member: lane_type_left
  cdr >> ros_message.lane_type_left;

  // Member: distance_to_left_lane
  cdr >> ros_message.distance_to_left_lane;

  // Member: lane_confidence_right
  cdr >> ros_message.lane_confidence_right;

  // Member: ldw_available_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ldw_available_right = tmp ? true : false;
  }

  // Member: lane_type_right
  cdr >> ros_message.lane_type_right;

  // Member: distance_to_right_lane
  cdr >> ros_message.distance_to_right_lane;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
get_serialized_size(
  const mobileye_560_660_msgs::msg::AftermarketLane & ros_message,
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
  // Member: lane_confidence_left
  {
    size_t item_size = sizeof(ros_message.lane_confidence_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ldw_available_left
  {
    size_t item_size = sizeof(ros_message.ldw_available_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_type_left
  {
    size_t item_size = sizeof(ros_message.lane_type_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_to_left_lane
  {
    size_t item_size = sizeof(ros_message.distance_to_left_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_confidence_right
  {
    size_t item_size = sizeof(ros_message.lane_confidence_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ldw_available_right
  {
    size_t item_size = sizeof(ros_message.ldw_available_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_type_right
  {
    size_t item_size = sizeof(ros_message.lane_type_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: distance_to_right_lane
  {
    size_t item_size = sizeof(ros_message.distance_to_right_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
max_serialized_size_AftermarketLane(
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

  // Member: lane_confidence_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ldw_available_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_type_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: distance_to_left_lane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lane_confidence_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ldw_available_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_type_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: distance_to_right_lane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _AftermarketLane__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::AftermarketLane *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AftermarketLane__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mobileye_560_660_msgs::msg::AftermarketLane *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AftermarketLane__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::AftermarketLane *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AftermarketLane__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AftermarketLane(full_bounded, 0);
}

static message_type_support_callbacks_t _AftermarketLane__callbacks = {
  "mobileye_560_660_msgs::msg",
  "AftermarketLane",
  _AftermarketLane__cdr_serialize,
  _AftermarketLane__cdr_deserialize,
  _AftermarketLane__get_serialized_size,
  _AftermarketLane__max_serialized_size
};

static rosidl_message_type_support_t _AftermarketLane__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AftermarketLane__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mobileye_560_660_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mobileye_560_660_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mobileye_560_660_msgs::msg::AftermarketLane>()
{
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_AftermarketLane__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mobileye_560_660_msgs, msg, AftermarketLane)() {
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_AftermarketLane__handle;
}

#ifdef __cplusplus
}
#endif
