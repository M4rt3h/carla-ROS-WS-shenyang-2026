// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus6.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus6 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus6 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrStatus6_
{
  using Type = EsrStatus6_<ContainerAllocator>;

  explicit EsrStatus6_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->supply_1p8v_a2d = 0;
      this->supply_n5v_a2d = 0;
      this->wave_diff_a2d = 0;
      this->sw_version_dsp_3rd_byte = 0;
      this->vertical_align_updated = false;
      this->system_power_mode = 0;
      this->found_target = false;
      this->recommend_unconverge = false;
      this->factory_align_status_1 = 0;
      this->factory_align_status_2 = 0;
      this->factory_misalignment = 0.0f;
      this->serv_align_updates_done = 0;
      this->vertical_misalignment = 0.0f;
    }
  }

  explicit EsrStatus6_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    canmsg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->supply_1p8v_a2d = 0;
      this->supply_n5v_a2d = 0;
      this->wave_diff_a2d = 0;
      this->sw_version_dsp_3rd_byte = 0;
      this->vertical_align_updated = false;
      this->system_power_mode = 0;
      this->found_target = false;
      this->recommend_unconverge = false;
      this->factory_align_status_1 = 0;
      this->factory_align_status_2 = 0;
      this->factory_misalignment = 0.0f;
      this->serv_align_updates_done = 0;
      this->vertical_misalignment = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _canmsg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _canmsg_type canmsg;
  using _supply_1p8v_a2d_type =
    uint8_t;
  _supply_1p8v_a2d_type supply_1p8v_a2d;
  using _supply_n5v_a2d_type =
    uint8_t;
  _supply_n5v_a2d_type supply_n5v_a2d;
  using _wave_diff_a2d_type =
    uint8_t;
  _wave_diff_a2d_type wave_diff_a2d;
  using _sw_version_dsp_3rd_byte_type =
    uint8_t;
  _sw_version_dsp_3rd_byte_type sw_version_dsp_3rd_byte;
  using _vertical_align_updated_type =
    bool;
  _vertical_align_updated_type vertical_align_updated;
  using _system_power_mode_type =
    uint8_t;
  _system_power_mode_type system_power_mode;
  using _found_target_type =
    bool;
  _found_target_type found_target;
  using _recommend_unconverge_type =
    bool;
  _recommend_unconverge_type recommend_unconverge;
  using _factory_align_status_1_type =
    uint8_t;
  _factory_align_status_1_type factory_align_status_1;
  using _factory_align_status_2_type =
    uint8_t;
  _factory_align_status_2_type factory_align_status_2;
  using _factory_misalignment_type =
    float;
  _factory_misalignment_type factory_misalignment;
  using _serv_align_updates_done_type =
    uint8_t;
  _serv_align_updates_done_type serv_align_updates_done;
  using _vertical_misalignment_type =
    float;
  _vertical_misalignment_type vertical_misalignment;

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
  Type & set__supply_1p8v_a2d(
    const uint8_t & _arg)
  {
    this->supply_1p8v_a2d = _arg;
    return *this;
  }
  Type & set__supply_n5v_a2d(
    const uint8_t & _arg)
  {
    this->supply_n5v_a2d = _arg;
    return *this;
  }
  Type & set__wave_diff_a2d(
    const uint8_t & _arg)
  {
    this->wave_diff_a2d = _arg;
    return *this;
  }
  Type & set__sw_version_dsp_3rd_byte(
    const uint8_t & _arg)
  {
    this->sw_version_dsp_3rd_byte = _arg;
    return *this;
  }
  Type & set__vertical_align_updated(
    const bool & _arg)
  {
    this->vertical_align_updated = _arg;
    return *this;
  }
  Type & set__system_power_mode(
    const uint8_t & _arg)
  {
    this->system_power_mode = _arg;
    return *this;
  }
  Type & set__found_target(
    const bool & _arg)
  {
    this->found_target = _arg;
    return *this;
  }
  Type & set__recommend_unconverge(
    const bool & _arg)
  {
    this->recommend_unconverge = _arg;
    return *this;
  }
  Type & set__factory_align_status_1(
    const uint8_t & _arg)
  {
    this->factory_align_status_1 = _arg;
    return *this;
  }
  Type & set__factory_align_status_2(
    const uint8_t & _arg)
  {
    this->factory_align_status_2 = _arg;
    return *this;
  }
  Type & set__factory_misalignment(
    const float & _arg)
  {
    this->factory_misalignment = _arg;
    return *this;
  }
  Type & set__serv_align_updates_done(
    const uint8_t & _arg)
  {
    this->serv_align_updates_done = _arg;
    return *this;
  }
  Type & set__vertical_misalignment(
    const float & _arg)
  {
    this->vertical_misalignment = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus6
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus6
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus6_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrStatus6_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->canmsg != other.canmsg) {
      return false;
    }
    if (this->supply_1p8v_a2d != other.supply_1p8v_a2d) {
      return false;
    }
    if (this->supply_n5v_a2d != other.supply_n5v_a2d) {
      return false;
    }
    if (this->wave_diff_a2d != other.wave_diff_a2d) {
      return false;
    }
    if (this->sw_version_dsp_3rd_byte != other.sw_version_dsp_3rd_byte) {
      return false;
    }
    if (this->vertical_align_updated != other.vertical_align_updated) {
      return false;
    }
    if (this->system_power_mode != other.system_power_mode) {
      return false;
    }
    if (this->found_target != other.found_target) {
      return false;
    }
    if (this->recommend_unconverge != other.recommend_unconverge) {
      return false;
    }
    if (this->factory_align_status_1 != other.factory_align_status_1) {
      return false;
    }
    if (this->factory_align_status_2 != other.factory_align_status_2) {
      return false;
    }
    if (this->factory_misalignment != other.factory_misalignment) {
      return false;
    }
    if (this->serv_align_updates_done != other.serv_align_updates_done) {
      return false;
    }
    if (this->vertical_misalignment != other.vertical_misalignment) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrStatus6_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrStatus6_

// alias to use template instance with default allocator
using EsrStatus6 =
  delphi_esr_msgs::msg::EsrStatus6_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS6__STRUCT_HPP_
