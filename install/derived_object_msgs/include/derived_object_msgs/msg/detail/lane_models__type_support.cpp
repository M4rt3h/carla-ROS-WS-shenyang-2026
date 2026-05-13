// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from derived_object_msgs:msg/LaneModels.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "derived_object_msgs/msg/detail/lane_models__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace derived_object_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LaneModels_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) derived_object_msgs::msg::LaneModels(_init);
}

void LaneModels_fini_function(void * message_memory)
{
  auto typed_message = static_cast<derived_object_msgs::msg::LaneModels *>(message_memory);
  typed_message->~LaneModels();
}

size_t size_function__LaneModels__additional_lanes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<derived_object_msgs::msg::Lane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneModels__additional_lanes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<derived_object_msgs::msg::Lane> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneModels__additional_lanes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<derived_object_msgs::msg::Lane> *>(untyped_member);
  return &member[index];
}

void resize_function__LaneModels__additional_lanes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<derived_object_msgs::msg::Lane> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneModels_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs::msg::LaneModels, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_lane",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<derived_object_msgs::msg::Lane>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs::msg::LaneModels, left_lane),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_lane",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<derived_object_msgs::msg::Lane>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs::msg::LaneModels, right_lane),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "additional_lanes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<derived_object_msgs::msg::Lane>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(derived_object_msgs::msg::LaneModels, additional_lanes),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneModels__additional_lanes,  // size() function pointer
    get_const_function__LaneModels__additional_lanes,  // get_const(index) function pointer
    get_function__LaneModels__additional_lanes,  // get(index) function pointer
    resize_function__LaneModels__additional_lanes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneModels_message_members = {
  "derived_object_msgs::msg",  // message namespace
  "LaneModels",  // message name
  4,  // number of fields
  sizeof(derived_object_msgs::msg::LaneModels),
  LaneModels_message_member_array,  // message members
  LaneModels_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneModels_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneModels_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneModels_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace derived_object_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<derived_object_msgs::msg::LaneModels>()
{
  return &::derived_object_msgs::msg::rosidl_typesupport_introspection_cpp::LaneModels_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, derived_object_msgs, msg, LaneModels)() {
  return &::derived_object_msgs::msg::rosidl_typesupport_introspection_cpp::LaneModels_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
