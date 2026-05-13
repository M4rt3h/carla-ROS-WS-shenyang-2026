// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ScanData2205.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCAN_DATA2205__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCAN_DATA2205__TRAITS_HPP_

#include "ibeo_msgs/msg/detail/scan_data2205__struct.hpp"
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
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'scanner_info_list'
#include "ibeo_msgs/msg/detail/scanner_info2205__traits.hpp"
// Member 'scan_point_list'
#include "ibeo_msgs/msg/detail/scan_point2205__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ibeo_msgs::msg::ScanData2205 & msg,
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

  // member: scan_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_start_time:\n";
    to_yaml(msg.scan_start_time, out, indentation + 2);
  }

  // member: scan_end_time_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_end_time_offset: ";
    value_to_yaml(msg.scan_end_time_offset, out);
    out << "\n";
  }

  // member: fused_scan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fused_scan: ";
    value_to_yaml(msg.fused_scan, out);
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

  // member: coordinate_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinate_system: ";
    value_to_yaml(msg.coordinate_system, out);
    out << "\n";
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

  // member: scan_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_points: ";
    value_to_yaml(msg.scan_points, out);
    out << "\n";
  }

  // member: number_of_scanner_infos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_scanner_infos: ";
    value_to_yaml(msg.number_of_scanner_infos, out);
    out << "\n";
  }

  // member: scanner_info_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.scanner_info_list.size() == 0) {
      out << "scanner_info_list: []\n";
    } else {
      out << "scanner_info_list:\n";
      for (auto item : msg.scanner_info_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const ibeo_msgs::msg::ScanData2205 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ibeo_msgs::msg::ScanData2205>()
{
  return "ibeo_msgs::msg::ScanData2205";
}

template<>
inline const char * name<ibeo_msgs::msg::ScanData2205>()
{
  return "ibeo_msgs/msg/ScanData2205";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ScanData2205>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ScanData2205>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::ScanData2205>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__SCAN_DATA2205__TRAITS_HPP_
