// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobileye_560_660_msgs:msg/ObstacleData.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__STRUCT_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BLINKER_INFO_UNAVAILABLE'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__BLINKER_INFO_UNAVAILABLE = 0
};

/// Constant 'BLINKER_INFO_OFF'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__BLINKER_INFO_OFF = 1
};

/// Constant 'BLINKER_INFO_LEFT'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__BLINKER_INFO_LEFT = 2
};

/// Constant 'BLINKER_INFO_RIGHT'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__BLINKER_INFO_RIGHT = 3
};

/// Constant 'BLINKER_INFO_BOTH'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__BLINKER_INFO_BOTH = 4
};

/// Constant 'CUT_IN_AND_OUT_UNDEFINED'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__CUT_IN_AND_OUT_UNDEFINED = 0
};

/// Constant 'CUT_IN_AND_OUT_IN_HOST_LANE'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__CUT_IN_AND_OUT_IN_HOST_LANE = 1
};

/// Constant 'CUT_IN_AND_OUT_OUT_HOST_LANE'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__CUT_IN_AND_OUT_OUT_HOST_LANE = 2
};

/// Constant 'CUT_IN_AND_OUT_CUT_IN'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__CUT_IN_AND_OUT_CUT_IN = 3
};

/// Constant 'CUT_IN_AND_OUT_CUT_OUT'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__CUT_IN_AND_OUT_CUT_OUT = 4
};

/// Constant 'OBSTACLE_TYPE_VEHICLE'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_TYPE_VEHICLE = 0
};

/// Constant 'OBSTACLE_TYPE_TRUCK'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_TYPE_TRUCK = 1
};

/// Constant 'OBSTACLE_TYPE_BIKE'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_TYPE_BIKE = 2
};

/// Constant 'OBSTACLE_TYPE_PED'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_TYPE_PED = 3
};

/// Constant 'OBSTACLE_TYPE_BICYCLE'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_TYPE_BICYCLE = 4
};

/// Constant 'OBSTACLE_STATUS_UNDEFINED'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_STATUS_UNDEFINED = 0
};

/// Constant 'OBSTACLE_STATUS_STANDING'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_STATUS_STANDING = 1
};

/// Constant 'OBSTACLE_STATUS_STOPPED'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_STATUS_STOPPED = 2
};

/// Constant 'OBSTACLE_STATUS_MOVING'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_STATUS_MOVING = 3
};

/// Constant 'OBSTACLE_STATUS_ONCOMING'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_STATUS_ONCOMING = 4
};

/// Constant 'OBSTACLE_STATUS_PARKED'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_STATUS_PARKED = 5
};

/// Constant 'OBSTACLE_VALID_INVALID'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_VALID_INVALID = 0
};

/// Constant 'OBSTACLE_VALID_NEW'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_VALID_NEW = 1
};

/// Constant 'OBSTACLE_VALID_OLDER'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_VALID_OLDER = 2
};

/// Constant 'OBSTACLE_LANE_NOT_ASSIGNED'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_LANE_NOT_ASSIGNED = 0
};

/// Constant 'OBSTACLE_LANE_EGO_LANE'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_LANE_EGO_LANE = 1
};

/// Constant 'OBSTACLE_LANE_NEXT_LANE'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_LANE_NEXT_LANE = 2
};

/// Constant 'OBSTACLE_LANE_INVALID'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__OBSTACLE_LANE_INVALID = 3
};

/// Constant 'RADAR_MATCH_CONFIDENCE_NO_MATCH'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__RADAR_MATCH_CONFIDENCE_NO_MATCH = 0
};

/// Constant 'RADAR_MATCH_CONFIDENCE_MULTI_MATCH'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__RADAR_MATCH_CONFIDENCE_MULTI_MATCH = 1
};

/// Constant 'RADAR_MATCH_CONFIDENCE_BOUNDED_LOW'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__RADAR_MATCH_CONFIDENCE_BOUNDED_LOW = 2
};

/// Constant 'RADAR_MATCH_CONFIDENCE_BOUNDED_MED'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__RADAR_MATCH_CONFIDENCE_BOUNDED_MED = 3
};

/// Constant 'RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__RADAR_MATCH_CONFIDENCE_BOUNDED_HIGH = 4
};

/// Constant 'RADAR_MATCH_CONFIDENCE_HIGH'.
enum
{
  mobileye_560_660_msgs__msg__ObstacleData__RADAR_MATCH_CONFIDENCE_HIGH = 5
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

// Struct defined in msg/ObstacleData in the package mobileye_560_660_msgs.
typedef struct mobileye_560_660_msgs__msg__ObstacleData
{
  std_msgs__msg__Header header;
  uint16_t obstacle_id;
  double obstacle_pos_x;
  double obstacle_pos_y;
  uint8_t blinker_info;
  uint8_t cut_in_and_out;
  double obstacle_rel_vel_x;
  uint8_t obstacle_type;
  uint8_t obstacle_status;
  bool obstacle_brake_lights;
  uint8_t obstacle_valid;
  float obstacle_length;
  float obstacle_width;
  uint16_t obstacle_age;
  uint8_t obstacle_lane;
  bool cipv_flag;
  float radar_pos_x;
  float radar_vel_x;
  uint8_t radar_match_confidence;
  uint16_t matched_radar_id;
  float obstacle_angle_rate;
  double obstacle_scale_change;
  float object_accel_x;
  bool obstacle_replaced;
  float obstacle_angle;
} mobileye_560_660_msgs__msg__ObstacleData;

// Struct for a sequence of mobileye_560_660_msgs__msg__ObstacleData.
typedef struct mobileye_560_660_msgs__msg__ObstacleData__Sequence
{
  mobileye_560_660_msgs__msg__ObstacleData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobileye_560_660_msgs__msg__ObstacleData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__OBSTACLE_DATA__STRUCT_H_
