// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ibeo_msgs:msg/ErrorWarning.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/error_warning__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ibeo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ibeo_msgs/msg/detail/error_warning__struct.h"
#include "ibeo_msgs/msg/detail/error_warning__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ibeo_msgs/msg/detail/ibeo_data_header__functions.h"  // ibeo_header
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, IbeoDataHeader)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ibeo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _ErrorWarning__ros_msg_type = ibeo_msgs__msg__ErrorWarning;

static bool _ErrorWarning__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ErrorWarning__ros_msg_type * ros_message = static_cast<const _ErrorWarning__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: ibeo_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, IbeoDataHeader
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ibeo_header, cdr))
    {
      return false;
    }
  }

  // Field name: err_internal_error
  {
    cdr << (ros_message->err_internal_error ? true : false);
  }

  // Field name: err_motor_1_fault
  {
    cdr << (ros_message->err_motor_1_fault ? true : false);
  }

  // Field name: err_buffer_error_xmt_incomplete
  {
    cdr << (ros_message->err_buffer_error_xmt_incomplete ? true : false);
  }

  // Field name: err_buffer_error_overflow
  {
    cdr << (ros_message->err_buffer_error_overflow ? true : false);
  }

  // Field name: err_apd_over_temperature
  {
    cdr << (ros_message->err_apd_over_temperature ? true : false);
  }

  // Field name: err_apd_under_temperature
  {
    cdr << (ros_message->err_apd_under_temperature ? true : false);
  }

  // Field name: err_apd_temperature_sensor_defect
  {
    cdr << (ros_message->err_apd_temperature_sensor_defect ? true : false);
  }

  // Field name: err_motor_2_fault
  {
    cdr << (ros_message->err_motor_2_fault ? true : false);
  }

  // Field name: err_motor_3_fault
  {
    cdr << (ros_message->err_motor_3_fault ? true : false);
  }

  // Field name: err_motor_4_fault
  {
    cdr << (ros_message->err_motor_4_fault ? true : false);
  }

  // Field name: err_motor_5_fault
  {
    cdr << (ros_message->err_motor_5_fault ? true : false);
  }

  // Field name: err_int_no_scan_data
  {
    cdr << (ros_message->err_int_no_scan_data ? true : false);
  }

  // Field name: err_int_communication_error
  {
    cdr << (ros_message->err_int_communication_error ? true : false);
  }

  // Field name: err_int_incorrect_scan_data
  {
    cdr << (ros_message->err_int_incorrect_scan_data ? true : false);
  }

  // Field name: err_config_fpga_not_configurable
  {
    cdr << (ros_message->err_config_fpga_not_configurable ? true : false);
  }

  // Field name: err_config_incorrect_config_data
  {
    cdr << (ros_message->err_config_incorrect_config_data ? true : false);
  }

  // Field name: err_config_contains_incorrect_params
  {
    cdr << (ros_message->err_config_contains_incorrect_params ? true : false);
  }

  // Field name: err_timeout_data_processing
  {
    cdr << (ros_message->err_timeout_data_processing ? true : false);
  }

  // Field name: err_timeout_env_model_computation_reset
  {
    cdr << (ros_message->err_timeout_env_model_computation_reset ? true : false);
  }

  // Field name: wrn_int_communication_error
  {
    cdr << (ros_message->wrn_int_communication_error ? true : false);
  }

  // Field name: wrn_low_temperature
  {
    cdr << (ros_message->wrn_low_temperature ? true : false);
  }

  // Field name: wrn_high_temperature
  {
    cdr << (ros_message->wrn_high_temperature ? true : false);
  }

  // Field name: wrn_int_motor_1
  {
    cdr << (ros_message->wrn_int_motor_1 ? true : false);
  }

  // Field name: wrn_sync_error
  {
    cdr << (ros_message->wrn_sync_error ? true : false);
  }

  // Field name: wrn_laser_1_start_pulse_missing
  {
    cdr << (ros_message->wrn_laser_1_start_pulse_missing ? true : false);
  }

  // Field name: wrn_laser_2_start_pulse_missing
  {
    cdr << (ros_message->wrn_laser_2_start_pulse_missing ? true : false);
  }

  // Field name: wrn_can_interface_blocked
  {
    cdr << (ros_message->wrn_can_interface_blocked ? true : false);
  }

  // Field name: wrn_eth_interface_blocked
  {
    cdr << (ros_message->wrn_eth_interface_blocked ? true : false);
  }

  // Field name: wrn_incorrect_can_data_rcvd
  {
    cdr << (ros_message->wrn_incorrect_can_data_rcvd ? true : false);
  }

  // Field name: wrn_int_incorrect_scan_data
  {
    cdr << (ros_message->wrn_int_incorrect_scan_data ? true : false);
  }

  // Field name: wrn_eth_unkwn_incomplete_data
  {
    cdr << (ros_message->wrn_eth_unkwn_incomplete_data ? true : false);
  }

  // Field name: wrn_incorrect_or_forbidden_cmd_rcvd
  {
    cdr << (ros_message->wrn_incorrect_or_forbidden_cmd_rcvd ? true : false);
  }

  // Field name: wrn_memory_access_failure
  {
    cdr << (ros_message->wrn_memory_access_failure ? true : false);
  }

  // Field name: wrn_int_overflow
  {
    cdr << (ros_message->wrn_int_overflow ? true : false);
  }

  // Field name: wrn_ego_motion_data_missing
  {
    cdr << (ros_message->wrn_ego_motion_data_missing ? true : false);
  }

  // Field name: wrn_incorrect_mounting_params
  {
    cdr << (ros_message->wrn_incorrect_mounting_params ? true : false);
  }

  // Field name: wrn_no_obj_comp_due_to_scan_freq
  {
    cdr << (ros_message->wrn_no_obj_comp_due_to_scan_freq ? true : false);
  }

  return true;
}

