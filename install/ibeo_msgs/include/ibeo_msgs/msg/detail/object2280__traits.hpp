// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ibeo_msgs:msg/Object2280.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__OBJECT2280__TRAITS_HPP_
#define IBEO_MSGS__MSG__DETAIL__OBJECT2280__TRAITS_HPP_

#include "ibeo_msgs/msg/detail/object2280__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'object_box_center'
// Member 'object_box_center_sigma'
// Member 'object_box_size'
// Member 'relative_velocity'
// Member 'relative_velocity_sigma'
// Member 'absolute_velocity'
// Member 'absolute_velocity_sigma'
// Member 'reference_point_coordinate'
// Member 'reference_point_coordinate_sigma'
// Member 'contour_point_list'
#include "ibeo_msgs/msg/detail/point2_df__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ibeo_msgs::msg::Object2280 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: tracking_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_model: ";
    value_to_yaml(msg.tracking_model, out);
    out << "\n";
  }

  // member: mobility_of_dyn_object_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mobility_of_dyn_object_detected: ";
    value_to_yaml(msg.mobility_of_dyn_object_detected, out);
    out << "\n";
  }

  // member: motion_model_validated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_model_validated: ";
    value_to_yaml(msg.motion_model_validated, out);
    out << "\n";
  }

  // member: object_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_age: ";
    value_to_yaml(msg.object_age, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: object_prediction_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_prediction_age: ";
    value_to_yaml(msg.object_prediction_age, out);
    out << "\n";
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification: ";
    value_to_yaml(msg.classification, out);
    out << "\n";
  }

  // member: classification_certainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification_certainty: ";
    value_to_yaml(msg.classification_certainty, out);
    out << "\n";
  }

  // member: classification_age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification_age: ";
    value_to_yaml(msg.classification_age, out);
    out << "\n";
  }

  // member: object_box_center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_center:\n";
    to_yaml(msg.object_box_center, out, indentation + 2);
  }

  // member: object_box_center_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_center_sigma:\n";
    to_yaml(msg.object_box_center_sigma, out, indentation + 2);
  }

  // member: object_box_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_size:\n";
    to_yaml(msg.object_box_size, out, indentation + 2);
  }

  // member: object_box_orientation_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_orientation_angle: ";
    value_to_yaml(msg.object_box_orientation_angle, out);
    out << "\n";
  }

  // member: object_box_orientation_angle_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_box_orientation_angle_sigma: ";
    value_to_yaml(msg.object_box_orientation_angle_sigma, out);
    out << "\n";
  }

  // member: relative_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity:\n";
    to_yaml(msg.relative_velocity, out, indentation + 2);
  }

  // member: relative_velocity_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_velocity_sigma:\n";
    to_yaml(msg.relative_velocity_sigma, out, indentation + 2);
  }

  // member: absolute_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_velocity:\n";
    to_yaml(msg.absolute_velocity, out, indentation + 2);
  }

  // member: absolute_velocity_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "absolute_velocity_sigma:\n";
    to_yaml(msg.absolute_velocity_sigma, out, indentation + 2);
  }

  // member: number_of_contour_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "number_of_contour_points: ";
    value_to_yaml(msg.number_of_contour_points, out);
    out << "\n";
  }

  // member: closest_point_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closest_point_index: ";
    value_to_yaml(msg.closest_point_index, out);
    out << "\n";
  }

  // member: reference_point_location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_location: ";
    value_to_yaml(msg.reference_point_location, out);
    out << "\n";
  }

  // member: reference_point_coordinate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_coordinate:\n";
    to_yaml(msg.reference_point_coordinate, out, indentation + 2);
  }

  // member: reference_point_coordinate_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_coordinate_sigma:\n";
    to_yaml(msg.reference_point_coordinate_sigma, out, indentation + 2);
  }

  // member: reference_point_position_correction_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reference_point_position_correction_coefficient: ";
    value_to_yaml(msg.reference_point_position_correction_coefficient, out);
    out << "\n";
  }

  // member: object_priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_priority: ";
    value_to_yaml(msg.object_priority, out);
    out << "\n";
  }

  // member: object_existence_measurement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_existence_measurement: ";
    value_to_yaml(msg.object_existence_measurement, out);
    out << "\n";
  }

  // member: contour_point_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contour_point_list.size() == 0) {
      out << "contour_point_list: []\n";
    } else {
      out << "contour_point_list:\n";
      for (auto item : msg.contour_point_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ibeo_msgs::msg::Object2280 & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ibeo_msgs::msg::Object2280>()
{
  return "ibeo_msgs::msg::Object2280";
}

template<>
inline const char * name<ibeo_msgs::msg::Object2280>()
{
  return "ibeo_msgs/msg/Object2280";
}

template<>
struct has_fixed_size<ibeo_msgs::msg::Object2280>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ibeo_msgs::msg::Object2280>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ibeo_msgs::msg::Object2280>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IBEO_MSGS__MSG__DETAIL__OBJECT2280__TRAITS_HPP_
