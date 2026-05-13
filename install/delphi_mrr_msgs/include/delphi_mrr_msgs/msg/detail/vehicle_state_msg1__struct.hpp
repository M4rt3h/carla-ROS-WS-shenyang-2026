// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/VehicleStateMsg1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg1 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg1 __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStateMsg1_
{
  using Type = VehicleStateMsg1_<ContainerAllocator>;

  explicit VehicleStateMsg1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_fcw_sensitivity_level = 0;
      this->can_vehicle_stationary = false;
      this->can_intf_minor_version = 0;
      this->can_intf_major_version = 0;
      this->can_brake_pedal = 0;
      this->can_high_wheel_slip = false;
      this->can_turn_signal_status = 0;
      this->can_washer_front_cmd = false;
      this->can_wiper_front_cmd = false;
      this->can_wiper_speed_info = 0;
      this->can_reverse_gear = false;
      this->can_beam_shape_actual_right = 0;
      this->can_beam_shape_actual_left = 0;
      this->can_main_beam_indication = false;
      this->can_vehicle_index = 0;
    }
  }

  explicit VehicleStateMsg1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_fcw_sensitivity_level = 0;
      this->can_vehicle_stationary = false;
      this->can_intf_minor_version = 0;
      this->can_intf_major_version = 0;
      this->can_brake_pedal = 0;
      this->can_high_wheel_slip = false;
      this->can_turn_signal_status = 0;
      this->can_washer_front_cmd = false;
      this->can_wiper_front_cmd = false;
      this->can_wiper_speed_info = 0;
      this->can_reverse_gear = false;
      this->can_beam_shape_actual_right = 0;
      this->can_beam_shape_actual_left = 0;
      this->can_main_beam_indication = false;
      this->can_vehicle_index = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_fcw_sensitivity_level_type =
    uint8_t;
  _can_fcw_sensitivity_level_type can_fcw_sensitivity_level;
  using _can_vehicle_stationary_type =
    bool;
  _can_vehicle_stationary_type can_vehicle_stationary;
  using _can_intf_minor_version_type =
    uint8_t;
  _can_intf_minor_version_type can_intf_minor_version;
  using _can_intf_major_version_type =
    uint8_t;
  _can_intf_major_version_type can_intf_major_version;
  using _can_brake_pedal_type =
    uint8_t;
  _can_brake_pedal_type can_brake_pedal;
  using _can_high_wheel_slip_type =
    bool;
  _can_high_wheel_slip_type can_high_wheel_slip;
  using _can_turn_signal_status_type =
    uint8_t;
  _can_turn_signal_status_type can_turn_signal_status;
  using _can_washer_front_cmd_type =
    bool;
  _can_washer_front_cmd_type can_washer_front_cmd;
  using _can_wiper_front_cmd_type =
    bool;
  _can_wiper_front_cmd_type can_wiper_front_cmd;
  using _can_wiper_speed_info_type =
    uint8_t;
  _can_wiper_speed_info_type can_wiper_speed_info;
  using _can_reverse_gear_type =
    bool;
  _can_reverse_gear_type can_reverse_gear;
  using _can_beam_shape_actual_right_type =
    uint8_t;
  _can_beam_shape_actual_right_type can_beam_shape_actual_right;
  using _can_beam_shape_actual_left_type =
    uint8_t;
  _can_beam_shape_actual_left_type can_beam_shape_actual_left;
  using _can_main_beam_indication_type =
    bool;
  _can_main_beam_indication_type can_main_beam_indication;
  using _can_vehicle_index_type =
    uint16_t;
  _can_vehicle_index_type can_vehicle_index;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_fcw_sensitivity_level(
    const uint8_t & _arg)
  {
    this->can_fcw_sensitivity_level = _arg;
    return *this;
  }
  Type & set__can_vehicle_stationary(
    const bool & _arg)
  {
    this->can_vehicle_stationary = _arg;
    return *this;
  }
  Type & set__can_intf_minor_version(
    const uint8_t & _arg)
  {
    this->can_intf_minor_version = _arg;
    return *this;
  }
  Type & set__can_intf_major_version(
    const uint8_t & _arg)
  {
    this->can_intf_major_version = _arg;
    return *this;
  }
  Type & set__can_brake_pedal(
    const uint8_t & _arg)
  {
    this->can_brake_pedal = _arg;
    return *this;
  }
  Type & set__can_high_wheel_slip(
    const bool & _arg)
  {
    this->can_high_wheel_slip = _arg;
    return *this;
  }
  Type & set__can_turn_signal_status(
    const uint8_t & _arg)
  {
    this->can_turn_signal_status = _arg;
    return *this;
  }
  Type & set__can_washer_front_cmd(
    const bool & _arg)
  {
    this->can_washer_front_cmd = _arg;
    return *this;
  }
  Type & set__can_wiper_front_cmd(
    const bool & _arg)
  {
    this->can_wiper_front_cmd = _arg;
    return *this;
  }
  Type & set__can_wiper_speed_info(
    const uint8_t & _arg)
  {
    this->can_wiper_speed_info = _arg;
    return *this;
  }
  Type & set__can_reverse_gear(
    const bool & _arg)
  {
    this->can_reverse_gear = _arg;
    return *this;
  }
  Type & set__can_beam_shape_actual_right(
    const uint8_t & _arg)
  {
    this->can_beam_shape_actual_right = _arg;
    return *this;
  }
  Type & set__can_beam_shape_actual_left(
    const uint8_t & _arg)
  {
    this->can_beam_shape_actual_left = _arg;
    return *this;
  }
  Type & set__can_main_beam_indication(
    const bool & _arg)
  {
    this->can_main_beam_indication = _arg;
    return *this;
  }
  Type & set__can_vehicle_index(
    const uint16_t & _arg)
  {
    this->can_vehicle_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg1
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__VehicleStateMsg1
    std::shared_ptr<delphi_mrr_msgs::msg::VehicleStateMsg1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStateMsg1_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_fcw_sensitivity_level != other.can_fcw_sensitivity_level) {
      return false;
    }
    if (this->can_vehicle_stationary != other.can_vehicle_stationary) {
      return false;
    }
    if (this->can_intf_minor_version != other.can_intf_minor_version) {
      return false;
    }
    if (this->can_intf_major_version != other.can_intf_major_version) {
      return false;
    }
    if (this->can_brake_pedal != other.can_brake_pedal) {
      return false;
    }
    if (this->can_high_wheel_slip != other.can_high_wheel_slip) {
      return false;
    }
    if (this->can_turn_signal_status != other.can_turn_signal_status) {
      return false;
    }
    if (this->can_washer_front_cmd != other.can_washer_front_cmd) {
      return false;
    }
    if (this->can_wiper_front_cmd != other.can_wiper_front_cmd) {
      return false;
    }
    if (this->can_wiper_speed_info != other.can_wiper_speed_info) {
      return false;
    }
    if (this->can_reverse_gear != other.can_reverse_gear) {
      return false;
    }
    if (this->can_beam_shape_actual_right != other.can_beam_shape_actual_right) {
      return false;
    }
    if (this->can_beam_shape_actual_left != other.can_beam_shape_actual_left) {
      return false;
    }
    if (this->can_main_beam_indication != other.can_main_beam_indication) {
      return false;
    }
    if (this->can_vehicle_index != other.can_vehicle_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStateMsg1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStateMsg1_

// alias to use template instance with default allocator
using VehicleStateMsg1 =
  delphi_mrr_msgs::msg::VehicleStateMsg1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__VEHICLE_STATE_MSG1__STRUCT_HPP_
