// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delphi_esr_msgs:msg/EsrStatus3.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delphi_esr_msgs/msg/detail/esr_status3__rosidl_typesupport_introspection_c.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delphi_esr_msgs/msg/detail/esr_status3__functions.h"
#include "delphi_esr_msgs/msg/detail/esr_status3__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `canmsg`
// Member `sw_version_host`
// Member `serial_num`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delphi_esr_msgs__msg__EsrStatus3__init(message_memory);
}

void EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_fini_function(void * message_memory)
{
  delphi_esr_msgs__msg__EsrStatus3__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrStatus3, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "canmsg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrStatus3, canmsg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interface_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrStatus3, interface_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hw_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrStatus3, hw_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sw_version_host",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrStatus3, sw_version_host),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "serial_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrStatus3, serial_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sw_version_pld",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrStatus3, sw_version_pld),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_message_members = {
  "delphi_esr_msgs__msg",  // message namespace
  "EsrStatus3",  // message name
  7,  // number of fields
  sizeof(delphi_esr_msgs__msg__EsrStatus3),
  EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_message_member_array,  // message members
  EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_init_function,  // function to initialize message memory (memory has to be allocated)
  EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_message_type_support_handle = {
  0,
  &EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delphi_esr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delphi_esr_msgs, msg, EsrStatus3)() {
  EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_message_type_support_handle.typesupport_identifier) {
    EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EsrStatus3__rosidl_typesupport_introspection_c__EsrStatus3_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
