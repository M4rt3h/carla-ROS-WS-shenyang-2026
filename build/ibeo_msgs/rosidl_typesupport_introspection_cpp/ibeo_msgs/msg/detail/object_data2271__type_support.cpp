// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ibeo_msgs:msg/ObjectData2271.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ibeo_msgs/msg/detail/object_data2271__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ibeo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObjectData2271_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ibeo_msgs::msg::ObjectData2271(_init);
}

void ObjectData2271_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ibeo_msgs::msg::ObjectData2271 *>(message_memory);
  typed_message->~ObjectData2271();
}

size_t size_function__ObjectData2271__object_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ibeo_msgs::msg::Object2271> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectData2271__object_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ibeo_msgs::msg::Object2271> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectData2271__object_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ibeo_msgs::msg::Object2271> *>(untyped_member);
  return &member[index];
}

void resize_function__ObjectData2271__object_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ibeo_msgs::msg::Object2271> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectData2271_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::ObjectData2271, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ibeo_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ibeo_msgs::msg::IbeoDataHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::ObjectData2271, ibeo_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start_scan_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::ObjectData2271, start_scan_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "scan_number",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::ObjectData2271, scan_number),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "number_of_objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::ObjectData2271, number_of_objects),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "object_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ibeo_msgs::msg::Object2271>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ibeo_msgs::msg::ObjectData2271, object_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectData2271__object_list,  // size() function pointer
    get_const_function__ObjectData2271__object_list,  // get_const(index) function pointer
    get_function__ObjectData2271__object_list,  // get(index) function pointer
    resize_function__ObjectData2271__object_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectData2271_message_members = {
  "ibeo_msgs::msg",  // message namespace
  "ObjectData2271",  // message name
  6,  // number of fields
  sizeof(ibeo_msgs::msg::ObjectData2271),
  ObjectData2271_message_member_array,  // message members
  ObjectData2271_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectData2271_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectData2271_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectData2271_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ibeo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ibeo_msgs::msg::ObjectData2271>()
{
  return &::ibeo_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectData2271_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ibeo_msgs, msg, ObjectData2271)() {
  return &::ibeo_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectData2271_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
