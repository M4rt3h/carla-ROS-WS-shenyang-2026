// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ibeo_msgs:msg/ScanData2204.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_data2204__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ibeo_msgs/msg/detail/scan_data2204__struct.hpp"

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

namespace ibeo_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ibeo_msgs::msg::ScannerInfo2204 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ibeo_msgs::msg::ScannerInfo2204 &);
size_t get_serialized_size(
  const ibeo_msgs::msg::ScannerInfo2204 &,
  size_t current_alignment);
size_t
max_serialized_size_ScannerInfo2204(
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
bool cdr_serialize(
  const ibeo_msgs::msg::ScanPoint2204 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ibeo_msgs::msg::ScanPoint2204 &);
size_t get_serialized_size(
  const ibeo_msgs::msg::ScanPoint2204 &,
  size_t current_alignment);
size_t
max_serialized_size_ScanPoint2204(
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
  const ibeo_msgs::msg::ScanData2204 & ros_message,
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
  // Member: scan_start_time
  cdr << ros_message.scan_start_time;
  // Member: scan_end_time_offset
  cdr << ros_message.scan_end_time_offset;
  // Member: ground_labeled
  cdr << (ros_message.ground_labeled ? true : false);
  // Member: dirt_labeled
  cdr << (ros_message.dirt_labeled ? true : false);
  // Member: rain_labeled
  cdr << (ros_message.rain_labeled ? true : false);
  // Member: fused_scan
  cdr << (ros_message.fused_scan ? true : false);
  // Member: mirror_side
  cdr << ros_message.mirror_side;
  // Member: coordinate_system
  cdr << ros_message.coordinate_system;
  // Member: scan_number
  cdr << ros_message.scan_number;
  // Member: scan_points
  cdr << ros_message.scan_points;
  // Member: number_of_scanner_infos
  cdr << ros_message.number_of_scanner_infos;
  // Member: scanner_info_list
  {
    size_t size = ros_message.scanner_info_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.scanner_info_list[i],
        cdr);
    }
  }
  // Member: scan_point_list
  {
    size_t size = ros_message.scan_point_list.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.scan_point_list[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ibeo_msgs::msg::ScanData2204 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: ibeo_header
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ibeo_header);

  // Member: scan_start_time
  cdr >> ros_message.scan_start_time;

  // Member: scan_end_time_offset
  cdr >> ros_message.scan_end_time_offset;

  // Member: ground_labeled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ground_labeled = tmp ? true : false;
  }

  // Member: dirt_labeled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dirt_labeled = tmp ? true : false;
  }

  // Member: rain_labeled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rain_labeled = tmp ? true : false;
  }

  // Member: fused_scan
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.fused_scan = tmp ? true : false;
  }

  // Member: mirror_side
  cdr >> ros_message.mirror_side;

  // Member: coordinate_system
  cdr >> ros_message.coordinate_system;

  // Member: scan_number
  cdr >> ros_message.scan_number;

  // Member: scan_points
  cdr >> ros_message.scan_points;

  // Member: number_of_scanner_infos
  cdr >> ros_message.number_of_scanner_infos;

  // Member: scanner_info_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.scanner_info_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.scanner_info_list[i]);
    }
  }

  // Member: scan_point_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.scan_point_list.resize(size);
    for (size_t i = 0; i < size; i++) {
      ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.scan_point_list[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
get_serialized_size(
  const ibeo_msgs::msg::ScanData2204 & ros_message,
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
  // Member: scan_start_time
  {
    size_t item_size = sizeof(ros_message.scan_start_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scan_end_time_offset
  {
    size_t item_size = sizeof(ros_message.scan_end_time_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ground_labeled
  {
    size_t item_size = sizeof(ros_message.ground_labeled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dirt_labeled
  {
    size_t item_size = sizeof(ros_message.dirt_labeled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rain_labeled
  {
    size_t item_size = sizeof(ros_message.rain_labeled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fused_scan
  {
    size_t item_size = sizeof(ros_message.fused_scan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mirror_side
  {
    size_t item_size = sizeof(ros_message.mirror_side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: coordinate_system
  {
    size_t item_size = sizeof(ros_message.coordinate_system);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scan_number
  {
    size_t item_size = sizeof(ros_message.scan_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scan_points
  {
    size_t item_size = sizeof(ros_message.scan_points);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: number_of_scanner_infos
  {
    size_t item_size = sizeof(ros_message.number_of_scanner_infos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scanner_info_list
  {
    size_t array_size = ros_message.scanner_info_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.scanner_info_list[index], current_alignment);
    }
  }
  // Member: scan_point_list
  {
    size_t array_size = ros_message.scan_point_list.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.scan_point_list[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
max_serialized_size_ScanData2204(
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

  // Member: scan_start_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: scan_end_time_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ground_labeled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dirt_labeled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rain_labeled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: fused_scan
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mirror_side
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: coordinate_system
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: scan_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: scan_points
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: number_of_scanner_infos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: scanner_info_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ScannerInfo2204(
        full_bounded, current_alignment);
    }
  }

  // Member: scan_point_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ScanPoint2204(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ScanData2204__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::ScanData2204 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScanData2204__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ibeo_msgs::msg::ScanData2204 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScanData2204__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::ScanData2204 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScanData2204__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ScanData2204(full_bounded, 0);
}

static message_type_support_callbacks_t _ScanData2204__callbacks = {
  "ibeo_msgs::msg",
  "ScanData2204",
  _ScanData2204__cdr_serialize,
  _ScanData2204__cdr_deserialize,
  _ScanData2204__get_serialized_size,
  _ScanData2204__max_serialized_size
};

static rosidl_message_type_support_t _ScanData2204__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScanData2204__callbacks,
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
get_message_type_support_handle<ibeo_msgs::msg::ScanData2204>()
{
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_ScanData2204__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ibeo_msgs, msg, ScanData2204)() {
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_ScanData2204__handle;
}

#ifdef __cplusplus
}
#endif
