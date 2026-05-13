// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from delphi_srr_msgs:msg/SrrDebug4.idl
// generated code does not contain a copyright notice
#include "delphi_srr_msgs/msg/detail/srr_debug4__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "delphi_srr_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "delphi_srr_msgs/msg/detail/srr_debug4__struct.h"
#include "delphi_srr_msgs/msg/detail/srr_debug4__functions.h"
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


using _SrrDebug4__ros_msg_type = delphi_srr_msgs__msg__SrrDebug4;

static bool _SrrDebug4__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SrrDebug4__ros_msg_type * ros_message = static_cast<const _SrrDebug4__ros_msg_type *>(untyped_ros_message);
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

  // Field name: timer_create_error
  {
    cdr << (ros_message->timer_create_error ? true : false);
  }

  // Field name: thread_create_error
  {
    cdr << (ros_message->thread_create_error ? true : false);
  }

  // Field name: arm_calibration_error
  {
    cdr << (ros_message->arm_calibration_error ? true : false);
  }

  // Field name: spi_fee_error
  {
    cdr << (ros_message->spi_fee_error ? true : false);
  }

  // Field name: spi_comm_error
  {
    cdr << (ros_message->spi_comm_error ? true : false);
  }

  // Field name: socket_write_error
  {
    cdr << (ros_message->socket_write_error ? true : false);
  }

  // Field name: dsp_cal_obsolete_62_error
  {
    cdr << (ros_message->dsp_cal_obsolete_62_error ? true : false);
  }

  // Field name: socket_read_error
  {
    cdr << (ros_message->socket_read_error ? true : false);
  }

  // Field name: socket_init_error
  {
    cdr << (ros_message->socket_init_error ? true : false);
  }

  // Field name: signal_wait_error
  {
    cdr << (ros_message->signal_wait_error ? true : false);
  }

  // Field name: signal_send_error
  {
    cdr << (ros_message->signal_send_error ? true : false);
  }

  // Field name: signal_create_error
  {
    cdr << (ros_message->signal_create_error ? true : false);
  }

  // Field name: shared_mem_write_error
  {
    cdr << (ros_message->shared_mem_write_error ? true : false);
  }

  // Field name: shared_mem_read_error
  {
    cdr << (ros_message->shared_mem_read_error ? true : false);
  }

  // Field name: shared_mem_config_error
  {
    cdr << (ros_message->shared_mem_config_error ? true : false);
  }

  // Field name: share_mem_init_error
  {
    cdr << (ros_message->share_mem_init_error ? true : false);
  }

  // Field name: ram_test_error
  {
    cdr << (ros_message->ram_test_error ? true : false);
  }

  // Field name: num_errors
  {
    cdr << (ros_message->num_errors ? true : false);
  }

  // Field name: mmap_memory_error
  {
    cdr << (ros_message->mmap_memory_error ? true : false);
  }

  // Field name: isr_attach_error
  {
    cdr << (ros_message->isr_attach_error ? true : false);
  }

  // Field name: ipc_drv_write_error
  {
    cdr << (ros_message->ipc_drv_write_error ? true : false);
  }

  // Field name: ipc_drv_trigger_error
  {
    cdr << (ros_message->ipc_drv_trigger_error ? true : false);
  }

  // Field name: ipc_drv_sync_error
  {
    cdr << (ros_message->ipc_drv_sync_error ? true : false);
  }

  // Field name: ipc_drv_read_error
  {
    cdr << (ros_message->ipc_drv_read_error ? true : false);
  }

  // Field name: ipc_drv_init_error
  {
    cdr << (ros_message->ipc_drv_init_error ? true : false);
  }

  // Field name: interrupt_enable_error
  {
    cdr << (ros_message->interrupt_enable_error ? true : false);
  }

  // Field name: hil_format_error
  {
    cdr << (ros_message->hil_format_error ? true : false);
  }

  // Field name: flash_filesystem_error
  {
    cdr << (ros_message->flash_filesystem_error ? true : false);
  }

  // Field name: error_none
  {
    cdr << (ros_message->error_none ? true : false);
  }

  // Field name: dsp_load_read_error
  {
    cdr << (ros_message->dsp_load_read_error ? true : false);
  }

  // Field name: dsp_load_open_error
  {
    cdr << (ros_message->dsp_load_open_error ? true : false);
  }

  // Field name: dsp_load_address_error
  {
    cdr << (ros_message->dsp_load_address_error ? true : false);
  }

  // Field name: dsp_isp_write_error
  {
    cdr << (ros_message->dsp_isp_write_error ? true : false);
  }

  // Field name: dsp_ipc_read_error
  {
    cdr << (ros_message->dsp_ipc_read_error ? true : false);
  }

  // Field name: dsp_ipc_init
  {
    cdr << (ros_message->dsp_ipc_init ? true : false);
  }

  // Field name: dsp_init_error
  {
    cdr << (ros_message->dsp_init_error ? true : false);
  }

  // Field name: dsp_drv_start_error
  {
    cdr << (ros_message->dsp_drv_start_error ? true : false);
  }

  // Field name: dsp_drv_load_error
  {
    cdr << (ros_message->dsp_drv_load_error ? true : false);
  }

  // Field name: dsp_drv_init_error
  {
    cdr << (ros_message->dsp_drv_init_error ? true : false);
  }

  // Field name: dsp_drv_init2_error
  {
    cdr << (ros_message->dsp_drv_init2_error ? true : false);
  }

  // Field name: dsp_drv_init1_error
  {
    cdr << (ros_message->dsp_drv_init1_error ? true : false);
  }

  // Field name: dsp_calibration_error
  {
    cdr << (ros_message->dsp_calibration_error ? true : false);
  }

  // Field name: can_xmt_error
  {
    cdr << (ros_message->can_xmt_error ? true : false);
  }

  // Field name: can_rcv_error
  {
    cdr << (ros_message->can_rcv_error ? true : false);
  }

  // Field name: can_hardware_error
  {
    cdr << (ros_message->can_hardware_error ? true : false);
  }

  // Field name: always_true
  {
    cdr << (ros_message->always_true ? true : false);
  }

  return true;
}

