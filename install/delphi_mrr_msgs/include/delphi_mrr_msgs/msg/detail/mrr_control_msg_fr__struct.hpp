// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrControlMsgFR.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrControlMsgFR __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrControlMsgFR __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrControlMsgFR_
{
  using Type = MrrControlMsgFR_<ContainerAllocator>;

  explicit MrrControlMsgFR_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_sensitivity_profile_select = 0;
      this->can_stop_frequency_frml = 0;
      this->can_stop_frequency_frll = 0;
      this->can_prp_factor_frml = 0.0f;
      this->can_prp_factor_frll = 0.0f;
      this->can_desired_sweep_bw_frml = 0;
      this->can_desired_sweep_bw_frll = 0;
    }
  }

  explicit MrrControlMsgFR_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_sensitivity_profile_select = 0;
      this->can_stop_frequency_frml = 0;
      this->can_stop_frequency_frll = 0;
      this->can_prp_factor_frml = 0.0f;
      this->can_prp_factor_frll = 0.0f;
      this->can_desired_sweep_bw_frml = 0;
      this->can_desired_sweep_bw_frll = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_sensitivity_profile_select_type =
    uint8_t;
  _can_sensitivity_profile_select_type can_sensitivity_profile_select;
  using _can_stop_frequency_frml_type =
    uint16_t;
  _can_stop_frequency_frml_type can_stop_frequency_frml;
  using _can_stop_frequency_frll_type =
    uint16_t;
  _can_stop_frequency_frll_type can_stop_frequency_frll;
  using _can_prp_factor_frml_type =
    float;
  _can_prp_factor_frml_type can_prp_factor_frml;
  using _can_prp_factor_frll_type =
    float;
  _can_prp_factor_frll_type can_prp_factor_frll;
  using _can_desired_sweep_bw_frml_type =
    uint8_t;
  _can_desired_sweep_bw_frml_type can_desired_sweep_bw_frml;
  using _can_desired_sweep_bw_frll_type =
    uint8_t;
  _can_desired_sweep_bw_frll_type can_desired_sweep_bw_frll;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_sensitivity_profile_select(
    const uint8_t & _arg)
  {
    this->can_sensitivity_profile_select = _arg;
    return *this;
  }
  Type & set__can_stop_frequency_frml(
    const uint16_t & _arg)
  {
    this->can_stop_frequency_frml = _arg;
    return *this;
  }
  Type & set__can_stop_frequency_frll(
    const uint16_t & _arg)
  {
    this->can_stop_frequency_frll = _arg;
    return *this;
  }
  Type & set__can_prp_factor_frml(
    const float & _arg)
  {
    this->can_prp_factor_frml = _arg;
    return *this;
  }
  Type & set__can_prp_factor_frll(
    const float & _arg)
  {
    this->can_prp_factor_frll = _arg;
    return *this;
  }
  Type & set__can_desired_sweep_bw_frml(
    const uint8_t & _arg)
  {
    this->can_desired_sweep_bw_frml = _arg;
    return *this;
  }
  Type & set__can_desired_sweep_bw_frll(
    const uint8_t & _arg)
  {
    this->can_desired_sweep_bw_frll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrControlMsgFR
    std::shared_ptr<delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrControlMsgFR
    std::shared_ptr<delphi_mrr_msgs::msg::MrrControlMsgFR_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrControlMsgFR_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_sensitivity_profile_select != other.can_sensitivity_profile_select) {
      return false;
    }
    if (this->can_stop_frequency_frml != other.can_stop_frequency_frml) {
      return false;
    }
    if (this->can_stop_frequency_frll != other.can_stop_frequency_frll) {
      return false;
    }
    if (this->can_prp_factor_frml != other.can_prp_factor_frml) {
      return false;
    }
    if (this->can_prp_factor_frll != other.can_prp_factor_frll) {
      return false;
    }
    if (this->can_desired_sweep_bw_frml != other.can_desired_sweep_bw_frml) {
      return false;
    }
    if (this->can_desired_sweep_bw_frll != other.can_desired_sweep_bw_frll) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrControlMsgFR_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrControlMsgFR_

// alias to use template instance with default allocator
using MrrControlMsgFR =
  delphi_mrr_msgs::msg::MrrControlMsgFR_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_CONTROL_MSG_FR__STRUCT_HPP_
