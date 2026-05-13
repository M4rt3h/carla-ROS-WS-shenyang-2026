// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/MrrStatusTempVolt.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__STRUCT_HPP_

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
# define DEPRECATED__delphi_mrr_msgs__msg__MrrStatusTempVolt __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__MrrStatusTempVolt __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MrrStatusTempVolt_
{
  using Type = MrrStatusTempVolt_<ContainerAllocator>;

  explicit MrrStatusTempVolt_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_batt_volts = 0.0f;
      this->can_1_25_v = 0.0f;
      this->can_5_v = 0.0f;
      this->can_3_3_v_raw = 0.0f;
      this->can_3_3_v_dac = 0.0f;
      this->can_mmic_temp1 = 0;
      this->can_processor_thermistor = 0;
      this->can_processor_temp1 = 0;
    }
  }

  explicit MrrStatusTempVolt_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_batt_volts = 0.0f;
      this->can_1_25_v = 0.0f;
      this->can_5_v = 0.0f;
      this->can_3_3_v_raw = 0.0f;
      this->can_3_3_v_dac = 0.0f;
      this->can_mmic_temp1 = 0;
      this->can_processor_thermistor = 0;
      this->can_processor_temp1 = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _can_batt_volts_type =
    float;
  _can_batt_volts_type can_batt_volts;
  using _can_1_25_v_type =
    float;
  _can_1_25_v_type can_1_25_v;
  using _can_5_v_type =
    float;
  _can_5_v_type can_5_v;
  using _can_3_3_v_raw_type =
    float;
  _can_3_3_v_raw_type can_3_3_v_raw;
  using _can_3_3_v_dac_type =
    float;
  _can_3_3_v_dac_type can_3_3_v_dac;
  using _can_mmic_temp1_type =
    int8_t;
  _can_mmic_temp1_type can_mmic_temp1;
  using _can_processor_thermistor_type =
    int8_t;
  _can_processor_thermistor_type can_processor_thermistor;
  using _can_processor_temp1_type =
    int8_t;
  _can_processor_temp1_type can_processor_temp1;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__can_batt_volts(
    const float & _arg)
  {
    this->can_batt_volts = _arg;
    return *this;
  }
  Type & set__can_1_25_v(
    const float & _arg)
  {
    this->can_1_25_v = _arg;
    return *this;
  }
  Type & set__can_5_v(
    const float & _arg)
  {
    this->can_5_v = _arg;
    return *this;
  }
  Type & set__can_3_3_v_raw(
    const float & _arg)
  {
    this->can_3_3_v_raw = _arg;
    return *this;
  }
  Type & set__can_3_3_v_dac(
    const float & _arg)
  {
    this->can_3_3_v_dac = _arg;
    return *this;
  }
  Type & set__can_mmic_temp1(
    const int8_t & _arg)
  {
    this->can_mmic_temp1 = _arg;
    return *this;
  }
  Type & set__can_processor_thermistor(
    const int8_t & _arg)
  {
    this->can_processor_thermistor = _arg;
    return *this;
  }
  Type & set__can_processor_temp1(
    const int8_t & _arg)
  {
    this->can_processor_temp1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrStatusTempVolt
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__MrrStatusTempVolt
    std::shared_ptr<delphi_mrr_msgs::msg::MrrStatusTempVolt_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MrrStatusTempVolt_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->can_batt_volts != other.can_batt_volts) {
      return false;
    }
    if (this->can_1_25_v != other.can_1_25_v) {
      return false;
    }
    if (this->can_5_v != other.can_5_v) {
      return false;
    }
    if (this->can_3_3_v_raw != other.can_3_3_v_raw) {
      return false;
    }
    if (this->can_3_3_v_dac != other.can_3_3_v_dac) {
      return false;
    }
    if (this->can_mmic_temp1 != other.can_mmic_temp1) {
      return false;
    }
    if (this->can_processor_thermistor != other.can_processor_thermistor) {
      return false;
    }
    if (this->can_processor_temp1 != other.can_processor_temp1) {
      return false;
    }
    return true;
  }
  bool operator!=(const MrrStatusTempVolt_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MrrStatusTempVolt_

// alias to use template instance with default allocator
using MrrStatusTempVolt =
  delphi_mrr_msgs::msg::MrrStatusTempVolt_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__STRUCT_HPP_
