// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ScanData2202.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__TRAITS_HPP_

#include "ibeo_msgs/msg/detail/scan_data2202__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'ibeo_header'
#include "ibeo_msgs/msg/detail/ibeo_data_header__traits.hpp"
// Member 'scan_start_time'
// Member 'scan_end_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'scan_point_list'
#include "ibeo_msgs/msg/detail/scan_point2202__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ibeo_msgs::msg::ScanData2202 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: ibeo_header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ibeo_header:\n";
    to_yaml(msg.ibeo_header, out, indentation + 2);
  }

  // member: scan_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_number: ";
    value_to_yaml(msg.scan_number, out);
    out << "\n";
  }

  // member: scanner_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scanner_status: ";
    value_to_yaml(msg.scanner_status, out);
    out << "\n";
  }

  // member: sync_phase_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sync_phase_offset: ";
    value_to_yaml(msg.sync_phase_offset, out);
    out << "\n";
  }

  // member: scan_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_start_time:\n";
    to_yaml(msg.scan_start_time, out, indentation + 2);
  }

  // member: scan_end_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_end_time:\n";
    to_yaml(msg.scan_end_time, out, indentation + 2);
  }

  // member: angle_ticks_per_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_ticks_per_rotation: ";
    value_to_yaml(msg.angle_ticks_per_rotation, out);
    out << "\n";
  }

  // member: start_angle_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_angle_ticks: ";
    value_to_yaml(msg.start_angle_ticks, out);
    out << "\n";
  }

  // member: end_angle_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_angle_ticks: ";
    value_to_yaml(msg.end_angle_ticks, out);
    out << "\n";
  }

  // member: scan_points_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_points_count: ";
    value_to_yaml(msg.scan_points_count, out);
    out << "\n";
  }

  // member: mounting_yaw_angle_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_yaw_angle_ticks: ";
    value_to_yaml(msg.mounting_yaw_angle_ticks, out);
    out << "\n";
  }

  // member: mounting_pitch_angle_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_pitch_angle_ticks: ";
    value_to_yaml(msg.mounting_pitch_angle_ticks, out);
    out << "\n";
  }

  // member: mounting_roll_angle_ticks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_roll_angle_ticks: ";
    value_to_yaml(msg.mounting_roll_angle_ticks, out);
    out << "\n";
  }

  // member: mounting_position_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_position_x: ";
    value_to_yaml(msg.mounting_position_x, out);
    out << "\n";
  }

  // member: mounting_position_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_position_y: ";
    value_to_yaml(msg.mounting_position_y, out);
    out << "\n";
  }

  // member: mounting_position_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_position_z: ";
    value_to_yaml(msg.mounting_position_z, out);
    out << "\n";
  }

  // member: ground_labeled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_labeled: ";
    value_to_yaml(msg.ground_labeled, out);
    out << "\n";
  }

  // member: dirt_labeled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dirt_labeled: ";
    value_to_yaml(msg.dirt_labeled, out);
    out << "\n";
  }

  // member: rain_labeled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rain_labeled: ";
    value_to_yaml(msg.rain_labeled, out);
    out << "\n";
  }

  // member: mirror_side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirror_side: ";
    value_to_yaml(msg.mirror_side, out);
    out << "\n";
  }

  // member: scan_point_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scan_point_list.size() == 0) {
      out << "scan_point_list: []\n";
    } else {
      out << "scan_point_list:\n";
      for (auto item : msg.scan_point_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ibeo_msgs::msg::ScanData2202 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ibeo_msgs::msg::ScanData2202>()
{
  return "ibeo_msgs::msg::ScanData2202";
}

template<>
inline const char * name<ibeo_msgs::msg::ScanData2202>()
{
  return "ibeo_msgs/msg/ScanData2202";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ScanData2202>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ScanData2202>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::ScanData2202>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_DATA2202__TRAITS_HPP_
