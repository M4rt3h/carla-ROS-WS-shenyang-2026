// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_srr_msgs:msg/SrrStatus5.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_status5__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_srr_msgs/msg/detail/srr_status5__struct.hpp"

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


namespace delphi_srr_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
cdr_serialize(
  const delphi_srr_msgs::msg::SrrStatus5 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: disable_auto_align
  cdr << (ros_message.disable_auto_align ? true : false);
  // Member: can_tx_yaw_rate_ref_qf
  cdr << ros_message.can_tx_yaw_rate_ref_qf;
  // Member: can_tx_yaw_rate_raw_qf
  cdr << ros_message.can_tx_yaw_rate_raw_qf;
  // Member: can_tx_yaw_rate_reference
  cdr << ros_message.can_tx_yaw_rate_reference;
  // Member: can_tx_yaw_rate_raw
  cdr << ros_message.can_tx_yaw_rate_raw;
  // Member: can_tx_system_status
  cdr << ros_message.can_tx_system_status;
  // Member: can_tx_outside_temperature
  cdr << ros_message.can_tx_outside_temperature;
  // Member: can_blockage_mnr_blocked
  cdr << (ros_message.can_blockage_mnr_blocked ? true : false);
  // Member: can_blockage_bb_blocked
  cdr << (ros_message.can_blockage_bb_blocked ? true : false);
  // Member: can_blockage_radar_blocked
  cdr << (ros_message.can_blockage_radar_blocked ? true : false);
  // Member: can_td_blocked
  cdr << (ros_message.can_td_blocked ? true : false);
  // Member: radar_tx_power_error
  cdr << (ros_message.radar_tx_power_error ? true : false);
  // Member: radar_lo_power_error
  cdr << (ros_message.radar_lo_power_error ? true : false);
  // Member: radar_data_sync_error
  cdr << (ros_message.radar_data_sync_error ? true : false);
  // Member: linearizer_spi_transfer_error
  cdr << (ros_message.linearizer_spi_transfer_error ? true : false);
  // Member: saturated_tuning_freq_error
  cdr << (ros_message.saturated_tuning_freq_error ? true : false);
  // Member: rtn_spi_transfer_error
  cdr << (ros_message.rtn_spi_transfer_error ? true : false);
  // Member: rrn_spi_transfer_error
  cdr << (ros_message.rrn_spi_transfer_error ? true : false);
  // Member: video_port_capture_error
  cdr << (ros_message.video_port_capture_error ? true : false);
  // Member: vertical_misalignment_error
  cdr << (ros_message.vertical_misalignment_error ? true : false);
  // Member: tx_temperature_fault
  cdr << (ros_message.tx_temperature_fault ? true : false);
  // Member: transmitter_id_error
  cdr << (ros_message.transmitter_id_error ? true : false);
  // Member: dsp_unit_cal_checksum_error
  cdr << (ros_message.dsp_unit_cal_checksum_error ? true : false);
  // Member: dsp_unit_cal_block_chcksm_error
  cdr << (ros_message.dsp_unit_cal_block_chcksm_error ? true : false);
  // Member: dsp_tuning_sensitivity_error
  cdr << (ros_message.dsp_tuning_sensitivity_error ? true : false);
  // Member: dsp_loop_overrun_error
  cdr << (ros_message.dsp_loop_overrun_error ? true : false);
  // Member: adc_spi_transfer_error
  cdr << (ros_message.adc_spi_transfer_error ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_srr_msgs::msg::SrrStatus5 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: disable_auto_align
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.disable_auto_align = tmp ? true : false;
  }

  // Member: can_tx_yaw_rate_ref_qf
  cdr >> ros_message.can_tx_yaw_rate_ref_qf;

  // Member: can_tx_yaw_rate_raw_qf
  cdr >> ros_message.can_tx_yaw_rate_raw_qf;

  // Member: can_tx_yaw_rate_reference
  cdr >> ros_message.can_tx_yaw_rate_reference;

  // Member: can_tx_yaw_rate_raw
  cdr >> ros_message.can_tx_yaw_rate_raw;

  // Member: can_tx_system_status
  cdr >> ros_message.can_tx_system_status;

  // Member: can_tx_outside_temperature
  cdr >> ros_message.can_tx_outside_temperature;

  // Member: can_blockage_mnr_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_blockage_mnr_blocked = tmp ? true : false;
  }

  // Member: can_blockage_bb_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_blockage_bb_blocked = tmp ? true : false;
  }

  // Member: can_blockage_radar_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_blockage_radar_blocked = tmp ? true : false;
  }

  // Member: can_td_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_td_blocked = tmp ? true : false;
  }

  // Member: radar_tx_power_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.radar_tx_power_error = tmp ? true : false;
  }

  // Member: radar_lo_power_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.radar_lo_power_error = tmp ? true : false;
  }

  // Member: radar_data_sync_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.radar_data_sync_error = tmp ? true : false;
  }

  // Member: linearizer_spi_transfer_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.linearizer_spi_transfer_error = tmp ? true : false;
  }

  // Member: saturated_tuning_freq_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.saturated_tuning_freq_error = tmp ? true : false;
  }

  // Member: rtn_spi_transfer_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rtn_spi_transfer_error = tmp ? true : false;
  }

  // Member: rrn_spi_transfer_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rrn_spi_transfer_error = tmp ? true : false;
  }

  // Member: video_port_capture_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.video_port_capture_error = tmp ? true : false;
  }

  // Member: vertical_misalignment_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vertical_misalignment_error = tmp ? true : false;
  }

  // Member: tx_temperature_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.tx_temperature_fault = tmp ? true : false;
  }

  // Member: transmitter_id_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.transmitter_id_error = tmp ? true : false;
  }

  // Member: dsp_unit_cal_checksum_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_unit_cal_checksum_error = tmp ? true : false;
  }

  // Member: dsp_unit_cal_block_chcksm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_unit_cal_block_chcksm_error = tmp ? true : false;
  }

  // Member: dsp_tuning_sensitivity_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_tuning_sensitivity_error = tmp ? true : false;
  }

  // Member: dsp_loop_overrun_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_loop_overrun_error = tmp ? true : false;
  }

  // Member: adc_spi_transfer_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.adc_spi_transfer_error = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
