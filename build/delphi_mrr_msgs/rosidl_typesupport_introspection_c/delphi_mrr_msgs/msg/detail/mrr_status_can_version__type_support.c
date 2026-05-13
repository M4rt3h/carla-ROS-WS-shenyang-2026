// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delphi_mrr_msgs:msg/MrrStatusCanVersion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delphi_mrr_msgs/msg/detail/mrr_status_can_version__rosidl_typesupport_introspection_c.h"
#include "delphi_mrr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delphi_mrr_msgs/msg/detail/mrr_status_can_version__functions.h"
#include "delphi_mrr_msgs/msg/detail/mrr_status_can_version__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delphi_mrr_msgs__msg__MrrStatusCanVersion__init(message_memory);
}

void MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_fini_function(void * message_memory)
{
  delphi_mrr_msgs__msg__MrrStatusCanVersion__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusCanVersion, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_usc_section_compatibility",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusCanVersion, can_usc_section_compatibility),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_pcan_minor_mrr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusCanVersion, can_pcan_minor_mrr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_pcan_major_mrr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrStatusCanVersion, can_pcan_major_mrr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_message_members = {
  "delphi_mrr_msgs__msg",  // message namespace
  "MrrStatusCanVersion",  // message name
  4,  // number of fields
  sizeof(delphi_mrr_msgs__msg__MrrStatusCanVersion),
  MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_message_member_array,  // message members
  MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_init_function,  // function to initialize message memory (memory has to be allocated)
  MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_message_type_support_handle = {
  0,
  &MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delphi_mrr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delphi_mrr_msgs, msg, MrrStatusCanVersion)() {
  MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_message_type_support_handle.typesupport_identifier) {
    MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MrrStatusCanVersion__rosidl_typesupport_introspection_c__MrrStatusCanVersion_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
