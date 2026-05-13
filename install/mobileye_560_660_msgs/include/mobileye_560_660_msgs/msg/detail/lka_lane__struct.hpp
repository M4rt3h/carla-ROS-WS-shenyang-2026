// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/LkaLane.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__STRUCT_HPP_

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
# define DEPRECATED__mobileye_560_660_msgs__msg__LkaLane __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__LkaLane __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LkaLane_
{
  using Type = LkaLane_<ContainerAllocator>;

  explicit LkaLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_type = 0;
      this->quality = 0;
      this->model_degree = 0;
      this->position_parameter_c0 = 0.0;
      this->curvature_parameter_c2 = 0.0;
      this->curvature_derivative_parameter_c3 = 0.0;
      this->marking_width = 0.0f;
      this->heading_angle_parameter_c1 = 0.0;
      this->view_range = 0.0f;
      this->view_range_availability = false;
    }
  }

  explicit LkaLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_type = 0;
      this->quality = 0;
      this->model_degree = 0;
      this->position_parameter_c0 = 0.0;
      this->curvature_parameter_c2 = 0.0;
      this->curvature_derivative_parameter_c3 = 0.0;
      this->marking_width = 0.0f;
      this->heading_angle_parameter_c1 = 0.0;
      this->view_range = 0.0f;
      this->view_range_availability = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lane_type_type =
    uint8_t;
  _lane_type_type lane_type;
  using _quality_type =
    uint8_t;
  _quality_type quality;
  using _model_degree_type =
    uint8_t;
  _model_degree_type model_degree;
  using _position_parameter_c0_type =
    double;
  _position_parameter_c0_type position_parameter_c0;
  using _curvature_parameter_c2_type =
    double;
  _curvature_parameter_c2_type curvature_parameter_c2;
  using _curvature_derivative_parameter_c3_type =
    double;
  _curvature_derivative_parameter_c3_type curvature_derivative_parameter_c3;
  using _marking_width_type =
    float;
  _marking_width_type marking_width;
  using _heading_angle_parameter_c1_type =
    double;
  _heading_angle_parameter_c1_type heading_angle_parameter_c1;
  using _view_range_type =
    float;
  _view_range_type view_range;
  using _view_range_availability_type =
    bool;
  _view_range_availability_type view_range_availability;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lane_type(
    const uint8_t & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }
  Type & set__quality(
    const uint8_t & _arg)
  {
    this->quality = _arg;
    return *this;
  }
  Type & set__model_degree(
    const uint8_t & _arg)
  {
    this->model_degree = _arg;
    return *this;
  }
  Type & set__position_parameter_c0(
    const double & _arg)
  {
    this->position_parameter_c0 = _arg;
    return *this;
  }
  Type & set__curvature_parameter_c2(
    const double & _arg)
  {
    this->curvature_parameter_c2 = _arg;
    return *this;
  }
  Type & set__curvature_derivative_parameter_c3(
    const double & _arg)
  {
    this->curvature_derivative_parameter_c3 = _arg;
    return *this;
  }
  Type & set__marking_width(
    const float & _arg)
  {
    this->marking_width = _arg;
    return *this;
  }
  Type & set__heading_angle_parameter_c1(
    const double & _arg)
  {
    this->heading_angle_parameter_c1 = _arg;
    return *this;
  }
  Type & set__view_range(
    const float & _arg)
  {
    this->view_range = _arg;
    return *this;
  }
  Type & set__view_range_availability(
    const bool & _arg)
  {
    this->view_range_availability = _arg;
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
    mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__LkaLane
    std::shared_ptr<mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__LkaLane
    std::shared_ptr<mobileye_560_660_msgs::msg::LkaLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LkaLane_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lane_type != other.lane_type) {
      return false;
    }
    if (this->quality != other.quality) {
      return false;
    }
    if (this->model_degree != other.model_degree) {
      return false;
    }
    if (this->position_parameter_c0 != other.position_parameter_c0) {
      return false;
    }
    if (this->curvature_parameter_c2 != other.curvature_parameter_c2) {
      return false;
    }
    if (this->curvature_derivative_parameter_c3 != other.curvature_derivative_parameter_c3) {
      return false;
    }
    if (this->marking_width != other.marking_width) {
      return false;
    }
    if (this->heading_angle_parameter_c1 != other.heading_angle_parameter_c1) {
      return false;
    }
    if (this->view_range != other.view_range) {
      return false;
    }
    if (this->view_range_availability != other.view_range_availability) {
      return false;
    }
    return true;
  }
  bool operator!=(const LkaLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LkaLane_

// alias to use template instance with default allocator
using LkaLane =
  mobileye_560_660_msgs::msg::LkaLane_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t LkaLane_<ContainerAllocator>::LANE_CONFIDENCE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t LkaLane_<ContainerAllocator>::LANE_CONFIDENCE_LOW;
template<typename ContainerAllocator>
constexpr uint8_t LkaLane_<ContainerAllocator>::LANE_CONFIDENCE_MED;
template<typename ContainerAllocator>
constexpr uint8_t LkaLane_<ContainerAllocator>::LANE_CONFIDENCE_HIGH;
template<typename ContainerAllocator>
constexpr uint8_t LkaLane_<ContainerAllocator>::LANE_TYPE_DASHED;
template<typename ContainerAllocator>
constexpr uint8_t LkaLane_<ContainerAllocator>::LANE_TYPE_SOLID;
template<typename ContainerAllocator>
constexpr uint8_t LkaLane_<ContainerAllocator>::LANE_TYPE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t LkaLane_<ContainerAllocator>::LANE_TYPE_ROAD_EDGE;
template<typename ContainerAllocator>
constexpr uint8_t LkaLane_<ContainerAllocator>::LANE_TYPE_DOUBLE_LANE_MARK;
template<typename ContainerAllocator>
constexpr uint8_t LkaLane_<ContainerAllocator>::LANE_TYPE_BOTTS_DOTS;
template<typename ContainerAllocator>
constexpr uint8_t LkaLane_<ContainerAllocator>::LANE_TYPE_INVALID;

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_LANE__STRUCT_HPP_
