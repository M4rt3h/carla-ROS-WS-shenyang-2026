// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg3.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__rosidl_typesupport_introspection_c.h"
#include "delphi_mrr_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__functions.h"
#include "delphi_mrr_msgs/msg/detail/vehicle_state_msg3__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  delphi_mrr_msgs__msg__VehicleStateMsg3__init(message_memory);
}

void VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_fini_function(void * message_memory)
{
  delphi_mrr_msgs__msg__VehicleStateMsg3__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__VehicleStateMsg3, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_rate_reference_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__VehicleStateMsg3, yaw_rate_reference_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_rate_reference",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__VehicleStateMsg3, yaw_rate_reference),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_veh_long_accel_qf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__VehicleStateMsg3, can_veh_long_accel_qf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "can_veh_long_accel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs__msg__VehicleStateMsg3, can_veh_long_accel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_message_members = {
  "delphi_mrr_msgs__msg",  // message namespace
  "VehicleStateMsg3",  // message name
  5,  // number of fields
  sizeof(delphi_mrr_msgs__msg__VehicleStateMsg3),
  VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_message_member_array,  // message members
  VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_message_type_support_handle = {
  0,
  &VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_delphi_mrr_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, delphi_mrr_msgs, msg, VehicleStateMsg3)() {
  VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_message_type_support_handle.typesupport_identifier) {
    VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleStateMsg3__rosidl_typesupport_introspection_c__VehicleStateMsg3_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
