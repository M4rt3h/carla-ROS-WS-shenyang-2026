// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ibeo_msgs:msg/Object2271.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2271__STRUCT_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2271__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'tracked_properties'
#include "ibeo_msgs/msg/detail/tracked_properties__struct.hpp"
// Member 'untracked_properties'
#include "ibeo_msgs/msg/detail/untracked_properties__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ibeo_msgs__msg__Object2271 __attribute__((deprecated))
#else
# define DEPRECATED__ibeo_msgs__msg__Object2271 __declspec(deprecated)
#endif

namespace ibeo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object2271_
{
  using Type = Object2271_<ContainerAllocator>;

  explicit Object2271_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tracked_properties(_init),
    untracked_properties(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->tracked_properties_available = false;
      this->untracked_properties_available = false;
    }
  }

  explicit Object2271_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tracked_properties(_alloc, _init),
    untracked_properties(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->tracked_properties_available = false;
      this->untracked_properties_available = false;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _tracked_properties_available_type =
    bool;
  _tracked_properties_available_type tracked_properties_available;
  using _untracked_properties_available_type =
    bool;
  _untracked_properties_available_type untracked_properties_available;
  using _tracked_properties_type =
    ibeo_msgs::msg::TrackedProperties_<ContainerAllocator>;
  _tracked_properties_type tracked_properties;
  using _untracked_properties_type =
    ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator>;
  _untracked_properties_type untracked_properties;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__tracked_properties_available(
    const bool & _arg)
  {
    this->tracked_properties_available = _arg;
    return *this;
  }
  Type & set__untracked_properties_available(
    const bool & _arg)
  {
    this->untracked_properties_available = _arg;
    return *this;
  }
  Type & set__tracked_properties(
    const ibeo_msgs::msg::TrackedProperties_<ContainerAllocator> & _arg)
  {
    this->tracked_properties = _arg;
    return *this;
  }
  Type & set__untracked_properties(
    const ibeo_msgs::msg::UntrackedProperties_<ContainerAllocator> & _arg)
  {
    this->untracked_properties = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ibeo_msgs::msg::Object2271_<ContainerAllocator> *;
  using ConstRawPtr =
    const ibeo_msgs::msg::Object2271_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Object2271_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ibeo_msgs::msg::Object2271_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Object2271_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Object2271_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ibeo_msgs::msg::Object2271_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ibeo_msgs::msg::Object2271_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Object2271_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ibeo_msgs::msg::Object2271_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ibeo_msgs__msg__Object2271
    std::shared_ptr<ibeo_msgs::msg::Object2271_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ibeo_msgs__msg__Object2271
    std::shared_ptr<ibeo_msgs::msg::Object2271_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object2271_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->tracked_properties_available != other.tracked_properties_available) {
      return false;
    }
    if (this->untracked_properties_available != other.untracked_properties_available) {
      return false;
    }
    if (this->tracked_properties != other.tracked_properties) {
      return false;
    }
    if (this->untracked_properties != other.untracked_properties) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object2271_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object2271_

// alias to use template instance with default allocator
using Object2271 =
  ibeo_msgs::msg::Object2271_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ibeo_msgs

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2271__STRUCT_HPP_
