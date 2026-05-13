// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_srr_msgs:msg/SrrStatus1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS1__STRUCT_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS1__STRUCT_HPP_

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
# define DEPRECATED__delphi_srr_msgs__msg__SrrStatus1 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_srr_msgs__msg__SrrStatus1 __declspec(deprecated)
#endif

namespace delphi_srr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SrrStatus1_
{
  using Type = SrrStatus1_<ContainerAllocator>;

  explicit SrrStatus1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_look_type = false;
      this->can_tx_dsp_timestamp = 0ul;
      this->can_tx_yaw_rate_calc = 0.0f;
      this->can_tx_vehicle_speed_calc = 0.0f;
      this->can_tx_scan_index = 0;
      this->can_tx_curvature = 0.0f;
    }
  }

  explicit SrrStatus1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_tx_look_type = false;
      this->can_tx_dsp_timestamp = 0ul;
      this->can_tx_yaw_rate_calc = 0.0f;
      this->can_tx_vehicle_speed_calc = 0.0f;
      this->can_tx_scan_index = 0;
      this->can_tx_curvature = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_tx_look_type_type =
    bool;
  _can_tx_look_type_type can_tx_look_type;
  using _can_tx_dsp_timestamp_type =
    uint32_t;
  _can_tx_dsp_timestamp_type can_tx_dsp_timestamp;
  using _can_tx_yaw_rate_calc_type =
    float;
  _can_tx_yaw_rate_calc_type can_tx_yaw_rate_calc;
  using _can_tx_vehicle_speed_calc_type =
    float;
  _can_tx_vehicle_speed_calc_type can_tx_vehicle_speed_calc;
  using _can_tx_scan_index_type =
    uint16_t;
  _can_tx_scan_index_type can_tx_scan_index;
  using _can_tx_curvature_type =
    float;
  _can_tx_curvature_type can_tx_curvature;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_tx_look_type(
    const bool & _arg)
  {
    this->can_tx_look_type = _arg;
    return *this;
  }
  Type & set__can_tx_dsp_timestamp(
    const uint32_t & _arg)
  {
    this->can_tx_dsp_timestamp = _arg;
    return *this;
  }
  Type & set__can_tx_yaw_rate_calc(
    const float & _arg)
  {
    this->can_tx_yaw_rate_calc = _arg;
    return *this;
  }
  Type & set__can_tx_vehicle_speed_calc(
    const float & _arg)
  {
    this->can_tx_vehicle_speed_calc = _arg;
    return *this;
  }
  Type & set__can_tx_scan_index(
    const uint16_t & _arg)
  {
    this->can_tx_scan_index = _arg;
    return *this;
  }
  Type & set__can_tx_curvature(
    const float & _arg)
  {
    this->can_tx_curvature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrStatus1
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrStatus1
    std::shared_ptr<delphi_srr_msgs::msg::SrrStatus1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrrStatus1_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_tx_look_type != other.can_tx_look_type) {
      return false;
    }
    if (this->can_tx_dsp_timestamp != other.can_tx_dsp_timestamp) {
      return false;
    }
    if (this->can_tx_yaw_rate_calc != other.can_tx_yaw_rate_calc) {
      return false;
    }
    if (this->can_tx_vehicle_speed_calc != other.can_tx_vehicle_speed_calc) {
      return false;
    }
    if (this->can_tx_scan_index != other.can_tx_scan_index) {
      return false;
    }
    if (this->can_tx_curvature != other.can_tx_curvature) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrrStatus1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrrStatus1_

// alias to use template instance with default allocator
using SrrStatus1 =
  delphi_srr_msgs::msg::SrrStatus1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_STATUS1__STRUCT_HPP_
