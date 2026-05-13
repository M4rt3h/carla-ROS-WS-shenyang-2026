// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from neobotix_usboard_msgs:msg/Paraset.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__PARASET__STRUCT_HPP_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__PARASET__STRUCT_HPP_

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
# define DEPRECATED__neobotix_usboard_msgs__msg__Paraset __attribute__((deprecated))
#else
# define DEPRECATED__neobotix_usboard_msgs__msg__Paraset __declspec(deprecated)
#endif

namespace neobotix_usboard_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Paraset_
{
  using Type = Paraset_<ContainerAllocator>;

  explicit Paraset_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->set_num = 0;
      this->paraset_byte54 = 0;
      this->paraset_byte53 = 0;
      this->paraset_byte52 = 0;
      this->paraset_byte51 = 0;
      this->paraset_byte50 = 0;
      this->paraset_byte49 = 0;
      this->paraset_byte48 = 0;
      this->paraset_byte47 = 0;
      this->paraset_byte46 = 0;
      this->paraset_byte45 = 0;
      this->paraset_byte44 = 0;
      this->paraset_byte43 = 0;
      this->paraset_byte42 = 0;
      this->paraset_byte41 = 0;
      this->paraset_byte40 = 0;
      this->paraset_byte39 = 0;
      this->paraset_byte38 = 0;
      this->paraset_byte37 = 0;
      this->paraset_byte36 = 0;
      this->paraset_byte35 = 0;
      this->paraset_byte34 = 0;
      this->paraset_byte33 = 0;
      this->paraset_byte32 = 0;
      this->paraset_byte31 = 0;
      this->paraset_byte30 = 0;
      this->paraset_byte29 = 0;
      this->paraset_byte28 = 0;
      this->paraset_byte27 = 0;
      this->paraset_byte26 = 0;
      this->paraset_byte25 = 0;
      this->paraset_byte24 = 0;
      this->paraset_byte23 = 0;
      this->paraset_byte22 = 0;
      this->paraset_byte21 = 0;
      this->paraset_byte20 = 0;
      this->paraset_byte19 = 0;
      this->paraset_byte18 = 0;
      this->paraset_byte17 = 0;
      this->paraset_byte16 = 0;
      this->paraset_byte15 = 0;
      this->paraset_byte14 = 0;
      this->paraset_byte13 = 0;
      this->paraset_byte12 = 0;
      this->paraset_byte11 = 0;
      this->paraset_byte10 = 0;
      this->paraset_byte9 = 0;
      this->paraset_byte8 = 0;
      this->paraset_byte7 = 0;
      this->paraset_byte6 = 0;
      this->paraset_byte5 = 0;
      this->paraset_byte4 = 0;
      this->paraset_byte3 = 0;
      this->paraset_byte2 = 0;
      this->paraset_byte1 = 0;
    }
  }

  explicit Paraset_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->set_num = 0;
      this->paraset_byte54 = 0;
      this->paraset_byte53 = 0;
      this->paraset_byte52 = 0;
      this->paraset_byte51 = 0;
      this->paraset_byte50 = 0;
      this->paraset_byte49 = 0;
      this->paraset_byte48 = 0;
      this->paraset_byte47 = 0;
      this->paraset_byte46 = 0;
      this->paraset_byte45 = 0;
      this->paraset_byte44 = 0;
      this->paraset_byte43 = 0;
      this->paraset_byte42 = 0;
      this->paraset_byte41 = 0;
      this->paraset_byte40 = 0;
      this->paraset_byte39 = 0;
      this->paraset_byte38 = 0;
      this->paraset_byte37 = 0;
      this->paraset_byte36 = 0;
      this->paraset_byte35 = 0;
      this->paraset_byte34 = 0;
      this->paraset_byte33 = 0;
      this->paraset_byte32 = 0;
      this->paraset_byte31 = 0;
      this->paraset_byte30 = 0;
      this->paraset_byte29 = 0;
      this->paraset_byte28 = 0;
      this->paraset_byte27 = 0;
      this->paraset_byte26 = 0;
      this->paraset_byte25 = 0;
      this->paraset_byte24 = 0;
      this->paraset_byte23 = 0;
      this->paraset_byte22 = 0;
      this->paraset_byte21 = 0;
      this->paraset_byte20 = 0;
      this->paraset_byte19 = 0;
      this->paraset_byte18 = 0;
      this->paraset_byte17 = 0;
      this->paraset_byte16 = 0;
      this->paraset_byte15 = 0;
      this->paraset_byte14 = 0;
      this->paraset_byte13 = 0;
      this->paraset_byte12 = 0;
      this->paraset_byte11 = 0;
      this->paraset_byte10 = 0;
      this->paraset_byte9 = 0;
      this->paraset_byte8 = 0;
      this->paraset_byte7 = 0;
      this->paraset_byte6 = 0;
      this->paraset_byte5 = 0;
      this->paraset_byte4 = 0;
      this->paraset_byte3 = 0;
      this->paraset_byte2 = 0;
      this->paraset_byte1 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _command_type =
    uint8_t;
  _command_type command;
  using _set_num_type =
    uint8_t;
  _set_num_type set_num;
  using _paraset_byte54_type =
    uint8_t;
  _paraset_byte54_type paraset_byte54;
  using _paraset_byte53_type =
    uint8_t;
  _paraset_byte53_type paraset_byte53;
  using _paraset_byte52_type =
    uint8_t;
  _paraset_byte52_type paraset_byte52;
  using _paraset_byte51_type =
    uint8_t;
  _paraset_byte51_type paraset_byte51;
  using _paraset_byte50_type =
    uint8_t;
  _paraset_byte50_type paraset_byte50;
  using _paraset_byte49_type =
    uint8_t;
  _paraset_byte49_type paraset_byte49;
  using _paraset_byte48_type =
    uint8_t;
  _paraset_byte48_type paraset_byte48;
  using _paraset_byte47_type =
    uint8_t;
  _paraset_byte47_type paraset_byte47;
  using _paraset_byte46_type =
    uint8_t;
  _paraset_byte46_type paraset_byte46;
  using _paraset_byte45_type =
    uint8_t;
  _paraset_byte45_type paraset_byte45;
  using _paraset_byte44_type =
    uint8_t;
  _paraset_byte44_type paraset_byte44;
  using _paraset_byte43_type =
    uint8_t;
  _paraset_byte43_type paraset_byte43;
  using _paraset_byte42_type =
    uint8_t;
  _paraset_byte42_type paraset_byte42;
  using _paraset_byte41_type =
    uint8_t;
  _paraset_byte41_type paraset_byte41;
  using _paraset_byte40_type =
    uint8_t;
  _paraset_byte40_type paraset_byte40;
  using _paraset_byte39_type =
    uint8_t;
  _paraset_byte39_type paraset_byte39;
  using _paraset_byte38_type =
    uint8_t;
  _paraset_byte38_type paraset_byte38;
  using _paraset_byte37_type =
    uint8_t;
  _paraset_byte37_type paraset_byte37;
  using _paraset_byte36_type =
    uint8_t;
  _paraset_byte36_type paraset_byte36;
  using _paraset_byte35_type =
    uint8_t;
  _paraset_byte35_type paraset_byte35;
  using _paraset_byte34_type =
    uint8_t;
  _paraset_byte34_type paraset_byte34;
  using _paraset_byte33_type =
    uint8_t;
  _paraset_byte33_type paraset_byte33;
  using _paraset_byte32_type =
    uint8_t;
  _paraset_byte32_type paraset_byte32;
  using _paraset_byte31_type =
    uint8_t;
  _paraset_byte31_type paraset_byte31;
  using _paraset_byte30_type =
    uint8_t;
  _paraset_byte30_type paraset_byte30;
  using _paraset_byte29_type =
    uint8_t;
  _paraset_byte29_type paraset_byte29;
  using _paraset_byte28_type =
    uint8_t;
  _paraset_byte28_type paraset_byte28;
  using _paraset_byte27_type =
    uint8_t;
  _paraset_byte27_type paraset_byte27;
  using _paraset_byte26_type =
    uint8_t;
  _paraset_byte26_type paraset_byte26;
  using _paraset_byte25_type =
    uint8_t;
  _paraset_byte25_type paraset_byte25;
  using _paraset_byte24_type =
    uint8_t;
  _paraset_byte24_type paraset_byte24;
  using _paraset_byte23_type =
    uint8_t;
  _paraset_byte23_type paraset_byte23;
  using _paraset_byte22_type =
    uint8_t;
  _paraset_byte22_type paraset_byte22;
  using _paraset_byte21_type =
    uint8_t;
  _paraset_byte21_type paraset_byte21;
  using _paraset_byte20_type =
    uint8_t;
  _paraset_byte20_type paraset_byte20;
  using _paraset_byte19_type =
    uint8_t;
  _paraset_byte19_type paraset_byte19;
  using _paraset_byte18_type =
    uint8_t;
  _paraset_byte18_type paraset_byte18;
  using _paraset_byte17_type =
    uint8_t;
  _paraset_byte17_type paraset_byte17;
  using _paraset_byte16_type =
    uint8_t;
  _paraset_byte16_type paraset_byte16;
  using _paraset_byte15_type =
    uint8_t;
  _paraset_byte15_type paraset_byte15;
  using _paraset_byte14_type =
    uint8_t;
  _paraset_byte14_type paraset_byte14;
  using _paraset_byte13_type =
    uint8_t;
  _paraset_byte13_type paraset_byte13;
  using _paraset_byte12_type =
    uint8_t;
  _paraset_byte12_type paraset_byte12;
  using _paraset_byte11_type =
    uint8_t;
  _paraset_byte11_type paraset_byte11;
  using _paraset_byte10_type =
    uint8_t;
  _paraset_byte10_type paraset_byte10;
  using _paraset_byte9_type =
    uint8_t;
  _paraset_byte9_type paraset_byte9;
  using _paraset_byte8_type =
    uint8_t;
  _paraset_byte8_type paraset_byte8;
  using _paraset_byte7_type =
    uint8_t;
  _paraset_byte7_type paraset_byte7;
  using _paraset_byte6_type =
    uint8_t;
  _paraset_byte6_type paraset_byte6;
  using _paraset_byte5_type =
    uint8_t;
  _paraset_byte5_type paraset_byte5;
  using _paraset_byte4_type =
    uint8_t;
  _paraset_byte4_type paraset_byte4;
  using _paraset_byte3_type =
    uint8_t;
  _paraset_byte3_type paraset_byte3;
  using _paraset_byte2_type =
    uint8_t;
  _paraset_byte2_type paraset_byte2;
  using _paraset_byte1_type =
    uint8_t;
  _paraset_byte1_type paraset_byte1;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__set_num(
    const uint8_t & _arg)
  {
    this->set_num = _arg;
    return *this;
  }
  Type & set__paraset_byte54(
    const uint8_t & _arg)
  {
    this->paraset_byte54 = _arg;
    return *this;
  }
  Type & set__paraset_byte53(
    const uint8_t & _arg)
  {
    this->paraset_byte53 = _arg;
    return *this;
  }
  Type & set__paraset_byte52(
    const uint8_t & _arg)
  {
    this->paraset_byte52 = _arg;
    return *this;
  }
  Type & set__paraset_byte51(
    const uint8_t & _arg)
  {
    this->paraset_byte51 = _arg;
    return *this;
  }
  Type & set__paraset_byte50(
    const uint8_t & _arg)
  {
    this->paraset_byte50 = _arg;
    return *this;
  }
  Type & set__paraset_byte49(
    const uint8_t & _arg)
  {
    this->paraset_byte49 = _arg;
    return *this;
  }
  Type & set__paraset_byte48(
    const uint8_t & _arg)
  {
    this->paraset_byte48 = _arg;
    return *this;
  }
  Type & set__paraset_byte47(
    const uint8_t & _arg)
  {
    this->paraset_byte47 = _arg;
    return *this;
  }
  Type & set__paraset_byte46(
    const uint8_t & _arg)
  {
    this->paraset_byte46 = _arg;
    return *this;
  }
  Type & set__paraset_byte45(
    const uint8_t & _arg)
  {
    this->paraset_byte45 = _arg;
    return *this;
  }
  Type & set__paraset_byte44(
    const uint8_t & _arg)
  {
    this->paraset_byte44 = _arg;
    return *this;
  }
  Type & set__paraset_byte43(
    const uint8_t & _arg)
  {
    this->paraset_byte43 = _arg;
    return *this;
  }
  Type & set__paraset_byte42(
    const uint8_t & _arg)
  {
    this->paraset_byte42 = _arg;
    return *this;
  }
  Type & set__paraset_byte41(
    const uint8_t & _arg)
  {
    this->paraset_byte41 = _arg;
    return *this;
  }
  Type & set__paraset_byte40(
    const uint8_t & _arg)
  {
    this->paraset_byte40 = _arg;
    return *this;
  }
  Type & set__paraset_byte39(
    const uint8_t & _arg)
  {
    this->paraset_byte39 = _arg;
    return *this;
  }
  Type & set__paraset_byte38(
    const uint8_t & _arg)
  {
    this->paraset_byte38 = _arg;
    return *this;
  }
  Type & set__paraset_byte37(
    const uint8_t & _arg)
  {
    this->paraset_byte37 = _arg;
    return *this;
  }
  Type & set__paraset_byte36(
    const uint8_t & _arg)
  {
    this->paraset_byte36 = _arg;
    return *this;
  }
  Type & set__paraset_byte35(
    const uint8_t & _arg)
  {
    this->paraset_byte35 = _arg;
    return *this;
  }
  Type & set__paraset_byte34(
    const uint8_t & _arg)
  {
    this->paraset_byte34 = _arg;
    return *this;
  }
  Type & set__paraset_byte33(
    const uint8_t & _arg)
  {
    this->paraset_byte33 = _arg;
    return *this;
  }
  Type & set__paraset_byte32(
    const uint8_t & _arg)
  {
    this->paraset_byte32 = _arg;
    return *this;
  }
  Type & set__paraset_byte31(
    const uint8_t & _arg)
  {
    this->paraset_byte31 = _arg;
    return *this;
  }
  Type & set__paraset_byte30(
    const uint8_t & _arg)
  {
    this->paraset_byte30 = _arg;
    return *this;
  }
  Type & set__paraset_byte29(
    const uint8_t & _arg)
  {
    this->paraset_byte29 = _arg;
    return *this;
  }
  Type & set__paraset_byte28(
    const uint8_t & _arg)
  {
    this->paraset_byte28 = _arg;
    return *this;
  }
  Type & set__paraset_byte27(
    const uint8_t & _arg)
  {
    this->paraset_byte27 = _arg;
    return *this;
  }
  Type & set__paraset_byte26(
    const uint8_t & _arg)
  {
    this->paraset_byte26 = _arg;
    return *this;
  }
  Type & set__paraset_byte25(
    const uint8_t & _arg)
  {
    this->paraset_byte25 = _arg;
    return *this;
  }
  Type & set__paraset_byte24(
    const uint8_t & _arg)
  {
    this->paraset_byte24 = _arg;
    return *this;
  }
  Type & set__paraset_byte23(
    const uint8_t & _arg)
  {
    this->paraset_byte23 = _arg;
    return *this;
  }
  Type & set__paraset_byte22(
    const uint8_t & _arg)
  {
    this->paraset_byte22 = _arg;
    return *this;
  }
  Type & set__paraset_byte21(
    const uint8_t & _arg)
  {
    this->paraset_byte21 = _arg;
    return *this;
  }
  Type & set__paraset_byte20(
    const uint8_t & _arg)
  {
    this->paraset_byte20 = _arg;
    return *this;
  }
  Type & set__paraset_byte19(
    const uint8_t & _arg)
  {
    this->paraset_byte19 = _arg;
    return *this;
  }
  Type & set__paraset_byte18(
    const uint8_t & _arg)
  {
    this->paraset_byte18 = _arg;
    return *this;
  }
  Type & set__paraset_byte17(
    const uint8_t & _arg)
  {
    this->paraset_byte17 = _arg;
    return *this;
  }
  Type & set__paraset_byte16(
    const uint8_t & _arg)
  {
    this->paraset_byte16 = _arg;
    return *this;
  }
  Type & set__paraset_byte15(
    const uint8_t & _arg)
  {
    this->paraset_byte15 = _arg;
    return *this;
  }
  Type & set__paraset_byte14(
    const uint8_t & _arg)
  {
    this->paraset_byte14 = _arg;
    return *this;
  }
  Type & set__paraset_byte13(
    const uint8_t & _arg)
  {
    this->paraset_byte13 = _arg;
    return *this;
  }
  Type & set__paraset_byte12(
    const uint8_t & _arg)
  {
    this->paraset_byte12 = _arg;
    return *this;
  }
  Type & set__paraset_byte11(
    const uint8_t & _arg)
  {
    this->paraset_byte11 = _arg;
    return *this;
  }
  Type & set__paraset_byte10(
    const uint8_t & _arg)
  {
    this->paraset_byte10 = _arg;
    return *this;
  }
  Type & set__paraset_byte9(
    const uint8_t & _arg)
  {
    this->paraset_byte9 = _arg;
    return *this;
  }
  Type & set__paraset_byte8(
    const uint8_t & _arg)
  {
    this->paraset_byte8 = _arg;
    return *this;
  }
  Type & set__paraset_byte7(
    const uint8_t & _arg)
  {
    this->paraset_byte7 = _arg;
    return *this;
  }
  Type & set__paraset_byte6(
    const uint8_t & _arg)
  {
    this->paraset_byte6 = _arg;
    return *this;
  }
  Type & set__paraset_byte5(
    const uint8_t & _arg)
  {
    this->paraset_byte5 = _arg;
    return *this;
  }
  Type & set__paraset_byte4(
    const uint8_t & _arg)
  {
    this->paraset_byte4 = _arg;
    return *this;
  }
  Type & set__paraset_byte3(
    const uint8_t & _arg)
  {
    this->paraset_byte3 = _arg;
    return *this;
  }
  Type & set__paraset_byte2(
    const uint8_t & _arg)
  {
    this->paraset_byte2 = _arg;
    return *this;
  }
  Type & set__paraset_byte1(
    const uint8_t & _arg)
  {
    this->paraset_byte1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator> *;
  using ConstRawPtr =
    const neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__neobotix_usboard_msgs__msg__Paraset
    std::shared_ptr<neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__neobotix_usboard_msgs__msg__Paraset
    std::shared_ptr<neobotix_usboard_msgs::msg::Paraset_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Paraset_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    if (this->set_num != other.set_num) {
      return false;
    }
    if (this->paraset_byte54 != other.paraset_byte54) {
      return false;
    }
    if (this->paraset_byte53 != other.paraset_byte53) {
      return false;
    }
    if (this->paraset_byte52 != other.paraset_byte52) {
      return false;
    }
    if (this->paraset_byte51 != other.paraset_byte51) {
      return false;
    }
    if (this->paraset_byte50 != other.paraset_byte50) {
      return false;
    }
    if (this->paraset_byte49 != other.paraset_byte49) {
      return false;
    }
    if (this->paraset_byte48 != other.paraset_byte48) {
      return false;
    }
    if (this->paraset_byte47 != other.paraset_byte47) {
      return false;
    }
    if (this->paraset_byte46 != other.paraset_byte46) {
      return false;
    }
    if (this->paraset_byte45 != other.paraset_byte45) {
      return false;
    }
    if (this->paraset_byte44 != other.paraset_byte44) {
      return false;
    }
    if (this->paraset_byte43 != other.paraset_byte43) {
      return false;
    }
    if (this->paraset_byte42 != other.paraset_byte42) {
      return false;
    }
    if (this->paraset_byte41 != other.paraset_byte41) {
      return false;
    }
    if (this->paraset_byte40 != other.paraset_byte40) {
      return false;
    }
    if (this->paraset_byte39 != other.paraset_byte39) {
      return false;
    }
    if (this->paraset_byte38 != other.paraset_byte38) {
      return false;
    }
    if (this->paraset_byte37 != other.paraset_byte37) {
      return false;
    }
    if (this->paraset_byte36 != other.paraset_byte36) {
      return false;
    }
    if (this->paraset_byte35 != other.paraset_byte35) {
      return false;
    }
    if (this->paraset_byte34 != other.paraset_byte34) {
      return false;
    }
    if (this->paraset_byte33 != other.paraset_byte33) {
      return false;
    }
    if (this->paraset_byte32 != other.paraset_byte32) {
      return false;
    }
    if (this->paraset_byte31 != other.paraset_byte31) {
      return false;
    }
    if (this->paraset_byte30 != other.paraset_byte30) {
      return false;
    }
    if (this->paraset_byte29 != other.paraset_byte29) {
      return false;
    }
    if (this->paraset_byte28 != other.paraset_byte28) {
      return false;
    }
    if (this->paraset_byte27 != other.paraset_byte27) {
      return false;
    }
    if (this->paraset_byte26 != other.paraset_byte26) {
      return false;
    }
    if (this->paraset_byte25 != other.paraset_byte25) {
      return false;
    }
    if (this->paraset_byte24 != other.paraset_byte24) {
      return false;
    }
    if (this->paraset_byte23 != other.paraset_byte23) {
      return false;
    }
    if (this->paraset_byte22 != other.paraset_byte22) {
      return false;
    }
    if (this->paraset_byte21 != other.paraset_byte21) {
      return false;
    }
    if (this->paraset_byte20 != other.paraset_byte20) {
      return false;
    }
    if (this->paraset_byte19 != other.paraset_byte19) {
      return false;
    }
    if (this->paraset_byte18 != other.paraset_byte18) {
      return false;
    }
    if (this->paraset_byte17 != other.paraset_byte17) {
      return false;
    }
    if (this->paraset_byte16 != other.paraset_byte16) {
      return false;
    }
    if (this->paraset_byte15 != other.paraset_byte15) {
      return false;
    }
    if (this->paraset_byte14 != other.paraset_byte14) {
      return false;
    }
    if (this->paraset_byte13 != other.paraset_byte13) {
      return false;
    }
    if (this->paraset_byte12 != other.paraset_byte12) {
      return false;
    }
    if (this->paraset_byte11 != other.paraset_byte11) {
      return false;
    }
    if (this->paraset_byte10 != other.paraset_byte10) {
      return false;
    }
    if (this->paraset_byte9 != other.paraset_byte9) {
      return false;
    }
    if (this->paraset_byte8 != other.paraset_byte8) {
      return false;
    }
    if (this->paraset_byte7 != other.paraset_byte7) {
      return false;
    }
    if (this->paraset_byte6 != other.paraset_byte6) {
      return false;
    }
    if (this->paraset_byte5 != other.paraset_byte5) {
      return false;
    }
    if (this->paraset_byte4 != other.paraset_byte4) {
      return false;
    }
    if (this->paraset_byte3 != other.paraset_byte3) {
      return false;
    }
    if (this->paraset_byte2 != other.paraset_byte2) {
      return false;
    }
    if (this->paraset_byte1 != other.paraset_byte1) {
      return false;
    }
    return true;
  }
  bool operator!=(const Paraset_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Paraset_

// alias to use template instance with default allocator
using Paraset =
  neobotix_usboard_msgs::msg::Paraset_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace neobotix_usboard_msgs

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__PARASET__STRUCT_HPP_
