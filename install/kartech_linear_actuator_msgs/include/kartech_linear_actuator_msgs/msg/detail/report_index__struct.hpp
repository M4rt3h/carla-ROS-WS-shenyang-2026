// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ReportIndex.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ReportIndex __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ReportIndex __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReportIndex_
{
  using Type = ReportIndex_<ContainerAllocator>;

  explicit ReportIndex_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->report_index = 0;
    }
  }

  explicit ReportIndex_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->report_index = 0;
    }
  }

  // field types and members
  using _report_index_type =
    uint8_t;
  _report_index_type report_index;

  // setters for named parameter idiom
  Type & set__report_index(
    const uint8_t & _arg)
  {
    this->report_index = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t POSITION_REPORT_INDEX =
    128u;
  static constexpr uint8_t MOTOR_CURRENT_REPORT_INDEX =
    129u;
  static constexpr uint8_t ENHANCED_POSITION_REPORT_INDEX =
    152u;
  static constexpr uint8_t UNIQUE_DEVICE_ID_REPORTS_INDEX =
    167u;
  static constexpr uint8_t SOFTWARE_REVISION_REPORT_INDEX =
    229u;
  static constexpr uint8_t ZEROING_MESSAGE_REPORT_INDEX =
    238u;

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ReportIndex
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ReportIndex
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReportIndex_ & other) const
  {
    if (this->report_index != other.report_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReportIndex_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReportIndex_

// alias to use template instance with default allocator
using ReportIndex =
  kartech_linear_actuator_msgs::msg::ReportIndex_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ReportIndex_<ContainerAllocator>::POSITION_REPORT_INDEX;
template<typename ContainerAllocator>
constexpr uint8_t ReportIndex_<ContainerAllocator>::MOTOR_CURRENT_REPORT_INDEX;
template<typename ContainerAllocator>
constexpr uint8_t ReportIndex_<ContainerAllocator>::ENHANCED_POSITION_REPORT_INDEX;
template<typename ContainerAllocator>
constexpr uint8_t ReportIndex_<ContainerAllocator>::UNIQUE_DEVICE_ID_REPORTS_INDEX;
template<typename ContainerAllocator>
constexpr uint8_t ReportIndex_<ContainerAllocator>::SOFTWARE_REVISION_REPORT_INDEX;
template<typename ContainerAllocator>
constexpr uint8_t ReportIndex_<ContainerAllocator>::ZEROING_MESSAGE_REPORT_INDEX;

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__REPORT_INDEX__STRUCT_HPP_
