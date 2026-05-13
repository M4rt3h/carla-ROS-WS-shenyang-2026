// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/AhbcGradual.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__STRUCT_HPP_

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
# define DEPRECATED__mobileye_560_660_msgs__msg__AhbcGradual __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__AhbcGradual __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AhbcGradual_
{
  using Type = AhbcGradual_<ContainerAllocator>;

  explicit AhbcGradual_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->boundary_domain_bottom_non_glare_hlb = 0.0f;
      this->boundary_domain_non_glare_left_hand_hlb = 0.0f;
      this->boundary_domain_non_glare_right_hand_hlb = 0.0f;
      this->object_distance_hlb = 0;
      this->status_boundary_domain_bottom_non_glare_hlb = 0;
      this->status_boundary_domain_non_glare_left_hand_hlb = 0;
      this->status_boundary_domain_non_glare_right_hand_hlb = 0;
      this->status_object_distance_hlb = 0;
      this->left_target_change = false;
      this->right_target_change = false;
      this->too_many_cars = false;
      this->busy_scene = false;
    }
  }

  explicit AhbcGradual_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->boundary_domain_bottom_non_glare_hlb = 0.0f;
      this->boundary_domain_non_glare_left_hand_hlb = 0.0f;
      this->boundary_domain_non_glare_right_hand_hlb = 0.0f;
      this->object_distance_hlb = 0;
      this->status_boundary_domain_bottom_non_glare_hlb = 0;
      this->status_boundary_domain_non_glare_left_hand_hlb = 0;
      this->status_boundary_domain_non_glare_right_hand_hlb = 0;
      this->status_object_distance_hlb = 0;
      this->left_target_change = false;
      this->right_target_change = false;
      this->too_many_cars = false;
      this->busy_scene = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _boundary_domain_bottom_non_glare_hlb_type =
    float;
  _boundary_domain_bottom_non_glare_hlb_type boundary_domain_bottom_non_glare_hlb;
  using _boundary_domain_non_glare_left_hand_hlb_type =
    float;
  _boundary_domain_non_glare_left_hand_hlb_type boundary_domain_non_glare_left_hand_hlb;
  using _boundary_domain_non_glare_right_hand_hlb_type =
    float;
  _boundary_domain_non_glare_right_hand_hlb_type boundary_domain_non_glare_right_hand_hlb;
  using _object_distance_hlb_type =
    uint16_t;
  _object_distance_hlb_type object_distance_hlb;
  using _status_boundary_domain_bottom_non_glare_hlb_type =
    uint8_t;
  _status_boundary_domain_bottom_non_glare_hlb_type status_boundary_domain_bottom_non_glare_hlb;
  using _status_boundary_domain_non_glare_left_hand_hlb_type =
    uint8_t;
  _status_boundary_domain_non_glare_left_hand_hlb_type status_boundary_domain_non_glare_left_hand_hlb;
  using _status_boundary_domain_non_glare_right_hand_hlb_type =
    uint8_t;
  _status_boundary_domain_non_glare_right_hand_hlb_type status_boundary_domain_non_glare_right_hand_hlb;
  using _status_object_distance_hlb_type =
    uint8_t;
  _status_object_distance_hlb_type status_object_distance_hlb;
  using _left_target_change_type =
    bool;
  _left_target_change_type left_target_change;
  using _right_target_change_type =
    bool;
  _right_target_change_type right_target_change;
  using _too_many_cars_type =
    bool;
  _too_many_cars_type too_many_cars;
  using _busy_scene_type =
    bool;
  _busy_scene_type busy_scene;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__boundary_domain_bottom_non_glare_hlb(
    const float & _arg)
  {
    this->boundary_domain_bottom_non_glare_hlb = _arg;
    return *this;
  }
  Type & set__boundary_domain_non_glare_left_hand_hlb(
    const float & _arg)
  {
    this->boundary_domain_non_glare_left_hand_hlb = _arg;
    return *this;
  }
  Type & set__boundary_domain_non_glare_right_hand_hlb(
    const float & _arg)
  {
    this->boundary_domain_non_glare_right_hand_hlb = _arg;
    return *this;
  }
  Type & set__object_distance_hlb(
    const uint16_t & _arg)
  {
    this->object_distance_hlb = _arg;
    return *this;
  }
  Type & set__status_boundary_domain_bottom_non_glare_hlb(
    const uint8_t & _arg)
  {
    this->status_boundary_domain_bottom_non_glare_hlb = _arg;
    return *this;
  }
  Type & set__status_boundary_domain_non_glare_left_hand_hlb(
    const uint8_t & _arg)
  {
    this->status_boundary_domain_non_glare_left_hand_hlb = _arg;
    return *this;
  }
  Type & set__status_boundary_domain_non_glare_right_hand_hlb(
    const uint8_t & _arg)
  {
    this->status_boundary_domain_non_glare_right_hand_hlb = _arg;
    return *this;
  }
  Type & set__status_object_distance_hlb(
    const uint8_t & _arg)
  {
    this->status_object_distance_hlb = _arg;
    return *this;
  }
  Type & set__left_target_change(
    const bool & _arg)
  {
    this->left_target_change = _arg;
    return *this;
  }
  Type & set__right_target_change(
    const bool & _arg)
  {
    this->right_target_change = _arg;
    return *this;
  }
  Type & set__too_many_cars(
    const bool & _arg)
  {
    this->too_many_cars = _arg;
    return *this;
  }
  Type & set__busy_scene(
    const bool & _arg)
  {
    this->busy_scene = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__AhbcGradual
    std::shared_ptr<mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__AhbcGradual
    std::shared_ptr<mobileye_560_660_msgs::msg::AhbcGradual_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AhbcGradual_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->boundary_domain_bottom_non_glare_hlb != other.boundary_domain_bottom_non_glare_hlb) {
      return false;
    }
    if (this->boundary_domain_non_glare_left_hand_hlb != other.boundary_domain_non_glare_left_hand_hlb) {
      return false;
    }
    if (this->boundary_domain_non_glare_right_hand_hlb != other.boundary_domain_non_glare_right_hand_hlb) {
      return false;
    }
    if (this->object_distance_hlb != other.object_distance_hlb) {
      return false;
    }
    if (this->status_boundary_domain_bottom_non_glare_hlb != other.status_boundary_domain_bottom_non_glare_hlb) {
      return false;
    }
    if (this->status_boundary_domain_non_glare_left_hand_hlb != other.status_boundary_domain_non_glare_left_hand_hlb) {
      return false;
    }
    if (this->status_boundary_domain_non_glare_right_hand_hlb != other.status_boundary_domain_non_glare_right_hand_hlb) {
      return false;
    }
    if (this->status_object_distance_hlb != other.status_object_distance_hlb) {
      return false;
    }
    if (this->left_target_change != other.left_target_change) {
      return false;
    }
    if (this->right_target_change != other.right_target_change) {
      return false;
    }
    if (this->too_many_cars != other.too_many_cars) {
      return false;
    }
    if (this->busy_scene != other.busy_scene) {
      return false;
    }
    return true;
  }
  bool operator!=(const AhbcGradual_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AhbcGradual_

// alias to use template instance with default allocator
using AhbcGradual =
  mobileye_560_660_msgs::msg::AhbcGradual_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AHBC_GRADUAL__STRUCT_HPP_
