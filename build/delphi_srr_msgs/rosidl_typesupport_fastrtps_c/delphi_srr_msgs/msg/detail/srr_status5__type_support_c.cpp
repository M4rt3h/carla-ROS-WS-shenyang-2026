// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_srr_msgs:msg/SrrStatus5.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_status5__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_srr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_srr_msgs/msg/detail/srr_status5__struct.h"
#include "delphi_srr_msgs/msg/detail/srr_status5__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_srr_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_srr_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_delphi_srr_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _SrrStatus5__ros_msg_type = delphi_srr_msgs__msg__SrrStatus5;

static bool _SrrStatus5__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SrrStatus5__ros_msg_type * ros_message = static_cast<const _SrrStatus5__ros_msg_type *>(untyped_ros_message);
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

  // Field name: disable_auto_align
  {
    cdr << (ros_message->disable_auto_align ? true : false);
  }

  // Field name: can_tx_yaw_rate_ref_qf
  {
    cdr << ros_message->can_tx_yaw_rate_ref_qf;
  }

  // Field name: can_tx_yaw_rate_raw_qf
  {
    cdr << ros_message->can_tx_yaw_rate_raw_qf;
  }

  // Field name: can_tx_yaw_rate_reference
  {
    cdr << ros_message->can_tx_yaw_rate_reference;
  }

  // Field name: can_tx_yaw_rate_raw
  {
    cdr << ros_message->can_tx_yaw_rate_raw;
  }

  // Field name: can_tx_system_status
  {
    cdr << ros_message->can_tx_system_status;
  }

  // Field name: can_tx_outside_temperature
  {
    cdr << ros_message->can_tx_outside_temperature;
  }

  // Field name: can_blockage_mnr_blocked
  {
    cdr << (ros_message->can_blockage_mnr_blocked ? true : false);
  }

  // Field name: can_blockage_bb_blocked
  {
    cdr << (ros_message->can_blockage_bb_blocked ? true : false);
  }

  // Field name: can_blockage_radar_blocked
  {
    cdr << (ros_message->can_blockage_radar_blocked ? true : false);
  }

  // Field name: can_td_blocked
  {
    cdr << (ros_message->can_td_blocked ? true : false);
  }

  // Field name: radar_tx_power_error
  {
    cdr << (ros_message->radar_tx_power_error ? true : false);
  }

  // Field name: radar_lo_power_error
  {
    cdr << (ros_message->radar_lo_power_error ? true : false);
  }

  // Field name: radar_data_sync_error
  {
    cdr << (ros_message->radar_data_sync_error ? true : false);
  }

  // Field name: linearizer_spi_transfer_error
  {
    cdr << (ros_message->linearizer_spi_transfer_error ? true : false);
  }

  // Field name: saturated_tuning_freq_error
  {
    cdr << (ros_message->saturated_tuning_freq_error ? true : false);
  }

  // Field name: rtn_spi_transfer_error
  {
    cdr << (ros_message->rtn_spi_transfer_error ? true : false);
  }

  // Field name: rrn_spi_transfer_error
  {
    cdr << (ros_message->rrn_spi_transfer_error ? true : false);
  }

  // Field name: video_port_capture_error
  {
    cdr << (ros_message->video_port_capture_error ? true : false);
  }

  // Field name: vertical_misalignment_error
  {
    cdr << (ros_message->vertical_misalignment_error ? true : false);
  }

  // Field name: tx_temperature_fault
  {
    cdr << (ros_message->tx_temperature_fault ? true : false);
  }

  // Field name: transmitter_id_error
  {
    cdr << (ros_message->transmitter_id_error ? true : false);
  }

  // Field name: dsp_unit_cal_checksum_error
  {
    cdr << (ros_message->dsp_unit_cal_checksum_error ? true : false);
  }

  // Field name: dsp_unit_cal_block_chcksm_error
  {
    cdr << (ros_message->dsp_unit_cal_block_chcksm_error ? true : false);
  }

  // Field name: dsp_tuning_sensitivity_error
  {
    cdr << (ros_message->dsp_tuning_sensitivity_error ? true : false);
  }

  // Field name: dsp_loop_overrun_error
  {
    cdr << (ros_message->dsp_loop_overrun_error ? true : false);
  }

  // Field name: adc_spi_transfer_error
  {
    cdr << (ros_message->adc_spi_transfer_error ? true : false);
  }

  return true;
}

