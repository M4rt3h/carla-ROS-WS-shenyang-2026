// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderAlignmentState.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderAlignmentState __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderAlignmentState __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrHeaderAlignmentState_
{
  using Type = MrrHeaderAlignmentState_<ContainerAllocator>;

  explicit MrrHeaderAlignmentState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_auto_align_hangle_qf = 0;
      this->can_alignment_status = 0;
      this->can_alignment_state = 0;
      this->can_auto_align_hangle_ref = 0.0f;
      this->can_auto_align_hangle = 0.0f;
    }
  }

  explicit MrrHeaderAlignmentState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_auto_align_hangle_qf = 0;
      this->can_alignment_status = 0;
      this->can_alignment_state = 0;
      this->can_auto_align_hangle_ref = 0.0f;
      this->can_auto_align_hangle = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_auto_align_hangle_qf_type =
    uint8_t;
  _can_auto_align_hangle_qf_type can_auto_align_hangle_qf;
  using _can_alignment_status_type =
    uint8_t;
  _can_alignment_status_type can_alignment_status;
  using _can_alignment_state_type =
    uint8_t;
  _can_alignment_state_type can_alignment_state;
  using _can_auto_align_hangle_ref_type =
    float;
  _can_auto_align_hangle_ref_type can_auto_align_hangle_ref;
  using _can_auto_align_hangle_type =
    float;
  _can_auto_align_hangle_type can_auto_align_hangle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_auto_align_hangle_qf(
    const uint8_t & _arg)
  {
    this->can_auto_align_hangle_qf = _arg;
    return *this;
  }
  Type & set__can_alignment_status(
    const uint8_t & _arg)
  {
    this->can_alignment_status = _arg;
    return *this;
  }
  Type & set__can_alignment_state(
    const uint8_t & _arg)
  {
    this->can_alignment_state = _arg;
    return *this;
  }
  Type & set__can_auto_align_hangle_ref(
    const float & _arg)
  {
    this->can_auto_align_hangle_ref = _arg;
    return *this;
  }
  Type & set__can_auto_align_hangle(
    const float & _arg)
  {
    this->can_auto_align_hangle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderAlignmentState
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderAlignmentState
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrHeaderAlignmentState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_auto_align_hangle_qf != other.can_auto_align_hangle_qf) {
      return false;
    }
    if (this->can_alignment_status != other.can_alignment_status) {
      return false;
    }
    if (this->can_alignment_state != other.can_alignment_state) {
      return false;
    }
    if (this->can_auto_align_hangle_ref != other.can_auto_align_hangle_ref) {
      return false;
    }
    if (this->can_auto_align_hangle != other.can_auto_align_hangle) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrHeaderAlignmentState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrHeaderAlignmentState_

// alias to use template instance with default allocator
using MrrHeaderAlignmentState =
  delphi_mrr_msgs::msg::MrrHeaderAlignmentState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_ALIGNMENT_STATE__STRUCT_HPP_
