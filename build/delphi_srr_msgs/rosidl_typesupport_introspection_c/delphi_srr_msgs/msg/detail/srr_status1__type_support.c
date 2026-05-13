// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delphi_srr_msgs:msg/SrrStatus1.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delphi_srr_msgs/msg/detail/srr_status1__rosidl_typesupport_introspection_c.h"
#include "delphi_srr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delphi_srr_msgs/msg/detail/srr_status1__functions.h"
#include "delphi_srr_msgs/msg/detail/srr_status1__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delphi_srr_msgs__msg__SrrStatus1__init(message_memory);
}

void SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_fini_function(void * message_memory)
{
  delphi_srr_msgs__msg__SrrStatus1__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrStatus1, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_tx_look_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrStatus1, can_tx_look_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_tx_dsp_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrStatus1, can_tx_dsp_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_tx_yaw_rate_calc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrStatus1, can_tx_yaw_rate_calc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_tx_vehicle_speed_calc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrStatus1, can_tx_vehicle_speed_calc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_tx_scan_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrStatus1, can_tx_scan_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_tx_curvature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrStatus1, can_tx_curvature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_message_members = {
  "delphi_srr_msgs__msg",  // message namespace
  "SrrStatus1",  // message name
  7,  // number of fields
  sizeof(delphi_srr_msgs__msg__SrrStatus1),
  SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_message_member_array,  // message members
  SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_init_function,  // function to initialize message memory (memory has to be allocated)
  SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_message_type_support_handle = {
  0,
  &SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delphi_srr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delphi_srr_msgs, msg, SrrStatus1)() {
  SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_message_type_support_handle.typesupport_identifier) {
    SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SrrStatus1__rosidl_typesupport_introspection_c__SrrStatus1_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
