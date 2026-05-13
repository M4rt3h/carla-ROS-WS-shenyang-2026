// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/ObjectData2270.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2270__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2270__STRUCT_HPP_

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
// Member 'start_scan_timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'object_list'
#include "ibeo_msgs/msg/detail/object2270__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__ObjectData2270 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__ObjectData2270 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectData2270_
{
  using Type = ObjectData2270_<ContainerAllocator>;

  explicit ObjectData2270_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ibeo_header(_init),
    start_scan_timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_list_number = 0;
      this->number_of_objects = 0;
    }
  }

  explicit ObjectData2270_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ibeo_header(_alloc, _init),
    start_scan_timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_list_number = 0;
      this->number_of_objects = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ibeo_header_type =
    ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>;
  _ibeo_header_type ibeo_header;
  using _start_scan_timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _start_scan_timestamp_type start_scan_timestamp;
  using _object_list_number_type =
    uint16_t;
  _object_list_number_type object_list_number;
  using _number_of_objects_type =
    uint16_t;
  _number_of_objects_type number_of_objects;
  using _object_list_type =
    std::vector<ibeo_msgs::msg::Object2270_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::Object2270_<ContainerAllocator>>>;
  _object_list_type object_list;

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
  Type & set__start_scan_timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->start_scan_timestamp = _arg;
    return *this;
  }
  Type & set__object_list_number(
    const uint16_t & _arg)
  {
    this->object_list_number = _arg;
    return *this;
  }
  Type & set__number_of_objects(
    const uint16_t & _arg)
  {
    this->number_of_objects = _arg;
    return *this;
  }
  Type & set__object_list(
    const std::vector<ibeo_msgs::msg::Object2270_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ibeo_msgs::msg::Object2270_<ContainerAllocator>>> & _arg)
  {
    this->object_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::ObjectData2270_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::ObjectData2270_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ObjectData2270_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::ObjectData2270_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ObjectData2270_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ObjectData2270_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::ObjectData2270_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::ObjectData2270_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ObjectData2270_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::ObjectData2270_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__ObjectData2270
    std::shared_ptr<ibeo_msgs::msg::ObjectData2270_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__ObjectData2270
    std::shared_ptr<ibeo_msgs::msg::ObjectData2270_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectData2270_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ibeo_header != other.ibeo_header) {
      return false;
    }
    if (this->start_scan_timestamp != other.start_scan_timestamp) {
      return false;
    }
    if (this->object_list_number != other.object_list_number) {
      return false;
    }
    if (this->number_of_objects != other.number_of_objects) {
      return false;
    }
    if (this->object_list != other.object_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectData2270_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectData2270_

// alias to use template instance with default allocator
using ObjectData2270 =
  ibeo_msgs::msg::ObjectData2270_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT_DATA2270__STRUCT_HPP_
