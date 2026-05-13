// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mobileye_560_660_msgs:msg/LkaNumOfNextLaneMarkersReported.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mobileye_560_660_msgs/msg/detail/lka_num_of_next_lane_markers_reported__rosidl_typesupport_introspection_c.h"
#include "mobileye_560_660_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mobileye_560_660_msgs/msg/detail/lka_num_of_next_lane_markers_reported__functions.h"
#include "mobileye_560_660_msgs/msg/detail/lka_num_of_next_lane_markers_reported__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__init(message_memory);
}

void LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_fini_function(void * message_memory)
{
  mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_of_next_lane_markers_reported",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported, num_of_next_lane_markers_reported),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_message_members = {
  "mobileye_560_660_msgs__msg",  // message namespace
  "LkaNumOfNextLaneMarkersReported",  // message name
  2,  // number of fields
  sizeof(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported),
  LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_message_member_array,  // message members
  LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_init_function,  // function to initialize message memory (memory has to be allocated)
  LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_message_type_support_handle = {
  0,
  &LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mobileye_560_660_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mobileye_560_660_msgs, msg, LkaNumOfNextLaneMarkersReported)() {
  LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_message_type_support_handle.typesupport_identifier) {
    LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LkaNumOfNextLaneMarkersReported__rosidl_typesupport_introspection_c__LkaNumOfNextLaneMarkersReported_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