static bool _SrrStatus5__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SrrStatus5__ros_msg_type * ros_message = static_cast<_SrrStatus5__ros_msg_type *>(untyped_ros_message);
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

  // Field name: disable_auto_align
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->disable_auto_align = tmp ? true : false;
  }

  // Field name: can_tx_yaw_rate_ref_qf
  {
    cdr >> ros_message->can_tx_yaw_rate_ref_qf;
  }

  // Field name: can_tx_yaw_rate_raw_qf
  {
    cdr >> ros_message->can_tx_yaw_rate_raw_qf;
  }

  // Field name: can_tx_yaw_rate_reference
  {
    cdr >> ros_message->can_tx_yaw_rate_reference;
  }

  // Field name: can_tx_yaw_rate_raw
  {
    cdr >> ros_message->can_tx_yaw_rate_raw;
  }

  // Field name: can_tx_system_status
  {
    cdr >> ros_message->can_tx_system_status;
  }

  // Field name: can_tx_outside_temperature
  {
    cdr >> ros_message->can_tx_outside_temperature;
  }

  // Field name: can_blockage_mnr_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_blockage_mnr_blocked = tmp ? true : false;
  }

  // Field name: can_blockage_bb_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_blockage_bb_blocked = tmp ? true : false;
  }

  // Field name: can_blockage_radar_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_blockage_radar_blocked = tmp ? true : false;
  }

  // Field name: can_td_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_td_blocked = tmp ? true : false;
  }

  // Field name: radar_tx_power_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->radar_tx_power_error = tmp ? true : false;
  }

  // Field name: radar_lo_power_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->radar_lo_power_error = tmp ? true : false;
  }

  // Field name: radar_data_sync_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->radar_data_sync_error = tmp ? true : false;
  }

  // Field name: linearizer_spi_transfer_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->linearizer_spi_transfer_error = tmp ? true : false;
  }

  // Field name: saturated_tuning_freq_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->saturated_tuning_freq_error = tmp ? true : false;
  }

  // Field name: rtn_spi_transfer_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rtn_spi_transfer_error = tmp ? true : false;
  }

  // Field name: rrn_spi_transfer_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rrn_spi_transfer_error = tmp ? true : false;
  }

  // Field name: video_port_capture_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->video_port_capture_error = tmp ? true : false;
  }

  // Field name: vertical_misalignment_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vertical_misalignment_error = tmp ? true : false;
  }

  // Field name: tx_temperature_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->tx_temperature_fault = tmp ? true : false;
  }

  // Field name: transmitter_id_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->transmitter_id_error = tmp ? true : false;
  }

  // Field name: dsp_unit_cal_checksum_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_unit_cal_checksum_error = tmp ? true : false;
  }

  // Field name: dsp_unit_cal_block_chcksm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_unit_cal_block_chcksm_error = tmp ? true : false;
  }

  // Field name: dsp_tuning_sensitivity_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_tuning_sensitivity_error = tmp ? true : false;
  }

  // Field name: dsp_loop_overrun_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_loop_overrun_error = tmp ? true : false;
  }

  // Field name: adc_spi_transfer_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->adc_spi_transfer_error = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_srr_msgs
