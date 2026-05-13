// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from delphi_srr_msgs:msg/SrrDebug4.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_debug4__rosidl_typesupport_fastrtps_cpp.hpp"
#include "delphi_srr_msgs/msg/detail/srr_debug4__struct.hpp"

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
  const delphi_srr_msgs::msg::SrrDebug4 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: timer_create_error
  cdr << (ros_message.timer_create_error ? true : false);
  // Member: thread_create_error
  cdr << (ros_message.thread_create_error ? true : false);
  // Member: arm_calibration_error
  cdr << (ros_message.arm_calibration_error ? true : false);
  // Member: spi_fee_error
  cdr << (ros_message.spi_fee_error ? true : false);
  // Member: spi_comm_error
  cdr << (ros_message.spi_comm_error ? true : false);
  // Member: socket_write_error
  cdr << (ros_message.socket_write_error ? true : false);
  // Member: dsp_cal_obsolete_62_error
  cdr << (ros_message.dsp_cal_obsolete_62_error ? true : false);
  // Member: socket_read_error
  cdr << (ros_message.socket_read_error ? true : false);
  // Member: socket_init_error
  cdr << (ros_message.socket_init_error ? true : false);
  // Member: signal_wait_error
  cdr << (ros_message.signal_wait_error ? true : false);
  // Member: signal_send_error
  cdr << (ros_message.signal_send_error ? true : false);
  // Member: signal_create_error
  cdr << (ros_message.signal_create_error ? true : false);
  // Member: shared_mem_write_error
  cdr << (ros_message.shared_mem_write_error ? true : false);
  // Member: shared_mem_read_error
  cdr << (ros_message.shared_mem_read_error ? true : false);
  // Member: shared_mem_config_error
  cdr << (ros_message.shared_mem_config_error ? true : false);
  // Member: share_mem_init_error
  cdr << (ros_message.share_mem_init_error ? true : false);
  // Member: ram_test_error
  cdr << (ros_message.ram_test_error ? true : false);
  // Member: num_errors
  cdr << (ros_message.num_errors ? true : false);
  // Member: mmap_memory_error
  cdr << (ros_message.mmap_memory_error ? true : false);
  // Member: isr_attach_error
  cdr << (ros_message.isr_attach_error ? true : false);
  // Member: ipc_drv_write_error
  cdr << (ros_message.ipc_drv_write_error ? true : false);
  // Member: ipc_drv_trigger_error
  cdr << (ros_message.ipc_drv_trigger_error ? true : false);
  // Member: ipc_drv_sync_error
  cdr << (ros_message.ipc_drv_sync_error ? true : false);
  // Member: ipc_drv_read_error
  cdr << (ros_message.ipc_drv_read_error ? true : false);
  // Member: ipc_drv_init_error
  cdr << (ros_message.ipc_drv_init_error ? true : false);
  // Member: interrupt_enable_error
  cdr << (ros_message.interrupt_enable_error ? true : false);
  // Member: hil_format_error
  cdr << (ros_message.hil_format_error ? true : false);
  // Member: flash_filesystem_error
  cdr << (ros_message.flash_filesystem_error ? true : false);
  // Member: error_none
  cdr << (ros_message.error_none ? true : false);
  // Member: dsp_load_read_error
  cdr << (ros_message.dsp_load_read_error ? true : false);
  // Member: dsp_load_open_error
  cdr << (ros_message.dsp_load_open_error ? true : false);
  // Member: dsp_load_address_error
  cdr << (ros_message.dsp_load_address_error ? true : false);
  // Member: dsp_isp_write_error
  cdr << (ros_message.dsp_isp_write_error ? true : false);
  // Member: dsp_ipc_read_error
  cdr << (ros_message.dsp_ipc_read_error ? true : false);
  // Member: dsp_ipc_init
  cdr << (ros_message.dsp_ipc_init ? true : false);
  // Member: dsp_init_error
  cdr << (ros_message.dsp_init_error ? true : false);
  // Member: dsp_drv_start_error
  cdr << (ros_message.dsp_drv_start_error ? true : false);
  // Member: dsp_drv_load_error
  cdr << (ros_message.dsp_drv_load_error ? true : false);
  // Member: dsp_drv_init_error
  cdr << (ros_message.dsp_drv_init_error ? true : false);
  // Member: dsp_drv_init2_error
  cdr << (ros_message.dsp_drv_init2_error ? true : false);
  // Member: dsp_drv_init1_error
  cdr << (ros_message.dsp_drv_init1_error ? true : false);
  // Member: dsp_calibration_error
  cdr << (ros_message.dsp_calibration_error ? true : false);
  // Member: can_xmt_error
  cdr << (ros_message.can_xmt_error ? true : false);
  // Member: can_rcv_error
  cdr << (ros_message.can_rcv_error ? true : false);
  // Member: can_hardware_error
  cdr << (ros_message.can_hardware_error ? true : false);
  // Member: always_true
  cdr << (ros_message.always_true ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  delphi_srr_msgs::msg::SrrDebug4 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: timer_create_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.timer_create_error = tmp ? true : false;
  }

  // Member: thread_create_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.thread_create_error = tmp ? true : false;
  }

  // Member: arm_calibration_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.arm_calibration_error = tmp ? true : false;
  }

  // Member: spi_fee_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.spi_fee_error = tmp ? true : false;
  }

  // Member: spi_comm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.spi_comm_error = tmp ? true : false;
  }

  // Member: socket_write_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.socket_write_error = tmp ? true : false;
  }

  // Member: dsp_cal_obsolete_62_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_cal_obsolete_62_error = tmp ? true : false;
  }

  // Member: socket_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.socket_read_error = tmp ? true : false;
  }

  // Member: socket_init_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.socket_init_error = tmp ? true : false;
  }

  // Member: signal_wait_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.signal_wait_error = tmp ? true : false;
  }

  // Member: signal_send_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.signal_send_error = tmp ? true : false;
  }

  // Member: signal_create_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.signal_create_error = tmp ? true : false;
  }

  // Member: shared_mem_write_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.shared_mem_write_error = tmp ? true : false;
  }

  // Member: shared_mem_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.shared_mem_read_error = tmp ? true : false;
  }

  // Member: shared_mem_config_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.shared_mem_config_error = tmp ? true : false;
  }

  // Member: share_mem_init_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.share_mem_init_error = tmp ? true : false;
  }

  // Member: ram_test_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ram_test_error = tmp ? true : false;
  }

  // Member: num_errors
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.num_errors = tmp ? true : false;
  }

  // Member: mmap_memory_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mmap_memory_error = tmp ? true : false;
  }

  // Member: isr_attach_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.isr_attach_error = tmp ? true : false;
  }

  // Member: ipc_drv_write_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ipc_drv_write_error = tmp ? true : false;
  }

  // Member: ipc_drv_trigger_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ipc_drv_trigger_error = tmp ? true : false;
  }

  // Member: ipc_drv_sync_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ipc_drv_sync_error = tmp ? true : false;
  }

  // Member: ipc_drv_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ipc_drv_read_error = tmp ? true : false;
  }

  // Member: ipc_drv_init_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ipc_drv_init_error = tmp ? true : false;
  }

  // Member: interrupt_enable_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.interrupt_enable_error = tmp ? true : false;
  }

  // Member: hil_format_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.hil_format_error = tmp ? true : false;
  }

  // Member: flash_filesystem_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flash_filesystem_error = tmp ? true : false;
  }

  // Member: error_none
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.error_none = tmp ? true : false;
  }

  // Member: dsp_load_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_load_read_error = tmp ? true : false;
  }

  // Member: dsp_load_open_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_load_open_error = tmp ? true : false;
  }

  // Member: dsp_load_address_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_load_address_error = tmp ? true : false;
  }

  // Member: dsp_isp_write_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_isp_write_error = tmp ? true : false;
  }

  // Member: dsp_ipc_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_ipc_read_error = tmp ? true : false;
  }

  // Member: dsp_ipc_init
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_ipc_init = tmp ? true : false;
  }

  // Member: dsp_init_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_init_error = tmp ? true : false;
  }

  // Member: dsp_drv_start_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_drv_start_error = tmp ? true : false;
  }

  // Member: dsp_drv_load_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_drv_load_error = tmp ? true : false;
  }

  // Member: dsp_drv_init_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_drv_init_error = tmp ? true : false;
  }

  // Member: dsp_drv_init2_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_drv_init2_error = tmp ? true : false;
  }

  // Member: dsp_drv_init1_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_drv_init1_error = tmp ? true : false;
  }

  // Member: dsp_calibration_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dsp_calibration_error = tmp ? true : false;
  }

  // Member: can_xmt_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_xmt_error = tmp ? true : false;
  }

  // Member: can_rcv_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_rcv_error = tmp ? true : false;
  }

  // Member: can_hardware_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_hardware_error = tmp ? true : false;
  }

  // Member: always_true
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.always_true = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
get_serialized_size(
  const delphi_srr_msgs::msg::SrrDebug4 & ros_message,
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
  // Member: timer_create_error
  {
    size_t item_size = sizeof(ros_message.timer_create_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: thread_create_error
  {
    size_t item_size = sizeof(ros_message.thread_create_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: arm_calibration_error
  {
    size_t item_size = sizeof(ros_message.arm_calibration_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spi_fee_error
  {
    size_t item_size = sizeof(ros_message.spi_fee_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spi_comm_error
  {
    size_t item_size = sizeof(ros_message.spi_comm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: socket_write_error
  {
    size_t item_size = sizeof(ros_message.socket_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_cal_obsolete_62_error
  {
    size_t item_size = sizeof(ros_message.dsp_cal_obsolete_62_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: socket_read_error
  {
    size_t item_size = sizeof(ros_message.socket_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: socket_init_error
  {
    size_t item_size = sizeof(ros_message.socket_init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal_wait_error
  {
    size_t item_size = sizeof(ros_message.signal_wait_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal_send_error
  {
    size_t item_size = sizeof(ros_message.signal_send_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: signal_create_error
  {
    size_t item_size = sizeof(ros_message.signal_create_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shared_mem_write_error
  {
    size_t item_size = sizeof(ros_message.shared_mem_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shared_mem_read_error
  {
    size_t item_size = sizeof(ros_message.shared_mem_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: shared_mem_config_error
  {
    size_t item_size = sizeof(ros_message.shared_mem_config_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: share_mem_init_error
  {
    size_t item_size = sizeof(ros_message.share_mem_init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ram_test_error
  {
    size_t item_size = sizeof(ros_message.ram_test_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_errors
  {
    size_t item_size = sizeof(ros_message.num_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mmap_memory_error
  {
    size_t item_size = sizeof(ros_message.mmap_memory_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: isr_attach_error
  {
    size_t item_size = sizeof(ros_message.isr_attach_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipc_drv_write_error
  {
    size_t item_size = sizeof(ros_message.ipc_drv_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipc_drv_trigger_error
  {
    size_t item_size = sizeof(ros_message.ipc_drv_trigger_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipc_drv_sync_error
  {
    size_t item_size = sizeof(ros_message.ipc_drv_sync_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipc_drv_read_error
  {
    size_t item_size = sizeof(ros_message.ipc_drv_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ipc_drv_init_error
  {
    size_t item_size = sizeof(ros_message.ipc_drv_init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: interrupt_enable_error
  {
    size_t item_size = sizeof(ros_message.interrupt_enable_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hil_format_error
  {
    size_t item_size = sizeof(ros_message.hil_format_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flash_filesystem_error
  {
    size_t item_size = sizeof(ros_message.flash_filesystem_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_none
  {
    size_t item_size = sizeof(ros_message.error_none);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_load_read_error
  {
    size_t item_size = sizeof(ros_message.dsp_load_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_load_open_error
  {
    size_t item_size = sizeof(ros_message.dsp_load_open_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_load_address_error
  {
    size_t item_size = sizeof(ros_message.dsp_load_address_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_isp_write_error
  {
    size_t item_size = sizeof(ros_message.dsp_isp_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_ipc_read_error
  {
    size_t item_size = sizeof(ros_message.dsp_ipc_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_ipc_init
  {
    size_t item_size = sizeof(ros_message.dsp_ipc_init);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_init_error
  {
    size_t item_size = sizeof(ros_message.dsp_init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_drv_start_error
  {
    size_t item_size = sizeof(ros_message.dsp_drv_start_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_drv_load_error
  {
    size_t item_size = sizeof(ros_message.dsp_drv_load_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_drv_init_error
  {
    size_t item_size = sizeof(ros_message.dsp_drv_init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_drv_init2_error
  {
    size_t item_size = sizeof(ros_message.dsp_drv_init2_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_drv_init1_error
  {
    size_t item_size = sizeof(ros_message.dsp_drv_init1_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dsp_calibration_error
  {
    size_t item_size = sizeof(ros_message.dsp_calibration_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_xmt_error
  {
    size_t item_size = sizeof(ros_message.can_xmt_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_rcv_error
  {
    size_t item_size = sizeof(ros_message.can_rcv_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_hardware_error
  {
    size_t item_size = sizeof(ros_message.can_hardware_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: always_true
  {
    size_t item_size = sizeof(ros_message.always_true);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_delphi_srr_msgs
max_serialized_size_SrrDebug4(
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

  // Member: timer_create_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: thread_create_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: arm_calibration_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: spi_fee_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: spi_comm_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: socket_write_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_cal_obsolete_62_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: socket_read_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: socket_init_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: signal_wait_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: signal_send_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: signal_create_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: shared_mem_write_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: shared_mem_read_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: shared_mem_config_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: share_mem_init_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ram_test_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_errors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mmap_memory_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: isr_attach_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ipc_drv_write_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ipc_drv_trigger_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ipc_drv_sync_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ipc_drv_read_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ipc_drv_init_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: interrupt_enable_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hil_format_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flash_filesystem_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_none
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_load_read_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_load_open_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_load_address_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_isp_write_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_ipc_read_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_ipc_init
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_init_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_drv_start_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_drv_load_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_drv_init_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_drv_init2_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_drv_init1_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dsp_calibration_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_xmt_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_rcv_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_hardware_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: always_true
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SrrDebug4__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const delphi_srr_msgs::msg::SrrDebug4 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SrrDebug4__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<delphi_srr_msgs::msg::SrrDebug4 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SrrDebug4__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const delphi_srr_msgs::msg::SrrDebug4 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SrrDebug4__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SrrDebug4(full_bounded, 0);
}

static message_type_support_callbacks_t _SrrDebug4__callbacks = {
  "delphi_srr_msgs::msg",
  "SrrDebug4",
  _SrrDebug4__cdr_serialize,
  _SrrDebug4__cdr_deserialize,
  _SrrDebug4__get_serialized_size,
  _SrrDebug4__max_serialized_size
};

static rosidl_message_type_support_t _SrrDebug4__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SrrDebug4__callbacks,
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
get_message_type_support_handle<delphi_srr_msgs::msg::SrrDebug4>()
{
  return &delphi_srr_msgs::msg::typesupport_fastrtps_cpp::_SrrDebug4__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, delphi_srr_msgs, msg, SrrDebug4)() {
  return &delphi_srr_msgs::msg::typesupport_fastrtps_cpp::_SrrDebug4__handle;
}

#ifdef __cplusplus
}
#endif
