// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrHeaderInformationDetections.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_INFORMATION_DETECTIONS__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_INFORMATION_DETECTIONS__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderInformationDetections __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderInformationDetections __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrHeaderInformationDetections_
{
  using Type = MrrHeaderInformationDetections_<ContainerAllocator>;

  explicit MrrHeaderInformationDetections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_align_updates_done = 0;
      this->can_scan_index = 0;
      this->can_number_of_det = 0;
      this->can_look_id = 0;
      this->can_look_index = 0;
    }
  }

  explicit MrrHeaderInformationDetections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_align_updates_done = 0;
      this->can_scan_index = 0;
      this->can_number_of_det = 0;
      this->can_look_id = 0;
      this->can_look_index = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_align_updates_done_type =
    uint16_t;
  _can_align_updates_done_type can_align_updates_done;
  using _can_scan_index_type =
    uint16_t;
  _can_scan_index_type can_scan_index;
  using _can_number_of_det_type =
    uint8_t;
  _can_number_of_det_type can_number_of_det;
  using _can_look_id_type =
    uint8_t;
  _can_look_id_type can_look_id;
  using _can_look_index_type =
    uint16_t;
  _can_look_index_type can_look_index;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_align_updates_done(
    const uint16_t & _arg)
  {
    this->can_align_updates_done = _arg;
    return *this;
  }
  Type & set__can_scan_index(
    const uint16_t & _arg)
  {
    this->can_scan_index = _arg;
    return *this;
  }
  Type & set__can_number_of_det(
    const uint8_t & _arg)
  {
    this->can_number_of_det = _arg;
    return *this;
  }
  Type & set__can_look_id(
    const uint8_t & _arg)
  {
    this->can_look_id = _arg;
    return *this;
  }
  Type & set__can_look_index(
    const uint16_t & _arg)
  {
    this->can_look_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderInformationDetections
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrHeaderInformationDetections
    std::shared_ptr<delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrHeaderInformationDetections_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_align_updates_done != other.can_align_updates_done) {
      return false;
    }
    if (this->can_scan_index != other.can_scan_index) {
      return false;
    }
    if (this->can_number_of_det != other.can_number_of_det) {
      return false;
    }
    if (this->can_look_id != other.can_look_id) {
      return false;
    }
    if (this->can_look_index != other.can_look_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrHeaderInformationDetections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrHeaderInformationDetections_

// alias to use template instance with default allocator
using MrrHeaderInformationDetections =
  delphi_mrr_msgs::msg::MrrHeaderInformationDetections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_HEADER_INFORMATION_DETECTIONS__STRUCT_HPP_
