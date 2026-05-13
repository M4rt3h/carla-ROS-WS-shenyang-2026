// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ibeo_msgs:msg/ScanData2202.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_data2202__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ibeo_msgs/msg/detail/scan_data2202__struct.hpp"

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
  const ibeo_msgs::msg::ScanPoint2202 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ibeo_msgs::msg::ScanPoint2202 &);
size_t get_serialized_size(
  const ibeo_msgs::msg::ScanPoint2202 &,
  size_t current_alignment);
size_t
max_serialized_size_ScanPoint2202(
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
  const ibeo_msgs::msg::ScanData2202 & ros_message,
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
  // Member: scan_number
  cdr << ros_message.scan_number;
  // Member: scanner_status
  cdr << ros_message.scanner_status;
  // Member: sync_phase_offset
  cdr << ros_message.sync_phase_offset;
  // Member: scan_start_time
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.scan_start_time,
    cdr);
  // Member: scan_end_time
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.scan_end_time,
    cdr);
  // Member: angle_ticks_per_rotation
  cdr << ros_message.angle_ticks_per_rotation;
  // Member: start_angle_ticks
  cdr << ros_message.start_angle_ticks;
  // Member: end_angle_ticks
  cdr << ros_message.end_angle_ticks;
  // Member: scan_points_count
  cdr << ros_message.scan_points_count;
  // Member: mounting_yaw_angle_ticks
  cdr << ros_message.mounting_yaw_angle_ticks;
  // Member: mounting_pitch_angle_ticks
  cdr << ros_message.mounting_pitch_angle_ticks;
  // Member: mounting_roll_angle_ticks
  cdr << ros_message.mounting_roll_angle_ticks;
  // Member: mounting_position_x
  cdr << ros_message.mounting_position_x;
  // Member: mounting_position_y
  cdr << ros_message.mounting_position_y;
  // Member: mounting_position_z
  cdr << ros_message.mounting_position_z;
  // Member: ground_labeled
  cdr << (ros_message.ground_labeled ? true : false);
  // Member: dirt_labeled
  cdr << (ros_message.dirt_labeled ? true : false);
  // Member: rain_labeled
  cdr << (ros_message.rain_labeled ? true : false);
  // Member: mirror_side
  cdr << ros_message.mirror_side;
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
  ibeo_msgs::msg::ScanData2202 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: ibeo_header
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ibeo_header);

  // Member: scan_number
  cdr >> ros_message.scan_number;

  // Member: scanner_status
  cdr >> ros_message.scanner_status;

  // Member: sync_phase_offset
  cdr >> ros_message.sync_phase_offset;

  // Member: scan_start_time
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.scan_start_time);

  // Member: scan_end_time
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.scan_end_time);

  // Member: angle_ticks_per_rotation
  cdr >> ros_message.angle_ticks_per_rotation;

  // Member: start_angle_ticks
  cdr >> ros_message.start_angle_ticks;

  // Member: end_angle_ticks
  cdr >> ros_message.end_angle_ticks;

  // Member: scan_points_count
  cdr >> ros_message.scan_points_count;

  // Member: mounting_yaw_angle_ticks
  cdr >> ros_message.mounting_yaw_angle_ticks;

  // Member: mounting_pitch_angle_ticks
  cdr >> ros_message.mounting_pitch_angle_ticks;

  // Member: mounting_roll_angle_ticks
  cdr >> ros_message.mounting_roll_angle_ticks;

  // Member: mounting_position_x
  cdr >> ros_message.mounting_position_x;

  // Member: mounting_position_y
  cdr >> ros_message.mounting_position_y;

  // Member: mounting_position_z
  cdr >> ros_message.mounting_position_z;

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

  // Member: mirror_side
  cdr >> ros_message.mirror_side;

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
  const ibeo_msgs::msg::ScanData2202 & ros_message,
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
  // Member: scan_number
  {
    size_t item_size = sizeof(ros_message.scan_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scanner_status
  {
    size_t item_size = sizeof(ros_message.scanner_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sync_phase_offset
  {
    size_t item_size = sizeof(ros_message.sync_phase_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scan_start_time

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.scan_start_time, current_alignment);
  // Member: scan_end_time

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.scan_end_time, current_alignment);
  // Member: angle_ticks_per_rotation
  {
    size_t item_size = sizeof(ros_message.angle_ticks_per_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: start_angle_ticks
  {
    size_t item_size = sizeof(ros_message.start_angle_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: end_angle_ticks
  {
    size_t item_size = sizeof(ros_message.end_angle_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: scan_points_count
  {
    size_t item_size = sizeof(ros_message.scan_points_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mounting_yaw_angle_ticks
  {
    size_t item_size = sizeof(ros_message.mounting_yaw_angle_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mounting_pitch_angle_ticks
  {
    size_t item_size = sizeof(ros_message.mounting_pitch_angle_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mounting_roll_angle_ticks
  {
    size_t item_size = sizeof(ros_message.mounting_roll_angle_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mounting_position_x
  {
    size_t item_size = sizeof(ros_message.mounting_position_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mounting_position_y
  {
    size_t item_size = sizeof(ros_message.mounting_position_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mounting_position_z
  {
    size_t item_size = sizeof(ros_message.mounting_position_z);
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
  // Member: mirror_side
  {
    size_t item_size = sizeof(ros_message.mirror_side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
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
max_serialized_size_ScanData2202(
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

  // Member: scan_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: scanner_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sync_phase_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: scan_start_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: scan_end_time
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  // Member: angle_ticks_per_rotation
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: start_angle_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: end_angle_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: scan_points_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mounting_yaw_angle_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mounting_pitch_angle_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mounting_roll_angle_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mounting_position_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mounting_position_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mounting_position_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
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

  // Member: mirror_side
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: scan_point_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ScanPoint2202(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ScanData2202__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::ScanData2202 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ScanData2202__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ibeo_msgs::msg::ScanData2202 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ScanData2202__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::ScanData2202 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ScanData2202__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ScanData2202(full_bounded, 0);
}

static message_type_support_callbacks_t _ScanData2202__callbacks = {
  "ibeo_msgs::msg",
  "ScanData2202",
  _ScanData2202__cdr_serialize,
  _ScanData2202__cdr_deserialize,
  _ScanData2202__get_serialized_size,
  _ScanData2202__max_serialized_size
};

static rosidl_message_type_support_t _ScanData2202__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ScanData2202__callbacks,
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
get_message_type_support_handle<ibeo_msgs::msg::ScanData2202>()
{
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_ScanData2202__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ibeo_msgs, msg, ScanData2202)() {
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_ScanData2202__handle;
}

#ifdef __cplusplus
}
#endif
