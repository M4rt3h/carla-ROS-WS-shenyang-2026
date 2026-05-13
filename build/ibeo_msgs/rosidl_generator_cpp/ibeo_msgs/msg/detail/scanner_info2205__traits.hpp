// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/ScannerInfo2205.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__TRAITS_HPP_

#include "ibeo_msgs/msg/detail/scanner_info2205__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'scan_start_time'
// Member 'scan_end_time'
// Member 'scan_start_time_from_device'
// Member 'scan_end_time_from_device'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'mounting_position'
#include "ibeo_msgs/msg/detail/mounting_position_f__traits.hpp"
// Member 'resolutions'
#include "ibeo_msgs/msg/detail/resolution_info__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ibeo_msgs::msg::ScannerInfo2205 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: scanner_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scanner_type: ";
    value_to_yaml(msg.scanner_type, out);
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

  // member: start_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_angle: ";
    value_to_yaml(msg.start_angle, out);
    out << "\n";
  }

  // member: end_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_angle: ";
    value_to_yaml(msg.end_angle, out);
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

  // member: scan_start_time_from_device
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_start_time_from_device:\n";
    to_yaml(msg.scan_start_time_from_device, out, indentation + 2);
  }

  // member: scan_end_time_from_device
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_end_time_from_device:\n";
    to_yaml(msg.scan_end_time_from_device, out, indentation + 2);
  }

  // member: scan_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_frequency: ";
    value_to_yaml(msg.scan_frequency, out);
    out << "\n";
  }

  // member: beam_tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beam_tilt: ";
    value_to_yaml(msg.beam_tilt, out);
    out << "\n";
  }

  // member: scan_flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scan_flags: ";
    value_to_yaml(msg.scan_flags, out);
    out << "\n";
  }

  // member: mounting_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mounting_position:\n";
    to_yaml(msg.mounting_position, out, indentation + 2);
  }

  // member: resolutions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.resolutions.size() == 0) {
      out << "resolutions: []\n";
    } else {
      out << "resolutions:\n";
      for (auto item : msg.resolutions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ibeo_msgs::msg::ScannerInfo2205 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ibeo_msgs::msg::ScannerInfo2205>()
{
  return "ibeo_msgs::msg::ScannerInfo2205";
}

template<>
inline const char * name<ibeo_msgs::msg::ScannerInfo2205>()
{
  return "ibeo_msgs/msg/ScannerInfo2205";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::ScannerInfo2205>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<ibeo_msgs::msg::MountingPositionF>::value && has_fixed_size<ibeo_msgs::msg::ResolutionInfo>::value> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::ScannerInfo2205>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<ibeo_msgs::msg::MountingPositionF>::value && has_bounded_size<ibeo_msgs::msg::ResolutionInfo>::value> {};

template<>
struct is_message<ibeo_msgs::msg::ScannerInfo2205>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__SCANNER_INFO2205__TRAITS_HPP_
