// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrVehicle4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrVehicle4 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrVehicle4 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrVehicle4_
{
  using Type = EsrVehicle4_<ContainerAllocator>;

  explicit EsrVehicle4_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fac_align_cmd_1 = false;
      this->fac_align_cmd_2 = false;
      this->fac_align_max_nt = 0;
      this->fac_align_samp_req = 0;
      this->fac_tgt_mtg_offset = 0;
      this->fac_tgt_mtg_space_hor = 0;
      this->fac_tgt_mtg_space_ver = 0;
      this->fac_tgt_range_1 = 0.0f;
      this->fac_tgt_range_r2m = 0.0f;
      this->fac_tgt_range_m2t = 0.0f;
    }
  }

  explicit EsrVehicle4_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fac_align_cmd_1 = false;
      this->fac_align_cmd_2 = false;
      this->fac_align_max_nt = 0;
      this->fac_align_samp_req = 0;
      this->fac_tgt_mtg_offset = 0;
      this->fac_tgt_mtg_space_hor = 0;
      this->fac_tgt_mtg_space_ver = 0;
      this->fac_tgt_range_1 = 0.0f;
      this->fac_tgt_range_r2m = 0.0f;
      this->fac_tgt_range_m2t = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fac_align_cmd_1_type =
    bool;
  _fac_align_cmd_1_type fac_align_cmd_1;
  using _fac_align_cmd_2_type =
    bool;
  _fac_align_cmd_2_type fac_align_cmd_2;
  using _fac_align_max_nt_type =
    uint8_t;
  _fac_align_max_nt_type fac_align_max_nt;
  using _fac_align_samp_req_type =
    uint8_t;
  _fac_align_samp_req_type fac_align_samp_req;
  using _fac_tgt_mtg_offset_type =
    int8_t;
  _fac_tgt_mtg_offset_type fac_tgt_mtg_offset;
  using _fac_tgt_mtg_space_hor_type =
    int8_t;
  _fac_tgt_mtg_space_hor_type fac_tgt_mtg_space_hor;
  using _fac_tgt_mtg_space_ver_type =
    int8_t;
  _fac_tgt_mtg_space_ver_type fac_tgt_mtg_space_ver;
  using _fac_tgt_range_1_type =
    float;
  _fac_tgt_range_1_type fac_tgt_range_1;
  using _fac_tgt_range_r2m_type =
    float;
  _fac_tgt_range_r2m_type fac_tgt_range_r2m;
  using _fac_tgt_range_m2t_type =
    float;
  _fac_tgt_range_m2t_type fac_tgt_range_m2t;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fac_align_cmd_1(
    const bool & _arg)
  {
    this->fac_align_cmd_1 = _arg;
    return *this;
  }
  Type & set__fac_align_cmd_2(
    const bool & _arg)
  {
    this->fac_align_cmd_2 = _arg;
    return *this;
  }
  Type & set__fac_align_max_nt(
    const uint8_t & _arg)
  {
    this->fac_align_max_nt = _arg;
    return *this;
  }
  Type & set__fac_align_samp_req(
    const uint8_t & _arg)
  {
    this->fac_align_samp_req = _arg;
    return *this;
  }
  Type & set__fac_tgt_mtg_offset(
    const int8_t & _arg)
  {
    this->fac_tgt_mtg_offset = _arg;
    return *this;
  }
  Type & set__fac_tgt_mtg_space_hor(
    const int8_t & _arg)
  {
    this->fac_tgt_mtg_space_hor = _arg;
    return *this;
  }
  Type & set__fac_tgt_mtg_space_ver(
    const int8_t & _arg)
  {
    this->fac_tgt_mtg_space_ver = _arg;
    return *this;
  }
  Type & set__fac_tgt_range_1(
    const float & _arg)
  {
    this->fac_tgt_range_1 = _arg;
    return *this;
  }
  Type & set__fac_tgt_range_r2m(
    const float & _arg)
  {
    this->fac_tgt_range_r2m = _arg;
    return *this;
  }
  Type & set__fac_tgt_range_m2t(
    const float & _arg)
  {
    this->fac_tgt_range_m2t = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrVehicle4
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrVehicle4
    std::shared_ptr<delphi_esr_msgs::msg::EsrVehicle4_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrVehicle4_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fac_align_cmd_1 != other.fac_align_cmd_1) {
      return false;
    }
    if (this->fac_align_cmd_2 != other.fac_align_cmd_2) {
      return false;
    }
    if (this->fac_align_max_nt != other.fac_align_max_nt) {
      return false;
    }
    if (this->fac_align_samp_req != other.fac_align_samp_req) {
      return false;
    }
    if (this->fac_tgt_mtg_offset != other.fac_tgt_mtg_offset) {
      return false;
    }
    if (this->fac_tgt_mtg_space_hor != other.fac_tgt_mtg_space_hor) {
      return false;
    }
    if (this->fac_tgt_mtg_space_ver != other.fac_tgt_mtg_space_ver) {
      return false;
    }
    if (this->fac_tgt_range_1 != other.fac_tgt_range_1) {
      return false;
    }
    if (this->fac_tgt_range_r2m != other.fac_tgt_range_r2m) {
      return false;
    }
    if (this->fac_tgt_range_m2t != other.fac_tgt_range_m2t) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrVehicle4_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrVehicle4_

// alias to use template instance with default allocator
using EsrVehicle4 =
  delphi_esr_msgs::msg::EsrVehicle4_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_VEHICLE4__STRUCT_HPP_
