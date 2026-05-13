// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rviz_2d_overlay_msgs:msg/OverlayText.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__STRUCT_HPP_
#define RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'bg_color'
// Member 'fg_color'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rviz_2d_overlay_msgs__msg__OverlayText __attribute__((deprecated))
#else
# define DEPRECATED__rviz_2d_overlay_msgs__msg__OverlayText __declspec(deprecated)
#endif

namespace rviz_2d_overlay_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OverlayText_
{
  using Type = OverlayText_<ContainerAllocator>;

  explicit OverlayText_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bg_color(_init),
    fg_color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->width = 0l;
      this->height = 0l;
      this->horizontal_distance = 0l;
      this->vertical_distance = 0l;
      this->horizontal_alignment = 0;
      this->vertical_alignment = 0;
      this->line_width = 0l;
      this->text_size = 0.0f;
      this->font = "";
      this->text = "";
    }
  }

  explicit OverlayText_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bg_color(_alloc, _init),
    font(_alloc),
    fg_color(_alloc, _init),
    text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->width = 0l;
      this->height = 0l;
      this->horizontal_distance = 0l;
      this->vertical_distance = 0l;
      this->horizontal_alignment = 0;
      this->vertical_alignment = 0;
      this->line_width = 0l;
      this->text_size = 0.0f;
      this->font = "";
      this->text = "";
    }
  }

  // field types and members
  using _action_type =
    uint8_t;
  _action_type action;
  using _width_type =
    int32_t;
  _width_type width;
  using _height_type =
    int32_t;
  _height_type height;
  using _horizontal_distance_type =
    int32_t;
  _horizontal_distance_type horizontal_distance;
  using _vertical_distance_type =
    int32_t;
  _vertical_distance_type vertical_distance;
  using _horizontal_alignment_type =
    uint8_t;
  _horizontal_alignment_type horizontal_alignment;
  using _vertical_alignment_type =
    uint8_t;
  _vertical_alignment_type vertical_alignment;
  using _bg_color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _bg_color_type bg_color;
  using _line_width_type =
    int32_t;
  _line_width_type line_width;
  using _text_size_type =
    float;
  _text_size_type text_size;
  using _font_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _font_type font;
  using _fg_color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _fg_color_type fg_color;
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;

  // setters for named parameter idiom
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__horizontal_distance(
    const int32_t & _arg)
  {
    this->horizontal_distance = _arg;
    return *this;
  }
  Type & set__vertical_distance(
    const int32_t & _arg)
  {
    this->vertical_distance = _arg;
    return *this;
  }
  Type & set__horizontal_alignment(
    const uint8_t & _arg)
  {
    this->horizontal_alignment = _arg;
    return *this;
  }
  Type & set__vertical_alignment(
    const uint8_t & _arg)
  {
    this->vertical_alignment = _arg;
    return *this;
  }
  Type & set__bg_color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->bg_color = _arg;
    return *this;
  }
  Type & set__line_width(
    const int32_t & _arg)
  {
    this->line_width = _arg;
    return *this;
  }
  Type & set__text_size(
    const float & _arg)
  {
    this->text_size = _arg;
    return *this;
  }
  Type & set__font(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->font = _arg;
    return *this;
  }
  Type & set__fg_color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->fg_color = _arg;
    return *this;
  }
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ADD =
    0u;
  // guard against 'DELETE' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(DELETE)
#    pragma push_macro("DELETE")
#    undef DELETE
#  endif
#endif
  static constexpr uint8_t DELETE =
    1u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("DELETE")
#endif
  static constexpr uint8_t LEFT =
    0u;
  static constexpr uint8_t RIGHT =
    1u;
  static constexpr uint8_t CENTER =
    2u;
  static constexpr uint8_t TOP =
    3u;
  static constexpr uint8_t BOTTOM =
    4u;

  // pointer types
  using RawPtr =
    rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator> *;
  using ConstRawPtr =
    const rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rviz_2d_overlay_msgs__msg__OverlayText
    std::shared_ptr<rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rviz_2d_overlay_msgs__msg__OverlayText
    std::shared_ptr<rviz_2d_overlay_msgs::msg::OverlayText_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OverlayText_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->horizontal_distance != other.horizontal_distance) {
      return false;
    }
    if (this->vertical_distance != other.vertical_distance) {
      return false;
    }
    if (this->horizontal_alignment != other.horizontal_alignment) {
      return false;
    }
    if (this->vertical_alignment != other.vertical_alignment) {
      return false;
    }
    if (this->bg_color != other.bg_color) {
      return false;
    }
    if (this->line_width != other.line_width) {
      return false;
    }
    if (this->text_size != other.text_size) {
      return false;
    }
    if (this->font != other.font) {
      return false;
    }
    if (this->fg_color != other.fg_color) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const OverlayText_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OverlayText_

// alias to use template instance with default allocator
using OverlayText =
  rviz_2d_overlay_msgs::msg::OverlayText_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t OverlayText_<ContainerAllocator>::ADD;
// guard against 'DELETE' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(DELETE)
#    pragma push_macro("DELETE")
#    undef DELETE
#  endif
#endif
template<typename ContainerAllocator>
constexpr uint8_t OverlayText_<ContainerAllocator>::DELETE;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("DELETE")
#endif
template<typename ContainerAllocator>
constexpr uint8_t OverlayText_<ContainerAllocator>::LEFT;
template<typename ContainerAllocator>
constexpr uint8_t OverlayText_<ContainerAllocator>::RIGHT;
template<typename ContainerAllocator>
constexpr uint8_t OverlayText_<ContainerAllocator>::CENTER;
template<typename ContainerAllocator>
constexpr uint8_t OverlayText_<ContainerAllocator>::TOP;
template<typename ContainerAllocator>
constexpr uint8_t OverlayText_<ContainerAllocator>::BOTTOM;

}  // namespace msg

}  // namespace rviz_2d_overlay_msgs

#endif  // RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__STRUCT_HPP_
