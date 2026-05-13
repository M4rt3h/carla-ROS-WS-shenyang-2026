// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerTrack.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__rosidl_typesupport_introspection_c.h"
#include "delphi_esr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__functions.h"
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__init(message_memory);
}

void EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_fini_function(void * message_memory)
{
  delphi_esr_msgs__msg__EsrTrackMotionPowerTrack__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_message_member_array[5] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movable_fast",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack, movable_fast),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movable_slow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack, movable_slow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moving",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack, moving),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack, power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_message_members = {
  "delphi_esr_msgs__msg",  // message namespace
  "EsrTrackMotionPowerTrack",  // message name
  5,  // number of fields
  sizeof(delphi_esr_msgs__msg__EsrTrackMotionPowerTrack),
  EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_message_member_array,  // message members
  EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_init_function,  // function to initialize message memory (memory has to be allocated)
  EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_message_type_support_handle = {
  0,
  &EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delphi_esr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delphi_esr_msgs, msg, EsrTrackMotionPowerTrack)() {
  if (!EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_message_type_support_handle.typesupport_identifier) {
    EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &EsrTrackMotionPowerTrack__rosidl_typesupport_introspection_c__EsrTrackMotionPowerTrack_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
