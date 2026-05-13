// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusSwVersion.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrStatusSwVersion __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrStatusSwVersion __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrStatusSwVersion_
{
  using Type = MrrStatusSwVersion_<ContainerAllocator>;

  explicit MrrStatusSwVersion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_pbl_field_revision = 0;
      this->can_pbl_promote_revision = 0;
      this->can_sw_field_revision = 0;
      this->can_sw_promote_revision = 0;
      this->can_sw_release_revision = 0;
      this->can_pbl_release_revision = 0;
    }
  }

  explicit MrrStatusSwVersion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_pbl_field_revision = 0;
      this->can_pbl_promote_revision = 0;
      this->can_sw_field_revision = 0;
      this->can_sw_promote_revision = 0;
      this->can_sw_release_revision = 0;
      this->can_pbl_release_revision = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_pbl_field_revision_type =
    uint8_t;
  _can_pbl_field_revision_type can_pbl_field_revision;
  using _can_pbl_promote_revision_type =
    uint8_t;
  _can_pbl_promote_revision_type can_pbl_promote_revision;
  using _can_sw_field_revision_type =
    uint8_t;
  _can_sw_field_revision_type can_sw_field_revision;
  using _can_sw_promote_revision_type =
    uint8_t;
  _can_sw_promote_revision_type can_sw_promote_revision;
  using _can_sw_release_revision_type =
    uint8_t;
  _can_sw_release_revision_type can_sw_release_revision;
  using _can_pbl_release_revision_type =
    uint8_t;
  _can_pbl_release_revision_type can_pbl_release_revision;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_pbl_field_revision(
    const uint8_t & _arg)
  {
    this->can_pbl_field_revision = _arg;
    return *this;
  }
  Type & set__can_pbl_promote_revision(
    const uint8_t & _arg)
  {
    this->can_pbl_promote_revision = _arg;
    return *this;
  }
  Type & set__can_sw_field_revision(
    const uint8_t & _arg)
  {
    this->can_sw_field_revision = _arg;
    return *this;
  }
  Type & set__can_sw_promote_revision(
    const uint8_t & _arg)
  {
    this->can_sw_promote_revision = _arg;
    return *this;
  }
  Type & set__can_sw_release_revision(
    const uint8_t & _arg)
  {
    this->can_sw_release_revision = _arg;
    return *this;
  }
  Type & set__can_pbl_release_revision(
    const uint8_t & _arg)
  {
    this->can_pbl_release_revision = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrStatusSwVersion
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrStatusSwVersion
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusSwVersion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrStatusSwVersion_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_pbl_field_revision != other.can_pbl_field_revision) {
      return false;
    }
    if (this->can_pbl_promote_revision != other.can_pbl_promote_revision) {
      return false;
    }
    if (this->can_sw_field_revision != other.can_sw_field_revision) {
      return false;
    }
    if (this->can_sw_promote_revision != other.can_sw_promote_revision) {
      return false;
    }
    if (this->can_sw_release_revision != other.can_sw_release_revision) {
      return false;
    }
    if (this->can_pbl_release_revision != other.can_pbl_release_revision) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrStatusSwVersion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrStatusSwVersion_

// alias to use template instance with default allocator
using MrrStatusSwVersion =
  delphi_mrr_msgs::msg::MrrStatusSwVersion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_SW_VERSION__STRUCT_HPP_
