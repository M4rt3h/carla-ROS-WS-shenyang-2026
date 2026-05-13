// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgNR.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_nr__rosidl_typesupport_introspection_c.h"
#include "delphi_mrr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_nr__functions.h"
#include "delphi_mrr_msgs/msg/detail/mrr_control_msg_nr__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delphi_mrr_msgs__msg__MrrControlMsgNR__init(message_memory);
}

void MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_fini_function(void * message_memory)
{
  delphi_mrr_msgs__msg__MrrControlMsgNR__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrControlMsgNR, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_stop_frequency_nrml",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrControlMsgNR, can_stop_frequency_nrml),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_prp_factor_nrml",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrControlMsgNR, can_prp_factor_nrml),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_desired_sweep_bw_nrml",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrControlMsgNR, can_desired_sweep_bw_nrml),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_radiation_ctrl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrControlMsgNR, can_radiation_ctrl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_stop_frequency_nrll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrControlMsgNR, can_stop_frequency_nrll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_prp_factor_nrll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrControlMsgNR, can_prp_factor_nrll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_desired_sweep_bw_nrll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__MrrControlMsgNR, can_desired_sweep_bw_nrll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_message_members = {
  "delphi_mrr_msgs__msg",  // message namespace
  "MrrControlMsgNR",  // message name
  8,  // number of fields
  sizeof(delphi_mrr_msgs__msg__MrrControlMsgNR),
  MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_message_member_array,  // message members
  MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_init_function,  // function to initialize message memory (memory has to be allocated)
  MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_message_type_support_handle = {
  0,
  &MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delphi_mrr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delphi_mrr_msgs, msg, MrrControlMsgNR)() {
  MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_message_type_support_handle.typesupport_identifier) {
    MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MrrControlMsgNR__rosidl_typesupport_introspection_c__MrrControlMsgNR_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
