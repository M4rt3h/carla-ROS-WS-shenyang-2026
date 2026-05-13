// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerTrack.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_track__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace delphi_esr_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EsrTrackMotionPowerTrack_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) delphi_esr_msgs::msg::EsrTrackMotionPowerTrack(_init);
}

void EsrTrackMotionPowerTrack_fini_function(void * message_memory)
{
  auto typed_message = static_cast<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack *>(message_memory);
  typed_message->~EsrTrackMotionPowerTrack();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EsrTrackMotionPowerTrack_message_member_array[5] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrTrackMotionPowerTrack, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "movable_fast",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrTrackMotionPowerTrack, movable_fast),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "movable_slow",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrTrackMotionPowerTrack, movable_slow),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "moving",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrTrackMotionPowerTrack, moving),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "power",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrTrackMotionPowerTrack, power),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EsrTrackMotionPowerTrack_message_members = {
  "delphi_esr_msgs::msg",  // message namespace
  "EsrTrackMotionPowerTrack",  // message name
  5,  // number of fields
  sizeof(delphi_esr_msgs::msg::EsrTrackMotionPowerTrack),
  EsrTrackMotionPowerTrack_message_member_array,  // message members
  EsrTrackMotionPowerTrack_init_function,  // function to initialize message memory (memory has to be allocated)
  EsrTrackMotionPowerTrack_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EsrTrackMotionPowerTrack_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EsrTrackMotionPowerTrack_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace delphi_esr_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>()
{
  return &::delphi_esr_msgs::msg::rosidl_typesupport_introspection_cpp::EsrTrackMotionPowerTrack_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delphi_esr_msgs, msg, EsrTrackMotionPowerTrack)() {
  return &::delphi_esr_msgs::msg::rosidl_typesupport_introspection_cpp::EsrTrackMotionPowerTrack_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