get_serialized_size(
  const delphi_srr_msgs::msg::SrrStatus5 & ros_message,
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
  // Member: disable_auto_align
  {
    size_t item_size = sizeof(ros_message.disable_auto_align);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_yaw_rate_ref_qf
  {
    size_t item_size = sizeof(ros_message.can_tx_yaw_rate_ref_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_yaw_rate_raw_qf
  {
    size_t item_size = sizeof(ros_message.can_tx_yaw_rate_raw_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_yaw_rate_reference
  {
    size_t item_size = sizeof(ros_message.can_tx_yaw_rate_reference);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_yaw_rate_raw
  {
    size_t item_size = sizeof(ros_message.can_tx_yaw_rate_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_system_status
  {
    size_t item_size = sizeof(ros_message.can_tx_system_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_tx_outside_temperature
  {
    size_t item_size = sizeof(ros_message.can_tx_outside_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_blockage_mnr_blocked
  {
    size_t item_size = sizeof(ros_message.can_blockage_mnr_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_blockage_bb_blocked
  {
    size_t item_size = sizeof(ros_message.can_blockage_bb_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_blockage_radar_blocked
  {
    size_t item_size = sizeof(ros_message.can_blockage_radar_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_td_blocked
  {
    size_t item_size = sizeof(ros_message.can_td_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radar_tx_power_error
  {
    size_t item_size = sizeof(ros_message.radar_tx_power_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radar_lo_power_error
  {
    size_t item_size = sizeof(ros_message.radar_lo_power_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: radar_data_sync_error
  {
    size_t item_size = sizeof(ros_message.radar_data_sync_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: linearizer_spi_transfer_error
  {
    size_t item_size = sizeof(ros_message.linearizer_spi_transfer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: saturated_tuning_freq_error
  {
    size_t item_size = sizeof(ros_message.saturated_tuning_freq_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rtn_spi_transfer_error
  {
    size_t item_size = sizeof(ros_message.rtn_spi_transfer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rrn_spi_transfer_error
  {
    size_t item_size = sizeof(ros_message.rrn_spi_transfer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: video_port_capture_error
  {
    size_t item_size = sizeof(ros_message.video_port_capture_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vertical_misalignment_error
  {
    size_t item_size = sizeof(ros_message.vertical_misalignment_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tx_temperature_fault
  {
    size_t item_size = sizeof(ros_message.tx_temperature_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: transmitter_id_error
  {
    size_t item_size = sizeof(ros_message.transmitter_id_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_unit_cal_checksum_error
  {
    size_t item_size = sizeof(ros_message.dsp_unit_cal_checksum_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_unit_cal_block_chcksm_error
  {
    size_t item_size = sizeof(ros_message.dsp_unit_cal_block_chcksm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_tuning_sensitivity_error
  {
    size_t item_size = sizeof(ros_message.dsp_tuning_sensitivity_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_loop_overrun_error
  {
    size_t item_size = sizeof(ros_message.dsp_loop_overrun_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adc_spi_transfer_error
  {
    size_t item_size = sizeof(ros_message.adc_spi_transfer_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
max_serialized_size_SrrStatus5(
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

  // Member: disable_auto_align
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx_yaw_rate_ref_qf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx_yaw_rate_raw_qf
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx_yaw_rate_reference
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: can_tx_yaw_rate_raw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: can_tx_system_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_tx_outside_temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: can_blockage_mnr_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_blockage_bb_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_blockage_radar_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_td_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: radar_tx_power_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: radar_lo_power_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: radar_data_sync_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: linearizer_spi_transfer_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: saturated_tuning_freq_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rtn_spi_transfer_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rrn_spi_transfer_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: video_port_capture_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vertical_misalignment_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tx_temperature_fault
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: transmitter_id_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_unit_cal_checksum_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_unit_cal_block_chcksm_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_tuning_sensitivity_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_loop_overrun_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: adc_spi_transfer_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SrrStatus5__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_srr_msgs::msg::SrrStatus5 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SrrStatus5__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_srr_msgs::msg::SrrStatus5 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SrrStatus5__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_srr_msgs::msg::SrrStatus5 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SrrStatus5__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SrrStatus5(full_bounded, 0);
}

static message_type_support_callbacks_t _SrrStatus5__callbacks = {
  "delphi_srr_msgs::msg",
  "SrrStatus5",
  _SrrStatus5__cdr_serialize,
  _SrrStatus5__cdr_deserialize,
  _SrrStatus5__get_serialized_size,
  _SrrStatus5__max_serialized_size
};

static rosidl_message_type_support_t _SrrStatus5__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SrrStatus5__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace delphi_srr_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_delphi_srr_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<delphi_srr_msgs::msg::SrrStatus5>()
{
  return &delphi_srr_msgs::msg::typesupport_fastrtps_cpp::_SrrStatus5__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_srr_msgs, msg, SrrStatus5)() {
  return &delphi_srr_msgs::msg::typesupport_fastrtps_cpp::_SrrStatus5__handle;
}

#ifdef __cplusplus
}
#endif
