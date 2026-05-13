// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_esr_msgs:msg/EsrStatus4.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__STRUCT_HPP_
#define DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__STRUCT_HPP_

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
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus4 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_esr_msgs__msg__EsrStatus4 __declspec(deprecated)
#endif

namespace delphi_esr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EsrStatus4_
{
  using Type = EsrStatus4_<ContainerAllocator>;

  explicit EsrStatus4_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->truck_target_det = false;
      this->lr_only_grating_lobe_det = false;
      this->sidelobe_blockage = false;
      this->partial_blockage = false;
      this->mr_lr_mode = 0;
      this->rolling_count_3 = 0;
      this->path_id_acc = 0;
      this->path_id_cmbb_move = 0;
      this->path_id_cmbb_stat = 0;
      this->path_id_fcw_move = 0;
      this->path_id_fcw_stat = 0;
      this->auto_align_angle = 0.0f;
      this->path_id_acc_stat = 0;
    }
  }

  explicit EsrStatus4_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    canmsg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->canmsg = "";
      this->truck_target_det = false;
      this->lr_only_grating_lobe_det = false;
      this->sidelobe_blockage = false;
      this->partial_blockage = false;
      this->mr_lr_mode = 0;
      this->rolling_count_3 = 0;
      this->path_id_acc = 0;
      this->path_id_cmbb_move = 0;
      this->path_id_cmbb_stat = 0;
      this->path_id_fcw_move = 0;
      this->path_id_fcw_stat = 0;
      this->auto_align_angle = 0.0f;
      this->path_id_acc_stat = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _canmsg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _canmsg_type canmsg;
  using _truck_target_det_type =
    bool;
  _truck_target_det_type truck_target_det;
  using _lr_only_grating_lobe_det_type =
    bool;
  _lr_only_grating_lobe_det_type lr_only_grating_lobe_det;
  using _sidelobe_blockage_type =
    bool;
  _sidelobe_blockage_type sidelobe_blockage;
  using _partial_blockage_type =
    bool;
  _partial_blockage_type partial_blockage;
  using _mr_lr_mode_type =
    uint8_t;
  _mr_lr_mode_type mr_lr_mode;
  using _rolling_count_3_type =
    uint8_t;
  _rolling_count_3_type rolling_count_3;
  using _path_id_acc_type =
    uint8_t;
  _path_id_acc_type path_id_acc;
  using _path_id_cmbb_move_type =
    uint8_t;
  _path_id_cmbb_move_type path_id_cmbb_move;
  using _path_id_cmbb_stat_type =
    uint8_t;
  _path_id_cmbb_stat_type path_id_cmbb_stat;
  using _path_id_fcw_move_type =
    uint8_t;
  _path_id_fcw_move_type path_id_fcw_move;
  using _path_id_fcw_stat_type =
    uint8_t;
  _path_id_fcw_stat_type path_id_fcw_stat;
  using _auto_align_angle_type =
    float;
  _auto_align_angle_type auto_align_angle;
  using _path_id_acc_stat_type =
    uint8_t;
  _path_id_acc_stat_type path_id_acc_stat;

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
  Type & set__truck_target_det(
    const bool & _arg)
  {
    this->truck_target_det = _arg;
    return *this;
  }
  Type & set__lr_only_grating_lobe_det(
    const bool & _arg)
  {
    this->lr_only_grating_lobe_det = _arg;
    return *this;
  }
  Type & set__sidelobe_blockage(
    const bool & _arg)
  {
    this->sidelobe_blockage = _arg;
    return *this;
  }
  Type & set__partial_blockage(
    const bool & _arg)
  {
    this->partial_blockage = _arg;
    return *this;
  }
  Type & set__mr_lr_mode(
    const uint8_t & _arg)
  {
    this->mr_lr_mode = _arg;
    return *this;
  }
  Type & set__rolling_count_3(
    const uint8_t & _arg)
  {
    this->rolling_count_3 = _arg;
    return *this;
  }
  Type & set__path_id_acc(
    const uint8_t & _arg)
  {
    this->path_id_acc = _arg;
    return *this;
  }
  Type & set__path_id_cmbb_move(
    const uint8_t & _arg)
  {
    this->path_id_cmbb_move = _arg;
    return *this;
  }
  Type & set__path_id_cmbb_stat(
    const uint8_t & _arg)
  {
    this->path_id_cmbb_stat = _arg;
    return *this;
  }
  Type & set__path_id_fcw_move(
    const uint8_t & _arg)
  {
    this->path_id_fcw_move = _arg;
    return *this;
  }
  Type & set__path_id_fcw_stat(
    const uint8_t & _arg)
  {
    this->path_id_fcw_stat = _arg;
    return *this;
  }
  Type & set__auto_align_angle(
    const float & _arg)
  {
    this->auto_align_angle = _arg;
    return *this;
  }
  Type & set__path_id_acc_stat(
    const uint8_t & _arg)
  {
    this->path_id_acc_stat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus4
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_esr_msgs__msg__EsrStatus4
    std::shared_ptr<delphi_esr_msgs::msg::EsrStatus4_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EsrStatus4_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->canmsg != other.canmsg) {
      return false;
    }
    if (this->truck_target_det != other.truck_target_det) {
      return false;
    }
    if (this->lr_only_grating_lobe_det != other.lr_only_grating_lobe_det) {
      return false;
    }
    if (this->sidelobe_blockage != other.sidelobe_blockage) {
      return false;
    }
    if (this->partial_blockage != other.partial_blockage) {
      return false;
    }
    if (this->mr_lr_mode != other.mr_lr_mode) {
      return false;
    }
    if (this->rolling_count_3 != other.rolling_count_3) {
      return false;
    }
    if (this->path_id_acc != other.path_id_acc) {
      return false;
    }
    if (this->path_id_cmbb_move != other.path_id_cmbb_move) {
      return false;
    }
    if (this->path_id_cmbb_stat != other.path_id_cmbb_stat) {
      return false;
    }
    if (this->path_id_fcw_move != other.path_id_fcw_move) {
      return false;
    }
    if (this->path_id_fcw_stat != other.path_id_fcw_stat) {
      return false;
    }
    if (this->auto_align_angle != other.auto_align_angle) {
      return false;
    }
    if (this->path_id_acc_stat != other.path_id_acc_stat) {
      return false;
    }
    return true;
  }
  bool operator!=(const EsrStatus4_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EsrStatus4_

// alias to use template instance with default allocator
using EsrStatus4 =
  delphi_esr_msgs::msg::EsrStatus4_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_esr_msgs

#endif  // DELPHI_ESR_MSGS__MSG__DETAIL__ESR_STATUS4__STRUCT_HPP_
