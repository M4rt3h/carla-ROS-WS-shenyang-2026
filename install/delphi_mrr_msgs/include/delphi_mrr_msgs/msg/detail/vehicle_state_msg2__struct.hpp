// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg2.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg2 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg2 __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStateMsg2_
{
  using Type = VehicleStateMsg2_<ContainerAllocator>;

  explicit VehicleStateMsg2_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fsm_yaw_rate_valid = false;
      this->fsm_yaw_rate = 0.0f;
      this->can_vehicle_index_4fa = 0;
      this->fsm_vehicle_velocity = 0.0f;
      this->can_steering_whl_angle_qf = false;
      this->fsm_vehicle_velocity_valid = false;
      this->can_steering_whl_angle = 0.0f;
    }
  }

  explicit VehicleStateMsg2_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fsm_yaw_rate_valid = false;
      this->fsm_yaw_rate = 0.0f;
      this->can_vehicle_index_4fa = 0;
      this->fsm_vehicle_velocity = 0.0f;
      this->can_steering_whl_angle_qf = false;
      this->fsm_vehicle_velocity_valid = false;
      this->can_steering_whl_angle = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fsm_yaw_rate_valid_type =
    bool;
  _fsm_yaw_rate_valid_type fsm_yaw_rate_valid;
  using _fsm_yaw_rate_type =
    float;
  _fsm_yaw_rate_type fsm_yaw_rate;
  using _can_vehicle_index_4fa_type =
    uint16_t;
  _can_vehicle_index_4fa_type can_vehicle_index_4fa;
  using _fsm_vehicle_velocity_type =
    float;
  _fsm_vehicle_velocity_type fsm_vehicle_velocity;
  using _can_steering_whl_angle_qf_type =
    bool;
  _can_steering_whl_angle_qf_type can_steering_whl_angle_qf;
  using _fsm_vehicle_velocity_valid_type =
    bool;
  _fsm_vehicle_velocity_valid_type fsm_vehicle_velocity_valid;
  using _can_steering_whl_angle_type =
    float;
  _can_steering_whl_angle_type can_steering_whl_angle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fsm_yaw_rate_valid(
    const bool & _arg)
  {
    this->fsm_yaw_rate_valid = _arg;
    return *this;
  }
  Type & set__fsm_yaw_rate(
    const float & _arg)
  {
    this->fsm_yaw_rate = _arg;
    return *this;
  }
  Type & set__can_vehicle_index_4fa(
    const uint16_t & _arg)
  {
    this->can_vehicle_index_4fa = _arg;
    return *this;
  }
  Type & set__fsm_vehicle_velocity(
    const float & _arg)
  {
    this->fsm_vehicle_velocity = _arg;
    return *this;
  }
  Type & set__can_steering_whl_angle_qf(
    const bool & _arg)
  {
    this->can_steering_whl_angle_qf = _arg;
    return *this;
  }
  Type & set__fsm_vehicle_velocity_valid(
    const bool & _arg)
  {
    this->fsm_vehicle_velocity_valid = _arg;
    return *this;
  }
  Type & set__can_steering_whl_angle(
    const float & _arg)
  {
    this->can_steering_whl_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg2
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg2
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg2_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStateMsg2_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fsm_yaw_rate_valid != other.fsm_yaw_rate_valid) {
      return false;
    }
    if (this->fsm_yaw_rate != other.fsm_yaw_rate) {
      return false;
    }
    if (this->can_vehicle_index_4fa != other.can_vehicle_index_4fa) {
      return false;
    }
    if (this->fsm_vehicle_velocity != other.fsm_vehicle_velocity) {
      return false;
    }
    if (this->can_steering_whl_angle_qf != other.can_steering_whl_angle_qf) {
      return false;
    }
    if (this->fsm_vehicle_velocity_valid != other.fsm_vehicle_velocity_valid) {
      return false;
    }
    if (this->can_steering_whl_angle != other.can_steering_whl_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStateMsg2_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStateMsg2_

// alias to use template instance with default allocator
using VehicleStateMsg2 =
  delphi_mrr_msgs::msg::VehicleStateMsg2_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG2__STRUCT_HPP_
