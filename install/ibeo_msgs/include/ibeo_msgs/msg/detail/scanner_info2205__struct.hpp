// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/ScannerInfo2205.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'scan_start_time'
// Member 'scan_end_time'
// Member 'scan_start_time_from_device'
// Member 'scan_end_time_from_device'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'mounting_position'
#include "ibeo_msgs/msg/detail/mounting_position_f__struct.hpp"
// Member 'resolutions'
#include "ibeo_msgs/msg/detail/resolution_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__ScannerInfo2205 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__ScannerInfo2205 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScannerInfo2205_
{
  using Type = ScannerInfo2205_<ContainerAllocator>;

  explicit ScannerInfo2205_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scan_start_time(_init),
    scan_end_time(_init),
    scan_start_time_from_device(_init),
    scan_end_time_from_device(_init),
    mounting_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->scanner_type = 0;
      this->scan_number = 0;
      this->start_angle = 0.0f;
      this->end_angle = 0.0f;
      this->scan_frequency = 0.0f;
      this->beam_tilt = 0.0f;
      this->scan_flags = 0ul;
      this->resolutions.fill(ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator>{_init});
    }
  }

  explicit ScannerInfo2205_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : scan_start_time(_alloc, _init),
    scan_end_time(_alloc, _init),
    scan_start_time_from_device(_alloc, _init),
    scan_end_time_from_device(_alloc, _init),
    mounting_position(_alloc, _init),
    resolutions(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->scanner_type = 0;
      this->scan_number = 0;
      this->start_angle = 0.0f;
      this->end_angle = 0.0f;
      this->scan_frequency = 0.0f;
      this->beam_tilt = 0.0f;
      this->scan_flags = 0ul;
      this->resolutions.fill(ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator>{_alloc, _init});
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
  using _scan_start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _scan_start_time_type scan_start_time;
  using _scan_end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _scan_end_time_type scan_end_time;
  using _scan_start_time_from_device_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _scan_start_time_from_device_type scan_start_time_from_device;
  using _scan_end_time_from_device_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _scan_end_time_from_device_type scan_end_time_from_device;
  using _scan_frequency_type =
    float;
  _scan_frequency_type scan_frequency;
  using _beam_tilt_type =
    float;
  _beam_tilt_type beam_tilt;
  using _scan_flags_type =
    uint32_t;
  _scan_flags_type scan_flags;
  using _mounting_position_type =
    ibeo_msgs::msg::MountingPositionF_<ContainerAllocator>;
  _mounting_position_type mounting_position;
  using _resolutions_type =
    std::array<ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator>, 8>;
  _resolutions_type resolutions;

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
  Type & set__scan_start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->scan_start_time = _arg;
    return *this;
  }
  Type & set__scan_end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->scan_end_time = _arg;
    return *this;
  }
  Type & set__scan_start_time_from_device(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->scan_start_time_from_device = _arg;
    return *this;
  }
  Type & set__scan_end_time_from_device(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->scan_end_time_from_device = _arg;
    return *this;
  }
  Type & set__scan_frequency(
    const float & _arg)
  {
    this->scan_frequency = _arg;
    return *this;
  }
  Type & set__beam_tilt(
    const float & _arg)
  {
    this->beam_tilt = _arg;
    return *this;
  }
  Type & set__scan_flags(
    const uint32_t & _arg)
  {
    this->scan_flags = _arg;
    return *this;
  }
  Type & set__mounting_position(
    const ibeo_msgs::msg::MountingPositionF_<ContainerAllocator> & _arg)
  {
    this->mounting_position = _arg;
    return *this;
  }
  Type & set__resolutions(
    const std::array<ibeo_msgs::msg::ResolutionInfo_<ContainerAllocator>, 8> & _arg)
  {
    this->resolutions = _arg;
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
    ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__ScannerInfo2205
    std::shared_ptr<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__ScannerInfo2205
    std::shared_ptr<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScannerInfo2205_ & other) const
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
    if (this->scan_start_time != other.scan_start_time) {
      return false;
    }
    if (this->scan_end_time != other.scan_end_time) {
      return false;
    }
    if (this->scan_start_time_from_device != other.scan_start_time_from_device) {
      return false;
    }
    if (this->scan_end_time_from_device != other.scan_end_time_from_device) {
      return false;
    }
    if (this->scan_frequency != other.scan_frequency) {
      return false;
    }
    if (this->beam_tilt != other.beam_tilt) {
      return false;
    }
    if (this->scan_flags != other.scan_flags) {
      return false;
    }
    if (this->mounting_position != other.mounting_position) {
      return false;
    }
    if (this->resolutions != other.resolutions) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScannerInfo2205_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScannerInfo2205_

// alias to use template instance with default allocator
using ScannerInfo2205 =
  ibeo_msgs::msg::ScannerInfo2205_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ScannerInfo2205_<ContainerAllocator>::ALASCA_XT;
template<typename ContainerAllocator>
constexpr uint8_t ScannerInfo2205_<ContainerAllocator>::LUX_ECU;
template<typename ContainerAllocator>
constexpr uint8_t ScannerInfo2205_<ContainerAllocator>::LUX_PROTOTYPE;
template<typename ContainerAllocator>
constexpr uint8_t ScannerInfo2205_<ContainerAllocator>::LUX;
template<typename ContainerAllocator>
constexpr uint8_t ScannerInfo2205_<ContainerAllocator>::SCALA_B1;

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__STRUCT_HPP_
