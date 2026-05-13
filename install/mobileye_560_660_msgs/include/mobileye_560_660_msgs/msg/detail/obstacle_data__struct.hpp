// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mobileye_560_660_msgs:msg/ObstacleData.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__STRUCT_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__STRUCT_HPP_

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
# define DEPRECATED__mobileye_560_660_msgs__msg__ObstacleData __attribute__((deprecated))
#else
# define DEPRECATED__mobileye_560_660_msgs__msg__ObstacleData __declspec(deprecated)
#endif

namespace mobileye_560_660_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleData_
{
  using Type = ObstacleData_<ContainerAllocator>;

  explicit ObstacleData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_id = 0;
      this->obstacle_pos_x = 0.0;
      this->obstacle_pos_y = 0.0;
      this->blinker_info = 0;
      this->cut_in_and_out = 0;
      this->obstacle_rel_vel_x = 0.0;
      this->obstacle_type = 0;
      this->obstacle_status = 0;
      this->obstacle_brake_lights = false;
      this->obstacle_valid = 0;
      this->obstacle_length = 0.0f;
      this->obstacle_width = 0.0f;
      this->obstacle_age = 0;
      this->obstacle_lane = 0;
      this->cipv_flag = false;
      this->radar_pos_x = 0.0f;
      this->radar_vel_x = 0.0f;
      this->radar_match_confidence = 0;
      this->matched_radar_id = 0;
      this->obstacle_angle_rate = 0.0f;
      this->obstacle_scale_change = 0.0;
      this->object_accel_x = 0.0f;
      this->obstacle_replaced = false;
      this->obstacle_angle = 0.0f;
    }
  }

  explicit ObstacleData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_id = 0;
      this->obstacle_pos_x = 0.0;
      this->obstacle_pos_y = 0.0;
      this->blinker_info = 0;
      this->cut_in_and_out = 0;
      this->obstacle_rel_vel_x = 0.0;
      this->obstacle_type = 0;
      this->obstacle_status = 0;
      this->obstacle_brake_lights = false;
      this->obstacle_valid = 0;
      this->obstacle_length = 0.0f;
      this->obstacle_width = 0.0f;
      this->obstacle_age = 0;
      this->obstacle_lane = 0;
      this->cipv_flag = false;
      this->radar_pos_x = 0.0f;
      this->radar_vel_x = 0.0f;
      this->radar_match_confidence = 0;
      this->matched_radar_id = 0;
      this->obstacle_angle_rate = 0.0f;
      this->obstacle_scale_change = 0.0;
      this->object_accel_x = 0.0f;
      this->obstacle_replaced = false;
      this->obstacle_angle = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _obstacle_id_type =
    uint16_t;
  _obstacle_id_type obstacle_id;
  using _obstacle_pos_x_type =
    double;
  _obstacle_pos_x_type obstacle_pos_x;
  using _obstacle_pos_y_type =
    double;
  _obstacle_pos_y_type obstacle_pos_y;
  using _blinker_info_type =
    uint8_t;
  _blinker_info_type blinker_info;
  using _cut_in_and_out_type =
    uint8_t;
  _cut_in_and_out_type cut_in_and_out;
  using _obstacle_rel_vel_x_type =
    double;
  _obstacle_rel_vel_x_type obstacle_rel_vel_x;
  using _obstacle_type_type =
    uint8_t;
  _obstacle_type_type obstacle_type;
  using _obstacle_status_type =
    uint8_t;
  _obstacle_status_type obstacle_status;
  using _obstacle_brake_lights_type =
    bool;
  _obstacle_brake_lights_type obstacle_brake_lights;
  using _obstacle_valid_type =
    uint8_t;
  _obstacle_valid_type obstacle_valid;
  using _obstacle_length_type =
    float;
  _obstacle_length_type obstacle_length;
  using _obstacle_width_type =
    float;
  _obstacle_width_type obstacle_width;
  using _obstacle_age_type =
    uint16_t;
  _obstacle_age_type obstacle_age;
  using _obstacle_lane_type =
    uint8_t;
  _obstacle_lane_type obstacle_lane;
  using _cipv_flag_type =
    bool;
  _cipv_flag_type cipv_flag;
  using _radar_pos_x_type =
    float;
  _radar_pos_x_type radar_pos_x;
  using _radar_vel_x_type =
    float;
  _radar_vel_x_type radar_vel_x;
  using _radar_match_confidence_type =
    uint8_t;
  _radar_match_confidence_type radar_match_confidence;
  using _matched_radar_id_type =
    uint16_t;
  _matched_radar_id_type matched_radar_id;
  using _obstacle_angle_rate_type =
    float;
  _obstacle_angle_rate_type obstacle_angle_rate;
  using _obstacle_scale_change_type =
    double;
  _obstacle_scale_change_type obstacle_scale_change;
  using _object_accel_x_type =
    float;
  _object_accel_x_type object_accel_x;
  using _obstacle_replaced_type =
    bool;
  _obstacle_replaced_type obstacle_replaced;
  using _obstacle_angle_type =
    float;
  _obstacle_angle_type obstacle_angle;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__obstacle_id(
    const uint16_t & _arg)
  {
    this->obstacle_id = _arg;
    return *this;
  }
  Type & set__obstacle_pos_x(
    const double & _arg)
  {
    this->obstacle_pos_x = _arg;
    return *this;
  }
  Type & set__obstacle_pos_y(
    const double & _arg)
  {
    this->obstacle_pos_y = _arg;
    return *this;
  }
  Type & set__blinker_info(
    const uint8_t & _arg)
  {
    this->blinker_info = _arg;
    return *this;
  }
  Type & set__cut_in_and_out(
    const uint8_t & _arg)
  {
    this->cut_in_and_out = _arg;
    return *this;
  }
  Type & set__obstacle_rel_vel_x(
    const double & _arg)
  {
    this->obstacle_rel_vel_x = _arg;
    return *this;
  }
  Type & set__obstacle_type(
    const uint8_t & _arg)
  {
    this->obstacle_type = _arg;
    return *this;
  }
  Type & set__obstacle_status(
    const uint8_t & _arg)
  {
    this->obstacle_status = _arg;
    return *this;
  }
  Type & set__obstacle_brake_lights(
    const bool & _arg)
  {
    this->obstacle_brake_lights = _arg;
    return *this;
  }
  Type & set__obstacle_valid(
    const uint8_t & _arg)
  {
    this->obstacle_valid = _arg;
    return *this;
  }
  Type & set__obstacle_length(
    const float & _arg)
  {
    this->obstacle_length = _arg;
    return *this;
  }
  Type & set__obstacle_width(
    const float & _arg)
  {
    this->obstacle_width = _arg;
    return *this;
  }
  Type & set__obstacle_age(
    const uint16_t & _arg)
  {
    this->obstacle_age = _arg;
    return *this;
  }
  Type & set__obstacle_lane(
    const uint8_t & _arg)
  {
    this->obstacle_lane = _arg;
    return *this;
  }
  Type & set__cipv_flag(
    const bool & _arg)
  {
    this->cipv_flag = _arg;
    return *this;
  }
  Type & set__radar_pos_x(
    const float & _arg)
  {
    this->radar_pos_x = _arg;
    return *this;
  }
  Type & set__radar_vel_x(
    const float & _arg)
  {
    this->radar_vel_x = _arg;
    return *this;
  }
  Type & set__radar_match_confidence(
    const uint8_t & _arg)
  {
    this->radar_match_confidence = _arg;
    return *this;
  }
  Type & set__matched_radar_id(
    const uint16_t & _arg)
  {
    this->matched_radar_id = _arg;
    return *this;
  }
  Type & set__obstacle_angle_rate(
    const float & _arg)
  {
    this->obstacle_angle_rate = _arg;
    return *this;
  }
  Type & set__obstacle_scale_change(
    const double & _arg)
  {
    this->obstacle_scale_change = _arg;
    return *this;
  }
  Type & set__object_accel_x(
    const float & _arg)
  {
    this->object_accel_x = _arg;
    return *this;
  }
  Type & set__obstacle_replaced(
    const bool & _arg)
  {
    this->obstacle_replaced = _arg;
    return *this;
  }
  Type & set__obstacle_angle(
    const float & _arg)
  {
    this->obstacle_angle = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BLINKER_INFO_UNAVAILABLE =
    0u;
  static constexpr uint8_t BLINKER_INFO_OFF =
    1u;
  static constexpr uint8_t BLINKER_INFO_LEFT =
    2u;
  static constexpr uint8_t BLINKER_INFO_RIGHT =
    3u;
  static constexpr uint8_t BLINKER_INFO_BOTH =
    4u;
  static constexpr uint8_t CUT_IN_AND_OUT_UNDEFINED =
    0u;
  static constexpr uint8_t CUT_IN_AND_OUT_IN_HOST_LANE =
    1u;
  static constexpr uint8_t CUT_IN_AND_OUT_OUT_HOST_LANE =
    2u;
  static constexpr uint8_t CUT_IN_AND_OUT_CUT_IN =
    3u;
  static constexpr uint8_t CUT_IN_AND_OUT_CUT_OUT =
    4u;
  static constexpr uint8_t OBSTACLE_TYPE_VEHICLE =
    0u;
  static constexpr uint8_t OBSTACLE_TYPE_TRUCK =
    1u;
  static constexpr uint8_t OBSTACLE_TYPE_BIKE =
    2u;
  static constexpr uint8_t OBSTACLE_TYPE_PED =
    3u;
  static constexpr uint8_t OBSTACLE_TYPE_BICYCLE =
    4u;
  static constexpr uint8_t OBSTACLE_STATUS_UNDEFINED =
    0u;
  static constexpr uint8_t OBSTACLE_STATUS_STANDING =
    1u;
  static constexpr uint8_t OBSTACLE_STATUS_STOPPED =
    2u;
  static constexpr uint8_t OBSTACLE_STATUS_MOVING =
    3u;
  static constexpr uint8_t OBSTACLE_STATUS_ONCOMING =
    4u;
  static constexpr uint8_t OBSTACLE_STATUS_PARKED =
    5u;
  static constexpr uint8_t OBSTACLE_VALID_INVALID =
    0u;
  static constexpr uint8_t OBSTACLE_VALID_NEW =
    1u;
  static constexpr uint8_t OBSTACLE_VALID_OLDER =
    2u;
  static constexpr uint8_t OBSTACLE_LANE_NOT_ASSIGNED =
    0u;
  static constexpr uint8_t OBSTACLE_LANE_EGO_LANE =
    1u;
  static constexpr uint8_t OBSTACLE_LANE_NEXT_LANE =
    2u;
  static constexpr uint8_t OBSTACLE_LANE_INVALID =
    3u;
  static constexpr uint8_t RADAR_MATCH_CONFIDENCE_NO_MATCH =
    0u;
  static constexpr uint8_t RADAR_MATCH_CONFIDENCE_MULTI_MATCH =
    1u;
  static constexpr uint8_t RADAR_MATCH_CONFIDENCE_BOUNDED_LOW =
    2u;
  static constexpr uint8_t RADAR_MATCH_CONFIDENCE_BOUNDED_MED =
    3u;
  static constexpr uint8_t RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH =
    4u;
  static constexpr uint8_t RADAR_MATCH_CONFIDENCE_HIGH =
    5u;

  // pointer types
  using RawPtr =
    mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator> *;
  using ConstRawPtr =
    const mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mobileye_560_660_msgs__msg__ObstacleData
    std::shared_ptr<mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mobileye_560_660_msgs__msg__ObstacleData
    std::shared_ptr<mobileye_560_660_msgs::msg::ObstacleData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->obstacle_id != other.obstacle_id) {
      return false;
    }
    if (this->obstacle_pos_x != other.obstacle_pos_x) {
      return false;
    }
    if (this->obstacle_pos_y != other.obstacle_pos_y) {
      return false;
    }
    if (this->blinker_info != other.blinker_info) {
      return false;
    }
    if (this->cut_in_and_out != other.cut_in_and_out) {
      return false;
    }
    if (this->obstacle_rel_vel_x != other.obstacle_rel_vel_x) {
      return false;
    }
    if (this->obstacle_type != other.obstacle_type) {
      return false;
    }
    if (this->obstacle_status != other.obstacle_status) {
      return false;
    }
    if (this->obstacle_brake_lights != other.obstacle_brake_lights) {
      return false;
    }
    if (this->obstacle_valid != other.obstacle_valid) {
      return false;
    }
    if (this->obstacle_length != other.obstacle_length) {
      return false;
    }
    if (this->obstacle_width != other.obstacle_width) {
      return false;
    }
    if (this->obstacle_age != other.obstacle_age) {
      return false;
    }
    if (this->obstacle_lane != other.obstacle_lane) {
      return false;
    }
    if (this->cipv_flag != other.cipv_flag) {
      return false;
    }
    if (this->radar_pos_x != other.radar_pos_x) {
      return false;
    }
    if (this->radar_vel_x != other.radar_vel_x) {
      return false;
    }
    if (this->radar_match_confidence != other.radar_match_confidence) {
      return false;
    }
    if (this->matched_radar_id != other.matched_radar_id) {
      return false;
    }
    if (this->obstacle_angle_rate != other.obstacle_angle_rate) {
      return false;
    }
    if (this->obstacle_scale_change != other.obstacle_scale_change) {
      return false;
    }
    if (this->object_accel_x != other.object_accel_x) {
      return false;
    }
    if (this->obstacle_replaced != other.obstacle_replaced) {
      return false;
    }
    if (this->obstacle_angle != other.obstacle_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleData_

// alias to use template instance with default allocator
using ObstacleData =
  mobileye_560_660_msgs::msg::ObstacleData_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::BLINKER_INFO_UNAVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::BLINKER_INFO_OFF;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::BLINKER_INFO_LEFT;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::BLINKER_INFO_RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::BLINKER_INFO_BOTH;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::CUT_IN_AND_OUT_UNDEFINED;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::CUT_IN_AND_OUT_IN_HOST_LANE;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::CUT_IN_AND_OUT_OUT_HOST_LANE;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::CUT_IN_AND_OUT_CUT_IN;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::CUT_IN_AND_OUT_CUT_OUT;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_TYPE_VEHICLE;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_TYPE_TRUCK;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_TYPE_BIKE;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_TYPE_PED;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_TYPE_BICYCLE;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_STATUS_UNDEFINED;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_STATUS_STANDING;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_STATUS_STOPPED;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_STATUS_MOVING;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_STATUS_ONCOMING;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_STATUS_PARKED;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_VALID_INVALID;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_VALID_NEW;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_VALID_OLDER;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_LANE_NOT_ASSIGNED;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_LANE_EGO_LANE;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_LANE_NEXT_LANE;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::OBSTACLE_LANE_INVALID;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::RADAR_MATCH_CONFIDENCE_NO_MATCH;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::RADAR_MATCH_CONFIDENCE_MULTI_MATCH;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::RADAR_MATCH_CONFIDENCE_BOUNDED_LOW;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::RADAR_MATCH_CONFIDENCE_BOUNDED_MED;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH;
template<typename ContainerAllocator>
constexpr uint8_t ObstacleData_<ContainerAllocator>::RADAR_MATCH_CONFIDENCE_HIGH;

}  // namespace msg

}  // namespace mobileye_560_660_msgs

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__STRUCT_HPP_
