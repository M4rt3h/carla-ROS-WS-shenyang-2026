// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_srr_msgs:msg/SrrFeatureSwVersion.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__STRUCT_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__STRUCT_HPP_

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
# define DEPRECATED__delphi_srr_msgs__msg__SrrFeatureSwVersion __attribute__((deprecated))
#else
# define DEPRECATED__delphi_srr_msgs__msg__SrrFeatureSwVersion __declspec(deprecated)
#endif

namespace delphi_srr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SrrFeatureSwVersion_
{
  using Type = SrrFeatureSwVersion_<ContainerAllocator>;

  explicit SrrFeatureSwVersion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lcma_sw_version = 0;
      this->cta_sw_version = 0;
    }
  }

  explicit SrrFeatureSwVersion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lcma_sw_version = 0;
      this->cta_sw_version = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lcma_sw_version_type =
    uint8_t;
  _lcma_sw_version_type lcma_sw_version;
  using _cta_sw_version_type =
    uint8_t;
  _cta_sw_version_type cta_sw_version;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lcma_sw_version(
    const uint8_t & _arg)
  {
    this->lcma_sw_version = _arg;
    return *this;
  }
  Type & set__cta_sw_version(
    const uint8_t & _arg)
  {
    this->cta_sw_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrFeatureSwVersion
    std::shared_ptr<delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrFeatureSwVersion
    std::shared_ptr<delphi_srr_msgs::msg::SrrFeatureSwVersion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrrFeatureSwVersion_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lcma_sw_version != other.lcma_sw_version) {
      return false;
    }
    if (this->cta_sw_version != other.cta_sw_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrrFeatureSwVersion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrrFeatureSwVersion_

// alias to use template instance with default allocator
using SrrFeatureSwVersion =
  delphi_srr_msgs::msg::SrrFeatureSwVersion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_SW_VERSION__STRUCT_HPP_
