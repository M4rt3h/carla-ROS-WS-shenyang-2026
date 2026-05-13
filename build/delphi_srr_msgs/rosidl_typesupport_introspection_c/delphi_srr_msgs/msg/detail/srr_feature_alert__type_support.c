// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delphi_srr_msgs:msg/SrrFeatureAlert.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delphi_srr_msgs/msg/detail/srr_feature_alert__rosidl_typesupport_introspection_c.h"
#include "delphi_srr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delphi_srr_msgs/msg/detail/srr_feature_alert__functions.h"
#include "delphi_srr_msgs/msg/detail/srr_feature_alert__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delphi_srr_msgs__msg__SrrFeatureAlert__init(message_memory);
}

void SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_fini_function(void * message_memory)
{
  delphi_srr_msgs__msg__SrrFeatureAlert__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lcma_blis_ignored_track_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, lcma_blis_ignored_track_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lcma_blis_track_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, lcma_blis_track_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lcma_cvw_ttc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, lcma_cvw_ttc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cta_ttc_alert",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, cta_ttc_alert),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cta_selected_track_ttc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, cta_selected_track_ttc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cta_selected_track",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, cta_selected_track),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cta_alert",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, cta_alert),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cta_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, cta_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lcma_cvw_cipv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, lcma_cvw_cipv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lcma_cvw_alert_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, lcma_cvw_alert_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lcma_blis_alert_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, lcma_blis_alert_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lcma_active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_srr_msgs__msg__SrrFeatureAlert, lcma_active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_message_members = {
  "delphi_srr_msgs__msg",  // message namespace
  "SrrFeatureAlert",  // message name
  13,  // number of fields
  sizeof(delphi_srr_msgs__msg__SrrFeatureAlert),
  SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_message_member_array,  // message members
  SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_init_function,  // function to initialize message memory (memory has to be allocated)
  SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_message_type_support_handle = {
  0,
  &SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delphi_srr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delphi_srr_msgs, msg, SrrFeatureAlert)() {
  SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_message_type_support_handle.typesupport_identifier) {
    SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SrrFeatureAlert__rosidl_typesupport_introspection_c__SrrFeatureAlert_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
