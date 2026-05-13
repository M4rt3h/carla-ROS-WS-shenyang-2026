// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ibeo_msgs:msg/ScanData2204.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ibeo_msgs/msg/detail/scan_data2204__rosidl_typesupport_introspection_c.h"
#include "ibeo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ibeo_msgs/msg/detail/scan_data2204__functions.h"
#include "ibeo_msgs/msg/detail/scan_data2204__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/ibeo_data_header.h"
// Member `ibeo_header`
#include "ibeo_msgs/msg/detail/ibeo_data_header__rosidl_typesupport_introspection_c.h"
// Member `scanner_info_list`
#include "ibeo_msgs/msg/scanner_info2204.h"
// Member `scanner_info_list`
#include "ibeo_msgs/msg/detail/scanner_info2204__rosidl_typesupport_introspection_c.h"
// Member `scan_point_list`
#include "ibeo_msgs/msg/scan_point2204.h"
// Member `scan_point_list`
#include "ibeo_msgs/msg/detail/scan_point2204__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ibeo_msgs__msg__ScanData2204__init(message_memory);
}

void ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_fini_function(void * message_memory)
{
  ibeo_msgs__msg__ScanData2204__fini(message_memory);
}

size_t ScanData2204__rosidl_typesupport_introspection_c__size_function__ScannerInfo2204__scanner_info_list(
  const void * untyped_member)
{
  const ibeo_msgs__msg__ScannerInfo2204__Sequence * member =
    (const ibeo_msgs__msg__ScannerInfo2204__Sequence *)(untyped_member);
  return member->size;
}

const void * ScanData2204__rosidl_typesupport_introspection_c__get_const_function__ScannerInfo2204__scanner_info_list(
  const void * untyped_member, size_t index)
{
  const ibeo_msgs__msg__ScannerInfo2204__Sequence * member =
    (const ibeo_msgs__msg__ScannerInfo2204__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ScanData2204__rosidl_typesupport_introspection_c__get_function__ScannerInfo2204__scanner_info_list(
  void * untyped_member, size_t index)
{
  ibeo_msgs__msg__ScannerInfo2204__Sequence * member =
    (ibeo_msgs__msg__ScannerInfo2204__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ScanData2204__rosidl_typesupport_introspection_c__resize_function__ScannerInfo2204__scanner_info_list(
  void * untyped_member, size_t size)
{
  ibeo_msgs__msg__ScannerInfo2204__Sequence * member =
    (ibeo_msgs__msg__ScannerInfo2204__Sequence *)(untyped_member);
  ibeo_msgs__msg__ScannerInfo2204__Sequence__fini(member);
  return ibeo_msgs__msg__ScannerInfo2204__Sequence__init(member, size);
}

size_t ScanData2204__rosidl_typesupport_introspection_c__size_function__ScanPoint2204__scan_point_list(
  const void * untyped_member)
{
  const ibeo_msgs__msg__ScanPoint2204__Sequence * member =
    (const ibeo_msgs__msg__ScanPoint2204__Sequence *)(untyped_member);
  return member->size;
}

const void * ScanData2204__rosidl_typesupport_introspection_c__get_const_function__ScanPoint2204__scan_point_list(
  const void * untyped_member, size_t index)
{
  const ibeo_msgs__msg__ScanPoint2204__Sequence * member =
    (const ibeo_msgs__msg__ScanPoint2204__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ScanData2204__rosidl_typesupport_introspection_c__get_function__ScanPoint2204__scan_point_list(
  void * untyped_member, size_t index)
{
  ibeo_msgs__msg__ScanPoint2204__Sequence * member =
    (ibeo_msgs__msg__ScanPoint2204__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ScanData2204__rosidl_typesupport_introspection_c__resize_function__ScanPoint2204__scan_point_list(
  void * untyped_member, size_t size)
{
  ibeo_msgs__msg__ScanPoint2204__Sequence * member =
    (ibeo_msgs__msg__ScanPoint2204__Sequence *)(untyped_member);
  ibeo_msgs__msg__ScanPoint2204__Sequence__fini(member);
  return ibeo_msgs__msg__ScanPoint2204__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_member_array[15] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ibeo_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, ibeo_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, scan_start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_end_time_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, scan_end_time_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ground_labeled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, ground_labeled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dirt_labeled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, dirt_labeled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rain_labeled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, rain_labeled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fused_scan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, fused_scan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mirror_side",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, mirror_side),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinate_system",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, coordinate_system),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, scan_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, scan_points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "number_of_scanner_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, number_of_scanner_infos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scanner_info_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, scanner_info_list),  // bytes offset in struct
    NULL,  // default value
    ScanData2204__rosidl_typesupport_introspection_c__size_function__ScannerInfo2204__scanner_info_list,  // size() function pointer
    ScanData2204__rosidl_typesupport_introspection_c__get_const_function__ScannerInfo2204__scanner_info_list,  // get_const(index) function pointer
    ScanData2204__rosidl_typesupport_introspection_c__get_function__ScannerInfo2204__scanner_info_list,  // get(index) function pointer
    ScanData2204__rosidl_typesupport_introspection_c__resize_function__ScannerInfo2204__scanner_info_list  // resize(index) function pointer
  },
  {
    "scan_point_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScanData2204, scan_point_list),  // bytes offset in struct
    NULL,  // default value
    ScanData2204__rosidl_typesupport_introspection_c__size_function__ScanPoint2204__scan_point_list,  // size() function pointer
    ScanData2204__rosidl_typesupport_introspection_c__get_const_function__ScanPoint2204__scan_point_list,  // get_const(index) function pointer
    ScanData2204__rosidl_typesupport_introspection_c__get_function__ScanPoint2204__scan_point_list,  // get(index) function pointer
    ScanData2204__rosidl_typesupport_introspection_c__resize_function__ScanPoint2204__scan_point_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_members = {
  "ibeo_msgs__msg",  // message namespace
  "ScanData2204",  // message name
  15,  // number of fields
  sizeof(ibeo_msgs__msg__ScanData2204),
  ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_member_array,  // message members
  ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_init_function,  // function to initialize message memory (memory has to be allocated)
  ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_type_support_handle = {
  0,
  &ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, ScanData2204)() {
  ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, IbeoDataHeader)();
  ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, ScannerInfo2204)();
  ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, ScanPoint2204)();
  if (!ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_type_support_handle.typesupport_identifier) {
    ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScanData2204__rosidl_typesupport_introspection_c__ScanData2204_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
