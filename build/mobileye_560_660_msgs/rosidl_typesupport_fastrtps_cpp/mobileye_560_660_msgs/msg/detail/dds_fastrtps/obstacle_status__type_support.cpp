// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mobileye_560_660_msgs:msg/ObstacleStatus.idl
// generated code does not contain a copyright notice
#include "mobileye_560_660_msgs/msg/detail/obstacle_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mobileye_560_660_msgs/msg/detail/obstacle_status__struct.hpp"

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
  const mobileye_560_660_msgs::msg::ObstacleStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: num_obstacles
  cdr << ros_message.num_obstacles;
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: application_version
  cdr << ros_message.application_version;
  // Member: active_version_number_section
  cdr << ros_message.active_version_number_section;
  // Member: left_close_range_cut_in
  cdr << (ros_message.left_close_range_cut_in ? true : false);
  // Member: right_close_range_cut_in
  cdr << (ros_message.right_close_range_cut_in ? true : false);
  // Member: stop_go
  cdr << ros_message.stop_go;
  // Member: protocol_version
  cdr << ros_message.protocol_version;
  // Member: close_car
  cdr << (ros_message.close_car ? true : false);
  // Member: failsafe
  cdr << ros_message.failsafe;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mobileye_560_660_msgs::msg::ObstacleStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: num_obstacles
  cdr >> ros_message.num_obstacles;

  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: application_version
  cdr >> ros_message.application_version;

  // Member: active_version_number_section
  cdr >> ros_message.active_version_number_section;

  // Member: left_close_range_cut_in
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.left_close_range_cut_in = tmp ? true : false;
  }

  // Member: right_close_range_cut_in
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.right_close_range_cut_in = tmp ? true : false;
  }

  // Member: stop_go
  cdr >> ros_message.stop_go;

  // Member: protocol_version
  cdr >> ros_message.protocol_version;

  // Member: close_car
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.close_car = tmp ? true : false;
  }

  // Member: failsafe
  cdr >> ros_message.failsafe;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
get_serialized_size(
  const mobileye_560_660_msgs::msg::ObstacleStatus & ros_message,
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
  // Member: num_obstacles
  {
    size_t item_size = sizeof(ros_message.num_obstacles);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: application_version
  {
    size_t item_size = sizeof(ros_message.application_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: active_version_number_section
  {
    size_t item_size = sizeof(ros_message.active_version_number_section);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_close_range_cut_in
  {
    size_t item_size = sizeof(ros_message.left_close_range_cut_in);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_close_range_cut_in
  {
    size_t item_size = sizeof(ros_message.right_close_range_cut_in);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stop_go
  {
    size_t item_size = sizeof(ros_message.stop_go);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: protocol_version
  {
    size_t item_size = sizeof(ros_message.protocol_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: close_car
  {
    size_t item_size = sizeof(ros_message.close_car);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: failsafe
  {
    size_t item_size = sizeof(ros_message.failsafe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mobileye_560_660_msgs
max_serialized_size_ObstacleStatus(
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

  // Member: num_obstacles
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: application_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: active_version_number_section
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: left_close_range_cut_in
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: right_close_range_cut_in
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stop_go
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: protocol_version
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: close_car
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: failsafe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ObstacleStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::ObstacleStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObstacleStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mobileye_560_660_msgs::msg::ObstacleStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObstacleStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mobileye_560_660_msgs::msg::ObstacleStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObstacleStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ObstacleStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _ObstacleStatus__callbacks = {
  "mobileye_560_660_msgs::msg",
  "ObstacleStatus",
  _ObstacleStatus__cdr_serialize,
  _ObstacleStatus__cdr_deserialize,
  _ObstacleStatus__get_serialized_size,
  _ObstacleStatus__max_serialized_size
};

static rosidl_message_type_support_t _ObstacleStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObstacleStatus__callbacks,
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
get_message_type_support_handle<mobileye_560_660_msgs::msg::ObstacleStatus>()
{
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_ObstacleStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mobileye_560_660_msgs, msg, ObstacleStatus)() {
  return &mobileye_560_660_msgs::msg::typesupport_fastrtps_cpp::_ObstacleStatus__handle;
}

#ifdef __cplusplus
}
#endif
