// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg3 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg3 __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStateMsg3_
{
  using Type = VehicleStateMsg3_<ContainerAllocator>;

  explicit VehicleStateMsg3_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_rate_reference_valid = false;
      this->yaw_rate_reference = 0.0f;
      this->can_veh_long_accel_qf = 0;
      this->can_veh_long_accel = 0.0f;
    }
  }

  explicit VehicleStateMsg3_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_rate_reference_valid = false;
      this->yaw_rate_reference = 0.0f;
      this->can_veh_long_accel_qf = 0;
      this->can_veh_long_accel = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _yaw_rate_reference_valid_type =
    bool;
  _yaw_rate_reference_valid_type yaw_rate_reference_valid;
  using _yaw_rate_reference_type =
    float;
  _yaw_rate_reference_type yaw_rate_reference;
  using _can_veh_long_accel_qf_type =
    uint8_t;
  _can_veh_long_accel_qf_type can_veh_long_accel_qf;
  using _can_veh_long_accel_type =
    float;
  _can_veh_long_accel_type can_veh_long_accel;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__yaw_rate_reference_valid(
    const bool & _arg)
  {
    this->yaw_rate_reference_valid = _arg;
    return *this;
  }
  Type & set__yaw_rate_reference(
    const float & _arg)
  {
    this->yaw_rate_reference = _arg;
    return *this;
  }
  Type & set__can_veh_long_accel_qf(
    const uint8_t & _arg)
  {
    this->can_veh_long_accel_qf = _arg;
    return *this;
  }
  Type & set__can_veh_long_accel(
    const float & _arg)
  {
    this->can_veh_long_accel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg3
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg3
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg3_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStateMsg3_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->yaw_rate_reference_valid != other.yaw_rate_reference_valid) {
      return false;
    }
    if (this->yaw_rate_reference != other.yaw_rate_reference) {
      return false;
    }
    if (this->can_veh_long_accel_qf != other.can_veh_long_accel_qf) {
      return false;
    }
    if (this->can_veh_long_accel != other.can_veh_long_accel) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStateMsg3_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStateMsg3_

// alias to use template instance with default allocator
using VehicleStateMsg3 =
  delphi_mrr_msgs::msg::VehicleStateMsg3_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG3__STRUCT_HPP_
