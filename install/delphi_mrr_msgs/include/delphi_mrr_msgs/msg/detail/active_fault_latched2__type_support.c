// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delphi_mrr_msgs/msg/detail/active_fault_latched2__rosidl_typesupport_introspection_c.h"
#include "delphi_mrr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delphi_mrr_msgs/msg/detail/active_fault_latched2__functions.h"
#include "delphi_mrr_msgs/msg/detail/active_fault_latched2__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delphi_mrr_msgs__msg__ActiveFaultLatched2__init(message_memory);
}

void ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_fini_function(void * message_memory)
{
  delphi_mrr_msgs__msg__ActiveFaultLatched2__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__ActiveFaultLatched2, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ipma_pcan_data_range_check",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__ActiveFaultLatched2, ipma_pcan_data_range_check),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ipma_pcan_missing_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__ActiveFaultLatched2, ipma_pcan_missing_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vin_signal_compare_failure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__ActiveFaultLatched2, vin_signal_compare_failure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "module_not_configured_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__ActiveFaultLatched2, module_not_configured_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "car_cfg_not_configured_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__ActiveFaultLatched2, car_cfg_not_configured_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_message_members = {
  "delphi_mrr_msgs__msg",  // message namespace
  "ActiveFaultLatched2",  // message name
  6,  // number of fields
  sizeof(delphi_mrr_msgs__msg__ActiveFaultLatched2),
  ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_message_member_array,  // message members
  ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_init_function,  // function to initialize message memory (memory has to be allocated)
  ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_message_type_support_handle = {
  0,
  &ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delphi_mrr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delphi_mrr_msgs, msg, ActiveFaultLatched2)() {
  ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_message_type_support_handle.typesupport_identifier) {
    ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ActiveFaultLatched2__rosidl_typesupport_introspection_c__ActiveFaultLatched2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
