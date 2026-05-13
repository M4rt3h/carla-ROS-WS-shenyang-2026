// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mobileye_560_660_msgs:msg/AwsDisplay.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__TRAITS_HPP_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__TRAITS_HPP_

#include "mobileye_560_660_msgs/msg/detail/aws_display__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mobileye_560_660_msgs::msg::AwsDisplay & msg,
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

  // member: suppress_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "suppress_sound: ";
    value_to_yaml(msg.suppress_sound, out);
    out << "\n";
  }

  // member: night_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "night_time: ";
    value_to_yaml(msg.night_time, out);
    out << "\n";
  }

  // member: dusk_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dusk_time: ";
    value_to_yaml(msg.dusk_time, out);
    out << "\n";
  }

  // member: sound_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sound_type: ";
    value_to_yaml(msg.sound_type, out);
    out << "\n";
  }

  // member: headway_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "headway_valid: ";
    value_to_yaml(msg.headway_valid, out);
    out << "\n";
  }

  // member: headway_measurement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "headway_measurement: ";
    value_to_yaml(msg.headway_measurement, out);
    out << "\n";
  }

  // member: lanes_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanes_on: ";
    value_to_yaml(msg.lanes_on, out);
    out << "\n";
  }

  // member: left_ldw_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_ldw_on: ";
    value_to_yaml(msg.left_ldw_on, out);
    out << "\n";
  }

  // member: right_ldw_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_ldw_on: ";
    value_to_yaml(msg.right_ldw_on, out);
    out << "\n";
  }

  // member: fcw_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fcw_on: ";
    value_to_yaml(msg.fcw_on, out);
    out << "\n";
  }

  // member: left_crossing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_crossing: ";
    value_to_yaml(msg.left_crossing, out);
    out << "\n";
  }

  // member: right_crossing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_crossing: ";
    value_to_yaml(msg.right_crossing, out);
    out << "\n";
  }

  // member: maintenance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "maintenance: ";
    value_to_yaml(msg.maintenance, out);
    out << "\n";
  }

  // member: failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "failsafe: ";
    value_to_yaml(msg.failsafe, out);
    out << "\n";
  }

  // member: ped_fcw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ped_fcw: ";
    value_to_yaml(msg.ped_fcw, out);
    out << "\n";
  }

  // member: ped_in_dz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ped_in_dz: ";
    value_to_yaml(msg.ped_in_dz, out);
    out << "\n";
  }

  // member: headway_warning_level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "headway_warning_level: ";
    value_to_yaml(msg.headway_warning_level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mobileye_560_660_msgs::msg::AwsDisplay & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mobileye_560_660_msgs::msg::AwsDisplay>()
{
  return "mobileye_560_660_msgs::msg::AwsDisplay";
}

template<>
inline const char * name<mobileye_560_660_msgs::msg::AwsDisplay>()
{
  return "mobileye_560_660_msgs/msg/AwsDisplay";
}

template<>
struct has_fixed_size<mobileye_560_660_msgs::msg::AwsDisplay>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mobileye_560_660_msgs::msg::AwsDisplay>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mobileye_560_660_msgs::msg::AwsDisplay>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__AWS_DISPLAY__TRAITS_HPP_
