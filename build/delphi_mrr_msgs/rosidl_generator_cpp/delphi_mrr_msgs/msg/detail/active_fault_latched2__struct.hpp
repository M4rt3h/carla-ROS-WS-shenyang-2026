// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__ActiveFaultLatched2 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__ActiveFaultLatched2 __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActiveFaultLatched2_
{
  using Type = ActiveFaultLatched2_<ContainerAllocator>;

  explicit ActiveFaultLatched2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ipma_pcan_data_range_check = false;
      this->ipma_pcan_missing_msg = false;
      this->vin_signal_compare_failure = false;
      this->module_not_configured_error = false;
      this->car_cfg_not_configured_error = false;
    }
  }

  explicit ActiveFaultLatched2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ipma_pcan_data_range_check = false;
      this->ipma_pcan_missing_msg = false;
      this->vin_signal_compare_failure = false;
      this->module_not_configured_error = false;
      this->car_cfg_not_configured_error = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ipma_pcan_data_range_check_type =
    bool;
  _ipma_pcan_data_range_check_type ipma_pcan_data_range_check;
  using _ipma_pcan_missing_msg_type =
    bool;
  _ipma_pcan_missing_msg_type ipma_pcan_missing_msg;
  using _vin_signal_compare_failure_type =
    bool;
  _vin_signal_compare_failure_type vin_signal_compare_failure;
  using _module_not_configured_error_type =
    bool;
  _module_not_configured_error_type module_not_configured_error;
  using _car_cfg_not_configured_error_type =
    bool;
  _car_cfg_not_configured_error_type car_cfg_not_configured_error;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ipma_pcan_data_range_check(
    const bool & _arg)
  {
    this->ipma_pcan_data_range_check = _arg;
    return *this;
  }
  Type & set__ipma_pcan_missing_msg(
    const bool & _arg)
  {
    this->ipma_pcan_missing_msg = _arg;
    return *this;
  }
  Type & set__vin_signal_compare_failure(
    const bool & _arg)
  {
    this->vin_signal_compare_failure = _arg;
    return *this;
  }
  Type & set__module_not_configured_error(
    const bool & _arg)
  {
    this->module_not_configured_error = _arg;
    return *this;
  }
  Type & set__car_cfg_not_configured_error(
    const bool & _arg)
  {
    this->car_cfg_not_configured_error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__ActiveFaultLatched2
    std::shared_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__ActiveFaultLatched2
    std::shared_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActiveFaultLatched2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ipma_pcan_data_range_check != other.ipma_pcan_data_range_check) {
      return false;
    }
    if (this->ipma_pcan_missing_msg != other.ipma_pcan_missing_msg) {
      return false;
    }
    if (this->vin_signal_compare_failure != other.vin_signal_compare_failure) {
      return false;
    }
    if (this->module_not_configured_error != other.module_not_configured_error) {
      return false;
    }
    if (this->car_cfg_not_configured_error != other.car_cfg_not_configured_error) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActiveFaultLatched2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActiveFaultLatched2_

// alias to use template instance with default allocator
using ActiveFaultLatched2 =
  delphi_mrr_msgs::msg::ActiveFaultLatched2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED2__STRUCT_HPP_
