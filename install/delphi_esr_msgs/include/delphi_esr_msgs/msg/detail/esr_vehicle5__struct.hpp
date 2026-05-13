// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle5.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrVehicle5 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrVehicle5 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrVehicle5_
{
  using Type = EsrVehicle5_<ContainerAllocator>;

  explicit EsrVehicle5_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->oversteer_understeer = 0;
      this->yaw_rate_bias_shift = false;
      this->beamwidth_vert = 0.0f;
      this->funnel_offset_left = 0.0f;
      this->funnel_offset_right = 0.0f;
      this->cw_blockage_threshold = 0.0f;
      this->distance_rear_axle = 0;
      this->wheelbase = 0;
      this->steering_gear_ratio = 0.0f;
    }
  }

  explicit EsrVehicle5_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->oversteer_understeer = 0;
      this->yaw_rate_bias_shift = false;
      this->beamwidth_vert = 0.0f;
      this->funnel_offset_left = 0.0f;
      this->funnel_offset_right = 0.0f;
      this->cw_blockage_threshold = 0.0f;
      this->distance_rear_axle = 0;
      this->wheelbase = 0;
      this->steering_gear_ratio = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _oversteer_understeer_type =
    int8_t;
  _oversteer_understeer_type oversteer_understeer;
  using _yaw_rate_bias_shift_type =
    bool;
  _yaw_rate_bias_shift_type yaw_rate_bias_shift;
  using _beamwidth_vert_type =
    float;
  _beamwidth_vert_type beamwidth_vert;
  using _funnel_offset_left_type =
    float;
  _funnel_offset_left_type funnel_offset_left;
  using _funnel_offset_right_type =
    float;
  _funnel_offset_right_type funnel_offset_right;
  using _cw_blockage_threshold_type =
    float;
  _cw_blockage_threshold_type cw_blockage_threshold;
  using _distance_rear_axle_type =
    uint16_t;
  _distance_rear_axle_type distance_rear_axle;
  using _wheelbase_type =
    uint16_t;
  _wheelbase_type wheelbase;
  using _steering_gear_ratio_type =
    float;
  _steering_gear_ratio_type steering_gear_ratio;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__oversteer_understeer(
    const int8_t & _arg)
  {
    this->oversteer_understeer = _arg;
    return *this;
  }
  Type & set__yaw_rate_bias_shift(
    const bool & _arg)
  {
    this->yaw_rate_bias_shift = _arg;
    return *this;
  }
  Type & set__beamwidth_vert(
    const float & _arg)
  {
    this->beamwidth_vert = _arg;
    return *this;
  }
  Type & set__funnel_offset_left(
    const float & _arg)
  {
    this->funnel_offset_left = _arg;
    return *this;
  }
  Type & set__funnel_offset_right(
    const float & _arg)
  {
    this->funnel_offset_right = _arg;
    return *this;
  }
  Type & set__cw_blockage_threshold(
    const float & _arg)
  {
    this->cw_blockage_threshold = _arg;
    return *this;
  }
  Type & set__distance_rear_axle(
    const uint16_t & _arg)
  {
    this->distance_rear_axle = _arg;
    return *this;
  }
  Type & set__wheelbase(
    const uint16_t & _arg)
  {
    this->wheelbase = _arg;
    return *this;
  }
  Type & set__steering_gear_ratio(
    const float & _arg)
  {
    this->steering_gear_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrVehicle5
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrVehicle5
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle5_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrVehicle5_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->oversteer_understeer != other.oversteer_understeer) {
      return false;
    }
    if (this->yaw_rate_bias_shift != other.yaw_rate_bias_shift) {
      return false;
    }
    if (this->beamwidth_vert != other.beamwidth_vert) {
      return false;
    }
    if (this->funnel_offset_left != other.funnel_offset_left) {
      return false;
    }
    if (this->funnel_offset_right != other.funnel_offset_right) {
      return false;
    }
    if (this->cw_blockage_threshold != other.cw_blockage_threshold) {
      return false;
    }
    if (this->distance_rear_axle != other.distance_rear_axle) {
      return false;
    }
    if (this->wheelbase != other.wheelbase) {
      return false;
    }
    if (this->steering_gear_ratio != other.steering_gear_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrVehicle5_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrVehicle5_

// alias to use template instance with default allocator
using EsrVehicle5 =
  delphi_esr_msgs::msg::EsrVehicle5_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE5__STRUCT_HPP_
