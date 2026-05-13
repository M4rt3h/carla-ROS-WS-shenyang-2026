// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from delphi_esr_msgs:msg/EsrTrackMotionPowerGroup.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "delphi_esr_msgs/msg/detail/esr_track_motion_power_group__struct.hpp"
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

void EsrTrackMotionPowerGroup_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) delphi_esr_msgs::msg::EsrTrackMotionPowerGroup(_init);
}

void EsrTrackMotionPowerGroup_fini_function(void * message_memory)
{
  auto typed_message = static_cast<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup *>(message_memory);
  typed_message->~EsrTrackMotionPowerGroup();
}

size_t size_function__EsrTrackMotionPowerGroup__tracks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EsrTrackMotionPowerGroup__tracks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack> *>(untyped_member);
  return &member[index];
}

void * get_function__EsrTrackMotionPowerGroup__tracks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack> *>(untyped_member);
  return &member[index];
}

void resize_function__EsrTrackMotionPowerGroup__tracks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EsrTrackMotionPowerGroup_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrTrackMotionPowerGroup, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "canmsg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrTrackMotionPowerGroup, canmsg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rolling_count_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrTrackMotionPowerGroup, rolling_count_2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_id_group",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrTrackMotionPowerGroup, can_id_group),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tracks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<delphi_esr_msgs::msg::EsrTrackMotionPowerTrack>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrTrackMotionPowerGroup, tracks),  // bytes offset in struct
    nullptr,  // default value
    size_function__EsrTrackMotionPowerGroup__tracks,  // size() function pointer
    get_const_function__EsrTrackMotionPowerGroup__tracks,  // get_const(index) function pointer
    get_function__EsrTrackMotionPowerGroup__tracks,  // get(index) function pointer
    resize_function__EsrTrackMotionPowerGroup__tracks  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EsrTrackMotionPowerGroup_message_members = {
  "delphi_esr_msgs::msg",  // message namespace
  "EsrTrackMotionPowerGroup",  // message name
  5,  // number of fields
  sizeof(delphi_esr_msgs::msg::EsrTrackMotionPowerGroup),
  EsrTrackMotionPowerGroup_message_member_array,  // message members
  EsrTrackMotionPowerGroup_init_function,  // function to initialize message memory (memory has to be allocated)
  EsrTrackMotionPowerGroup_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EsrTrackMotionPowerGroup_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EsrTrackMotionPowerGroup_message_members,
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
get_message_type_support_handle<delphi_esr_msgs::msg::EsrTrackMotionPowerGroup>()
{
  return &::delphi_esr_msgs::msg::rosidl_typesupport_introspection_cpp::EsrTrackMotionPowerGroup_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delphi_esr_msgs, msg, EsrTrackMotionPowerGroup)() {
  return &::delphi_esr_msgs::msg::rosidl_typesupport_introspection_cpp::EsrTrackMotionPowerGroup_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
