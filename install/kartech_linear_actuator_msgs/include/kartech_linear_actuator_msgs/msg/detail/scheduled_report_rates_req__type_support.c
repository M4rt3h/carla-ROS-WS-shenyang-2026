// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kartech_linear_actuator_msgs:msg/ScheduledReportRatesReq.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kartech_linear_actuator_msgs/msg/detail/scheduled_report_rates_req__rosidl_typesupport_introspection_c.h"
#include "kartech_linear_actuator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kartech_linear_actuator_msgs/msg/detail/scheduled_report_rates_req__functions.h"
#include "kartech_linear_actuator_msgs/msg/detail/scheduled_report_rates_req__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `index_1`
// Member `index_2`
#include "kartech_linear_actuator_msgs/msg/report_index.h"
// Member `index_1`
// Member `index_2`
#include "kartech_linear_actuator_msgs/msg/detail/report_index__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__init(message_memory);
}

void ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_fini_function(void * message_memory)
{
  kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confirm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq, confirm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq, index_1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index_1_report_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq, index_1_report_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq, index_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index_2_report_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq, index_2_report_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_message_members = {
  "kartech_linear_actuator_msgs__msg",  // message namespace
  "ScheduledReportRatesReq",  // message name
  6,  // number of fields
  sizeof(kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq),
  ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_message_member_array,  // message members
  ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_init_function,  // function to initialize message memory (memory has to be allocated)
  ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_message_type_support_handle = {
  0,
  &ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kartech_linear_actuator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kartech_linear_actuator_msgs, msg, ScheduledReportRatesReq)() {
  ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kartech_linear_actuator_msgs, msg, ReportIndex)();
  ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kartech_linear_actuator_msgs, msg, ReportIndex)();
  if (!ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_message_type_support_handle.typesupport_identifier) {
    ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScheduledReportRatesReq__rosidl_typesupport_introspection_c__ScheduledReportRatesReq_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
