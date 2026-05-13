// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ibeo_msgs:msg/ErrorWarning.idl
// generated code does not contain a copyright notice
#include "ibeo_msgs/msg/detail/error_warning__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ibeo_msgs/msg/detail/error_warning__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace ibeo_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ibeo_msgs::msg::IbeoDataHeader &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ibeo_msgs::msg::IbeoDataHeader &);
size_t get_serialized_size(
  const ibeo_msgs::msg::IbeoDataHeader &,
  size_t current_alignment);
size_t
max_serialized_size_IbeoDataHeader(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ibeo_msgs


namespace ibeo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_serialize(
  const ibeo_msgs::msg::ErrorWarning & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: ibeo_header
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ibeo_header,
    cdr);
  // Member: err_internal_error
  cdr << (ros_message.err_internal_error ? true : false);
  // Member: err_motor_1_fault
  cdr << (ros_message.err_motor_1_fault ? true : false);
  // Member: err_buffer_error_xmt_incomplete
  cdr << (ros_message.err_buffer_error_xmt_incomplete ? true : false);
  // Member: err_buffer_error_overflow
  cdr << (ros_message.err_buffer_error_overflow ? true : false);
  // Member: err_apd_over_temperature
  cdr << (ros_message.err_apd_over_temperature ? true : false);
  // Member: err_apd_under_temperature
  cdr << (ros_message.err_apd_under_temperature ? true : false);
  // Member: err_apd_temperature_sensor_defect
  cdr << (ros_message.err_apd_temperature_sensor_defect ? true : false);
  // Member: err_motor_2_fault
  cdr << (ros_message.err_motor_2_fault ? true : false);
  // Member: err_motor_3_fault
  cdr << (ros_message.err_motor_3_fault ? true : false);
  // Member: err_motor_4_fault
  cdr << (ros_message.err_motor_4_fault ? true : false);
  // Member: err_motor_5_fault
  cdr << (ros_message.err_motor_5_fault ? true : false);
  // Member: err_int_no_scan_data
  cdr << (ros_message.err_int_no_scan_data ? true : false);
  // Member: err_int_communication_error
  cdr << (ros_message.err_int_communication_error ? true : false);
  // Member: err_int_incorrect_scan_data
  cdr << (ros_message.err_int_incorrect_scan_data ? true : false);
  // Member: err_config_fpga_not_configurable
  cdr << (ros_message.err_config_fpga_not_configurable ? true : false);
  // Member: err_config_incorrect_config_data
  cdr << (ros_message.err_config_incorrect_config_data ? true : false);
  // Member: err_config_contains_incorrect_params
  cdr << (ros_message.err_config_contains_incorrect_params ? true : false);
  // Member: err_timeout_data_processing
  cdr << (ros_message.err_timeout_data_processing ? true : false);
  // Member: err_timeout_env_model_computation_reset
  cdr << (ros_message.err_timeout_env_model_computation_reset ? true : false);
  // Member: wrn_int_communication_error
  cdr << (ros_message.wrn_int_communication_error ? true : false);
  // Member: wrn_low_temperature
  cdr << (ros_message.wrn_low_temperature ? true : false);
  // Member: wrn_high_temperature
  cdr << (ros_message.wrn_high_temperature ? true : false);
  // Member: wrn_int_motor_1
  cdr << (ros_message.wrn_int_motor_1 ? true : false);
  // Member: wrn_sync_error
  cdr << (ros_message.wrn_sync_error ? true : false);
  // Member: wrn_laser_1_start_pulse_missing
  cdr << (ros_message.wrn_laser_1_start_pulse_missing ? true : false);
  // Member: wrn_laser_2_start_pulse_missing
  cdr << (ros_message.wrn_laser_2_start_pulse_missing ? true : false);
  // Member: wrn_can_interface_blocked
  cdr << (ros_message.wrn_can_interface_blocked ? true : false);
  // Member: wrn_eth_interface_blocked
  cdr << (ros_message.wrn_eth_interface_blocked ? true : false);
  // Member: wrn_incorrect_can_data_rcvd
  cdr << (ros_message.wrn_incorrect_can_data_rcvd ? true : false);
  // Member: wrn_int_incorrect_scan_data
  cdr << (ros_message.wrn_int_incorrect_scan_data ? true : false);
  // Member: wrn_eth_unkwn_incomplete_data
  cdr << (ros_message.wrn_eth_unkwn_incomplete_data ? true : false);
  // Member: wrn_incorrect_or_forbidden_cmd_rcvd
  cdr << (ros_message.wrn_incorrect_or_forbidden_cmd_rcvd ? true : false);
  // Member: wrn_memory_access_failure
  cdr << (ros_message.wrn_memory_access_failure ? true : false);
  // Member: wrn_int_overflow
  cdr << (ros_message.wrn_int_overflow ? true : false);
  // Member: wrn_ego_motion_data_missing
  cdr << (ros_message.wrn_ego_motion_data_missing ? true : false);
  // Member: wrn_incorrect_mounting_params
  cdr << (ros_message.wrn_incorrect_mounting_params ? true : false);
  // Member: wrn_no_obj_comp_due_to_scan_freq
  cdr << (ros_message.wrn_no_obj_comp_due_to_scan_freq ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ibeo_msgs::msg::ErrorWarning & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: ibeo_header
  ibeo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ibeo_header);

  // Member: err_internal_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_internal_error = tmp ? true : false;
  }

  // Member: err_motor_1_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_motor_1_fault = tmp ? true : false;
  }

  // Member: err_buffer_error_xmt_incomplete
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_buffer_error_xmt_incomplete = tmp ? true : false;
  }

  // Member: err_buffer_error_overflow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_buffer_error_overflow = tmp ? true : false;
  }

  // Member: err_apd_over_temperature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_apd_over_temperature = tmp ? true : false;
  }

  // Member: err_apd_under_temperature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_apd_under_temperature = tmp ? true : false;
  }

  // Member: err_apd_temperature_sensor_defect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_apd_temperature_sensor_defect = tmp ? true : false;
  }

  // Member: err_motor_2_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_motor_2_fault = tmp ? true : false;
  }

  // Member: err_motor_3_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_motor_3_fault = tmp ? true : false;
  }

  // Member: err_motor_4_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_motor_4_fault = tmp ? true : false;
  }

  // Member: err_motor_5_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_motor_5_fault = tmp ? true : false;
  }

  // Member: err_int_no_scan_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_int_no_scan_data = tmp ? true : false;
  }

  // Member: err_int_communication_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_int_communication_error = tmp ? true : false;
  }

  // Member: err_int_incorrect_scan_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_int_incorrect_scan_data = tmp ? true : false;
  }

  // Member: err_config_fpga_not_configurable
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_config_fpga_not_configurable = tmp ? true : false;
  }

  // Member: err_config_incorrect_config_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_config_incorrect_config_data = tmp ? true : false;
  }

  // Member: err_config_contains_incorrect_params
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_config_contains_incorrect_params = tmp ? true : false;
  }

  // Member: err_timeout_data_processing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_timeout_data_processing = tmp ? true : false;
  }

  // Member: err_timeout_env_model_computation_reset
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.err_timeout_env_model_computation_reset = tmp ? true : false;
  }

  // Member: wrn_int_communication_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_int_communication_error = tmp ? true : false;
  }

  // Member: wrn_low_temperature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_low_temperature = tmp ? true : false;
  }

  // Member: wrn_high_temperature
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_high_temperature = tmp ? true : false;
  }

  // Member: wrn_int_motor_1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_int_motor_1 = tmp ? true : false;
  }

  // Member: wrn_sync_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_sync_error = tmp ? true : false;
  }

  // Member: wrn_laser_1_start_pulse_missing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_laser_1_start_pulse_missing = tmp ? true : false;
  }

  // Member: wrn_laser_2_start_pulse_missing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_laser_2_start_pulse_missing = tmp ? true : false;
  }

  // Member: wrn_can_interface_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_can_interface_blocked = tmp ? true : false;
  }

  // Member: wrn_eth_interface_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_eth_interface_blocked = tmp ? true : false;
  }

  // Member: wrn_incorrect_can_data_rcvd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_incorrect_can_data_rcvd = tmp ? true : false;
  }

  // Member: wrn_int_incorrect_scan_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_int_incorrect_scan_data = tmp ? true : false;
  }

  // Member: wrn_eth_unkwn_incomplete_data
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_eth_unkwn_incomplete_data = tmp ? true : false;
  }

  // Member: wrn_incorrect_or_forbidden_cmd_rcvd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_incorrect_or_forbidden_cmd_rcvd = tmp ? true : false;
  }

  // Member: wrn_memory_access_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_memory_access_failure = tmp ? true : false;
  }

  // Member: wrn_int_overflow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_int_overflow = tmp ? true : false;
  }

  // Member: wrn_ego_motion_data_missing
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_ego_motion_data_missing = tmp ? true : false;
  }

  // Member: wrn_incorrect_mounting_params
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_incorrect_mounting_params = tmp ? true : false;
  }

  // Member: wrn_no_obj_comp_due_to_scan_freq
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.wrn_no_obj_comp_due_to_scan_freq = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
get_serialized_size(
  const ibeo_msgs::msg::ErrorWarning & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: ibeo_header

  current_alignment +=
    ibeo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ibeo_header, current_alignment);
  // Member: err_internal_error
  {
    size_t item_size = sizeof(ros_message.err_internal_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_motor_1_fault
  {
    size_t item_size = sizeof(ros_message.err_motor_1_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_buffer_error_xmt_incomplete
  {
    size_t item_size = sizeof(ros_message.err_buffer_error_xmt_incomplete);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_buffer_error_overflow
  {
    size_t item_size = sizeof(ros_message.err_buffer_error_overflow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_apd_over_temperature
  {
    size_t item_size = sizeof(ros_message.err_apd_over_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_apd_under_temperature
  {
    size_t item_size = sizeof(ros_message.err_apd_under_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_apd_temperature_sensor_defect
  {
    size_t item_size = sizeof(ros_message.err_apd_temperature_sensor_defect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_motor_2_fault
  {
    size_t item_size = sizeof(ros_message.err_motor_2_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_motor_3_fault
  {
    size_t item_size = sizeof(ros_message.err_motor_3_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_motor_4_fault
  {
    size_t item_size = sizeof(ros_message.err_motor_4_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_motor_5_fault
  {
    size_t item_size = sizeof(ros_message.err_motor_5_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_int_no_scan_data
  {
    size_t item_size = sizeof(ros_message.err_int_no_scan_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_int_communication_error
  {
    size_t item_size = sizeof(ros_message.err_int_communication_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_int_incorrect_scan_data
  {
    size_t item_size = sizeof(ros_message.err_int_incorrect_scan_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_config_fpga_not_configurable
  {
    size_t item_size = sizeof(ros_message.err_config_fpga_not_configurable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_config_incorrect_config_data
  {
    size_t item_size = sizeof(ros_message.err_config_incorrect_config_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_config_contains_incorrect_params
  {
    size_t item_size = sizeof(ros_message.err_config_contains_incorrect_params);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_timeout_data_processing
  {
    size_t item_size = sizeof(ros_message.err_timeout_data_processing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: err_timeout_env_model_computation_reset
  {
    size_t item_size = sizeof(ros_message.err_timeout_env_model_computation_reset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_int_communication_error
  {
    size_t item_size = sizeof(ros_message.wrn_int_communication_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_low_temperature
  {
    size_t item_size = sizeof(ros_message.wrn_low_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_high_temperature
  {
    size_t item_size = sizeof(ros_message.wrn_high_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_int_motor_1
  {
    size_t item_size = sizeof(ros_message.wrn_int_motor_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_sync_error
  {
    size_t item_size = sizeof(ros_message.wrn_sync_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_laser_1_start_pulse_missing
  {
    size_t item_size = sizeof(ros_message.wrn_laser_1_start_pulse_missing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_laser_2_start_pulse_missing
  {
    size_t item_size = sizeof(ros_message.wrn_laser_2_start_pulse_missing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_can_interface_blocked
  {
    size_t item_size = sizeof(ros_message.wrn_can_interface_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_eth_interface_blocked
  {
    size_t item_size = sizeof(ros_message.wrn_eth_interface_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_incorrect_can_data_rcvd
  {
    size_t item_size = sizeof(ros_message.wrn_incorrect_can_data_rcvd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_int_incorrect_scan_data
  {
    size_t item_size = sizeof(ros_message.wrn_int_incorrect_scan_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_eth_unkwn_incomplete_data
  {
    size_t item_size = sizeof(ros_message.wrn_eth_unkwn_incomplete_data);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_incorrect_or_forbidden_cmd_rcvd
  {
    size_t item_size = sizeof(ros_message.wrn_incorrect_or_forbidden_cmd_rcvd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_memory_access_failure
  {
    size_t item_size = sizeof(ros_message.wrn_memory_access_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_int_overflow
  {
    size_t item_size = sizeof(ros_message.wrn_int_overflow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_ego_motion_data_missing
  {
    size_t item_size = sizeof(ros_message.wrn_ego_motion_data_missing);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_incorrect_mounting_params
  {
    size_t item_size = sizeof(ros_message.wrn_incorrect_mounting_params);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wrn_no_obj_comp_due_to_scan_freq
  {
    size_t item_size = sizeof(ros_message.wrn_no_obj_comp_due_to_scan_freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ibeo_msgs
max_serialized_size_ErrorWarning(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: ibeo_header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ibeo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IbeoDataHeader(
        full_bounded, current_alignment);
    }
  }

  // Member: err_internal_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_motor_1_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_buffer_error_xmt_incomplete
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_buffer_error_overflow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_apd_over_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_apd_under_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_apd_temperature_sensor_defect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_motor_2_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_motor_3_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_motor_4_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_motor_5_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_int_no_scan_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_int_communication_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_int_incorrect_scan_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_config_fpga_not_configurable
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_config_incorrect_config_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_config_contains_incorrect_params
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_timeout_data_processing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: err_timeout_env_model_computation_reset
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_int_communication_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_low_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_high_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_int_motor_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_sync_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_laser_1_start_pulse_missing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_laser_2_start_pulse_missing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_can_interface_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_eth_interface_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_incorrect_can_data_rcvd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_int_incorrect_scan_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_eth_unkwn_incomplete_data
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_incorrect_or_forbidden_cmd_rcvd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_memory_access_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_int_overflow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_ego_motion_data_missing
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_incorrect_mounting_params
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wrn_no_obj_comp_due_to_scan_freq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ErrorWarning__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::ErrorWarning *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ErrorWarning__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ibeo_msgs::msg::ErrorWarning *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ErrorWarning__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ibeo_msgs::msg::ErrorWarning *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ErrorWarning__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ErrorWarning(full_bounded, 0);
}

static message_type_support_callbacks_t _ErrorWarning__callbacks = {
  "ibeo_msgs::msg",
  "ErrorWarning",
  _ErrorWarning__cdr_serialize,
  _ErrorWarning__cdr_deserialize,
  _ErrorWarning__get_serialized_size,
  _ErrorWarning__max_serialized_size
};

static rosidl_message_type_support_t _ErrorWarning__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ErrorWarning__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ibeo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ibeo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ibeo_msgs::msg::ErrorWarning>()
{
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_ErrorWarning__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ibeo_msgs, msg, ErrorWarning)() {
  return &ibeo_msgs::msg::typesupport_fastrtps_cpp::_ErrorWarning__handle;
}

#ifdef __cplusplus
}
#endif
