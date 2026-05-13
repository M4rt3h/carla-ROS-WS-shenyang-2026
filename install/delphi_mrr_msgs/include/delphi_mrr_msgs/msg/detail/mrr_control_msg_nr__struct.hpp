// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgNR.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrControlMsgNR __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrControlMsgNR __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrControlMsgNR_
{
  using Type = MrrControlMsgNR_<ContainerAllocator>;

  explicit MrrControlMsgNR_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_stop_frequency_nrml = 0;
      this->can_prp_factor_nrml = 0;
      this->can_desired_sweep_bw_nrml = 0;
      this->can_radiation_ctrl = false;
      this->can_stop_frequency_nrll = 0;
      this->can_prp_factor_nrll = 0;
      this->can_desired_sweep_bw_nrll = 0;
    }
  }

  explicit MrrControlMsgNR_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_stop_frequency_nrml = 0;
      this->can_prp_factor_nrml = 0;
      this->can_desired_sweep_bw_nrml = 0;
      this->can_radiation_ctrl = false;
      this->can_stop_frequency_nrll = 0;
      this->can_prp_factor_nrll = 0;
      this->can_desired_sweep_bw_nrll = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_stop_frequency_nrml_type =
    uint16_t;
  _can_stop_frequency_nrml_type can_stop_frequency_nrml;
  using _can_prp_factor_nrml_type =
    uint16_t;
  _can_prp_factor_nrml_type can_prp_factor_nrml;
  using _can_desired_sweep_bw_nrml_type =
    uint8_t;
  _can_desired_sweep_bw_nrml_type can_desired_sweep_bw_nrml;
  using _can_radiation_ctrl_type =
    bool;
  _can_radiation_ctrl_type can_radiation_ctrl;
  using _can_stop_frequency_nrll_type =
    uint16_t;
  _can_stop_frequency_nrll_type can_stop_frequency_nrll;
  using _can_prp_factor_nrll_type =
    uint16_t;
  _can_prp_factor_nrll_type can_prp_factor_nrll;
  using _can_desired_sweep_bw_nrll_type =
    uint8_t;
  _can_desired_sweep_bw_nrll_type can_desired_sweep_bw_nrll;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_stop_frequency_nrml(
    const uint16_t & _arg)
  {
    this->can_stop_frequency_nrml = _arg;
    return *this;
  }
  Type & set__can_prp_factor_nrml(
    const uint16_t & _arg)
  {
    this->can_prp_factor_nrml = _arg;
    return *this;
  }
  Type & set__can_desired_sweep_bw_nrml(
    const uint8_t & _arg)
  {
    this->can_desired_sweep_bw_nrml = _arg;
    return *this;
  }
  Type & set__can_radiation_ctrl(
    const bool & _arg)
  {
    this->can_radiation_ctrl = _arg;
    return *this;
  }
  Type & set__can_stop_frequency_nrll(
    const uint16_t & _arg)
  {
    this->can_stop_frequency_nrll = _arg;
    return *this;
  }
  Type & set__can_prp_factor_nrll(
    const uint16_t & _arg)
  {
    this->can_prp_factor_nrll = _arg;
    return *this;
  }
  Type & set__can_desired_sweep_bw_nrll(
    const uint8_t & _arg)
  {
    this->can_desired_sweep_bw_nrll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrControlMsgNR
    std::shared_ptr<delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrControlMsgNR
    std::shared_ptr<delphi_mrr_msgs::msg::MrrControlMsgNR_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrControlMsgNR_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_stop_frequency_nrml != other.can_stop_frequency_nrml) {
      return false;
    }
    if (this->can_prp_factor_nrml != other.can_prp_factor_nrml) {
      return false;
    }
    if (this->can_desired_sweep_bw_nrml != other.can_desired_sweep_bw_nrml) {
      return false;
    }
    if (this->can_radiation_ctrl != other.can_radiation_ctrl) {
      return false;
    }
    if (this->can_stop_frequency_nrll != other.can_stop_frequency_nrll) {
      return false;
    }
    if (this->can_prp_factor_nrll != other.can_prp_factor_nrll) {
      return false;
    }
    if (this->can_desired_sweep_bw_nrll != other.can_desired_sweep_bw_nrll) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrControlMsgNR_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrControlMsgNR_

// alias to use template instance with default allocator
using MrrControlMsgNR =
  delphi_mrr_msgs::msg::MrrControlMsgNR_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_NR__STRUCT_HPP_
