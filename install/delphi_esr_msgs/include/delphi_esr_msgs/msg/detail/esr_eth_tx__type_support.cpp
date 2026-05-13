// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from delphi_esr_msgs:msg/EsrEthTx.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "delphi_esr_msgs/msg/detail/esr_eth_tx__struct.hpp"
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

void EsrEthTx_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) delphi_esr_msgs::msg::EsrEthTx(_init);
}

void EsrEthTx_fini_function(void * message_memory)
{
  auto typed_message = static_cast<delphi_esr_msgs::msg::EsrEthTx *>(message_memory);
  typed_message->~EsrEthTx();
}

size_t size_function__EsrEthTx__target_report_range(const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * get_const_function__EsrEthTx__target_report_range(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 64> *>(untyped_member);
  return &member[index];
}

void * get_function__EsrEthTx__target_report_range(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 64> *>(untyped_member);
  return &member[index];
}

size_t size_function__EsrEthTx__target_report_range_rate(const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * get_const_function__EsrEthTx__target_report_range_rate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 64> *>(untyped_member);
  return &member[index];
}

void * get_function__EsrEthTx__target_report_range_rate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 64> *>(untyped_member);
  return &member[index];
}

size_t size_function__EsrEthTx__target_report_theta(const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * get_const_function__EsrEthTx__target_report_theta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 64> *>(untyped_member);
  return &member[index];
}

void * get_function__EsrEthTx__target_report_theta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 64> *>(untyped_member);
  return &member[index];
}

size_t size_function__EsrEthTx__target_report_amplitude(const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * get_const_function__EsrEthTx__target_report_amplitude(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 64> *>(untyped_member);
  return &member[index];
}

void * get_function__EsrEthTx__target_report_amplitude(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 64> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EsrEthTx_message_member_array[18] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "xcp_format_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, xcp_format_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "scan_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, scan_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tcp_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, tcp_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "xcp_scan_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, xcp_scan_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "look_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, look_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mmr_scan_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, mmr_scan_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_report_host_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, target_report_host_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_report_host_yaw_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, target_report_host_yaw_rate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "xcp_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, xcp_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "release_revision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, release_revision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "promote_revision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, promote_revision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "field_revision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, field_revision),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_report_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, target_report_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_report_range",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, target_report_range),  // bytes offset in struct
    nullptr,  // default value
    size_function__EsrEthTx__target_report_range,  // size() function pointer
    get_const_function__EsrEthTx__target_report_range,  // get_const(index) function pointer
    get_function__EsrEthTx__target_report_range,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_report_range_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, target_report_range_rate),  // bytes offset in struct
    nullptr,  // default value
    size_function__EsrEthTx__target_report_range_rate,  // size() function pointer
    get_const_function__EsrEthTx__target_report_range_rate,  // get_const(index) function pointer
    get_function__EsrEthTx__target_report_range_rate,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_report_theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, target_report_theta),  // bytes offset in struct
    nullptr,  // default value
    size_function__EsrEthTx__target_report_theta,  // size() function pointer
    get_const_function__EsrEthTx__target_report_theta,  // get_const(index) function pointer
    get_function__EsrEthTx__target_report_theta,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_report_amplitude",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(delphi_esr_msgs::msg::EsrEthTx, target_report_amplitude),  // bytes offset in struct
    nullptr,  // default value
    size_function__EsrEthTx__target_report_amplitude,  // size() function pointer
    get_const_function__EsrEthTx__target_report_amplitude,  // get_const(index) function pointer
    get_function__EsrEthTx__target_report_amplitude,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EsrEthTx_message_members = {
  "delphi_esr_msgs::msg",  // message namespace
  "EsrEthTx",  // message name
  18,  // number of fields
  sizeof(delphi_esr_msgs::msg::EsrEthTx),
  EsrEthTx_message_member_array,  // message members
  EsrEthTx_init_function,  // function to initialize message memory (memory has to be allocated)
  EsrEthTx_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EsrEthTx_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EsrEthTx_message_members,
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
get_message_type_support_handle<delphi_esr_msgs::msg::EsrEthTx>()
{
  return &::delphi_esr_msgs::msg::rosidl_typesupport_introspection_cpp::EsrEthTx_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, delphi_esr_msgs, msg, EsrEthTx)() {
  return &::delphi_esr_msgs::msg::rosidl_typesupport_introspection_cpp::EsrEthTx_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
