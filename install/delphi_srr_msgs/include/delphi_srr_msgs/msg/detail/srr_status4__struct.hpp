// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__STRUCT_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__STRUCT_HPP_

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
# define DEPRECATED__delphi_srr_msgs__msg__SrrStatus4 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_srr_msgs__msg__SrrStatus4 __declspec(deprecated)
#endif

namespace delphi_srr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SrrStatus4_
{
  using Type = SrrStatus4_<ContainerAllocator>;

  explicit SrrStatus4_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_sw_version_host = 0;
      this->can_tx_path_id_blis_ignore = 0;
      this->can_tx_path_id_blis = 0;
      this->can_tx_angle_misalignment = 0.0f;
      this->can_tx_auto_align_angle = 0.0f;
    }
  }

  explicit SrrStatus4_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_sw_version_host = 0;
      this->can_tx_path_id_blis_ignore = 0;
      this->can_tx_path_id_blis = 0;
      this->can_tx_angle_misalignment = 0.0f;
      this->can_tx_auto_align_angle = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_tx_sw_version_host_type =
    uint16_t;
  _can_tx_sw_version_host_type can_tx_sw_version_host;
  using _can_tx_path_id_blis_ignore_type =
    uint8_t;
  _can_tx_path_id_blis_ignore_type can_tx_path_id_blis_ignore;
  using _can_tx_path_id_blis_type =
    uint8_t;
  _can_tx_path_id_blis_type can_tx_path_id_blis;
  using _can_tx_angle_misalignment_type =
    float;
  _can_tx_angle_misalignment_type can_tx_angle_misalignment;
  using _can_tx_auto_align_angle_type =
    float;
  _can_tx_auto_align_angle_type can_tx_auto_align_angle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_tx_sw_version_host(
    const uint16_t & _arg)
  {
    this->can_tx_sw_version_host = _arg;
    return *this;
  }
  Type & set__can_tx_path_id_blis_ignore(
    const uint8_t & _arg)
  {
    this->can_tx_path_id_blis_ignore = _arg;
    return *this;
  }
  Type & set__can_tx_path_id_blis(
    const uint8_t & _arg)
  {
    this->can_tx_path_id_blis = _arg;
    return *this;
  }
  Type & set__can_tx_angle_misalignment(
    const float & _arg)
  {
    this->can_tx_angle_misalignment = _arg;
    return *this;
  }
  Type & set__can_tx_auto_align_angle(
    const float & _arg)
  {
    this->can_tx_auto_align_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrStatus4
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrStatus4
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus4_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrrStatus4_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_tx_sw_version_host != other.can_tx_sw_version_host) {
      return false;
    }
    if (this->can_tx_path_id_blis_ignore != other.can_tx_path_id_blis_ignore) {
      return false;
    }
    if (this->can_tx_path_id_blis != other.can_tx_path_id_blis) {
      return false;
    }
    if (this->can_tx_angle_misalignment != other.can_tx_angle_misalignment) {
      return false;
    }
    if (this->can_tx_auto_align_angle != other.can_tx_auto_align_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrrStatus4_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrrStatus4_

// alias to use template instance with default allocator
using SrrStatus4 =
  delphi_srr_msgs::msg::SrrStatus4_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS4__STRUCT_HPP_
