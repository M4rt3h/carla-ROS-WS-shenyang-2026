// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from neobotix_usboard_msgs:msg/AnsWriteParaset.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "neobotix_usboard_msgs/msg/detail/ans_write_paraset__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace neobotix_usboard_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AnsWriteParaset_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) neobotix_usboard_msgs::msg::AnsWriteParaset(_init);
}

void AnsWriteParaset_fini_function(void * message_memory)
{
  auto typed_message = static_cast<neobotix_usboard_msgs::msg::AnsWriteParaset *>(message_memory);
  typed_message->~AnsWriteParaset();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AnsWriteParaset_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs::msg::AnsWriteParaset, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs::msg::AnsWriteParaset, command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "paramset_cksum_low_byte",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs::msg::AnsWriteParaset, paramset_cksum_low_byte),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "paramset_cksum_high_byte",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(neobotix_usboard_msgs::msg::AnsWriteParaset, paramset_cksum_high_byte),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AnsWriteParaset_message_members = {
  "neobotix_usboard_msgs::msg",  // message namespace
  "AnsWriteParaset",  // message name
  4,  // number of fields
  sizeof(neobotix_usboard_msgs::msg::AnsWriteParaset),
  AnsWriteParaset_message_member_array,  // message members
  AnsWriteParaset_init_function,  // function to initialize message memory (memory has to be allocated)
  AnsWriteParaset_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AnsWriteParaset_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AnsWriteParaset_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace neobotix_usboard_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<neobotix_usboard_msgs::msg::AnsWriteParaset>()
{
  return &::neobotix_usboard_msgs::msg::rosidl_typesupport_introspection_cpp::AnsWriteParaset_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, neobotix_usboard_msgs, msg, AnsWriteParaset)() {
  return &::neobotix_usboard_msgs::msg::rosidl_typesupport_introspection_cpp::AnsWriteParaset_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