size_t get_serialized_size_delphi_srr_msgs__msg__SrrStatus5(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SrrStatus5__ros_msg_type * ros_message = static_cast<const _SrrStatus5__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name disable_auto_align
  {
    size_t item_size = sizeof(ros_message->disable_auto_align);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_yaw_rate_ref_qf
  {
    size_t item_size = sizeof(ros_message->can_tx_yaw_rate_ref_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_yaw_rate_raw_qf
  {
    size_t item_size = sizeof(ros_message->can_tx_yaw_rate_raw_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_yaw_rate_reference
  {
    size_t item_size = sizeof(ros_message->can_tx_yaw_rate_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_yaw_rate_raw
  {
    size_t item_size = sizeof(ros_message->can_tx_yaw_rate_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_system_status
  {
    size_t item_size = sizeof(ros_message->can_tx_system_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_tx_outside_temperature
  {
    size_t item_size = sizeof(ros_message->can_tx_outside_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_blockage_mnr_blocked
  {
    size_t item_size = sizeof(ros_message->can_blockage_mnr_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_blockage_bb_blocked
  {
    size_t item_size = sizeof(ros_message->can_blockage_bb_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_blockage_radar_blocked
  {
    size_t item_size = sizeof(ros_message->can_blockage_radar_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_td_blocked
  {
    size_t item_size = sizeof(ros_message->can_td_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_tx_power_error
  {
    size_t item_size = sizeof(ros_message->radar_tx_power_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_lo_power_error
  {
    size_t item_size = sizeof(ros_message->radar_lo_power_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name radar_data_sync_error
  {
    size_t item_size = sizeof(ros_message->radar_data_sync_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name linearizer_spi_transfer_error
  {
    size_t item_size = sizeof(ros_message->linearizer_spi_transfer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name saturated_tuning_freq_error
  {
    size_t item_size = sizeof(ros_message->saturated_tuning_freq_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtn_spi_transfer_error
  {
    size_t item_size = sizeof(ros_message->rtn_spi_transfer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rrn_spi_transfer_error
  {
    size_t item_size = sizeof(ros_message->rrn_spi_transfer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name video_port_capture_error
  {
    size_t item_size = sizeof(ros_message->video_port_capture_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_misalignment_error
  {
    size_t item_size = sizeof(ros_message->vertical_misalignment_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tx_temperature_fault
  {
    size_t item_size = sizeof(ros_message->tx_temperature_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transmitter_id_error
  {
    size_t item_size = sizeof(ros_message->transmitter_id_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_unit_cal_checksum_error
  {
    size_t item_size = sizeof(ros_message->dsp_unit_cal_checksum_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_unit_cal_block_chcksm_error
  {
    size_t item_size = sizeof(ros_message->dsp_unit_cal_block_chcksm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_tuning_sensitivity_error
  {
    size_t item_size = sizeof(ros_message->dsp_tuning_sensitivity_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_loop_overrun_error
  {
    size_t item_size = sizeof(ros_message->dsp_loop_overrun_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adc_spi_transfer_error
  {
    size_t item_size = sizeof(ros_message->adc_spi_transfer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SrrStatus5__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_srr_msgs__msg__SrrStatus5(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_srr_msgs
size_t max_serialized_size_delphi_srr_msgs__msg__SrrStatus5(
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
  // member: disable_auto_align
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx_yaw_rate_ref_qf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx_yaw_rate_raw_qf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx_yaw_rate_reference
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: can_tx_yaw_rate_raw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: can_tx_system_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_tx_outside_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: can_blockage_mnr_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_blockage_bb_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_blockage_radar_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_td_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_tx_power_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_lo_power_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: radar_data_sync_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: linearizer_spi_transfer_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: saturated_tuning_freq_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rtn_spi_transfer_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rrn_spi_transfer_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: video_port_capture_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vertical_misalignment_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tx_temperature_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: transmitter_id_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_unit_cal_checksum_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_unit_cal_block_chcksm_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_tuning_sensitivity_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_loop_overrun_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: adc_spi_transfer_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SrrStatus5__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_srr_msgs__msg__SrrStatus5(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SrrStatus5 = {
  "delphi_srr_msgs::msg",
  "SrrStatus5",
  _SrrStatus5__cdr_serialize,
  _SrrStatus5__cdr_deserialize,
  _SrrStatus5__get_serialized_size,
  _SrrStatus5__max_serialized_size
};

static rosidl_message_type_support_t _SrrStatus5__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SrrStatus5,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_srr_msgs, msg, SrrStatus5)() {
  return &_SrrStatus5__type_support;
}

#if defined(__cplusplus)
}
#endif
