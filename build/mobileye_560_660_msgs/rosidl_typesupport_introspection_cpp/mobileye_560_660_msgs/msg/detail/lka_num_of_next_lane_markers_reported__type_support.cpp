// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mobileye_560_660_msgs:msg/LkaNumOfNextLaneMarkersReported.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mobileye_560_660_msgs/msg/detail/lka_num_of_next_lane_markers_reported__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mobileye_560_660_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LkaNumOfNextLaneMarkersReported_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported(_init);
}

void LkaNumOfNextLaneMarkersReported_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported *>(message_memory);
  typed_message->~LkaNumOfNextLaneMarkersReported();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LkaNumOfNextLaneMarkersReported_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_of_next_lane_markers_reported",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported, num_of_next_lane_markers_reported),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LkaNumOfNextLaneMarkersReported_message_members = {
  "mobileye_560_660_msgs::msg",  // message namespace
  "LkaNumOfNextLaneMarkersReported",  // message name
  2,  // number of fields
  sizeof(mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported),
  LkaNumOfNextLaneMarkersReported_message_member_array,  // message members
  LkaNumOfNextLaneMarkersReported_init_function,  // function to initialize message memory (memory has to be allocated)
  LkaNumOfNextLaneMarkersReported_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LkaNumOfNextLaneMarkersReported_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LkaNumOfNextLaneMarkersReported_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mobileye_560_660_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mobileye_560_660_msgs::msg::LkaNumOfNextLaneMarkersReported>()
{
  return &::mobileye_560_660_msgs::msg::rosidl_typesupport_introspection_cpp::LkaNumOfNextLaneMarkersReported_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mobileye_560_660_msgs, msg, LkaNumOfNextLaneMarkersReported)() {
  return &::mobileye_560_660_msgs::msg::rosidl_typesupport_introspection_cpp::LkaNumOfNextLaneMarkersReported_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
