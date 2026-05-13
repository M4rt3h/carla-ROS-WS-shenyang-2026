// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/IbeoDataHeader.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__IbeoDataHeader __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__IbeoDataHeader __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IbeoDataHeader_
{
  using Type = IbeoDataHeader_<ContainerAllocator>;

  explicit IbeoDataHeader_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->previous_message_size = 0ul;
      this->message_size = 0ul;
      this->device_id = 0;
      this->data_type_id = 0;
    }
  }

  explicit IbeoDataHeader_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->previous_message_size = 0ul;
      this->message_size = 0ul;
      this->device_id = 0;
      this->data_type_id = 0;
    }
  }

  // field types and members
  using _previous_message_size_type =
    uint32_t;
  _previous_message_size_type previous_message_size;
  using _message_size_type =
    uint32_t;
  _message_size_type message_size;
  using _device_id_type =
    uint8_t;
  _device_id_type device_id;
  using _data_type_id_type =
    uint16_t;
  _data_type_id_type data_type_id;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__previous_message_size(
    const uint32_t & _arg)
  {
    this->previous_message_size = _arg;
    return *this;
  }
  Type & set__message_size(
    const uint32_t & _arg)
  {
    this->message_size = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint8_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__data_type_id(
    const uint16_t & _arg)
  {
    this->data_type_id = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__IbeoDataHeader
    std::shared_ptr<ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__IbeoDataHeader
    std::shared_ptr<ibeo_msgs::msg::IbeoDataHeader_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IbeoDataHeader_ & other) const
  {
    if (this->previous_message_size != other.previous_message_size) {
      return false;
    }
    if (this->message_size != other.message_size) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->data_type_id != other.data_type_id) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const IbeoDataHeader_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IbeoDataHeader_

// alias to use template instance with default allocator
using IbeoDataHeader =
  ibeo_msgs::msg::IbeoDataHeader_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__IBEO_DATA_HEADER__STRUCT_HPP_
