// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus1 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus1 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrStatus1_
{
  using Type = EsrStatus1_<ContainerAllocator>;

  explicit EsrStatus1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->rolling_count_1 = 0;
      this->dsp_timestamp = 0;
      this->comm_error = false;
      this->radius_curvature_calc = 0;
      this->scan_index = 0;
      this->yaw_rate_calc = 0.0f;
      this->vehicle_speed_calc = 0.0f;
    }
  }

  explicit EsrStatus1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    canmsg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->rolling_count_1 = 0;
      this->dsp_timestamp = 0;
      this->comm_error = false;
      this->radius_curvature_calc = 0;
      this->scan_index = 0;
      this->yaw_rate_calc = 0.0f;
      this->vehicle_speed_calc = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _canmsg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _canmsg_type canmsg;
  using _rolling_count_1_type =
    uint8_t;
  _rolling_count_1_type rolling_count_1;
  using _dsp_timestamp_type =
    uint8_t;
  _dsp_timestamp_type dsp_timestamp;
  using _comm_error_type =
    bool;
  _comm_error_type comm_error;
  using _radius_curvature_calc_type =
    int16_t;
  _radius_curvature_calc_type radius_curvature_calc;
  using _scan_index_type =
    uint16_t;
  _scan_index_type scan_index;
  using _yaw_rate_calc_type =
    float;
  _yaw_rate_calc_type yaw_rate_calc;
  using _vehicle_speed_calc_type =
    float;
  _vehicle_speed_calc_type vehicle_speed_calc;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__canmsg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->canmsg = _arg;
    return *this;
  }
  Type & set__rolling_count_1(
    const uint8_t & _arg)
  {
    this->rolling_count_1 = _arg;
    return *this;
  }
  Type & set__dsp_timestamp(
    const uint8_t & _arg)
  {
    this->dsp_timestamp = _arg;
    return *this;
  }
  Type & set__comm_error(
    const bool & _arg)
  {
    this->comm_error = _arg;
    return *this;
  }
  Type & set__radius_curvature_calc(
    const int16_t & _arg)
  {
    this->radius_curvature_calc = _arg;
    return *this;
  }
  Type & set__scan_index(
    const uint16_t & _arg)
  {
    this->scan_index = _arg;
    return *this;
  }
  Type & set__yaw_rate_calc(
    const float & _arg)
  {
    this->yaw_rate_calc = _arg;
    return *this;
  }
  Type & set__vehicle_speed_calc(
    const float & _arg)
  {
    this->vehicle_speed_calc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus1
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus1
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrStatus1_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->canmsg != other.canmsg) {
      return false;
    }
    if (this->rolling_count_1 != other.rolling_count_1) {
      return false;
    }
    if (this->dsp_timestamp != other.dsp_timestamp) {
      return false;
    }
    if (this->comm_error != other.comm_error) {
      return false;
    }
    if (this->radius_curvature_calc != other.radius_curvature_calc) {
      return false;
    }
    if (this->scan_index != other.scan_index) {
      return false;
    }
    if (this->yaw_rate_calc != other.yaw_rate_calc) {
      return false;
    }
    if (this->vehicle_speed_calc != other.vehicle_speed_calc) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrStatus1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrStatus1_

// alias to use template instance with default allocator
using EsrStatus1 =
  delphi_esr_msgs::msg::EsrStatus1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS1__STRUCT_HPP_
