// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/TsrVisionOnly.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR_VISION_ONLY__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR_VISION_ONLY__STRUCT_HPP_

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
# define DEPRECATED__mobileye_560_660_msgs__msg__TsrVisionOnly __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__TsrVisionOnly __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TsrVisionOnly_
{
  using Type = TsrVisionOnly_<ContainerAllocator>;

  explicit TsrVisionOnly_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vision_only_sign_type_display1 = 0;
      this->vision_only_supplementary_sign_type_display1 = 0;
      this->vision_only_sign_type_display2 = 0;
      this->vision_only_supplementary_sign_type_display2 = 0;
      this->vision_only_sign_type_display3 = 0;
      this->vision_only_supplementary_sign_type_display3 = 0;
      this->vision_only_sign_type_display4 = 0;
      this->vision_only_supplementary_sign_type_display4 = 0;
    }
  }

  explicit TsrVisionOnly_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vision_only_sign_type_display1 = 0;
      this->vision_only_supplementary_sign_type_display1 = 0;
      this->vision_only_sign_type_display2 = 0;
      this->vision_only_supplementary_sign_type_display2 = 0;
      this->vision_only_sign_type_display3 = 0;
      this->vision_only_supplementary_sign_type_display3 = 0;
      this->vision_only_sign_type_display4 = 0;
      this->vision_only_supplementary_sign_type_display4 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _vision_only_sign_type_display1_type =
    uint8_t;
  _vision_only_sign_type_display1_type vision_only_sign_type_display1;
  using _vision_only_supplementary_sign_type_display1_type =
    uint8_t;
  _vision_only_supplementary_sign_type_display1_type vision_only_supplementary_sign_type_display1;
  using _vision_only_sign_type_display2_type =
    uint8_t;
  _vision_only_sign_type_display2_type vision_only_sign_type_display2;
  using _vision_only_supplementary_sign_type_display2_type =
    uint8_t;
  _vision_only_supplementary_sign_type_display2_type vision_only_supplementary_sign_type_display2;
  using _vision_only_sign_type_display3_type =
    uint8_t;
  _vision_only_sign_type_display3_type vision_only_sign_type_display3;
  using _vision_only_supplementary_sign_type_display3_type =
    uint8_t;
  _vision_only_supplementary_sign_type_display3_type vision_only_supplementary_sign_type_display3;
  using _vision_only_sign_type_display4_type =
    uint8_t;
  _vision_only_sign_type_display4_type vision_only_sign_type_display4;
  using _vision_only_supplementary_sign_type_display4_type =
    uint8_t;
  _vision_only_supplementary_sign_type_display4_type vision_only_supplementary_sign_type_display4;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__vision_only_sign_type_display1(
    const uint8_t & _arg)
  {
    this->vision_only_sign_type_display1 = _arg;
    return *this;
  }
  Type & set__vision_only_supplementary_sign_type_display1(
    const uint8_t & _arg)
  {
    this->vision_only_supplementary_sign_type_display1 = _arg;
    return *this;
  }
  Type & set__vision_only_sign_type_display2(
    const uint8_t & _arg)
  {
    this->vision_only_sign_type_display2 = _arg;
    return *this;
  }
  Type & set__vision_only_supplementary_sign_type_display2(
    const uint8_t & _arg)
  {
    this->vision_only_supplementary_sign_type_display2 = _arg;
    return *this;
  }
  Type & set__vision_only_sign_type_display3(
    const uint8_t & _arg)
  {
    this->vision_only_sign_type_display3 = _arg;
    return *this;
  }
  Type & set__vision_only_supplementary_sign_type_display3(
    const uint8_t & _arg)
  {
    this->vision_only_supplementary_sign_type_display3 = _arg;
    return *this;
  }
  Type & set__vision_only_sign_type_display4(
    const uint8_t & _arg)
  {
    this->vision_only_sign_type_display4 = _arg;
    return *this;
  }
  Type & set__vision_only_supplementary_sign_type_display4(
    const uint8_t & _arg)
  {
    this->vision_only_supplementary_sign_type_display4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__TsrVisionOnly
    std::shared_ptr<mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__TsrVisionOnly
    std::shared_ptr<mobileye_560_660_msgs::msg::TsrVisionOnly_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TsrVisionOnly_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->vision_only_sign_type_display1 != other.vision_only_sign_type_display1) {
      return false;
    }
    if (this->vision_only_supplementary_sign_type_display1 != other.vision_only_supplementary_sign_type_display1) {
      return false;
    }
    if (this->vision_only_sign_type_display2 != other.vision_only_sign_type_display2) {
      return false;
    }
    if (this->vision_only_supplementary_sign_type_display2 != other.vision_only_supplementary_sign_type_display2) {
      return false;
    }
    if (this->vision_only_sign_type_display3 != other.vision_only_sign_type_display3) {
      return false;
    }
    if (this->vision_only_supplementary_sign_type_display3 != other.vision_only_supplementary_sign_type_display3) {
      return false;
    }
    if (this->vision_only_sign_type_display4 != other.vision_only_sign_type_display4) {
      return false;
    }
    if (this->vision_only_supplementary_sign_type_display4 != other.vision_only_supplementary_sign_type_display4) {
      return false;
    }
    return true;
  }
  bool operator!=(const TsrVisionOnly_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TsrVisionOnly_

// alias to use template instance with default allocator
using TsrVisionOnly =
  mobileye_560_660_msgs::msg::TsrVisionOnly_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__TSR_VISION_ONLY__STRUCT_HPP_
