// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ibeo_msgs:msg/CameraImage.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/camera_image__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ibeo_msgs/msg/detail/camera_image__struct.hpp"

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

namespace ibeo_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ibeo_msgs::msg::IbeoDataHeader &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ibeo_msgs::msg::IbeoDataHeader &);
size_t get_serialized_size(
  const ibeo_msgs::msg::IbeoDataHeader &,
  size_t current_alignment);
size_t
max_serialized_size_IbeoDataHeader(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ibeo_msgs

namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace ibeo_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ibeo_msgs::msg::MountingPositionF &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ibeo_msgs::msg::MountingPositionF &);
size_t get_serialized_size(
  const ibeo_msgs::msg::MountingPositionF &,
  size_t current_alignment);
size_t
max_serialized_size_MountingPositionF(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ibeo_msgs


namespace ibeo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_serialize(
  const ibeo_msgs::msg::CameraImage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: ibeo_header
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ibeo_header,
    cdr);
  // Member: image_format
  cdr << ros_message.image_format;
  // Member: us_since_power_on
  cdr << ros_message.us_since_power_on;
  // Member: timestamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.timestamp,
    cdr);
  // Member: device_id
  cdr << ros_message.device_id;
  // Member: mounting_position
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.mounting_position,
    cdr);
  // Member: horizontal_opening_angle
  cdr << ros_message.horizontal_opening_angle;
  // Member: vertical_opening_angle
  cdr << ros_message.vertical_opening_angle;
  // Member: image_width
  cdr << ros_message.image_width;
  // Member: image_height
  cdr << ros_message.image_height;
  // Member: compressed_size
  cdr << ros_message.compressed_size;
  // Member: image_buffer
  {
    cdr << ros_message.image_buffer;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ibeo_msgs::msg::CameraImage & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: ibeo_header
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ibeo_header);

  // Member: image_format
  cdr >> ros_message.image_format;

  // Member: us_since_power_on
  cdr >> ros_message.us_since_power_on;

  // Member: timestamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.timestamp);

  // Member: device_id
  cdr >> ros_message.device_id;

  // Member: mounting_position
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.mounting_position);

  // Member: horizontal_opening_angle
  cdr >> ros_message.horizontal_opening_angle;

  // Member: vertical_opening_angle
  cdr >> ros_message.vertical_opening_angle;

  // Member: image_width
  cdr >> ros_message.image_width;

  // Member: image_height
  cdr >> ros_message.image_height;

  // Member: compressed_size
  cdr >> ros_message.compressed_size;

  // Member: image_buffer
  {
    cdr >> ros_message.image_buffer;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
get_serialized_size(
  const ibeo_msgs::msg::CameraImage & ros_message,
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
  // Member: ibeo_header

  current_alignment +=
    ibeo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ibeo_header, current_alignment);
  // Member: image_format
  {
    size_t item_size = sizeof(ros_message.image_format);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: us_since_power_on
  {
    size_t item_size = sizeof(ros_message.us_since_power_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.timestamp, current_alignment);
  // Member: device_id
  {
    size_t item_size = sizeof(ros_message.device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mounting_position

  current_alignment +=
    ibeo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.mounting_position, current_alignment);
  // Member: horizontal_opening_angle
  {
    size_t item_size = sizeof(ros_message.horizontal_opening_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vertical_opening_angle
  {
    size_t item_size = sizeof(ros_message.vertical_opening_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: image_width
  {
    size_t item_size = sizeof(ros_message.image_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: image_height
  {
    size_t item_size = sizeof(ros_message.image_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: compressed_size
  {
    size_t item_size = sizeof(ros_message.compressed_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: image_buffer
  {
    size_t array_size = ros_message.image_buffer.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.image_buffer[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
max_serialized_size_CameraImage(
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

  // Member: ibeo_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IbeoDataHeader(
        full_bounded, current_alignment);
    }
  }

  // Member: image_format
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: us_since_power_on
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: timestamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: device_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mounting_position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MountingPositionF(
        full_bounded, current_alignment);
    }
  }

  // Member: horizontal_opening_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: vertical_opening_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: image_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: image_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: compressed_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: image_buffer
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _CameraImage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::CameraImage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CameraImage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ibeo_msgs::msg::CameraImage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CameraImage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::CameraImage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CameraImage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_CameraImage(full_bounded, 0);
}

static message_type_support_callbacks_t _CameraImage__callbacks = {
  "ibeo_msgs::msg",
  "CameraImage",
  _CameraImage__cdr_serialize,
  _CameraImage__cdr_deserialize,
  _CameraImage__get_serialized_size,
  _CameraImage__max_serialized_size
};

static rosidl_message_type_support_t _CameraImage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CameraImage__callbacks,
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
get_message_type_support_handle<ibeo_msgs::msg::CameraImage>()
{
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_CameraImage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ibeo_msgs, msg, CameraImage)() {
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_CameraImage__handle;
}

#ifdef __cplusplus
}
#endif
