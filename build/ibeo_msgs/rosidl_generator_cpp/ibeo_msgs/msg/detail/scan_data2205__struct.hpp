// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/ScanData2205.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_DATA2205__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_DATA2205__STRUCT_HPP_

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
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'scanner_info_list'
#include "ibeo_msgs/msg/detail/scanner_info2205__struct.hpp"
// Member 'scan_point_list'
#include "ibeo_msgs/msg/detail/scan_point2205__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__ScanData2205 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__ScanData2205 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ScanData2205_
{
  using Type = ScanData2205_<ContainerAllocator>;

  explicit ScanData2205_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ibeo_header(_init),
    scan_start_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_end_time_offset = 0;
      this->fused_scan = false;
      this->mirror_side = 0;
      this->coordinate_system = 0;
      this->scan_number = 0;
      this->scan_points = 0;
      this->number_of_scanner_infos = 0;
    }
  }

  explicit ScanData2205_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ibeo_header(_alloc, _init),
    scan_start_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scan_end_time_offset = 0;
      this->fused_scan = false;
      this->mirror_side = 0;
      this->coordinate_system = 0;
      this->scan_number = 0;
      this->scan_points = 0;
      this->number_of_scanner_infos = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ibeo_header_type =
    ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>;
  _ibeo_header_type ibeo_header;
  using _scan_start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _scan_start_time_type scan_start_time;
  using _scan_end_time_offset_type =
    uint8_t;
  _scan_end_time_offset_type scan_end_time_offset;
  using _fused_scan_type =
    bool;
  _fused_scan_type fused_scan;
  using _mirror_side_type =
    uint8_t;
  _mirror_side_type mirror_side;
  using _coordinate_system_type =
    uint8_t;
  _coordinate_system_type coordinate_system;
  using _scan_number_type =
    uint16_t;
  _scan_number_type scan_number;
  using _scan_points_type =
    uint16_t;
  _scan_points_type scan_points;
  using _number_of_scanner_infos_type =
    uint8_t;
  _number_of_scanner_infos_type number_of_scanner_infos;
  using _scanner_info_list_type =
    std::vector<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator>>>;
  _scanner_info_list_type scanner_info_list;
  using _scan_point_list_type =
    std::vector<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator>>>;
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
  Type & set__scan_start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->scan_start_time = _arg;
    return *this;
  }
  Type & set__scan_end_time_offset(
    const uint8_t & _arg)
  {
    this->scan_end_time_offset = _arg;
    return *this;
  }
  Type & set__fused_scan(
    const bool & _arg)
  {
    this->fused_scan = _arg;
    return *this;
  }
  Type & set__mirror_side(
    const uint8_t & _arg)
  {
    this->mirror_side = _arg;
    return *this;
  }
  Type & set__coordinate_system(
    const uint8_t & _arg)
  {
    this->coordinate_system = _arg;
    return *this;
  }
  Type & set__scan_number(
    const uint16_t & _arg)
  {
    this->scan_number = _arg;
    return *this;
  }
  Type & set__scan_points(
    const uint16_t & _arg)
  {
    this->scan_points = _arg;
    return *this;
  }
  Type & set__number_of_scanner_infos(
    const uint8_t & _arg)
  {
    this->number_of_scanner_infos = _arg;
    return *this;
  }
  Type & set__scanner_info_list(
    const std::vector<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::ScannerInfo2205_<ContainerAllocator>>> & _arg)
  {
    this->scanner_info_list = _arg;
    return *this;
  }
  Type & set__scan_point_list(
    const std::vector<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::ScanPoint2205_<ContainerAllocator>>> & _arg)
  {
    this->scan_point_list = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FRONT =
    0u;
  static constexpr uint8_t REAR =
    1u;
  static constexpr uint8_t SCANNER =
    0u;
  static constexpr uint8_t VEHICLE =
    1u;

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::ScanData2205_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::ScanData2205_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScanData2205_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ScanData2205_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScanData2205_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScanData2205_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ScanData2205_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ScanData2205_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScanData2205_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ScanData2205_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__ScanData2205
    std::shared_ptr<ibeo_msgs::msg::ScanData2205_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__ScanData2205
    std::shared_ptr<ibeo_msgs::msg::ScanData2205_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ScanData2205_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ibeo_header != other.ibeo_header) {
      return false;
    }
    if (this->scan_start_time != other.scan_start_time) {
      return false;
    }
    if (this->scan_end_time_offset != other.scan_end_time_offset) {
      return false;
    }
    if (this->fused_scan != other.fused_scan) {
      return false;
    }
    if (this->mirror_side != other.mirror_side) {
      return false;
    }
    if (this->coordinate_system != other.coordinate_system) {
      return false;
    }
    if (this->scan_number != other.scan_number) {
      return false;
    }
    if (this->scan_points != other.scan_points) {
      return false;
    }
    if (this->number_of_scanner_infos != other.number_of_scanner_infos) {
      return false;
    }
    if (this->scanner_info_list != other.scanner_info_list) {
      return false;
    }
    if (this->scan_point_list != other.scan_point_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ScanData2205_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ScanData2205_

// alias to use template instance with default allocator
using ScanData2205 =
  ibeo_msgs::msg::ScanData2205_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ScanData2205_<ContainerAllocator>::FRONT;
template<typename ContainerAllocator>
constexpr uint8_t ScanData2205_<ContainerAllocator>::REAR;
template<typename ContainerAllocator>
constexpr uint8_t ScanData2205_<ContainerAllocator>::SCANNER;
template<typename ContainerAllocator>
constexpr uint8_t ScanData2205_<ContainerAllocator>::VEHICLE;

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_DATA2205__STRUCT_HPP_
