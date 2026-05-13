// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/ScanData2204.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/scan_data2204__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/scan_data2204__struct.h"
#include "ibeo_msgs/msg/detail/scan_data2204__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"  // ibeo_header
#include "ibeo_msgs/msg/detail/scan_point2204__functions.h"  // scan_point_list
#include "ibeo_msgs/msg/detail/scanner_info2204__functions.h"  // scanner_info_list
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, IbeoDataHeader)();
size_t get_serialized_size_ibeo_msgs__msg__ScanPoint2204(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__ScanPoint2204(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScanPoint2204)();
size_t get_serialized_size_ibeo_msgs__msg__ScannerInfo2204(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__ScannerInfo2204(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScannerInfo2204)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ScanData2204__ros_msg_type = ibeo_msgs__msg__ScanData2204;

static bool _ScanData2204__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ScanData2204__ros_msg_type * ros_message = static_cast<const _ScanData2204__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: ibeo_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, IbeoDataHeader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ibeo_header, cdr))
    {
      return false;
    }
  }

  // Field name: scan_start_time
  {
    cdr << ros_message->scan_start_time;
  }

  // Field name: scan_end_time_offset
  {
    cdr << ros_message->scan_end_time_offset;
  }

  // Field name: ground_labeled
  {
    cdr << (ros_message->ground_labeled ? true : false);
  }

  // Field name: dirt_labeled
  {
    cdr << (ros_message->dirt_labeled ? true : false);
  }

  // Field name: rain_labeled
  {
    cdr << (ros_message->rain_labeled ? true : false);
  }

  // Field name: fused_scan
  {
    cdr << (ros_message->fused_scan ? true : false);
  }

  // Field name: mirror_side
  {
    cdr << ros_message->mirror_side;
  }

  // Field name: coordinate_system
  {
    cdr << ros_message->coordinate_system;
  }

  // Field name: scan_number
  {
    cdr << ros_message->scan_number;
  }

  // Field name: scan_points
  {
    cdr << ros_message->scan_points;
  }

  // Field name: number_of_scanner_infos
  {
    cdr << ros_message->number_of_scanner_infos;
  }

  // Field name: scanner_info_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScannerInfo2204
      )()->data);
    size_t size = ros_message->scanner_info_list.size;
    auto array_ptr = ros_message->scanner_info_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: scan_point_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScanPoint2204
      )()->data);
    size_t size = ros_message->scan_point_list.size;
    auto array_ptr = ros_message->scan_point_list.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _ScanData2204__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ScanData2204__ros_msg_type * ros_message = static_cast<_ScanData2204__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: ibeo_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, IbeoDataHeader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ibeo_header))
    {
      return false;
    }
  }

  // Field name: scan_start_time
  {
    cdr >> ros_message->scan_start_time;
  }

  // Field name: scan_end_time_offset
  {
    cdr >> ros_message->scan_end_time_offset;
  }

  // Field name: ground_labeled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ground_labeled = tmp ? true : false;
  }

  // Field name: dirt_labeled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dirt_labeled = tmp ? true : false;
  }

  // Field name: rain_labeled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rain_labeled = tmp ? true : false;
  }

  // Field name: fused_scan
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->fused_scan = tmp ? true : false;
  }

  // Field name: mirror_side
  {
    cdr >> ros_message->mirror_side;
  }

  // Field name: coordinate_system
  {
    cdr >> ros_message->coordinate_system;
  }

  // Field name: scan_number
  {
    cdr >> ros_message->scan_number;
  }

  // Field name: scan_points
  {
    cdr >> ros_message->scan_points;
  }

  // Field name: number_of_scanner_infos
  {
    cdr >> ros_message->number_of_scanner_infos;
  }

  // Field name: scanner_info_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScannerInfo2204
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->scanner_info_list.data) {
      ibeo_msgs__msg__ScannerInfo2204__Sequence__fini(&ros_message->scanner_info_list);
    }
    if (!ibeo_msgs__msg__ScannerInfo2204__Sequence__init(&ros_message->scanner_info_list, size)) {
      fprintf(stderr, "failed to create array for field 'scanner_info_list'");
      return false;
    }
    auto array_ptr = ros_message->scanner_info_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: scan_point_list
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScanPoint2204
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->scan_point_list.data) {
      ibeo_msgs__msg__ScanPoint2204__Sequence__fini(&ros_message->scan_point_list);
    }
    if (!ibeo_msgs__msg__ScanPoint2204__Sequence__init(&ros_message->scan_point_list, size)) {
      fprintf(stderr, "failed to create array for field 'scan_point_list'");
      return false;
    }
    auto array_ptr = ros_message->scan_point_list.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t get_serialized_size_ibeo_msgs__msg__ScanData2204(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ScanData2204__ros_msg_type * ros_message = static_cast<const _ScanData2204__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ibeo_header

  current_alignment += get_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
    &(ros_message->ibeo_header), current_alignment);
  // field.name scan_start_time
  {
    size_t item_size = sizeof(ros_message->scan_start_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan_end_time_offset
  {
    size_t item_size = sizeof(ros_message->scan_end_time_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ground_labeled
  {
    size_t item_size = sizeof(ros_message->ground_labeled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dirt_labeled
  {
    size_t item_size = sizeof(ros_message->dirt_labeled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rain_labeled
  {
    size_t item_size = sizeof(ros_message->rain_labeled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fused_scan
  {
    size_t item_size = sizeof(ros_message->fused_scan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mirror_side
  {
    size_t item_size = sizeof(ros_message->mirror_side);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coordinate_system
  {
    size_t item_size = sizeof(ros_message->coordinate_system);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan_number
  {
    size_t item_size = sizeof(ros_message->scan_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scan_points
  {
    size_t item_size = sizeof(ros_message->scan_points);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name number_of_scanner_infos
  {
    size_t item_size = sizeof(ros_message->number_of_scanner_infos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scanner_info_list
  {
    size_t array_size = ros_message->scanner_info_list.size;
    auto array_ptr = ros_message->scanner_info_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ibeo_msgs__msg__ScannerInfo2204(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name scan_point_list
  {
    size_t array_size = ros_message->scan_point_list.size;
    auto array_ptr = ros_message->scan_point_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_ibeo_msgs__msg__ScanPoint2204(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ScanData2204__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__ScanData2204(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__ScanData2204(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: ibeo_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
        full_bounded, current_alignment);
    }
  }
  // member: scan_start_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: scan_end_time_offset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ground_labeled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dirt_labeled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rain_labeled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fused_scan
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mirror_side
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: coordinate_system
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scan_number
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: scan_points
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: number_of_scanner_infos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: scanner_info_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__ScannerInfo2204(
        full_bounded, current_alignment);
    }
  }
  // member: scan_point_list
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__ScanPoint2204(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ScanData2204__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__ScanData2204(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ScanData2204 = {
  "ibeo_msgs::msg",
  "ScanData2204",
  _ScanData2204__cdr_serialize,
  _ScanData2204__cdr_deserialize,
  _ScanData2204__get_serialized_size,
  _ScanData2204__max_serialized_size
};

static rosidl_message_type_support_t _ScanData2204__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ScanData2204,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ScanData2204)() {
  return &_ScanData2204__type_support;
}

#if defined(__cplusplus)
}
#endif
