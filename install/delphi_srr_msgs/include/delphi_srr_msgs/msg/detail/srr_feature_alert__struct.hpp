// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_srr_msgs:msg/SrrFeatureAlert.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__STRUCT_HPP_
#define DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__STRUCT_HPP_

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
# define DEPRECATED__delphi_srr_msgs__msg__SrrFeatureAlert __attribute__((deprecated))
#else
# define DEPRECATED__delphi_srr_msgs__msg__SrrFeatureAlert __declspec(deprecated)
#endif

namespace delphi_srr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SrrFeatureAlert_
{
  using Type = SrrFeatureAlert_<ContainerAllocator>;

  explicit SrrFeatureAlert_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lcma_blis_ignored_track_id = 0;
      this->lcma_blis_track_id = 0;
      this->lcma_cvw_ttc = 0.0f;
      this->cta_ttc_alert = false;
      this->cta_selected_track_ttc = 0.0f;
      this->cta_selected_track = 0;
      this->cta_alert = 0;
      this->cta_active = false;
      this->lcma_cvw_cipv = 0;
      this->lcma_cvw_alert_state = 0;
      this->lcma_blis_alert_state = 0;
      this->lcma_active = false;
    }
  }

  explicit SrrFeatureAlert_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lcma_blis_ignored_track_id = 0;
      this->lcma_blis_track_id = 0;
      this->lcma_cvw_ttc = 0.0f;
      this->cta_ttc_alert = false;
      this->cta_selected_track_ttc = 0.0f;
      this->cta_selected_track = 0;
      this->cta_alert = 0;
      this->cta_active = false;
      this->lcma_cvw_cipv = 0;
      this->lcma_cvw_alert_state = 0;
      this->lcma_blis_alert_state = 0;
      this->lcma_active = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _lcma_blis_ignored_track_id_type =
    uint8_t;
  _lcma_blis_ignored_track_id_type lcma_blis_ignored_track_id;
  using _lcma_blis_track_id_type =
    uint8_t;
  _lcma_blis_track_id_type lcma_blis_track_id;
  using _lcma_cvw_ttc_type =
    float;
  _lcma_cvw_ttc_type lcma_cvw_ttc;
  using _cta_ttc_alert_type =
    bool;
  _cta_ttc_alert_type cta_ttc_alert;
  using _cta_selected_track_ttc_type =
    float;
  _cta_selected_track_ttc_type cta_selected_track_ttc;
  using _cta_selected_track_type =
    uint16_t;
  _cta_selected_track_type cta_selected_track;
  using _cta_alert_type =
    uint8_t;
  _cta_alert_type cta_alert;
  using _cta_active_type =
    bool;
  _cta_active_type cta_active;
  using _lcma_cvw_cipv_type =
    uint8_t;
  _lcma_cvw_cipv_type lcma_cvw_cipv;
  using _lcma_cvw_alert_state_type =
    uint8_t;
  _lcma_cvw_alert_state_type lcma_cvw_alert_state;
  using _lcma_blis_alert_state_type =
    uint8_t;
  _lcma_blis_alert_state_type lcma_blis_alert_state;
  using _lcma_active_type =
    bool;
  _lcma_active_type lcma_active;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__lcma_blis_ignored_track_id(
    const uint8_t & _arg)
  {
    this->lcma_blis_ignored_track_id = _arg;
    return *this;
  }
  Type & set__lcma_blis_track_id(
    const uint8_t & _arg)
  {
    this->lcma_blis_track_id = _arg;
    return *this;
  }
  Type & set__lcma_cvw_ttc(
    const float & _arg)
  {
    this->lcma_cvw_ttc = _arg;
    return *this;
  }
  Type & set__cta_ttc_alert(
    const bool & _arg)
  {
    this->cta_ttc_alert = _arg;
    return *this;
  }
  Type & set__cta_selected_track_ttc(
    const float & _arg)
  {
    this->cta_selected_track_ttc = _arg;
    return *this;
  }
  Type & set__cta_selected_track(
    const uint16_t & _arg)
  {
    this->cta_selected_track = _arg;
    return *this;
  }
  Type & set__cta_alert(
    const uint8_t & _arg)
  {
    this->cta_alert = _arg;
    return *this;
  }
  Type & set__cta_active(
    const bool & _arg)
  {
    this->cta_active = _arg;
    return *this;
  }
  Type & set__lcma_cvw_cipv(
    const uint8_t & _arg)
  {
    this->lcma_cvw_cipv = _arg;
    return *this;
  }
  Type & set__lcma_cvw_alert_state(
    const uint8_t & _arg)
  {
    this->lcma_cvw_alert_state = _arg;
    return *this;
  }
  Type & set__lcma_blis_alert_state(
    const uint8_t & _arg)
  {
    this->lcma_blis_alert_state = _arg;
    return *this;
  }
  Type & set__lcma_active(
    const bool & _arg)
  {
    this->lcma_active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrFeatureAlert
    std::shared_ptr<delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_srr_msgs__msg__SrrFeatureAlert
    std::shared_ptr<delphi_srr_msgs::msg::SrrFeatureAlert_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SrrFeatureAlert_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->lcma_blis_ignored_track_id != other.lcma_blis_ignored_track_id) {
      return false;
    }
    if (this->lcma_blis_track_id != other.lcma_blis_track_id) {
      return false;
    }
    if (this->lcma_cvw_ttc != other.lcma_cvw_ttc) {
      return false;
    }
    if (this->cta_ttc_alert != other.cta_ttc_alert) {
      return false;
    }
    if (this->cta_selected_track_ttc != other.cta_selected_track_ttc) {
      return false;
    }
    if (this->cta_selected_track != other.cta_selected_track) {
      return false;
    }
    if (this->cta_alert != other.cta_alert) {
      return false;
    }
    if (this->cta_active != other.cta_active) {
      return false;
    }
    if (this->lcma_cvw_cipv != other.lcma_cvw_cipv) {
      return false;
    }
    if (this->lcma_cvw_alert_state != other.lcma_cvw_alert_state) {
      return false;
    }
    if (this->lcma_blis_alert_state != other.lcma_blis_alert_state) {
      return false;
    }
    if (this->lcma_active != other.lcma_active) {
      return false;
    }
    return true;
  }
  bool operator!=(const SrrFeatureAlert_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SrrFeatureAlert_

// alias to use template instance with default allocator
using SrrFeatureAlert =
  delphi_srr_msgs::msg::SrrFeatureAlert_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_srr_msgs

#endif  // DELPHI_SRR_MSGS__MSG__DETAIL__SRR_FEATURE_ALERT__STRUCT_HPP_
