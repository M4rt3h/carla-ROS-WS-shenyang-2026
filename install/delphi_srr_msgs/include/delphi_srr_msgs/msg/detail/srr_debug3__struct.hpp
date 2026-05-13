// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_srr_msgs:msg/SrrDebug3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG3__STRUCT_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG3__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delphi_srr_msgs__msg__SrrDebug3 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_srr_msgs__msg__SrrDebug3 __declspec(deprecated)
#endif

namespace delphi_srr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SrrDebug3_
{
  using Type = SrrDebug3_<ContainerAllocator>;

  explicit SrrDebug3_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timer_create_error = false;
      this->thread_create_error = false;
      this->arm_calibration_error = false;
      this->spi_fee_error = false;
      this->spi_comm_error = false;
      this->socket_write_error = false;
      this->dsp_cal_obsolete_62_error = false;
      this->socket_read_error = false;
      this->socket_init_error = false;
      this->signal_wait_error = false;
      this->signal_send_error = false;
      this->signal_create_error = false;
      this->shared_mem_write_error = false;
      this->shared_mem_read_error = false;
      this->shared_mem_config_error = false;
      this->share_mem_init_error = false;
      this->ram_test_error = false;
      this->num_errors = false;
      this->mmap_memory_error = false;
      this->isr_attach_error = false;
      this->ipc_drv_write_error = false;
      this->ipc_drv_trigger_error = false;
      this->ipc_drv_sync_error = false;
      this->ipc_drv_read_error = false;
      this->ipc_drv_init_error = false;
      this->interrupt_enable_error = false;
      this->hil_format_error = false;
      this->flash_filesystem_error = false;
      this->error_none = false;
      this->dsp_load_read_error = false;
      this->dsp_load_open_error = false;
      this->dsp_load_address_error = false;
      this->dsp_isp_write_error = false;
      this->dsp_ipc_read_error = false;
      this->dsp_ipc_init = false;
      this->dsp_init_error = false;
      this->dsp_drv_start_error = false;
      this->dsp_drv_load_error = false;
      this->dsp_drv_init_error = false;
      this->dsp_drv_init2_error = false;
      this->dsp_drv_init1_error = false;
      this->dsp_calibration_error = false;
      this->can_xmt_error = false;
      this->can_rcv_error = false;
      this->can_hardware_error = false;
      this->always_true = false;
    }
  }

  explicit SrrDebug3_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timer_create_error = false;
      this->thread_create_error = false;
      this->arm_calibration_error = false;
      this->spi_fee_error = false;
      this->spi_comm_error = false;
      this->socket_write_error = false;
      this->dsp_cal_obsolete_62_error = false;
      this->socket_read_error = false;
      this->socket_init_error = false;
      this->signal_wait_error = false;
      this->signal_send_error = false;
      this->signal_create_error = false;
      this->shared_mem_write_error = false;
      this->shared_mem_read_error = false;
      this->shared_mem_config_error = false;
      this->share_mem_init_error = false;
      this->ram_test_error = false;
      this->num_errors = false;
      this->mmap_memory_error = false;
      this->isr_attach_error = false;
      this->ipc_drv_write_error = false;
      this->ipc_drv_trigger_error = false;
      this->ipc_drv_sync_error = false;
      this->ipc_drv_read_error = false;
      this->ipc_drv_init_error = false;
      this->interrupt_enable_error = false;
      this->hil_format_error = false;
      this->flash_filesystem_error = false;
      this->error_none = false;
      this->dsp_load_read_error = false;
      this->dsp_load_open_error = false;
      this->dsp_load_address_error = false;
      this->dsp_isp_write_error = false;
      this->dsp_ipc_read_error = false;
      this->dsp_ipc_init = false;
      this->dsp_init_error = false;
      this->dsp_drv_start_error = false;
      this->dsp_drv_load_error = false;
      this->dsp_drv_init_error = false;
      this->dsp_drv_init2_error = false;
      this->dsp_drv_init1_error = false;
      this->dsp_calibration_error = false;
      this->can_xmt_error = false;
      this->can_rcv_error = false;
      this->can_hardware_error = false;
      this->always_true = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _timer_create_error_type =
    bool;
  _timer_create_error_type timer_create_error;
  using _thread_create_error_type =
    bool;
  _thread_create_error_type thread_create_error;
  using _arm_calibration_error_type =
    bool;
  _arm_calibration_error_type arm_calibration_error;
  using _spi_fee_error_type =
    bool;
  _spi_fee_error_type spi_fee_error;
  using _spi_comm_error_type =
    bool;
  _spi_comm_error_type spi_comm_error;
  using _socket_write_error_type =
    bool;
  _socket_write_error_type socket_write_error;
  using _dsp_cal_obsolete_62_error_type =
    bool;
  _dsp_cal_obsolete_62_error_type dsp_cal_obsolete_62_error;
  using _socket_read_error_type =
    bool;
  _socket_read_error_type socket_read_error;
  using _socket_init_error_type =
    bool;
  _socket_init_error_type socket_init_error;
  using _signal_wait_error_type =
    bool;
  _signal_wait_error_type signal_wait_error;
  using _signal_send_error_type =
    bool;
  _signal_send_error_type signal_send_error;
  using _signal_create_error_type =
    bool;
  _signal_create_error_type signal_create_error;
  using _shared_mem_write_error_type =
    bool;
  _shared_mem_write_error_type shared_mem_write_error;
  using _shared_mem_read_error_type =
    bool;
  _shared_mem_read_error_type shared_mem_read_error;
  using _shared_mem_config_error_type =
    bool;
  _shared_mem_config_error_type shared_mem_config_error;
  using _share_mem_init_error_type =
    bool;
  _share_mem_init_error_type share_mem_init_error;
  using _ram_test_error_type =
    bool;
  _ram_test_error_type ram_test_error;
  using _num_errors_type =
    bool;
  _num_errors_type num_errors;
  using _mmap_memory_error_type =
    bool;
  _mmap_memory_error_type mmap_memory_error;
  using _isr_attach_error_type =
    bool;
  _isr_attach_error_type isr_attach_error;
  using _ipc_drv_write_error_type =
    bool;
  _ipc_drv_write_error_type ipc_drv_write_error;
  using _ipc_drv_trigger_error_type =
    bool;
  _ipc_drv_trigger_error_type ipc_drv_trigger_error;
  using _ipc_drv_sync_error_type =
    bool;
  _ipc_drv_sync_error_type ipc_drv_sync_error;
  using _ipc_drv_read_error_type =
    bool;
  _ipc_drv_read_error_type ipc_drv_read_error;
  using _ipc_drv_init_error_type =
    bool;
  _ipc_drv_init_error_type ipc_drv_init_error;
  using _interrupt_enable_error_type =
    bool;
  _interrupt_enable_error_type interrupt_enable_error;
  using _hil_format_error_type =
    bool;
  _hil_format_error_type hil_format_error;
  using _flash_filesystem_error_type =
    bool;
  _flash_filesystem_error_type flash_filesystem_error;
  using _error_none_type =
    bool;
  _error_none_type error_none;
  using _dsp_load_read_error_type =
    bool;
  _dsp_load_read_error_type dsp_load_read_error;
  using _dsp_load_open_error_type =
    bool;
  _dsp_load_open_error_type dsp_load_open_error;
  using _dsp_load_address_error_type =
    bool;
  _dsp_load_address_error_type dsp_load_address_error;
  using _dsp_isp_write_error_type =
    bool;
  _dsp_isp_write_error_type dsp_isp_write_error;
  using _dsp_ipc_read_error_type =
    bool;
  _dsp_ipc_read_error_type dsp_ipc_read_error;
  using _dsp_ipc_init_type =
    bool;
  _dsp_ipc_init_type dsp_ipc_init;
  using _dsp_init_error_type =
    bool;
  _dsp_init_error_type dsp_init_error;
  using _dsp_drv_start_error_type =
    bool;
  _dsp_drv_start_error_type dsp_drv_start_error;
  using _dsp_drv_load_error_type =
    bool;
  _dsp_drv_load_error_type dsp_drv_load_error;
  using _dsp_drv_init_error_type =
    bool;
  _dsp_drv_init_error_type dsp_drv_init_error;
  using _dsp_drv_init2_error_type =
    bool;
  _dsp_drv_init2_error_type dsp_drv_init2_error;
  using _dsp_drv_init1_error_type =
    bool;
  _dsp_drv_init1_error_type dsp_drv_init1_error;
  using _dsp_calibration_error_type =
    bool;
  _dsp_calibration_error_type dsp_calibration_error;
  using _can_xmt_error_type =
    bool;
  _can_xmt_error_type can_xmt_error;
  using _can_rcv_error_type =
    bool;
  _can_rcv_error_type can_rcv_error;
  using _can_hardware_error_type =
    bool;
  _can_hardware_error_type can_hardware_error;
  using _always_true_type =
    bool;
  _always_true_type always_true;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__timer_create_error(
    const bool & _arg)
  {
    this->timer_create_error = _arg;
    return *this;
  }
  Type & set__thread_create_error(
    const bool & _arg)
  {
    this->thread_create_error = _arg;
    return *this;
  }
  Type & set__arm_calibration_error(
    const bool & _arg)
  {
    this->arm_calibration_error = _arg;
    return *this;
  }
  Type & set__spi_fee_error(
    const bool & _arg)
  {
    this->spi_fee_error = _arg;
    return *this;
  }
  Type & set__spi_comm_error(
    const bool & _arg)
  {
    this->spi_comm_error = _arg;
    return *this;
  }
  Type & set__socket_write_error(
    const bool & _arg)
  {
    this->socket_write_error = _arg;
    return *this;
  }
  Type & set__dsp_cal_obsolete_62_error(
    const bool & _arg)
  {
    this->dsp_cal_obsolete_62_error = _arg;
    return *this;
  }
  Type & set__socket_read_error(
    const bool & _arg)
  {
    this->socket_read_error = _arg;
    return *this;
  }
  Type & set__socket_init_error(
    const bool & _arg)
  {
    this->socket_init_error = _arg;
    return *this;
  }
  Type & set__signal_wait_error(
    const bool & _arg)
  {
    this->signal_wait_error = _arg;
    return *this;
  }
  Type & set__signal_send_error(
    const bool & _arg)
  {
    this->signal_send_error = _arg;
    return *this;
  }
  Type & set__signal_create_error(
    const bool & _arg)
  {
    this->signal_create_error = _arg;
    return *this;
  }
  Type & set__shared_mem_write_error(
    const bool & _arg)
  {
    this->shared_mem_write_error = _arg;
    return *this;
  }
  Type & set__shared_mem_read_error(
    const bool & _arg)
  {
    this->shared_mem_read_error = _arg;
    return *this;
  }
  Type & set__shared_mem_config_error(
    const bool & _arg)
  {
    this->shared_mem_config_error = _arg;
    return *this;
  }
  Type & set__share_mem_init_error(
    const bool & _arg)
  {
    this->share_mem_init_error = _arg;
    return *this;
  }
  Type & set__ram_test_error(
    const bool & _arg)
  {
    this->ram_test_error = _arg;
    return *this;
  }
  Type & set__num_errors(
    const bool & _arg)
  {
    this->num_errors = _arg;
    return *this;
  }
  Type & set__mmap_memory_error(
    const bool & _arg)
  {
    this->mmap_memory_error = _arg;
    return *this;
  }
  Type & set__isr_attach_error(
    const bool & _arg)
  {
    this->isr_attach_error = _arg;
    return *this;
  }
  Type & set__ipc_drv_write_error(
    const bool & _arg)
  {
    this->ipc_drv_write_error = _arg;
    return *this;
  }
  Type & set__ipc_drv_trigger_error(
    const bool & _arg)
  {
    this->ipc_drv_trigger_error = _arg;
    return *this;
  }
  Type & set__ipc_drv_sync_error(
    const bool & _arg)
  {
    this->ipc_drv_sync_error = _arg;
    return *this;
  }
  Type & set__ipc_drv_read_error(
    const bool & _arg)
  {
    this->ipc_drv_read_error = _arg;
    return *this;
  }
  Type & set__ipc_drv_init_error(
    const bool & _arg)
  {
    this->ipc_drv_init_error = _arg;
    return *this;
  }
  Type & set__interrupt_enable_error(
    const bool & _arg)
  {
    this->interrupt_enable_error = _arg;
    return *this;
  }
  Type & set__hil_format_error(
    const bool & _arg)
  {
    this->hil_format_error = _arg;
    return *this;
  }
  Type & set__flash_filesystem_error(
    const bool & _arg)
  {
    this->flash_filesystem_error = _arg;
    return *this;
  }
  Type & set__error_none(
    const bool & _arg)
  {
    this->error_none = _arg;
    return *this;
  }
  Type & set__dsp_load_read_error(
    const bool & _arg)
  {
    this->dsp_load_read_error = _arg;
    return *this;
  }
  Type & set__dsp_load_open_error(
    const bool & _arg)
  {
    this->dsp_load_open_error = _arg;
    return *this;
  }
  Type & set__dsp_load_address_error(
    const bool & _arg)
  {
    this->dsp_load_address_error = _arg;
    return *this;
  }
  Type & set__dsp_isp_write_error(
    const bool & _arg)
  {
    this->dsp_isp_write_error = _arg;
    return *this;
  }
  Type & set__dsp_ipc_read_error(
    const bool & _arg)
  {
    this->dsp_ipc_read_error = _arg;
    return *this;
  }
  Type & set__dsp_ipc_init(
    const bool & _arg)
  {
    this->dsp_ipc_init = _arg;
    return *this;
  }
  Type & set__dsp_init_error(
    const bool & _arg)
  {
    this->dsp_init_error = _arg;
    return *this;
  }
  Type & set__dsp_drv_start_error(
    const bool & _arg)
  {
    this->dsp_drv_start_error = _arg;
    return *this;
  }
  Type & set__dsp_drv_load_error(
    const bool & _arg)
  {
    this->dsp_drv_load_error = _arg;
    return *this;
  }
  Type & set__dsp_drv_init_error(
    const bool & _arg)
  {
    this->dsp_drv_init_error = _arg;
    return *this;
  }
  Type & set__dsp_drv_init2_error(
    const bool & _arg)
  {
    this->dsp_drv_init2_error = _arg;
    return *this;
  }
  Type & set__dsp_drv_init1_error(
    const bool & _arg)
  {
    this->dsp_drv_init1_error = _arg;
    return *this;
  }
  Type & set__dsp_calibration_error(
    const bool & _arg)
  {
    this->dsp_calibration_error = _arg;
    return *this;
  }
  Type & set__can_xmt_error(
    const bool & _arg)
  {
    this->can_xmt_error = _arg;
    return *this;
  }
  Type & set__can_rcv_error(
    const bool & _arg)
  {
    this->can_rcv_error = _arg;
    return *this;
  }
  Type & set__can_hardware_error(
    const bool & _arg)
  {
    this->can_hardware_error = _arg;
    return *this;
  }
  Type & set__always_true(
    const bool & _arg)
  {
    this->always_true = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrDebug3
    std::shared_ptr<delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrDebug3
    std::shared_ptr<delphi_srr_msgs::msg::SrrDebug3_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrrDebug3_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->timer_create_error != other.timer_create_error) {
      return false;
    }
    if (this->thread_create_error != other.thread_create_error) {
      return false;
    }
    if (this->arm_calibration_error != other.arm_calibration_error) {
      return false;
    }
    if (this->spi_fee_error != other.spi_fee_error) {
      return false;
    }
    if (this->spi_comm_error != other.spi_comm_error) {
      return false;
    }
    if (this->socket_write_error != other.socket_write_error) {
      return false;
    }
    if (this->dsp_cal_obsolete_62_error != other.dsp_cal_obsolete_62_error) {
      return false;
    }
    if (this->socket_read_error != other.socket_read_error) {
      return false;
    }
    if (this->socket_init_error != other.socket_init_error) {
      return false;
    }
    if (this->signal_wait_error != other.signal_wait_error) {
      return false;
    }
    if (this->signal_send_error != other.signal_send_error) {
      return false;
    }
    if (this->signal_create_error != other.signal_create_error) {
      return false;
    }
    if (this->shared_mem_write_error != other.shared_mem_write_error) {
      return false;
    }
    if (this->shared_mem_read_error != other.shared_mem_read_error) {
      return false;
    }
    if (this->shared_mem_config_error != other.shared_mem_config_error) {
      return false;
    }
    if (this->share_mem_init_error != other.share_mem_init_error) {
      return false;
    }
    if (this->ram_test_error != other.ram_test_error) {
      return false;
    }
    if (this->num_errors != other.num_errors) {
      return false;
    }
    if (this->mmap_memory_error != other.mmap_memory_error) {
      return false;
    }
    if (this->isr_attach_error != other.isr_attach_error) {
      return false;
    }
    if (this->ipc_drv_write_error != other.ipc_drv_write_error) {
      return false;
    }
    if (this->ipc_drv_trigger_error != other.ipc_drv_trigger_error) {
      return false;
    }
    if (this->ipc_drv_sync_error != other.ipc_drv_sync_error) {
      return false;
    }
    if (this->ipc_drv_read_error != other.ipc_drv_read_error) {
      return false;
    }
    if (this->ipc_drv_init_error != other.ipc_drv_init_error) {
      return false;
    }
    if (this->interrupt_enable_error != other.interrupt_enable_error) {
      return false;
    }
    if (this->hil_format_error != other.hil_format_error) {
      return false;
    }
    if (this->flash_filesystem_error != other.flash_filesystem_error) {
      return false;
    }
    if (this->error_none != other.error_none) {
      return false;
    }
    if (this->dsp_load_read_error != other.dsp_load_read_error) {
      return false;
    }
    if (this->dsp_load_open_error != other.dsp_load_open_error) {
      return false;
    }
    if (this->dsp_load_address_error != other.dsp_load_address_error) {
      return false;
    }
    if (this->dsp_isp_write_error != other.dsp_isp_write_error) {
      return false;
    }
    if (this->dsp_ipc_read_error != other.dsp_ipc_read_error) {
      return false;
    }
    if (this->dsp_ipc_init != other.dsp_ipc_init) {
      return false;
    }
    if (this->dsp_init_error != other.dsp_init_error) {
      return false;
    }
    if (this->dsp_drv_start_error != other.dsp_drv_start_error) {
      return false;
    }
    if (this->dsp_drv_load_error != other.dsp_drv_load_error) {
      return false;
    }
    if (this->dsp_drv_init_error != other.dsp_drv_init_error) {
      return false;
    }
    if (this->dsp_drv_init2_error != other.dsp_drv_init2_error) {
      return false;
    }
    if (this->dsp_drv_init1_error != other.dsp_drv_init1_error) {
      return false;
    }
    if (this->dsp_calibration_error != other.dsp_calibration_error) {
      return false;
    }
    if (this->can_xmt_error != other.can_xmt_error) {
      return false;
    }
    if (this->can_rcv_error != other.can_rcv_error) {
      return false;
    }
    if (this->can_hardware_error != other.can_hardware_error) {
      return false;
    }
    if (this->always_true != other.always_true) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrrDebug3_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrrDebug3_

// alias to use template instance with default allocator
using SrrDebug3 =
  delphi_srr_msgs::msg::SrrDebug3_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_DEBUG3__STRUCT_HPP_
