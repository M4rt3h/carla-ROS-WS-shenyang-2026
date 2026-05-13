// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrDetection.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrDetection __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrDetection __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrDetection_
{
  using Type = MrrDetection_<ContainerAllocator>;

  explicit MrrDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detection_id = 0;
      this->confid_azimuth = 0;
      this->super_res_target = false;
      this->nd_target = false;
      this->host_veh_clutter = false;
      this->valid_level = false;
      this->azimuth = 0.0f;
      this->range = 0.0f;
      this->range_rate = 0.0f;
      this->amplitude = 0;
      this->index_2lsb = 0;
    }
  }

  explicit MrrDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detection_id = 0;
      this->confid_azimuth = 0;
      this->super_res_target = false;
      this->nd_target = false;
      this->host_veh_clutter = false;
      this->valid_level = false;
      this->azimuth = 0.0f;
      this->range = 0.0f;
      this->range_rate = 0.0f;
      this->amplitude = 0;
      this->index_2lsb = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _detection_id_type =
    uint8_t;
  _detection_id_type detection_id;
  using _confid_azimuth_type =
    uint8_t;
  _confid_azimuth_type confid_azimuth;
  using _super_res_target_type =
    bool;
  _super_res_target_type super_res_target;
  using _nd_target_type =
    bool;
  _nd_target_type nd_target;
  using _host_veh_clutter_type =
    bool;
  _host_veh_clutter_type host_veh_clutter;
  using _valid_level_type =
    bool;
  _valid_level_type valid_level;
  using _azimuth_type =
    float;
  _azimuth_type azimuth;
  using _range_type =
    float;
  _range_type range;
  using _range_rate_type =
    float;
  _range_rate_type range_rate;
  using _amplitude_type =
    int8_t;
  _amplitude_type amplitude;
  using _index_2lsb_type =
    uint8_t;
  _index_2lsb_type index_2lsb;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__detection_id(
    const uint8_t & _arg)
  {
    this->detection_id = _arg;
    return *this;
  }
  Type & set__confid_azimuth(
    const uint8_t & _arg)
  {
    this->confid_azimuth = _arg;
    return *this;
  }
  Type & set__super_res_target(
    const bool & _arg)
  {
    this->super_res_target = _arg;
    return *this;
  }
  Type & set__nd_target(
    const bool & _arg)
  {
    this->nd_target = _arg;
    return *this;
  }
  Type & set__host_veh_clutter(
    const bool & _arg)
  {
    this->host_veh_clutter = _arg;
    return *this;
  }
  Type & set__valid_level(
    const bool & _arg)
  {
    this->valid_level = _arg;
    return *this;
  }
  Type & set__azimuth(
    const float & _arg)
  {
    this->azimuth = _arg;
    return *this;
  }
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__range_rate(
    const float & _arg)
  {
    this->range_rate = _arg;
    return *this;
  }
  Type & set__amplitude(
    const int8_t & _arg)
  {
    this->amplitude = _arg;
    return *this;
  }
  Type & set__index_2lsb(
    const uint8_t & _arg)
  {
    this->index_2lsb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrDetection
    std::shared_ptr<delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrDetection
    std::shared_ptr<delphi_mrr_msgs::msg::MrrDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrDetection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->detection_id != other.detection_id) {
      return false;
    }
    if (this->confid_azimuth != other.confid_azimuth) {
      return false;
    }
    if (this->super_res_target != other.super_res_target) {
      return false;
    }
    if (this->nd_target != other.nd_target) {
      return false;
    }
    if (this->host_veh_clutter != other.host_veh_clutter) {
      return false;
    }
    if (this->valid_level != other.valid_level) {
      return false;
    }
    if (this->azimuth != other.azimuth) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->range_rate != other.range_rate) {
      return false;
    }
    if (this->amplitude != other.amplitude) {
      return false;
    }
    if (this->index_2lsb != other.index_2lsb) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrDetection_

// alias to use template instance with default allocator
using MrrDetection =
  delphi_mrr_msgs::msg::MrrDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_DETECTION__STRUCT_HPP_
