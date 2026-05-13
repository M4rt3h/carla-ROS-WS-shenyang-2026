// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle3.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrVehicle3 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrVehicle3 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrVehicle3_
{
  using Type = EsrVehicle3_<ContainerAllocator>;

  explicit EsrVehicle3_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->long_accel_validity = false;
      this->lat_accel_validity = false;
      this->lat_accel = 0.0f;
      this->long_accel = 0.0f;
      this->radar_fov_lr = 0;
      this->radar_fov_mr = 0;
      this->auto_align_disable = false;
      this->radar_height = 0;
      this->serv_align_type = false;
      this->serv_align_enable = false;
      this->aalign_avg_ctr_total = 0;
      this->auto_align_converged = false;
      this->wheel_slip = 0;
      this->serv_align_updates_need = 0;
      this->angle_mounting_offset = 0;
    }
  }

  explicit EsrVehicle3_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->long_accel_validity = false;
      this->lat_accel_validity = false;
      this->lat_accel = 0.0f;
      this->long_accel = 0.0f;
      this->radar_fov_lr = 0;
      this->radar_fov_mr = 0;
      this->auto_align_disable = false;
      this->radar_height = 0;
      this->serv_align_type = false;
      this->serv_align_enable = false;
      this->aalign_avg_ctr_total = 0;
      this->auto_align_converged = false;
      this->wheel_slip = 0;
      this->serv_align_updates_need = 0;
      this->angle_mounting_offset = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _long_accel_validity_type =
    bool;
  _long_accel_validity_type long_accel_validity;
  using _lat_accel_validity_type =
    bool;
  _lat_accel_validity_type lat_accel_validity;
  using _lat_accel_type =
    float;
  _lat_accel_type lat_accel;
  using _long_accel_type =
    float;
  _long_accel_type long_accel;
  using _radar_fov_lr_type =
    uint8_t;
  _radar_fov_lr_type radar_fov_lr;
  using _radar_fov_mr_type =
    uint8_t;
  _radar_fov_mr_type radar_fov_mr;
  using _auto_align_disable_type =
    bool;
  _auto_align_disable_type auto_align_disable;
  using _radar_height_type =
    uint8_t;
  _radar_height_type radar_height;
  using _serv_align_type_type =
    bool;
  _serv_align_type_type serv_align_type;
  using _serv_align_enable_type =
    bool;
  _serv_align_enable_type serv_align_enable;
  using _aalign_avg_ctr_total_type =
    uint16_t;
  _aalign_avg_ctr_total_type aalign_avg_ctr_total;
  using _auto_align_converged_type =
    bool;
  _auto_align_converged_type auto_align_converged;
  using _wheel_slip_type =
    uint8_t;
  _wheel_slip_type wheel_slip;
  using _serv_align_updates_need_type =
    uint8_t;
  _serv_align_updates_need_type serv_align_updates_need;
  using _angle_mounting_offset_type =
    int8_t;
  _angle_mounting_offset_type angle_mounting_offset;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__long_accel_validity(
    const bool & _arg)
  {
    this->long_accel_validity = _arg;
    return *this;
  }
  Type & set__lat_accel_validity(
    const bool & _arg)
  {
    this->lat_accel_validity = _arg;
    return *this;
  }
  Type & set__lat_accel(
    const float & _arg)
  {
    this->lat_accel = _arg;
    return *this;
  }
  Type & set__long_accel(
    const float & _arg)
  {
    this->long_accel = _arg;
    return *this;
  }
  Type & set__radar_fov_lr(
    const uint8_t & _arg)
  {
    this->radar_fov_lr = _arg;
    return *this;
  }
  Type & set__radar_fov_mr(
    const uint8_t & _arg)
  {
    this->radar_fov_mr = _arg;
    return *this;
  }
  Type & set__auto_align_disable(
    const bool & _arg)
  {
    this->auto_align_disable = _arg;
    return *this;
  }
  Type & set__radar_height(
    const uint8_t & _arg)
  {
    this->radar_height = _arg;
    return *this;
  }
  Type & set__serv_align_type(
    const bool & _arg)
  {
    this->serv_align_type = _arg;
    return *this;
  }
  Type & set__serv_align_enable(
    const bool & _arg)
  {
    this->serv_align_enable = _arg;
    return *this;
  }
  Type & set__aalign_avg_ctr_total(
    const uint16_t & _arg)
  {
    this->aalign_avg_ctr_total = _arg;
    return *this;
  }
  Type & set__auto_align_converged(
    const bool & _arg)
  {
    this->auto_align_converged = _arg;
    return *this;
  }
  Type & set__wheel_slip(
    const uint8_t & _arg)
  {
    this->wheel_slip = _arg;
    return *this;
  }
  Type & set__serv_align_updates_need(
    const uint8_t & _arg)
  {
    this->serv_align_updates_need = _arg;
    return *this;
  }
  Type & set__angle_mounting_offset(
    const int8_t & _arg)
  {
    this->angle_mounting_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrVehicle3
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrVehicle3
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle3_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrVehicle3_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->long_accel_validity != other.long_accel_validity) {
      return false;
    }
    if (this->lat_accel_validity != other.lat_accel_validity) {
      return false;
    }
    if (this->lat_accel != other.lat_accel) {
      return false;
    }
    if (this->long_accel != other.long_accel) {
      return false;
    }
    if (this->radar_fov_lr != other.radar_fov_lr) {
      return false;
    }
    if (this->radar_fov_mr != other.radar_fov_mr) {
      return false;
    }
    if (this->auto_align_disable != other.auto_align_disable) {
      return false;
    }
    if (this->radar_height != other.radar_height) {
      return false;
    }
    if (this->serv_align_type != other.serv_align_type) {
      return false;
    }
    if (this->serv_align_enable != other.serv_align_enable) {
      return false;
    }
    if (this->aalign_avg_ctr_total != other.aalign_avg_ctr_total) {
      return false;
    }
    if (this->auto_align_converged != other.auto_align_converged) {
      return false;
    }
    if (this->wheel_slip != other.wheel_slip) {
      return false;
    }
    if (this->serv_align_updates_need != other.serv_align_updates_need) {
      return false;
    }
    if (this->angle_mounting_offset != other.angle_mounting_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrVehicle3_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrVehicle3_

// alias to use template instance with default allocator
using EsrVehicle3 =
  delphi_esr_msgs::msg::EsrVehicle3_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE3__STRUCT_HPP_
