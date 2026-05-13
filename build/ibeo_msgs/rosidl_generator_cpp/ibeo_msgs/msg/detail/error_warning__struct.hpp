// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/ErrorWarning.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__STRUCT_HPP_

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
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__ErrorWarning __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__ErrorWarning __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ErrorWarning_
{
  using Type = ErrorWarning_<ContainerAllocator>;

  explicit ErrorWarning_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ibeo_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err_internal_error = false;
      this->err_motor_1_fault = false;
      this->err_buffer_error_xmt_incomplete = false;
      this->err_buffer_error_overflow = false;
      this->err_apd_over_temperature = false;
      this->err_apd_under_temperature = false;
      this->err_apd_temperature_sensor_defect = false;
      this->err_motor_2_fault = false;
      this->err_motor_3_fault = false;
      this->err_motor_4_fault = false;
      this->err_motor_5_fault = false;
      this->err_int_no_scan_data = false;
      this->err_int_communication_error = false;
      this->err_int_incorrect_scan_data = false;
      this->err_config_fpga_not_configurable = false;
      this->err_config_incorrect_config_data = false;
      this->err_config_contains_incorrect_params = false;
      this->err_timeout_data_processing = false;
      this->err_timeout_env_model_computation_reset = false;
      this->wrn_int_communication_error = false;
      this->wrn_low_temperature = false;
      this->wrn_high_temperature = false;
      this->wrn_int_motor_1 = false;
      this->wrn_sync_error = false;
      this->wrn_laser_1_start_pulse_missing = false;
      this->wrn_laser_2_start_pulse_missing = false;
      this->wrn_can_interface_blocked = false;
      this->wrn_eth_interface_blocked = false;
      this->wrn_incorrect_can_data_rcvd = false;
      this->wrn_int_incorrect_scan_data = false;
      this->wrn_eth_unkwn_incomplete_data = false;
      this->wrn_incorrect_or_forbidden_cmd_rcvd = false;
      this->wrn_memory_access_failure = false;
      this->wrn_int_overflow = false;
      this->wrn_ego_motion_data_missing = false;
      this->wrn_incorrect_mounting_params = false;
      this->wrn_no_obj_comp_due_to_scan_freq = false;
    }
  }

  explicit ErrorWarning_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ibeo_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err_internal_error = false;
      this->err_motor_1_fault = false;
      this->err_buffer_error_xmt_incomplete = false;
      this->err_buffer_error_overflow = false;
      this->err_apd_over_temperature = false;
      this->err_apd_under_temperature = false;
      this->err_apd_temperature_sensor_defect = false;
      this->err_motor_2_fault = false;
      this->err_motor_3_fault = false;
      this->err_motor_4_fault = false;
      this->err_motor_5_fault = false;
      this->err_int_no_scan_data = false;
      this->err_int_communication_error = false;
      this->err_int_incorrect_scan_data = false;
      this->err_config_fpga_not_configurable = false;
      this->err_config_incorrect_config_data = false;
      this->err_config_contains_incorrect_params = false;
      this->err_timeout_data_processing = false;
      this->err_timeout_env_model_computation_reset = false;
      this->wrn_int_communication_error = false;
      this->wrn_low_temperature = false;
      this->wrn_high_temperature = false;
      this->wrn_int_motor_1 = false;
      this->wrn_sync_error = false;
      this->wrn_laser_1_start_pulse_missing = false;
      this->wrn_laser_2_start_pulse_missing = false;
      this->wrn_can_interface_blocked = false;
      this->wrn_eth_interface_blocked = false;
      this->wrn_incorrect_can_data_rcvd = false;
      this->wrn_int_incorrect_scan_data = false;
      this->wrn_eth_unkwn_incomplete_data = false;
      this->wrn_incorrect_or_forbidden_cmd_rcvd = false;
      this->wrn_memory_access_failure = false;
      this->wrn_int_overflow = false;
      this->wrn_ego_motion_data_missing = false;
      this->wrn_incorrect_mounting_params = false;
      this->wrn_no_obj_comp_due_to_scan_freq = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ibeo_header_type =
    ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>;
  _ibeo_header_type ibeo_header;
  using _err_internal_error_type =
    bool;
  _err_internal_error_type err_internal_error;
  using _err_motor_1_fault_type =
    bool;
  _err_motor_1_fault_type err_motor_1_fault;
  using _err_buffer_error_xmt_incomplete_type =
    bool;
  _err_buffer_error_xmt_incomplete_type err_buffer_error_xmt_incomplete;
  using _err_buffer_error_overflow_type =
    bool;
  _err_buffer_error_overflow_type err_buffer_error_overflow;
  using _err_apd_over_temperature_type =
    bool;
  _err_apd_over_temperature_type err_apd_over_temperature;
  using _err_apd_under_temperature_type =
    bool;
  _err_apd_under_temperature_type err_apd_under_temperature;
  using _err_apd_temperature_sensor_defect_type =
    bool;
  _err_apd_temperature_sensor_defect_type err_apd_temperature_sensor_defect;
  using _err_motor_2_fault_type =
    bool;
  _err_motor_2_fault_type err_motor_2_fault;
  using _err_motor_3_fault_type =
    bool;
  _err_motor_3_fault_type err_motor_3_fault;
  using _err_motor_4_fault_type =
    bool;
  _err_motor_4_fault_type err_motor_4_fault;
  using _err_motor_5_fault_type =
    bool;
  _err_motor_5_fault_type err_motor_5_fault;
  using _err_int_no_scan_data_type =
    bool;
  _err_int_no_scan_data_type err_int_no_scan_data;
  using _err_int_communication_error_type =
    bool;
  _err_int_communication_error_type err_int_communication_error;
  using _err_int_incorrect_scan_data_type =
    bool;
  _err_int_incorrect_scan_data_type err_int_incorrect_scan_data;
  using _err_config_fpga_not_configurable_type =
    bool;
  _err_config_fpga_not_configurable_type err_config_fpga_not_configurable;
  using _err_config_incorrect_config_data_type =
    bool;
  _err_config_incorrect_config_data_type err_config_incorrect_config_data;
  using _err_config_contains_incorrect_params_type =
    bool;
  _err_config_contains_incorrect_params_type err_config_contains_incorrect_params;
  using _err_timeout_data_processing_type =
    bool;
  _err_timeout_data_processing_type err_timeout_data_processing;
  using _err_timeout_env_model_computation_reset_type =
    bool;
  _err_timeout_env_model_computation_reset_type err_timeout_env_model_computation_reset;
  using _wrn_int_communication_error_type =
    bool;
  _wrn_int_communication_error_type wrn_int_communication_error;
  using _wrn_low_temperature_type =
    bool;
  _wrn_low_temperature_type wrn_low_temperature;
  using _wrn_high_temperature_type =
    bool;
  _wrn_high_temperature_type wrn_high_temperature;
  using _wrn_int_motor_1_type =
    bool;
  _wrn_int_motor_1_type wrn_int_motor_1;
  using _wrn_sync_error_type =
    bool;
  _wrn_sync_error_type wrn_sync_error;
  using _wrn_laser_1_start_pulse_missing_type =
    bool;
  _wrn_laser_1_start_pulse_missing_type wrn_laser_1_start_pulse_missing;
  using _wrn_laser_2_start_pulse_missing_type =
    bool;
  _wrn_laser_2_start_pulse_missing_type wrn_laser_2_start_pulse_missing;
  using _wrn_can_interface_blocked_type =
    bool;
  _wrn_can_interface_blocked_type wrn_can_interface_blocked;
  using _wrn_eth_interface_blocked_type =
    bool;
  _wrn_eth_interface_blocked_type wrn_eth_interface_blocked;
  using _wrn_incorrect_can_data_rcvd_type =
    bool;
  _wrn_incorrect_can_data_rcvd_type wrn_incorrect_can_data_rcvd;
  using _wrn_int_incorrect_scan_data_type =
    bool;
  _wrn_int_incorrect_scan_data_type wrn_int_incorrect_scan_data;
  using _wrn_eth_unkwn_incomplete_data_type =
    bool;
  _wrn_eth_unkwn_incomplete_data_type wrn_eth_unkwn_incomplete_data;
  using _wrn_incorrect_or_forbidden_cmd_rcvd_type =
    bool;
  _wrn_incorrect_or_forbidden_cmd_rcvd_type wrn_incorrect_or_forbidden_cmd_rcvd;
  using _wrn_memory_access_failure_type =
    bool;
  _wrn_memory_access_failure_type wrn_memory_access_failure;
  using _wrn_int_overflow_type =
    bool;
  _wrn_int_overflow_type wrn_int_overflow;
  using _wrn_ego_motion_data_missing_type =
    bool;
  _wrn_ego_motion_data_missing_type wrn_ego_motion_data_missing;
  using _wrn_incorrect_mounting_params_type =
    bool;
  _wrn_incorrect_mounting_params_type wrn_incorrect_mounting_params;
  using _wrn_no_obj_comp_due_to_scan_freq_type =
    bool;
  _wrn_no_obj_comp_due_to_scan_freq_type wrn_no_obj_comp_due_to_scan_freq;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ibeo_header(
    const ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator> & _arg)
  {
    this->ibeo_header = _arg;
    return *this;
  }
  Type & set__err_internal_error(
    const bool & _arg)
  {
    this->err_internal_error = _arg;
    return *this;
  }
  Type & set__err_motor_1_fault(
    const bool & _arg)
  {
    this->err_motor_1_fault = _arg;
    return *this;
  }
  Type & set__err_buffer_error_xmt_incomplete(
    const bool & _arg)
  {
    this->err_buffer_error_xmt_incomplete = _arg;
    return *this;
  }
  Type & set__err_buffer_error_overflow(
    const bool & _arg)
  {
    this->err_buffer_error_overflow = _arg;
    return *this;
  }
  Type & set__err_apd_over_temperature(
    const bool & _arg)
  {
    this->err_apd_over_temperature = _arg;
    return *this;
  }
  Type & set__err_apd_under_temperature(
    const bool & _arg)
  {
    this->err_apd_under_temperature = _arg;
    return *this;
  }
  Type & set__err_apd_temperature_sensor_defect(
    const bool & _arg)
  {
    this->err_apd_temperature_sensor_defect = _arg;
    return *this;
  }
  Type & set__err_motor_2_fault(
    const bool & _arg)
  {
    this->err_motor_2_fault = _arg;
    return *this;
  }
  Type & set__err_motor_3_fault(
    const bool & _arg)
  {
    this->err_motor_3_fault = _arg;
    return *this;
  }
  Type & set__err_motor_4_fault(
    const bool & _arg)
  {
    this->err_motor_4_fault = _arg;
    return *this;
  }
  Type & set__err_motor_5_fault(
    const bool & _arg)
  {
    this->err_motor_5_fault = _arg;
    return *this;
  }
  Type & set__err_int_no_scan_data(
    const bool & _arg)
  {
    this->err_int_no_scan_data = _arg;
    return *this;
  }
  Type & set__err_int_communication_error(
    const bool & _arg)
  {
    this->err_int_communication_error = _arg;
    return *this;
  }
  Type & set__err_int_incorrect_scan_data(
    const bool & _arg)
  {
    this->err_int_incorrect_scan_data = _arg;
    return *this;
  }
  Type & set__err_config_fpga_not_configurable(
    const bool & _arg)
  {
    this->err_config_fpga_not_configurable = _arg;
    return *this;
  }
  Type & set__err_config_incorrect_config_data(
    const bool & _arg)
  {
    this->err_config_incorrect_config_data = _arg;
    return *this;
  }
  Type & set__err_config_contains_incorrect_params(
    const bool & _arg)
  {
    this->err_config_contains_incorrect_params = _arg;
    return *this;
  }
  Type & set__err_timeout_data_processing(
    const bool & _arg)
  {
    this->err_timeout_data_processing = _arg;
    return *this;
  }
  Type & set__err_timeout_env_model_computation_reset(
    const bool & _arg)
  {
    this->err_timeout_env_model_computation_reset = _arg;
    return *this;
  }
  Type & set__wrn_int_communication_error(
    const bool & _arg)
  {
    this->wrn_int_communication_error = _arg;
    return *this;
  }
  Type & set__wrn_low_temperature(
    const bool & _arg)
  {
    this->wrn_low_temperature = _arg;
    return *this;
  }
  Type & set__wrn_high_temperature(
    const bool & _arg)
  {
    this->wrn_high_temperature = _arg;
    return *this;
  }
  Type & set__wrn_int_motor_1(
    const bool & _arg)
  {
    this->wrn_int_motor_1 = _arg;
    return *this;
  }
  Type & set__wrn_sync_error(
    const bool & _arg)
  {
    this->wrn_sync_error = _arg;
    return *this;
  }
  Type & set__wrn_laser_1_start_pulse_missing(
    const bool & _arg)
  {
    this->wrn_laser_1_start_pulse_missing = _arg;
    return *this;
  }
  Type & set__wrn_laser_2_start_pulse_missing(
    const bool & _arg)
  {
    this->wrn_laser_2_start_pulse_missing = _arg;
    return *this;
  }
  Type & set__wrn_can_interface_blocked(
    const bool & _arg)
  {
    this->wrn_can_interface_blocked = _arg;
    return *this;
  }
  Type & set__wrn_eth_interface_blocked(
    const bool & _arg)
  {
    this->wrn_eth_interface_blocked = _arg;
    return *this;
  }
  Type & set__wrn_incorrect_can_data_rcvd(
    const bool & _arg)
  {
    this->wrn_incorrect_can_data_rcvd = _arg;
    return *this;
  }
  Type & set__wrn_int_incorrect_scan_data(
    const bool & _arg)
  {
    this->wrn_int_incorrect_scan_data = _arg;
    return *this;
  }
  Type & set__wrn_eth_unkwn_incomplete_data(
    const bool & _arg)
  {
    this->wrn_eth_unkwn_incomplete_data = _arg;
    return *this;
  }
  Type & set__wrn_incorrect_or_forbidden_cmd_rcvd(
    const bool & _arg)
  {
    this->wrn_incorrect_or_forbidden_cmd_rcvd = _arg;
    return *this;
  }
  Type & set__wrn_memory_access_failure(
    const bool & _arg)
  {
    this->wrn_memory_access_failure = _arg;
    return *this;
  }
  Type & set__wrn_int_overflow(
    const bool & _arg)
  {
    this->wrn_int_overflow = _arg;
    return *this;
  }
  Type & set__wrn_ego_motion_data_missing(
    const bool & _arg)
  {
    this->wrn_ego_motion_data_missing = _arg;
    return *this;
  }
  Type & set__wrn_incorrect_mounting_params(
    const bool & _arg)
  {
    this->wrn_incorrect_mounting_params = _arg;
    return *this;
  }
  Type & set__wrn_no_obj_comp_due_to_scan_freq(
    const bool & _arg)
  {
    this->wrn_no_obj_comp_due_to_scan_freq = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::ErrorWarning_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::ErrorWarning_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ErrorWarning_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ErrorWarning_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ErrorWarning_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ErrorWarning_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ErrorWarning_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ErrorWarning_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ErrorWarning_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ErrorWarning_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__ErrorWarning
    std::shared_ptr<ibeo_msgs::msg::ErrorWarning_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__ErrorWarning
    std::shared_ptr<ibeo_msgs::msg::ErrorWarning_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ErrorWarning_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ibeo_header != other.ibeo_header) {
      return false;
    }
    if (this->err_internal_error != other.err_internal_error) {
      return false;
    }
    if (this->err_motor_1_fault != other.err_motor_1_fault) {
      return false;
    }
    if (this->err_buffer_error_xmt_incomplete != other.err_buffer_error_xmt_incomplete) {
      return false;
    }
    if (this->err_buffer_error_overflow != other.err_buffer_error_overflow) {
      return false;
    }
    if (this->err_apd_over_temperature != other.err_apd_over_temperature) {
      return false;
    }
    if (this->err_apd_under_temperature != other.err_apd_under_temperature) {
      return false;
    }
    if (this->err_apd_temperature_sensor_defect != other.err_apd_temperature_sensor_defect) {
      return false;
    }
    if (this->err_motor_2_fault != other.err_motor_2_fault) {
      return false;
    }
    if (this->err_motor_3_fault != other.err_motor_3_fault) {
      return false;
    }
    if (this->err_motor_4_fault != other.err_motor_4_fault) {
      return false;
    }
    if (this->err_motor_5_fault != other.err_motor_5_fault) {
      return false;
    }
    if (this->err_int_no_scan_data != other.err_int_no_scan_data) {
      return false;
    }
    if (this->err_int_communication_error != other.err_int_communication_error) {
      return false;
    }
    if (this->err_int_incorrect_scan_data != other.err_int_incorrect_scan_data) {
      return false;
    }
    if (this->err_config_fpga_not_configurable != other.err_config_fpga_not_configurable) {
      return false;
    }
    if (this->err_config_incorrect_config_data != other.err_config_incorrect_config_data) {
      return false;
    }
    if (this->err_config_contains_incorrect_params != other.err_config_contains_incorrect_params) {
      return false;
    }
    if (this->err_timeout_data_processing != other.err_timeout_data_processing) {
      return false;
    }
    if (this->err_timeout_env_model_computation_reset != other.err_timeout_env_model_computation_reset) {
      return false;
    }
    if (this->wrn_int_communication_error != other.wrn_int_communication_error) {
      return false;
    }
    if (this->wrn_low_temperature != other.wrn_low_temperature) {
      return false;
    }
    if (this->wrn_high_temperature != other.wrn_high_temperature) {
      return false;
    }
    if (this->wrn_int_motor_1 != other.wrn_int_motor_1) {
      return false;
    }
    if (this->wrn_sync_error != other.wrn_sync_error) {
      return false;
    }
    if (this->wrn_laser_1_start_pulse_missing != other.wrn_laser_1_start_pulse_missing) {
      return false;
    }
    if (this->wrn_laser_2_start_pulse_missing != other.wrn_laser_2_start_pulse_missing) {
      return false;
    }
    if (this->wrn_can_interface_blocked != other.wrn_can_interface_blocked) {
      return false;
    }
    if (this->wrn_eth_interface_blocked != other.wrn_eth_interface_blocked) {
      return false;
    }
    if (this->wrn_incorrect_can_data_rcvd != other.wrn_incorrect_can_data_rcvd) {
      return false;
    }
    if (this->wrn_int_incorrect_scan_data != other.wrn_int_incorrect_scan_data) {
      return false;
    }
    if (this->wrn_eth_unkwn_incomplete_data != other.wrn_eth_unkwn_incomplete_data) {
      return false;
    }
    if (this->wrn_incorrect_or_forbidden_cmd_rcvd != other.wrn_incorrect_or_forbidden_cmd_rcvd) {
      return false;
    }
    if (this->wrn_memory_access_failure != other.wrn_memory_access_failure) {
      return false;
    }
    if (this->wrn_int_overflow != other.wrn_int_overflow) {
      return false;
    }
    if (this->wrn_ego_motion_data_missing != other.wrn_ego_motion_data_missing) {
      return false;
    }
    if (this->wrn_incorrect_mounting_params != other.wrn_incorrect_mounting_params) {
      return false;
    }
    if (this->wrn_no_obj_comp_due_to_scan_freq != other.wrn_no_obj_comp_due_to_scan_freq) {
      return false;
    }
    return true;
  }
  bool operator!=(const ErrorWarning_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ErrorWarning_

// alias to use template instance with default allocator
using ErrorWarning =
  ibeo_msgs::msg::ErrorWarning_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__ERROR_WARNING__STRUCT_HPP_
