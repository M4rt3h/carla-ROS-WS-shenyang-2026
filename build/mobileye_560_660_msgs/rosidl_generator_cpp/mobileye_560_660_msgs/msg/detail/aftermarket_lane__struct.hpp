// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/AftermarketLane.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AFTERMARKET_LANE__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AFTERMARKET_LANE__STRUCT_HPP_

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
# define DEPRECATED__mobileye_560_660_msgs__msg__AftermarketLane __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__AftermarketLane __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AftermarketLane_
{
  using Type = AftermarketLane_<ContainerAllocator>;

  explicit AftermarketLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_confidence_left = 0;
      this->ldw_available_left = false;
      this->lane_type_left = 0;
      this->distance_to_left_lane = 0.0f;
      this->lane_confidence_right = 0;
      this->ldw_available_right = false;
      this->lane_type_right = 0;
      this->distance_to_right_lane = 0.0f;
    }
  }

  explicit AftermarketLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_confidence_left = 0;
      this->ldw_available_left = false;
      this->lane_type_left = 0;
      this->distance_to_left_lane = 0.0f;
      this->lane_confidence_right = 0;
      this->ldw_available_right = false;
      this->lane_type_right = 0;
      this->distance_to_right_lane = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lane_confidence_left_type =
    uint8_t;
  _lane_confidence_left_type lane_confidence_left;
  using _ldw_available_left_type =
    bool;
  _ldw_available_left_type ldw_available_left;
  using _lane_type_left_type =
    uint8_t;
  _lane_type_left_type lane_type_left;
  using _distance_to_left_lane_type =
    float;
  _distance_to_left_lane_type distance_to_left_lane;
  using _lane_confidence_right_type =
    uint8_t;
  _lane_confidence_right_type lane_confidence_right;
  using _ldw_available_right_type =
    bool;
  _ldw_available_right_type ldw_available_right;
  using _lane_type_right_type =
    uint8_t;
  _lane_type_right_type lane_type_right;
  using _distance_to_right_lane_type =
    float;
  _distance_to_right_lane_type distance_to_right_lane;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lane_confidence_left(
    const uint8_t & _arg)
  {
    this->lane_confidence_left = _arg;
    return *this;
  }
  Type & set__ldw_available_left(
    const bool & _arg)
  {
    this->ldw_available_left = _arg;
    return *this;
  }
  Type & set__lane_type_left(
    const uint8_t & _arg)
  {
    this->lane_type_left = _arg;
    return *this;
  }
  Type & set__distance_to_left_lane(
    const float & _arg)
  {
    this->distance_to_left_lane = _arg;
    return *this;
  }
  Type & set__lane_confidence_right(
    const uint8_t & _arg)
  {
    this->lane_confidence_right = _arg;
    return *this;
  }
  Type & set__ldw_available_right(
    const bool & _arg)
  {
    this->ldw_available_right = _arg;
    return *this;
  }
  Type & set__lane_type_right(
    const uint8_t & _arg)
  {
    this->lane_type_right = _arg;
    return *this;
  }
  Type & set__distance_to_right_lane(
    const float & _arg)
  {
    this->distance_to_right_lane = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LANE_CONFIDENCE_NONE =
    0u;
  static constexpr uint8_t LANE_CONFIDENCE_LOW =
    1u;
  static constexpr uint8_t LANE_CONFIDENCE_MED =
    2u;
  static constexpr uint8_t LANE_CONFIDENCE_HIGH =
    3u;
  static constexpr uint8_t LANE_TYPE_DASHED =
    0u;
  static constexpr uint8_t LANE_TYPE_SOLID =
    1u;
  static constexpr uint8_t LANE_TYPE_NONE =
    2u;
  static constexpr uint8_t LANE_TYPE_ROAD_EDGE =
    3u;
  static constexpr uint8_t LANE_TYPE_DOUBLE_LANE_MARK =
    4u;
  static constexpr uint8_t LANE_TYPE_BOTTS_DOTS =
    5u;
  static constexpr uint8_t LANE_TYPE_INVALID =
    6u;

  // pointer types
  using RawPtr =
    mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__AftermarketLane
    std::shared_ptr<mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__AftermarketLane
    std::shared_ptr<mobileye_560_660_msgs::msg::AftermarketLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AftermarketLane_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lane_confidence_left != other.lane_confidence_left) {
      return false;
    }
    if (this->ldw_available_left != other.ldw_available_left) {
      return false;
    }
    if (this->lane_type_left != other.lane_type_left) {
      return false;
    }
    if (this->distance_to_left_lane != other.distance_to_left_lane) {
      return false;
    }
    if (this->lane_confidence_right != other.lane_confidence_right) {
      return false;
    }
    if (this->ldw_available_right != other.ldw_available_right) {
      return false;
    }
    if (this->lane_type_right != other.lane_type_right) {
      return false;
    }
    if (this->distance_to_right_lane != other.distance_to_right_lane) {
      return false;
    }
    return true;
  }
  bool operator!=(const AftermarketLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AftermarketLane_

// alias to use template instance with default allocator
using AftermarketLane =
  mobileye_560_660_msgs::msg::AftermarketLane_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t AftermarketLane_<ContainerAllocator>::LANE_CONFIDENCE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t AftermarketLane_<ContainerAllocator>::LANE_CONFIDENCE_LOW;
template<typename ContainerAllocator>
constexpr uint8_t AftermarketLane_<ContainerAllocator>::LANE_CONFIDENCE_MED;
template<typename ContainerAllocator>
constexpr uint8_t AftermarketLane_<ContainerAllocator>::LANE_CONFIDENCE_HIGH;
template<typename ContainerAllocator>
constexpr uint8_t AftermarketLane_<ContainerAllocator>::LANE_TYPE_DASHED;
template<typename ContainerAllocator>
constexpr uint8_t AftermarketLane_<ContainerAllocator>::LANE_TYPE_SOLID;
template<typename ContainerAllocator>
constexpr uint8_t AftermarketLane_<ContainerAllocator>::LANE_TYPE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t AftermarketLane_<ContainerAllocator>::LANE_TYPE_ROAD_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t AftermarketLane_<ContainerAllocator>::LANE_TYPE_DOUBLE_LANE_MARK;
template<typename ContainerAllocator>
constexpr uint8_t AftermarketLane_<ContainerAllocator>::LANE_TYPE_BOTTS_DOTS;
template<typename ContainerAllocator>
constexpr uint8_t AftermarketLane_<ContainerAllocator>::LANE_TYPE_INVALID;

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AFTERMARKET_LANE__STRUCT_HPP_
