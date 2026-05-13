// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrEthTx.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrEthTx __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrEthTx __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrEthTx_
{
  using Type = EsrEthTx_<ContainerAllocator>;

  explicit EsrEthTx_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xcp_format_version = 0;
      this->scan_index = 0;
      this->tcp_size = 0;
      this->xcp_scan_type = 0;
      this->look_index = 0;
      this->mmr_scan_index = 0;
      this->target_report_host_speed = 0.0f;
      this->target_report_host_yaw_rate = 0.0f;
      this->xcp_timestamp = 0ul;
      this->release_revision = 0;
      this->promote_revision = 0;
      this->field_revision = 0;
      this->target_report_count = 0;
      std::fill<typename std::array<float, 64>::iterator, float>(this->target_report_range.begin(), this->target_report_range.end(), 0.0f);
      std::fill<typename std::array<float, 64>::iterator, float>(this->target_report_range_rate.begin(), this->target_report_range_rate.end(), 0.0f);
      std::fill<typename std::array<float, 64>::iterator, float>(this->target_report_theta.begin(), this->target_report_theta.end(), 0.0f);
      std::fill<typename std::array<float, 64>::iterator, float>(this->target_report_amplitude.begin(), this->target_report_amplitude.end(), 0.0f);
    }
  }

  explicit EsrEthTx_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    target_report_range(_alloc),
    target_report_range_rate(_alloc),
    target_report_theta(_alloc),
    target_report_amplitude(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->xcp_format_version = 0;
      this->scan_index = 0;
      this->tcp_size = 0;
      this->xcp_scan_type = 0;
      this->look_index = 0;
      this->mmr_scan_index = 0;
      this->target_report_host_speed = 0.0f;
      this->target_report_host_yaw_rate = 0.0f;
      this->xcp_timestamp = 0ul;
      this->release_revision = 0;
      this->promote_revision = 0;
      this->field_revision = 0;
      this->target_report_count = 0;
      std::fill<typename std::array<float, 64>::iterator, float>(this->target_report_range.begin(), this->target_report_range.end(), 0.0f);
      std::fill<typename std::array<float, 64>::iterator, float>(this->target_report_range_rate.begin(), this->target_report_range_rate.end(), 0.0f);
      std::fill<typename std::array<float, 64>::iterator, float>(this->target_report_theta.begin(), this->target_report_theta.end(), 0.0f);
      std::fill<typename std::array<float, 64>::iterator, float>(this->target_report_amplitude.begin(), this->target_report_amplitude.end(), 0.0f);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _xcp_format_version_type =
    uint16_t;
  _xcp_format_version_type xcp_format_version;
  using _scan_index_type =
    uint16_t;
  _scan_index_type scan_index;
  using _tcp_size_type =
    uint16_t;
  _tcp_size_type tcp_size;
  using _xcp_scan_type_type =
    uint8_t;
  _xcp_scan_type_type xcp_scan_type;
  using _look_index_type =
    uint16_t;
  _look_index_type look_index;
  using _mmr_scan_index_type =
    uint16_t;
  _mmr_scan_index_type mmr_scan_index;
  using _target_report_host_speed_type =
    float;
  _target_report_host_speed_type target_report_host_speed;
  using _target_report_host_yaw_rate_type =
    float;
  _target_report_host_yaw_rate_type target_report_host_yaw_rate;
  using _xcp_timestamp_type =
    uint32_t;
  _xcp_timestamp_type xcp_timestamp;
  using _release_revision_type =
    uint8_t;
  _release_revision_type release_revision;
  using _promote_revision_type =
    uint8_t;
  _promote_revision_type promote_revision;
  using _field_revision_type =
    uint8_t;
  _field_revision_type field_revision;
  using _target_report_count_type =
    uint8_t;
  _target_report_count_type target_report_count;
  using _target_report_range_type =
    std::array<float, 64>;
  _target_report_range_type target_report_range;
  using _target_report_range_rate_type =
    std::array<float, 64>;
  _target_report_range_rate_type target_report_range_rate;
  using _target_report_theta_type =
    std::array<float, 64>;
  _target_report_theta_type target_report_theta;
  using _target_report_amplitude_type =
    std::array<float, 64>;
  _target_report_amplitude_type target_report_amplitude;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__xcp_format_version(
    const uint16_t & _arg)
  {
    this->xcp_format_version = _arg;
    return *this;
  }
  Type & set__scan_index(
    const uint16_t & _arg)
  {
    this->scan_index = _arg;
    return *this;
  }
  Type & set__tcp_size(
    const uint16_t & _arg)
  {
    this->tcp_size = _arg;
    return *this;
  }
  Type & set__xcp_scan_type(
    const uint8_t & _arg)
  {
    this->xcp_scan_type = _arg;
    return *this;
  }
  Type & set__look_index(
    const uint16_t & _arg)
  {
    this->look_index = _arg;
    return *this;
  }
  Type & set__mmr_scan_index(
    const uint16_t & _arg)
  {
    this->mmr_scan_index = _arg;
    return *this;
  }
  Type & set__target_report_host_speed(
    const float & _arg)
  {
    this->target_report_host_speed = _arg;
    return *this;
  }
  Type & set__target_report_host_yaw_rate(
    const float & _arg)
  {
    this->target_report_host_yaw_rate = _arg;
    return *this;
  }
  Type & set__xcp_timestamp(
    const uint32_t & _arg)
  {
    this->xcp_timestamp = _arg;
    return *this;
  }
  Type & set__release_revision(
    const uint8_t & _arg)
  {
    this->release_revision = _arg;
    return *this;
  }
  Type & set__promote_revision(
    const uint8_t & _arg)
  {
    this->promote_revision = _arg;
    return *this;
  }
  Type & set__field_revision(
    const uint8_t & _arg)
  {
    this->field_revision = _arg;
    return *this;
  }
  Type & set__target_report_count(
    const uint8_t & _arg)
  {
    this->target_report_count = _arg;
    return *this;
  }
  Type & set__target_report_range(
    const std::array<float, 64> & _arg)
  {
    this->target_report_range = _arg;
    return *this;
  }
  Type & set__target_report_range_rate(
    const std::array<float, 64> & _arg)
  {
    this->target_report_range_rate = _arg;
    return *this;
  }
  Type & set__target_report_theta(
    const std::array<float, 64> & _arg)
  {
    this->target_report_theta = _arg;
    return *this;
  }
  Type & set__target_report_amplitude(
    const std::array<float, 64> & _arg)
  {
    this->target_report_amplitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrEthTx
    std::shared_ptr<delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrEthTx
    std::shared_ptr<delphi_esr_msgs::msg::EsrEthTx_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrEthTx_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->xcp_format_version != other.xcp_format_version) {
      return false;
    }
    if (this->scan_index != other.scan_index) {
      return false;
    }
    if (this->tcp_size != other.tcp_size) {
      return false;
    }
    if (this->xcp_scan_type != other.xcp_scan_type) {
      return false;
    }
    if (this->look_index != other.look_index) {
      return false;
    }
    if (this->mmr_scan_index != other.mmr_scan_index) {
      return false;
    }
    if (this->target_report_host_speed != other.target_report_host_speed) {
      return false;
    }
    if (this->target_report_host_yaw_rate != other.target_report_host_yaw_rate) {
      return false;
    }
    if (this->xcp_timestamp != other.xcp_timestamp) {
      return false;
    }
    if (this->release_revision != other.release_revision) {
      return false;
    }
    if (this->promote_revision != other.promote_revision) {
      return false;
    }
    if (this->field_revision != other.field_revision) {
      return false;
    }
    if (this->target_report_count != other.target_report_count) {
      return false;
    }
    if (this->target_report_range != other.target_report_range) {
      return false;
    }
    if (this->target_report_range_rate != other.target_report_range_rate) {
      return false;
    }
    if (this->target_report_theta != other.target_report_theta) {
      return false;
    }
    if (this->target_report_amplitude != other.target_report_amplitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrEthTx_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrEthTx_

// alias to use template instance with default allocator
using EsrEthTx =
  delphi_esr_msgs::msg::EsrEthTx_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_ETH_TX__STRUCT_HPP_
