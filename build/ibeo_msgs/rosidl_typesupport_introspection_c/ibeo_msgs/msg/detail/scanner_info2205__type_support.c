// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ibeo_msgs:msg/ScannerInfo2205.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ibeo_msgs/msg/detail/scanner_info2205__rosidl_typesupport_introspection_c.h"
#include "ibeo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ibeo_msgs/msg/detail/scanner_info2205__functions.h"
#include "ibeo_msgs/msg/detail/scanner_info2205__struct.h"


// Include directives for member types
// Member `scan_start_time`
// Member `scan_end_time`
// Member `scan_start_time_from_device`
// Member `scan_end_time_from_device`
#include "builtin_interfaces/msg/time.h"
// Member `scan_start_time`
// Member `scan_end_time`
// Member `scan_start_time_from_device`
// Member `scan_end_time_from_device`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `mounting_position`
#include "ibeo_msgs/msg/mounting_position_f.h"
// Member `mounting_position`
#include "ibeo_msgs/msg/detail/mounting_position_f__rosidl_typesupport_introspection_c.h"
// Member `resolutions`
#include "ibeo_msgs/msg/resolution_info.h"
// Member `resolutions`
#include "ibeo_msgs/msg/detail/resolution_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ibeo_msgs__msg__ScannerInfo2205__init(message_memory);
}

void ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_fini_function(void * message_memory)
{
  ibeo_msgs__msg__ScannerInfo2205__fini(message_memory);
}

size_t ScannerInfo2205__rosidl_typesupport_introspection_c__size_function__ResolutionInfo__resolutions(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * ScannerInfo2205__rosidl_typesupport_introspection_c__get_const_function__ResolutionInfo__resolutions(
  const void * untyped_member, size_t index)
{
  const ibeo_msgs__msg__ResolutionInfo * member =
    (const ibeo_msgs__msg__ResolutionInfo *)(untyped_member);
  return &member[index];
}

void * ScannerInfo2205__rosidl_typesupport_introspection_c__get_function__ResolutionInfo__resolutions(
  void * untyped_member, size_t index)
{
  ibeo_msgs__msg__ResolutionInfo * member =
    (ibeo_msgs__msg__ResolutionInfo *)(untyped_member);
  return &member[index];
}

static rosidl_typesupport_introspection_c__MessageMember ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_member_array[14] = {
  {
    "device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scanner_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, scanner_type),  // bytes offset in struct
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
    offsetof(ibeo_msgs__msg__ScannerInfo2205, scan_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, start_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, end_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, scan_start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_end_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, scan_end_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_start_time_from_device",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, scan_start_time_from_device),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_end_time_from_device",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, scan_end_time_from_device),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, scan_frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beam_tilt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, beam_tilt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scan_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, scan_flags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mounting_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, mounting_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolutions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ScannerInfo2205, resolutions),  // bytes offset in struct
    NULL,  // default value
    ScannerInfo2205__rosidl_typesupport_introspection_c__size_function__ResolutionInfo__resolutions,  // size() function pointer
    ScannerInfo2205__rosidl_typesupport_introspection_c__get_const_function__ResolutionInfo__resolutions,  // get_const(index) function pointer
    ScannerInfo2205__rosidl_typesupport_introspection_c__get_function__ResolutionInfo__resolutions,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_members = {
  "ibeo_msgs__msg",  // message namespace
  "ScannerInfo2205",  // message name
  14,  // number of fields
  sizeof(ibeo_msgs__msg__ScannerInfo2205),
  ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_member_array,  // message members
  ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_init_function,  // function to initialize message memory (memory has to be allocated)
  ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_type_support_handle = {
  0,
  &ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, ScannerInfo2205)() {
  ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, MountingPositionF)();
  ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, ResolutionInfo)();
  if (!ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_type_support_handle.typesupport_identifier) {
    ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScannerInfo2205__rosidl_typesupport_introspection_c__ScannerInfo2205_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
