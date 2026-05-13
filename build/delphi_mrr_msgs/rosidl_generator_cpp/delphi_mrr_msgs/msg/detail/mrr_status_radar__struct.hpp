// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusRadar.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrStatusRadar __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrStatusRadar __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrStatusRadar_
{
  using Type = MrrStatusRadar_<ContainerAllocator>;

  explicit MrrStatusRadar_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_interference_type = 0;
      this->can_recommend_unconverge = false;
      this->can_blockage_sidelobe_filter_val = 0;
      this->can_radar_align_incomplete = false;
      this->can_blockage_sidelobe = false;
      this->can_blockage_mnr = false;
      this->can_radar_ext_cond_nok = false;
      this->can_radar_align_out_range = false;
      this->can_radar_align_not_start = false;
      this->can_radar_overheat_error = false;
      this->can_radar_not_op = false;
      this->can_xcvr_operational = false;
    }
  }

  explicit MrrStatusRadar_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_interference_type = 0;
      this->can_recommend_unconverge = false;
      this->can_blockage_sidelobe_filter_val = 0;
      this->can_radar_align_incomplete = false;
      this->can_blockage_sidelobe = false;
      this->can_blockage_mnr = false;
      this->can_radar_ext_cond_nok = false;
      this->can_radar_align_out_range = false;
      this->can_radar_align_not_start = false;
      this->can_radar_overheat_error = false;
      this->can_radar_not_op = false;
      this->can_xcvr_operational = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_interference_type_type =
    uint8_t;
  _can_interference_type_type can_interference_type;
  using _can_recommend_unconverge_type =
    bool;
  _can_recommend_unconverge_type can_recommend_unconverge;
  using _can_blockage_sidelobe_filter_val_type =
    uint8_t;
  _can_blockage_sidelobe_filter_val_type can_blockage_sidelobe_filter_val;
  using _can_radar_align_incomplete_type =
    bool;
  _can_radar_align_incomplete_type can_radar_align_incomplete;
  using _can_blockage_sidelobe_type =
    bool;
  _can_blockage_sidelobe_type can_blockage_sidelobe;
  using _can_blockage_mnr_type =
    bool;
  _can_blockage_mnr_type can_blockage_mnr;
  using _can_radar_ext_cond_nok_type =
    bool;
  _can_radar_ext_cond_nok_type can_radar_ext_cond_nok;
  using _can_radar_align_out_range_type =
    bool;
  _can_radar_align_out_range_type can_radar_align_out_range;
  using _can_radar_align_not_start_type =
    bool;
  _can_radar_align_not_start_type can_radar_align_not_start;
  using _can_radar_overheat_error_type =
    bool;
  _can_radar_overheat_error_type can_radar_overheat_error;
  using _can_radar_not_op_type =
    bool;
  _can_radar_not_op_type can_radar_not_op;
  using _can_xcvr_operational_type =
    bool;
  _can_xcvr_operational_type can_xcvr_operational;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_interference_type(
    const uint8_t & _arg)
  {
    this->can_interference_type = _arg;
    return *this;
  }
  Type & set__can_recommend_unconverge(
    const bool & _arg)
  {
    this->can_recommend_unconverge = _arg;
    return *this;
  }
  Type & set__can_blockage_sidelobe_filter_val(
    const uint8_t & _arg)
  {
    this->can_blockage_sidelobe_filter_val = _arg;
    return *this;
  }
  Type & set__can_radar_align_incomplete(
    const bool & _arg)
  {
    this->can_radar_align_incomplete = _arg;
    return *this;
  }
  Type & set__can_blockage_sidelobe(
    const bool & _arg)
  {
    this->can_blockage_sidelobe = _arg;
    return *this;
  }
  Type & set__can_blockage_mnr(
    const bool & _arg)
  {
    this->can_blockage_mnr = _arg;
    return *this;
  }
  Type & set__can_radar_ext_cond_nok(
    const bool & _arg)
  {
    this->can_radar_ext_cond_nok = _arg;
    return *this;
  }
  Type & set__can_radar_align_out_range(
    const bool & _arg)
  {
    this->can_radar_align_out_range = _arg;
    return *this;
  }
  Type & set__can_radar_align_not_start(
    const bool & _arg)
  {
    this->can_radar_align_not_start = _arg;
    return *this;
  }
  Type & set__can_radar_overheat_error(
    const bool & _arg)
  {
    this->can_radar_overheat_error = _arg;
    return *this;
  }
  Type & set__can_radar_not_op(
    const bool & _arg)
  {
    this->can_radar_not_op = _arg;
    return *this;
  }
  Type & set__can_xcvr_operational(
    const bool & _arg)
  {
    this->can_xcvr_operational = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrStatusRadar
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrStatusRadar
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusRadar_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrStatusRadar_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_interference_type != other.can_interference_type) {
      return false;
    }
    if (this->can_recommend_unconverge != other.can_recommend_unconverge) {
      return false;
    }
    if (this->can_blockage_sidelobe_filter_val != other.can_blockage_sidelobe_filter_val) {
      return false;
    }
    if (this->can_radar_align_incomplete != other.can_radar_align_incomplete) {
      return false;
    }
    if (this->can_blockage_sidelobe != other.can_blockage_sidelobe) {
      return false;
    }
    if (this->can_blockage_mnr != other.can_blockage_mnr) {
      return false;
    }
    if (this->can_radar_ext_cond_nok != other.can_radar_ext_cond_nok) {
      return false;
    }
    if (this->can_radar_align_out_range != other.can_radar_align_out_range) {
      return false;
    }
    if (this->can_radar_align_not_start != other.can_radar_align_not_start) {
      return false;
    }
    if (this->can_radar_overheat_error != other.can_radar_overheat_error) {
      return false;
    }
    if (this->can_radar_not_op != other.can_radar_not_op) {
      return false;
    }
    if (this->can_xcvr_operational != other.can_xcvr_operational) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrStatusRadar_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrStatusRadar_

// alias to use template instance with default allocator
using MrrStatusRadar =
  delphi_mrr_msgs::msg::MrrStatusRadar_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_RADAR__STRUCT_HPP_
