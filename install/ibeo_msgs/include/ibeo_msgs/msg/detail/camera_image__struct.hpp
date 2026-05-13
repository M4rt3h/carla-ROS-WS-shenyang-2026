// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/CameraImage.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__STRUCT_HPP_

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
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'mounting_position'
#include "ibeo_msgs/msg/detail/mounting_position_f__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__CameraImage __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__CameraImage __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraImage_
{
  using Type = CameraImage_<ContainerAllocator>;

  explicit CameraImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ibeo_header(_init),
    timestamp(_init),
    mounting_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_format = 0;
      this->us_since_power_on = 0ul;
      this->device_id = 0;
      this->horizontal_opening_angle = 0.0;
      this->vertical_opening_angle = 0.0;
      this->image_width = 0;
      this->image_height = 0;
      this->compressed_size = 0ul;
    }
  }

  explicit CameraImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ibeo_header(_alloc, _init),
    timestamp(_alloc, _init),
    mounting_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_format = 0;
      this->us_since_power_on = 0ul;
      this->device_id = 0;
      this->horizontal_opening_angle = 0.0;
      this->vertical_opening_angle = 0.0;
      this->image_width = 0;
      this->image_height = 0;
      this->compressed_size = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ibeo_header_type =
    ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>;
  _ibeo_header_type ibeo_header;
  using _image_format_type =
    uint16_t;
  _image_format_type image_format;
  using _us_since_power_on_type =
    uint32_t;
  _us_since_power_on_type us_since_power_on;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _device_id_type =
    uint8_t;
  _device_id_type device_id;
  using _mounting_position_type =
    ibeo_msgs::msg::MountingPositionF_<ContainerAllocator>;
  _mounting_position_type mounting_position;
  using _horizontal_opening_angle_type =
    double;
  _horizontal_opening_angle_type horizontal_opening_angle;
  using _vertical_opening_angle_type =
    double;
  _vertical_opening_angle_type vertical_opening_angle;
  using _image_width_type =
    uint16_t;
  _image_width_type image_width;
  using _image_height_type =
    uint16_t;
  _image_height_type image_height;
  using _compressed_size_type =
    uint32_t;
  _compressed_size_type compressed_size;
  using _image_buffer_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _image_buffer_type image_buffer;

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
  Type & set__image_format(
    const uint16_t & _arg)
  {
    this->image_format = _arg;
    return *this;
  }
  Type & set__us_since_power_on(
    const uint32_t & _arg)
  {
    this->us_since_power_on = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint8_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__mounting_position(
    const ibeo_msgs::msg::MountingPositionF_<ContainerAllocator> & _arg)
  {
    this->mounting_position = _arg;
    return *this;
  }
  Type & set__horizontal_opening_angle(
    const double & _arg)
  {
    this->horizontal_opening_angle = _arg;
    return *this;
  }
  Type & set__vertical_opening_angle(
    const double & _arg)
  {
    this->vertical_opening_angle = _arg;
    return *this;
  }
  Type & set__image_width(
    const uint16_t & _arg)
  {
    this->image_width = _arg;
    return *this;
  }
  Type & set__image_height(
    const uint16_t & _arg)
  {
    this->image_height = _arg;
    return *this;
  }
  Type & set__compressed_size(
    const uint32_t & _arg)
  {
    this->compressed_size = _arg;
    return *this;
  }
  Type & set__image_buffer(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->image_buffer = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t JPEG =
    0u;
  static constexpr uint16_t MJPEG =
    1u;
  static constexpr uint16_t GRAY8 =
    2u;
  static constexpr uint16_t YUV420 =
    3u;
  static constexpr uint16_t YUV422 =
    4u;

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::CameraImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::CameraImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::CameraImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::CameraImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::CameraImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::CameraImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::CameraImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::CameraImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::CameraImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::CameraImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__CameraImage
    std::shared_ptr<ibeo_msgs::msg::CameraImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__CameraImage
    std::shared_ptr<ibeo_msgs::msg::CameraImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraImage_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ibeo_header != other.ibeo_header) {
      return false;
    }
    if (this->image_format != other.image_format) {
      return false;
    }
    if (this->us_since_power_on != other.us_since_power_on) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->mounting_position != other.mounting_position) {
      return false;
    }
    if (this->horizontal_opening_angle != other.horizontal_opening_angle) {
      return false;
    }
    if (this->vertical_opening_angle != other.vertical_opening_angle) {
      return false;
    }
    if (this->image_width != other.image_width) {
      return false;
    }
    if (this->image_height != other.image_height) {
      return false;
    }
    if (this->compressed_size != other.compressed_size) {
      return false;
    }
    if (this->image_buffer != other.image_buffer) {
      return false;
    }
    return true;
  }
  bool operator!=(const CameraImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraImage_

// alias to use template instance with default allocator
using CameraImage =
  ibeo_msgs::msg::CameraImage_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint16_t CameraImage_<ContainerAllocator>::JPEG;
template<typename ContainerAllocator>
constexpr uint16_t CameraImage_<ContainerAllocator>::MJPEG;
template<typename ContainerAllocator>
constexpr uint16_t CameraImage_<ContainerAllocator>::GRAY8;
template<typename ContainerAllocator>
constexpr uint16_t CameraImage_<ContainerAllocator>::YUV420;
template<typename ContainerAllocator>
constexpr uint16_t CameraImage_<ContainerAllocator>::YUV422;

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__CAMERA_IMAGE__STRUCT_HPP_
