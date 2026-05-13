// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/ScanData2202.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__STRUCT_HPP_

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
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__struct.hpp"
// Member 'scan_start_time'
// Member 'scan_end_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'scan_point_list'
#include "ibeo_msgs/msg/detail/scan_point2202__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__ScanData2202 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__ScanData2202 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScanData2202_
{
  using Type = ScanData2202_<ContainerAllocator>;

  explicit ScanData2202_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ibeo_header(_init),
    scan_start_time(_init),
    scan_end_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_number = 0;
      this->scanner_status = 0;
      this->sync_phase_offset = 0;
      this->angle_ticks_per_rotation = 0;
      this->start_angle_ticks = 0;
      this->end_angle_ticks = 0;
      this->scan_points_count = 0;
      this->mounting_yaw_angle_ticks = 0;
      this->mounting_pitch_angle_ticks = 0;
      this->mounting_roll_angle_ticks = 0;
      this->mounting_position_x = 0;
      this->mounting_position_y = 0;
      this->mounting_position_z = 0;
      this->ground_labeled = false;
      this->dirt_labeled = false;
      this->rain_labeled = false;
      this->mirror_side = 0;
    }
  }

  explicit ScanData2202_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ibeo_header(_alloc, _init),
    scan_start_time(_alloc, _init),
    scan_end_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_number = 0;
      this->scanner_status = 0;
      this->sync_phase_offset = 0;
      this->angle_ticks_per_rotation = 0;
      this->start_angle_ticks = 0;
      this->end_angle_ticks = 0;
      this->scan_points_count = 0;
      this->mounting_yaw_angle_ticks = 0;
      this->mounting_pitch_angle_ticks = 0;
      this->mounting_roll_angle_ticks = 0;
      this->mounting_position_x = 0;
      this->mounting_position_y = 0;
      this->mounting_position_z = 0;
      this->ground_labeled = false;
      this->dirt_labeled = false;
      this->rain_labeled = false;
      this->mirror_side = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ibeo_header_type =
    ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>;
  _ibeo_header_type ibeo_header;
  using _scan_number_type =
    uint16_t;
  _scan_number_type scan_number;
  using _scanner_status_type =
    uint16_t;
  _scanner_status_type scanner_status;
  using _sync_phase_offset_type =
    uint16_t;
  _sync_phase_offset_type sync_phase_offset;
  using _scan_start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _scan_start_time_type scan_start_time;
  using _scan_end_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _scan_end_time_type scan_end_time;
  using _angle_ticks_per_rotation_type =
    uint16_t;
  _angle_ticks_per_rotation_type angle_ticks_per_rotation;
  using _start_angle_ticks_type =
    int16_t;
  _start_angle_ticks_type start_angle_ticks;
  using _end_angle_ticks_type =
    int16_t;
  _end_angle_ticks_type end_angle_ticks;
  using _scan_points_count_type =
    uint16_t;
  _scan_points_count_type scan_points_count;
  using _mounting_yaw_angle_ticks_type =
    int16_t;
  _mounting_yaw_angle_ticks_type mounting_yaw_angle_ticks;
  using _mounting_pitch_angle_ticks_type =
    int16_t;
  _mounting_pitch_angle_ticks_type mounting_pitch_angle_ticks;
  using _mounting_roll_angle_ticks_type =
    int16_t;
  _mounting_roll_angle_ticks_type mounting_roll_angle_ticks;
  using _mounting_position_x_type =
    int16_t;
  _mounting_position_x_type mounting_position_x;
  using _mounting_position_y_type =
    int16_t;
  _mounting_position_y_type mounting_position_y;
  using _mounting_position_z_type =
    int16_t;
  _mounting_position_z_type mounting_position_z;
  using _ground_labeled_type =
    bool;
  _ground_labeled_type ground_labeled;
  using _dirt_labeled_type =
    bool;
  _dirt_labeled_type dirt_labeled;
  using _rain_labeled_type =
    bool;
  _rain_labeled_type rain_labeled;
  using _mirror_side_type =
    uint8_t;
  _mirror_side_type mirror_side;
  using _scan_point_list_type =
    std::vector<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator>>>;
  _scan_point_list_type scan_point_list;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ibeo_header(
    const ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator> & _arg)
  {
    this->ibeo_header = _arg;
    return *this;
  }
  Type & set__scan_number(
    const uint16_t & _arg)
  {
    this->scan_number = _arg;
    return *this;
  }
  Type & set__scanner_status(
    const uint16_t & _arg)
  {
    this->scanner_status = _arg;
    return *this;
  }
  Type & set__sync_phase_offset(
    const uint16_t & _arg)
  {
    this->sync_phase_offset = _arg;
    return *this;
  }
  Type & set__scan_start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->scan_start_time = _arg;
    return *this;
  }
  Type & set__scan_end_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->scan_end_time = _arg;
    return *this;
  }
  Type & set__angle_ticks_per_rotation(
    const uint16_t & _arg)
  {
    this->angle_ticks_per_rotation = _arg;
    return *this;
  }
  Type & set__start_angle_ticks(
    const int16_t & _arg)
  {
    this->start_angle_ticks = _arg;
    return *this;
  }
  Type & set__end_angle_ticks(
    const int16_t & _arg)
  {
    this->end_angle_ticks = _arg;
    return *this;
  }
  Type & set__scan_points_count(
    const uint16_t & _arg)
  {
    this->scan_points_count = _arg;
    return *this;
  }
  Type & set__mounting_yaw_angle_ticks(
    const int16_t & _arg)
  {
    this->mounting_yaw_angle_ticks = _arg;
    return *this;
  }
  Type & set__mounting_pitch_angle_ticks(
    const int16_t & _arg)
  {
    this->mounting_pitch_angle_ticks = _arg;
    return *this;
  }
  Type & set__mounting_roll_angle_ticks(
    const int16_t & _arg)
  {
    this->mounting_roll_angle_ticks = _arg;
    return *this;
  }
  Type & set__mounting_position_x(
    const int16_t & _arg)
  {
    this->mounting_position_x = _arg;
    return *this;
  }
  Type & set__mounting_position_y(
    const int16_t & _arg)
  {
    this->mounting_position_y = _arg;
    return *this;
  }
  Type & set__mounting_position_z(
    const int16_t & _arg)
  {
    this->mounting_position_z = _arg;
    return *this;
  }
  Type & set__ground_labeled(
    const bool & _arg)
  {
    this->ground_labeled = _arg;
    return *this;
  }
  Type & set__dirt_labeled(
    const bool & _arg)
  {
    this->dirt_labeled = _arg;
    return *this;
  }
  Type & set__rain_labeled(
    const bool & _arg)
  {
    this->rain_labeled = _arg;
    return *this;
  }
  Type & set__mirror_side(
    const uint8_t & _arg)
  {
    this->mirror_side = _arg;
    return *this;
  }
  Type & set__scan_point_list(
    const std::vector<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::ScanPoint2202_<ContainerAllocator>>> & _arg)
  {
    this->scan_point_list = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FRONT =
    0u;
  static constexpr uint8_t REAR =
    1u;

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::ScanData2202_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::ScanData2202_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScanData2202_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScanData2202_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScanData2202_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScanData2202_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScanData2202_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScanData2202_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScanData2202_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScanData2202_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__ScanData2202
    std::shared_ptr<ibeo_msgs::msg::ScanData2202_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__ScanData2202
    std::shared_ptr<ibeo_msgs::msg::ScanData2202_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScanData2202_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ibeo_header != other.ibeo_header) {
      return false;
    }
    if (this->scan_number != other.scan_number) {
      return false;
    }
    if (this->scanner_status != other.scanner_status) {
      return false;
    }
    if (this->sync_phase_offset != other.sync_phase_offset) {
      return false;
    }
    if (this->scan_start_time != other.scan_start_time) {
      return false;
    }
    if (this->scan_end_time != other.scan_end_time) {
      return false;
    }
    if (this->angle_ticks_per_rotation != other.angle_ticks_per_rotation) {
      return false;
    }
    if (this->start_angle_ticks != other.start_angle_ticks) {
      return false;
    }
    if (this->end_angle_ticks != other.end_angle_ticks) {
      return false;
    }
    if (this->scan_points_count != other.scan_points_count) {
      return false;
    }
    if (this->mounting_yaw_angle_ticks != other.mounting_yaw_angle_ticks) {
      return false;
    }
    if (this->mounting_pitch_angle_ticks != other.mounting_pitch_angle_ticks) {
      return false;
    }
    if (this->mounting_roll_angle_ticks != other.mounting_roll_angle_ticks) {
      return false;
    }
    if (this->mounting_position_x != other.mounting_position_x) {
      return false;
    }
    if (this->mounting_position_y != other.mounting_position_y) {
      return false;
    }
    if (this->mounting_position_z != other.mounting_position_z) {
      return false;
    }
    if (this->ground_labeled != other.ground_labeled) {
      return false;
    }
    if (this->dirt_labeled != other.dirt_labeled) {
      return false;
    }
    if (this->rain_labeled != other.rain_labeled) {
      return false;
    }
    if (this->mirror_side != other.mirror_side) {
      return false;
    }
    if (this->scan_point_list != other.scan_point_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScanData2202_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScanData2202_

// alias to use template instance with default allocator
using ScanData2202 =
  ibeo_msgs::msg::ScanData2202_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ScanData2202_<ContainerAllocator>::FRONT;
template<typename ContainerAllocator>
constexpr uint8_t ScanData2202_<ContainerAllocator>::REAR;

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__STRUCT_HPP_