static bool _ErrorWarning__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ErrorWarning__ros_msg_type * ros_message = static_cast<_ErrorWarning__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: ibeo_header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, IbeoDataHeader
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ibeo_header))
    {
      return false;
    }
  }

  // Field name: err_internal_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_internal_error = tmp ? true : false;
  }

  // Field name: err_motor_1_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_motor_1_fault = tmp ? true : false;
  }

  // Field name: err_buffer_error_xmt_incomplete
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_buffer_error_xmt_incomplete = tmp ? true : false;
  }

  // Field name: err_buffer_error_overflow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_buffer_error_overflow = tmp ? true : false;
  }

  // Field name: err_apd_over_temperature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_apd_over_temperature = tmp ? true : false;
  }

  // Field name: err_apd_under_temperature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_apd_under_temperature = tmp ? true : false;
  }

  // Field name: err_apd_temperature_sensor_defect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_apd_temperature_sensor_defect = tmp ? true : false;
  }

  // Field name: err_motor_2_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_motor_2_fault = tmp ? true : false;
  }

  // Field name: err_motor_3_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_motor_3_fault = tmp ? true : false;
  }

  // Field name: err_motor_4_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_motor_4_fault = tmp ? true : false;
  }

  // Field name: err_motor_5_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_motor_5_fault = tmp ? true : false;
  }

  // Field name: err_int_no_scan_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_int_no_scan_data = tmp ? true : false;
  }

  // Field name: err_int_communication_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_int_communication_error = tmp ? true : false;
  }

  // Field name: err_int_incorrect_scan_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_int_incorrect_scan_data = tmp ? true : false;
  }

  // Field name: err_config_fpga_not_configurable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_config_fpga_not_configurable = tmp ? true : false;
  }

  // Field name: err_config_incorrect_config_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_config_incorrect_config_data = tmp ? true : false;
  }

  // Field name: err_config_contains_incorrect_params
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_config_contains_incorrect_params = tmp ? true : false;
  }

  // Field name: err_timeout_data_processing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_timeout_data_processing = tmp ? true : false;
  }

  // Field name: err_timeout_env_model_computation_reset
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->err_timeout_env_model_computation_reset = tmp ? true : false;
  }

  // Field name: wrn_int_communication_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_int_communication_error = tmp ? true : false;
  }

  // Field name: wrn_low_temperature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_low_temperature = tmp ? true : false;
  }

  // Field name: wrn_high_temperature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_high_temperature = tmp ? true : false;
  }

  // Field name: wrn_int_motor_1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_int_motor_1 = tmp ? true : false;
  }

  // Field name: wrn_sync_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_sync_error = tmp ? true : false;
  }

  // Field name: wrn_laser_1_start_pulse_missing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_laser_1_start_pulse_missing = tmp ? true : false;
  }

  // Field name: wrn_laser_2_start_pulse_missing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_laser_2_start_pulse_missing = tmp ? true : false;
  }

  // Field name: wrn_can_interface_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_can_interface_blocked = tmp ? true : false;
  }

  // Field name: wrn_eth_interface_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_eth_interface_blocked = tmp ? true : false;
  }

  // Field name: wrn_incorrect_can_data_rcvd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_incorrect_can_data_rcvd = tmp ? true : false;
  }

  // Field name: wrn_int_incorrect_scan_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_int_incorrect_scan_data = tmp ? true : false;
  }

  // Field name: wrn_eth_unkwn_incomplete_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_eth_unkwn_incomplete_data = tmp ? true : false;
  }

  // Field name: wrn_incorrect_or_forbidden_cmd_rcvd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_incorrect_or_forbidden_cmd_rcvd = tmp ? true : false;
  }

  // Field name: wrn_memory_access_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_memory_access_failure = tmp ? true : false;
  }

  // Field name: wrn_int_overflow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_int_overflow = tmp ? true : false;
  }

  // Field name: wrn_ego_motion_data_missing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_ego_motion_data_missing = tmp ? true : false;
  }

  // Field name: wrn_incorrect_mounting_params
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_incorrect_mounting_params = tmp ? true : false;
  }

  // Field name: wrn_no_obj_comp_due_to_scan_freq
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->wrn_no_obj_comp_due_to_scan_freq = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t get_serialized_size_ibeo_msgs__msg__ErrorWarning(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ErrorWarning__ros_msg_type * ros_message = static_cast<const _ErrorWarning__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name ibeo_header

  current_alignment += get_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
    &(ros_message->ibeo_header), current_alignment);
  // field.name err_internal_error
  {
    size_t item_size = sizeof(ros_message->err_internal_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_motor_1_fault
  {
    size_t item_size = sizeof(ros_message->err_motor_1_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_buffer_error_xmt_incomplete
  {
    size_t item_size = sizeof(ros_message->err_buffer_error_xmt_incomplete);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_buffer_error_overflow
  {
    size_t item_size = sizeof(ros_message->err_buffer_error_overflow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_apd_over_temperature
  {
    size_t item_size = sizeof(ros_message->err_apd_over_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_apd_under_temperature
  {
    size_t item_size = sizeof(ros_message->err_apd_under_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_apd_temperature_sensor_defect
  {
    size_t item_size = sizeof(ros_message->err_apd_temperature_sensor_defect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_motor_2_fault
  {
    size_t item_size = sizeof(ros_message->err_motor_2_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_motor_3_fault
  {
    size_t item_size = sizeof(ros_message->err_motor_3_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_motor_4_fault
  {
    size_t item_size = sizeof(ros_message->err_motor_4_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_motor_5_fault
  {
    size_t item_size = sizeof(ros_message->err_motor_5_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_int_no_scan_data
  {
    size_t item_size = sizeof(ros_message->err_int_no_scan_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_int_communication_error
  {
    size_t item_size = sizeof(ros_message->err_int_communication_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_int_incorrect_scan_data
  {
    size_t item_size = sizeof(ros_message->err_int_incorrect_scan_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_config_fpga_not_configurable
  {
    size_t item_size = sizeof(ros_message->err_config_fpga_not_configurable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_config_incorrect_config_data
  {
    size_t item_size = sizeof(ros_message->err_config_incorrect_config_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_config_contains_incorrect_params
  {
    size_t item_size = sizeof(ros_message->err_config_contains_incorrect_params);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_timeout_data_processing
  {
    size_t item_size = sizeof(ros_message->err_timeout_data_processing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name err_timeout_env_model_computation_reset
  {
    size_t item_size = sizeof(ros_message->err_timeout_env_model_computation_reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_int_communication_error
  {
    size_t item_size = sizeof(ros_message->wrn_int_communication_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_low_temperature
  {
    size_t item_size = sizeof(ros_message->wrn_low_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_high_temperature
  {
    size_t item_size = sizeof(ros_message->wrn_high_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_int_motor_1
  {
    size_t item_size = sizeof(ros_message->wrn_int_motor_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_sync_error
  {
    size_t item_size = sizeof(ros_message->wrn_sync_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_laser_1_start_pulse_missing
  {
    size_t item_size = sizeof(ros_message->wrn_laser_1_start_pulse_missing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_laser_2_start_pulse_missing
  {
    size_t item_size = sizeof(ros_message->wrn_laser_2_start_pulse_missing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_can_interface_blocked
  {
    size_t item_size = sizeof(ros_message->wrn_can_interface_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_eth_interface_blocked
  {
    size_t item_size = sizeof(ros_message->wrn_eth_interface_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_incorrect_can_data_rcvd
  {
    size_t item_size = sizeof(ros_message->wrn_incorrect_can_data_rcvd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_int_incorrect_scan_data
  {
    size_t item_size = sizeof(ros_message->wrn_int_incorrect_scan_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_eth_unkwn_incomplete_data
  {
    size_t item_size = sizeof(ros_message->wrn_eth_unkwn_incomplete_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_incorrect_or_forbidden_cmd_rcvd
  {
    size_t item_size = sizeof(ros_message->wrn_incorrect_or_forbidden_cmd_rcvd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_memory_access_failure
  {
    size_t item_size = sizeof(ros_message->wrn_memory_access_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_int_overflow
  {
    size_t item_size = sizeof(ros_message->wrn_int_overflow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_ego_motion_data_missing
  {
    size_t item_size = sizeof(ros_message->wrn_ego_motion_data_missing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_incorrect_mounting_params
  {
    size_t item_size = sizeof(ros_message->wrn_incorrect_mounting_params);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wrn_no_obj_comp_due_to_scan_freq
  {
    size_t item_size = sizeof(ros_message->wrn_no_obj_comp_due_to_scan_freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ErrorWarning__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ibeo_msgs__msg__ErrorWarning(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ibeo_msgs
size_t max_serialized_size_ibeo_msgs__msg__ErrorWarning(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: ibeo_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_ibeo_msgs__msg__IbeoDataHeader(
        full_bounded, current_alignment);
    }
  }
  // member: err_internal_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_motor_1_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_buffer_error_xmt_incomplete
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_buffer_error_overflow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_apd_over_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_apd_under_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_apd_temperature_sensor_defect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_motor_2_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_motor_3_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_motor_4_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_motor_5_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_int_no_scan_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_int_communication_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_int_incorrect_scan_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_config_fpga_not_configurable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_config_incorrect_config_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_config_contains_incorrect_params
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_timeout_data_processing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: err_timeout_env_model_computation_reset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_int_communication_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_low_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_high_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_int_motor_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_sync_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_laser_1_start_pulse_missing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_laser_2_start_pulse_missing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_can_interface_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_eth_interface_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_incorrect_can_data_rcvd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_int_incorrect_scan_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_eth_unkwn_incomplete_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_incorrect_or_forbidden_cmd_rcvd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_memory_access_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_int_overflow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_ego_motion_data_missing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_incorrect_mounting_params
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wrn_no_obj_comp_due_to_scan_freq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ErrorWarning__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ibeo_msgs__msg__ErrorWarning(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ErrorWarning = {
  "ibeo_msgs::msg",
  "ErrorWarning",
  _ErrorWarning__cdr_serialize,
  _ErrorWarning__cdr_deserialize,
  _ErrorWarning__get_serialized_size,
  _ErrorWarning__max_serialized_size
};

static rosidl_message_type_support_t _ErrorWarning__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ErrorWarning,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ibeo_msgs, msg, ErrorWarning)() {
  return &_ErrorWarning__type_support;
}

#if defined(__cplusplus)
}
#endif
