// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ibeo_msgs:msg/ResolutionInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ibeo_msgs/msg/detail/resolution_info__rosidl_typesupport_introspection_c.h"
#include "ibeo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ibeo_msgs/msg/detail/resolution_info__functions.h"
#include "ibeo_msgs/msg/detail/resolution_info__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ibeo_msgs__msg__ResolutionInfo__init(message_memory);
}

void ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_fini_function(void * message_memory)
{
  ibeo_msgs__msg__ResolutionInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_message_member_array[2] = {
  {
    "resolution_start_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ResolutionInfo, resolution_start_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs__msg__ResolutionInfo, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_message_members = {
  "ibeo_msgs__msg",  // message namespace
  "ResolutionInfo",  // message name
  2,  // number of fields
  sizeof(ibeo_msgs__msg__ResolutionInfo),
  ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_message_member_array,  // message members
  ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_message_type_support_handle = {
  0,
  &ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ibeo_msgs, msg, ResolutionInfo)() {
  if (!ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_message_type_support_handle.typesupport_identifier) {
    ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ResolutionInfo__rosidl_typesupport_introspection_c__ResolutionInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
