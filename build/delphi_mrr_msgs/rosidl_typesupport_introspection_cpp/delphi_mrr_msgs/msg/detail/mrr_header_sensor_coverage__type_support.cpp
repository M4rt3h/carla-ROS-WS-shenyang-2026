// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderSensorCoverage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "delphi_mrr_msgs/msg/detail/mrr_header_sensor_coverage__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace delphi_mrr_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MrrHeaderSensorCoverage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) delphi_mrr_msgs::msg::MrrHeaderSensorCoverage(_init);
}

void MrrHeaderSensorCoverage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage *>(message_memory);
  typed_message->~MrrHeaderSensorCoverage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MrrHeaderSensorCoverage_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderSensorCoverage, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_sensor_fov_hor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderSensorCoverage, can_sensor_fov_hor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_doppler_coverage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderSensorCoverage, can_doppler_coverage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "can_range_coverage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_mrr_msgs::msg::MrrHeaderSensorCoverage, can_range_coverage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MrrHeaderSensorCoverage_message_members = {
  "delphi_mrr_msgs::msg",  // message namespace
  "MrrHeaderSensorCoverage",  // message name
  4,  // number of fields
  sizeof(delphi_mrr_msgs::msg::MrrHeaderSensorCoverage),
  MrrHeaderSensorCoverage_message_member_array,  // message members
  MrrHeaderSensorCoverage_init_function,  // function to initialize message memory (memory has to be allocated)
  MrrHeaderSensorCoverage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MrrHeaderSensorCoverage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MrrHeaderSensorCoverage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace delphi_mrr_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<delphi_mrr_msgs::msg::MrrHeaderSensorCoverage>()
{
  return &::delphi_mrr_msgs::msg::rosidl_typesupport_introspection_cpp::MrrHeaderSensorCoverage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delphi_mrr_msgs, msg, MrrHeaderSensorCoverage)() {
  return &::delphi_mrr_msgs::msg::rosidl_typesupport_introspection_cpp::MrrHeaderSensorCoverage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
