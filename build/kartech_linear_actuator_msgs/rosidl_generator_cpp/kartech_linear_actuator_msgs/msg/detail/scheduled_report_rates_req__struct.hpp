// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from kartech_linear_actuator_msgs:msg/ScheduledReportRatesReq.idl
// generated code does not contain a copyright notice

#ifndef KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SCHEDULED_REPORT_RATES_REQ__STRUCT_HPP_
#define KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SCHEDULED_REPORT_RATES_REQ__STRUCT_HPP_

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
// Member 'index_1'
// Member 'index_2'
#include "kartech_linear_actuator_msgs/msg/detail/report_index__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq __attribute__((deprecated))
#else
# define DEPRECATED__kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq __declspec(deprecated)
#endif

namespace kartech_linear_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScheduledReportRatesReq_
{
  using Type = ScheduledReportRatesReq_<ContainerAllocator>;

  explicit ScheduledReportRatesReq_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    index_1(_init),
    index_2(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->index_1_report_time = 0;
      this->index_2_report_time = 0;
    }
  }

  explicit ScheduledReportRatesReq_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    index_1(_alloc, _init),
    index_2(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confirm = false;
      this->index_1_report_time = 0;
      this->index_2_report_time = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _confirm_type =
    bool;
  _confirm_type confirm;
  using _index_1_type =
    kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator>;
  _index_1_type index_1;
  using _index_1_report_time_type =
    uint16_t;
  _index_1_report_time_type index_1_report_time;
  using _index_2_type =
    kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator>;
  _index_2_type index_2;
  using _index_2_report_time_type =
    uint16_t;
  _index_2_report_time_type index_2_report_time;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__confirm(
    const bool & _arg)
  {
    this->confirm = _arg;
    return *this;
  }
  Type & set__index_1(
    const kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator> & _arg)
  {
    this->index_1 = _arg;
    return *this;
  }
  Type & set__index_1_report_time(
    const uint16_t & _arg)
  {
    this->index_1_report_time = _arg;
    return *this;
  }
  Type & set__index_2(
    const kartech_linear_actuator_msgs::msg::ReportIndex_<ContainerAllocator> & _arg)
  {
    this->index_2 = _arg;
    return *this;
  }
  Type & set__index_2_report_time(
    const uint16_t & _arg)
  {
    this->index_2_report_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator> *;
  using ConstRawPtr =
    const kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq
    std::shared_ptr<kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScheduledReportRatesReq_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->confirm != other.confirm) {
      return false;
    }
    if (this->index_1 != other.index_1) {
      return false;
    }
    if (this->index_1_report_time != other.index_1_report_time) {
      return false;
    }
    if (this->index_2 != other.index_2) {
      return false;
    }
    if (this->index_2_report_time != other.index_2_report_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScheduledReportRatesReq_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScheduledReportRatesReq_

// alias to use template instance with default allocator
using ScheduledReportRatesReq =
  kartech_linear_actuator_msgs::msg::ScheduledReportRatesReq_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace kartech_linear_actuator_msgs

#endif  // KARTECH_LINEAR_ACTUATOR_MSGS__MSG__DETAIL__SCHEDULED_REPORT_RATES_REQ__STRUCT_HPP_