static bool _SrrDebug4__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SrrDebug4__ros_msg_type * ros_message = static_cast<_SrrDebug4__ros_msg_type *>(untyped_ros_message);
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

  // Field name: timer_create_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->timer_create_error = tmp ? true : false;
  }

  // Field name: thread_create_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->thread_create_error = tmp ? true : false;
  }

  // Field name: arm_calibration_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->arm_calibration_error = tmp ? true : false;
  }

  // Field name: spi_fee_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->spi_fee_error = tmp ? true : false;
  }

  // Field name: spi_comm_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->spi_comm_error = tmp ? true : false;
  }

  // Field name: socket_write_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->socket_write_error = tmp ? true : false;
  }

  // Field name: dsp_cal_obsolete_62_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_cal_obsolete_62_error = tmp ? true : false;
  }

  // Field name: socket_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->socket_read_error = tmp ? true : false;
  }

  // Field name: socket_init_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->socket_init_error = tmp ? true : false;
  }

  // Field name: signal_wait_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->signal_wait_error = tmp ? true : false;
  }

  // Field name: signal_send_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->signal_send_error = tmp ? true : false;
  }

  // Field name: signal_create_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->signal_create_error = tmp ? true : false;
  }

  // Field name: shared_mem_write_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->shared_mem_write_error = tmp ? true : false;
  }

  // Field name: shared_mem_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->shared_mem_read_error = tmp ? true : false;
  }

  // Field name: shared_mem_config_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->shared_mem_config_error = tmp ? true : false;
  }

  // Field name: share_mem_init_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->share_mem_init_error = tmp ? true : false;
  }

  // Field name: ram_test_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ram_test_error = tmp ? true : false;
  }

  // Field name: num_errors
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->num_errors = tmp ? true : false;
  }

  // Field name: mmap_memory_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mmap_memory_error = tmp ? true : false;
  }

  // Field name: isr_attach_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->isr_attach_error = tmp ? true : false;
  }

  // Field name: ipc_drv_write_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ipc_drv_write_error = tmp ? true : false;
  }

  // Field name: ipc_drv_trigger_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ipc_drv_trigger_error = tmp ? true : false;
  }

  // Field name: ipc_drv_sync_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ipc_drv_sync_error = tmp ? true : false;
  }

  // Field name: ipc_drv_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ipc_drv_read_error = tmp ? true : false;
  }

  // Field name: ipc_drv_init_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ipc_drv_init_error = tmp ? true : false;
  }

  // Field name: interrupt_enable_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->interrupt_enable_error = tmp ? true : false;
  }

  // Field name: hil_format_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->hil_format_error = tmp ? true : false;
  }

  // Field name: flash_filesystem_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flash_filesystem_error = tmp ? true : false;
  }

  // Field name: error_none
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->error_none = tmp ? true : false;
  }

  // Field name: dsp_load_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_load_read_error = tmp ? true : false;
  }

  // Field name: dsp_load_open_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_load_open_error = tmp ? true : false;
  }

  // Field name: dsp_load_address_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_load_address_error = tmp ? true : false;
  }

  // Field name: dsp_isp_write_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_isp_write_error = tmp ? true : false;
  }

  // Field name: dsp_ipc_read_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_ipc_read_error = tmp ? true : false;
  }

  // Field name: dsp_ipc_init
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_ipc_init = tmp ? true : false;
  }

  // Field name: dsp_init_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_init_error = tmp ? true : false;
  }

  // Field name: dsp_drv_start_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_drv_start_error = tmp ? true : false;
  }

  // Field name: dsp_drv_load_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_drv_load_error = tmp ? true : false;
  }

  // Field name: dsp_drv_init_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_drv_init_error = tmp ? true : false;
  }

  // Field name: dsp_drv_init2_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_drv_init2_error = tmp ? true : false;
  }

  // Field name: dsp_drv_init1_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_drv_init1_error = tmp ? true : false;
  }

  // Field name: dsp_calibration_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dsp_calibration_error = tmp ? true : false;
  }

  // Field name: can_xmt_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_xmt_error = tmp ? true : false;
  }

  // Field name: can_rcv_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_rcv_error = tmp ? true : false;
  }

  // Field name: can_hardware_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_hardware_error = tmp ? true : false;
  }

  // Field name: always_true
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->always_true = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_srr_msgs
size_t get_serialized_size_delphi_srr_msgs__msg__SrrDebug4(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SrrDebug4__ros_msg_type * ros_message = static_cast<const _SrrDebug4__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name timer_create_error
  {
    size_t item_size = sizeof(ros_message->timer_create_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name thread_create_error
  {
    size_t item_size = sizeof(ros_message->thread_create_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arm_calibration_error
  {
    size_t item_size = sizeof(ros_message->arm_calibration_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spi_fee_error
  {
    size_t item_size = sizeof(ros_message->spi_fee_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spi_comm_error
  {
    size_t item_size = sizeof(ros_message->spi_comm_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name socket_write_error
  {
    size_t item_size = sizeof(ros_message->socket_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_cal_obsolete_62_error
  {
    size_t item_size = sizeof(ros_message->dsp_cal_obsolete_62_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name socket_read_error
  {
    size_t item_size = sizeof(ros_message->socket_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name socket_init_error
  {
    size_t item_size = sizeof(ros_message->socket_init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_wait_error
  {
    size_t item_size = sizeof(ros_message->signal_wait_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_send_error
  {
    size_t item_size = sizeof(ros_message->signal_send_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name signal_create_error
  {
    size_t item_size = sizeof(ros_message->signal_create_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shared_mem_write_error
  {
    size_t item_size = sizeof(ros_message->shared_mem_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shared_mem_read_error
  {
    size_t item_size = sizeof(ros_message->shared_mem_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shared_mem_config_error
  {
    size_t item_size = sizeof(ros_message->shared_mem_config_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name share_mem_init_error
  {
    size_t item_size = sizeof(ros_message->share_mem_init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ram_test_error
  {
    size_t item_size = sizeof(ros_message->ram_test_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_errors
  {
    size_t item_size = sizeof(ros_message->num_errors);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mmap_memory_error
  {
    size_t item_size = sizeof(ros_message->mmap_memory_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name isr_attach_error
  {
    size_t item_size = sizeof(ros_message->isr_attach_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipc_drv_write_error
  {
    size_t item_size = sizeof(ros_message->ipc_drv_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipc_drv_trigger_error
  {
    size_t item_size = sizeof(ros_message->ipc_drv_trigger_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipc_drv_sync_error
  {
    size_t item_size = sizeof(ros_message->ipc_drv_sync_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipc_drv_read_error
  {
    size_t item_size = sizeof(ros_message->ipc_drv_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipc_drv_init_error
  {
    size_t item_size = sizeof(ros_message->ipc_drv_init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name interrupt_enable_error
  {
    size_t item_size = sizeof(ros_message->interrupt_enable_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hil_format_error
  {
    size_t item_size = sizeof(ros_message->hil_format_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flash_filesystem_error
  {
    size_t item_size = sizeof(ros_message->flash_filesystem_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_none
  {
    size_t item_size = sizeof(ros_message->error_none);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_load_read_error
  {
    size_t item_size = sizeof(ros_message->dsp_load_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_load_open_error
  {
    size_t item_size = sizeof(ros_message->dsp_load_open_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_load_address_error
  {
    size_t item_size = sizeof(ros_message->dsp_load_address_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_isp_write_error
  {
    size_t item_size = sizeof(ros_message->dsp_isp_write_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_ipc_read_error
  {
    size_t item_size = sizeof(ros_message->dsp_ipc_read_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_ipc_init
  {
    size_t item_size = sizeof(ros_message->dsp_ipc_init);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_init_error
  {
    size_t item_size = sizeof(ros_message->dsp_init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_drv_start_error
  {
    size_t item_size = sizeof(ros_message->dsp_drv_start_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_drv_load_error
  {
    size_t item_size = sizeof(ros_message->dsp_drv_load_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_drv_init_error
  {
    size_t item_size = sizeof(ros_message->dsp_drv_init_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_drv_init2_error
  {
    size_t item_size = sizeof(ros_message->dsp_drv_init2_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_drv_init1_error
  {
    size_t item_size = sizeof(ros_message->dsp_drv_init1_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dsp_calibration_error
  {
    size_t item_size = sizeof(ros_message->dsp_calibration_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_xmt_error
  {
    size_t item_size = sizeof(ros_message->can_xmt_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_rcv_error
  {
    size_t item_size = sizeof(ros_message->can_rcv_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_hardware_error
  {
    size_t item_size = sizeof(ros_message->can_hardware_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name always_true
  {
    size_t item_size = sizeof(ros_message->always_true);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SrrDebug4__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_delphi_srr_msgs__msg__SrrDebug4(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_delphi_srr_msgs
size_t max_serialized_size_delphi_srr_msgs__msg__SrrDebug4(
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
  // member: timer_create_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: thread_create_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arm_calibration_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: spi_fee_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: spi_comm_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: socket_write_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_cal_obsolete_62_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: socket_read_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: socket_init_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal_wait_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal_send_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: signal_create_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: shared_mem_write_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: shared_mem_read_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: shared_mem_config_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: share_mem_init_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ram_test_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_errors
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mmap_memory_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: isr_attach_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ipc_drv_write_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ipc_drv_trigger_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ipc_drv_sync_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ipc_drv_read_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ipc_drv_init_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: interrupt_enable_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hil_format_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flash_filesystem_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_none
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_load_read_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_load_open_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_load_address_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_isp_write_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_ipc_read_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_ipc_init
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_init_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_drv_start_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_drv_load_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_drv_init_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_drv_init2_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_drv_init1_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dsp_calibration_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_xmt_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_rcv_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_hardware_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: always_true
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SrrDebug4__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_delphi_srr_msgs__msg__SrrDebug4(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SrrDebug4 = {
  "delphi_srr_msgs::msg",
  "SrrDebug4",
  _SrrDebug4__cdr_serialize,
  _SrrDebug4__cdr_deserialize,
  _SrrDebug4__get_serialized_size,
  _SrrDebug4__max_serialized_size
};

static rosidl_message_type_support_t _SrrDebug4__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SrrDebug4,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, delphi_srr_msgs, msg, SrrDebug4)() {
  return &_SrrDebug4__type_support;
}

#if defined(__cplusplus)
}
#endif
