// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus9.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus9 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus9 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrStatus9_
{
  using Type = EsrStatus9_<ContainerAllocator>;

  explicit EsrStatus9_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->avg_pwr_cwblkg = 0;
      this->sideslip_angle = 0.0f;
      this->serial_num_3rd_byte = 0;
      this->water_spray_target_id = 0;
      this->filtered_xohp_acc_cipv = 0.0f;
      this->path_id_acc_2 = 0;
      this->path_id_acc_3 = 0;
    }
  }

  explicit EsrStatus9_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    canmsg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->avg_pwr_cwblkg = 0;
      this->sideslip_angle = 0.0f;
      this->serial_num_3rd_byte = 0;
      this->water_spray_target_id = 0;
      this->filtered_xohp_acc_cipv = 0.0f;
      this->path_id_acc_2 = 0;
      this->path_id_acc_3 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _canmsg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _canmsg_type canmsg;
  using _avg_pwr_cwblkg_type =
    uint16_t;
  _avg_pwr_cwblkg_type avg_pwr_cwblkg;
  using _sideslip_angle_type =
    float;
  _sideslip_angle_type sideslip_angle;
  using _serial_num_3rd_byte_type =
    uint8_t;
  _serial_num_3rd_byte_type serial_num_3rd_byte;
  using _water_spray_target_id_type =
    uint8_t;
  _water_spray_target_id_type water_spray_target_id;
  using _filtered_xohp_acc_cipv_type =
    float;
  _filtered_xohp_acc_cipv_type filtered_xohp_acc_cipv;
  using _path_id_acc_2_type =
    uint8_t;
  _path_id_acc_2_type path_id_acc_2;
  using _path_id_acc_3_type =
    uint8_t;
  _path_id_acc_3_type path_id_acc_3;

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
  Type & set__avg_pwr_cwblkg(
    const uint16_t & _arg)
  {
    this->avg_pwr_cwblkg = _arg;
    return *this;
  }
  Type & set__sideslip_angle(
    const float & _arg)
  {
    this->sideslip_angle = _arg;
    return *this;
  }
  Type & set__serial_num_3rd_byte(
    const uint8_t & _arg)
  {
    this->serial_num_3rd_byte = _arg;
    return *this;
  }
  Type & set__water_spray_target_id(
    const uint8_t & _arg)
  {
    this->water_spray_target_id = _arg;
    return *this;
  }
  Type & set__filtered_xohp_acc_cipv(
    const float & _arg)
  {
    this->filtered_xohp_acc_cipv = _arg;
    return *this;
  }
  Type & set__path_id_acc_2(
    const uint8_t & _arg)
  {
    this->path_id_acc_2 = _arg;
    return *this;
  }
  Type & set__path_id_acc_3(
    const uint8_t & _arg)
  {
    this->path_id_acc_3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus9
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus9
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus9_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrStatus9_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->canmsg != other.canmsg) {
      return false;
    }
    if (this->avg_pwr_cwblkg != other.avg_pwr_cwblkg) {
      return false;
    }
    if (this->sideslip_angle != other.sideslip_angle) {
      return false;
    }
    if (this->serial_num_3rd_byte != other.serial_num_3rd_byte) {
      return false;
    }
    if (this->water_spray_target_id != other.water_spray_target_id) {
      return false;
    }
    if (this->filtered_xohp_acc_cipv != other.filtered_xohp_acc_cipv) {
      return false;
    }
    if (this->path_id_acc_2 != other.path_id_acc_2) {
      return false;
    }
    if (this->path_id_acc_3 != other.path_id_acc_3) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrStatus9_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrStatus9_

// alias to use template instance with default allocator
using EsrStatus9 =
  delphi_esr_msgs::msg::EsrStatus9_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS9__STRUCT_HPP_
