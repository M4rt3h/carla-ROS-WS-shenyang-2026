// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/ScannerInfo2204.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__ScannerInfo2204 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__ScannerInfo2204 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScannerInfo2204_
{
  using Type = ScannerInfo2204_<ContainerAllocator>;

  explicit ScannerInfo2204_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->scanner_type = 0;
      this->scan_number = 0;
      this->start_angle = 0.0f;
      this->end_angle = 0.0f;
      this->yaw_angle = 0.0f;
      this->pitch_angle = 0.0f;
      this->roll_angle = 0.0f;
      this->offset_x = 0.0f;
      this->offset_y = 0.0f;
      this->offset_z = 0.0f;
    }
  }

  explicit ScannerInfo2204_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->scanner_type = 0;
      this->scan_number = 0;
      this->start_angle = 0.0f;
      this->end_angle = 0.0f;
      this->yaw_angle = 0.0f;
      this->pitch_angle = 0.0f;
      this->roll_angle = 0.0f;
      this->offset_x = 0.0f;
      this->offset_y = 0.0f;
      this->offset_z = 0.0f;
    }
  }

  // field types and members
  using _device_id_type =
    uint8_t;
  _device_id_type device_id;
  using _scanner_type_type =
    uint8_t;
  _scanner_type_type scanner_type;
  using _scan_number_type =
    uint16_t;
  _scan_number_type scan_number;
  using _start_angle_type =
    float;
  _start_angle_type start_angle;
  using _end_angle_type =
    float;
  _end_angle_type end_angle;
  using _yaw_angle_type =
    float;
  _yaw_angle_type yaw_angle;
  using _pitch_angle_type =
    float;
  _pitch_angle_type pitch_angle;
  using _roll_angle_type =
    float;
  _roll_angle_type roll_angle;
  using _offset_x_type =
    float;
  _offset_x_type offset_x;
  using _offset_y_type =
    float;
  _offset_y_type offset_y;
  using _offset_z_type =
    float;
  _offset_z_type offset_z;

  // setters for named parameter idiom
  Type & set__device_id(
    const uint8_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__scanner_type(
    const uint8_t & _arg)
  {
    this->scanner_type = _arg;
    return *this;
  }
  Type & set__scan_number(
    const uint16_t & _arg)
  {
    this->scan_number = _arg;
    return *this;
  }
  Type & set__start_angle(
    const float & _arg)
  {
    this->start_angle = _arg;
    return *this;
  }
  Type & set__end_angle(
    const float & _arg)
  {
    this->end_angle = _arg;
    return *this;
  }
  Type & set__yaw_angle(
    const float & _arg)
  {
    this->yaw_angle = _arg;
    return *this;
  }
  Type & set__pitch_angle(
    const float & _arg)
  {
    this->pitch_angle = _arg;
    return *this;
  }
  Type & set__roll_angle(
    const float & _arg)
  {
    this->roll_angle = _arg;
    return *this;
  }
  Type & set__offset_x(
    const float & _arg)
  {
    this->offset_x = _arg;
    return *this;
  }
  Type & set__offset_y(
    const float & _arg)
  {
    this->offset_y = _arg;
    return *this;
  }
  Type & set__offset_z(
    const float & _arg)
  {
    this->offset_z = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ALASCA_XT =
    3u;
  static constexpr uint8_t LUX_ECU =
    4u;
  static constexpr uint8_t LUX_PROTOTYPE =
    5u;
  static constexpr uint8_t LUX =
    6u;
  static constexpr uint8_t SCALA_B1 =
    96u;

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__ScannerInfo2204
    std::shared_ptr<ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__ScannerInfo2204
    std::shared_ptr<ibeo_msgs::msg::ScannerInfo2204_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScannerInfo2204_ & other) const
  {
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->scanner_type != other.scanner_type) {
      return false;
    }
    if (this->scan_number != other.scan_number) {
      return false;
    }
    if (this->start_angle != other.start_angle) {
      return false;
    }
    if (this->end_angle != other.end_angle) {
      return false;
    }
    if (this->yaw_angle != other.yaw_angle) {
      return false;
    }
    if (this->pitch_angle != other.pitch_angle) {
      return false;
    }
    if (this->roll_angle != other.roll_angle) {
      return false;
    }
    if (this->offset_x != other.offset_x) {
      return false;
    }
    if (this->offset_y != other.offset_y) {
      return false;
    }
    if (this->offset_z != other.offset_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScannerInfo2204_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScannerInfo2204_

// alias to use template instance with default allocator
using ScannerInfo2204 =
  ibeo_msgs::msg::ScannerInfo2204_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ScannerInfo2204_<ContainerAllocator>::ALASCA_XT;
template<typename ContainerAllocator>
constexpr uint8_t ScannerInfo2204_<ContainerAllocator>::LUX_ECU;
template<typename ContainerAllocator>
constexpr uint8_t ScannerInfo2204_<ContainerAllocator>::LUX_PROTOTYPE;
template<typename ContainerAllocator>
constexpr uint8_t ScannerInfo2204_<ContainerAllocator>::LUX;
template<typename ContainerAllocator>
constexpr uint8_t ScannerInfo2204_<ContainerAllocator>::SCALA_B1;

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2204__STRUCT_HPP_
