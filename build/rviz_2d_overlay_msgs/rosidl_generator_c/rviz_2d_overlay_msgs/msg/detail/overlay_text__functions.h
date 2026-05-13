// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rviz_2d_overlay_msgs:msg/OverlayText.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__FUNCTIONS_H_
#define RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rviz_2d_overlay_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rviz_2d_overlay_msgs/msg/detail/overlay_text__struct.h"

/// Initialize msg/OverlayText message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rviz_2d_overlay_msgs__msg__OverlayText
 * )) before or use
 * rviz_2d_overlay_msgs__msg__OverlayText__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
bool
rviz_2d_overlay_msgs__msg__OverlayText__init(rviz_2d_overlay_msgs__msg__OverlayText * msg);

/// Finalize msg/OverlayText message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
void
rviz_2d_overlay_msgs__msg__OverlayText__fini(rviz_2d_overlay_msgs__msg__OverlayText * msg);

/// Create msg/OverlayText message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rviz_2d_overlay_msgs__msg__OverlayText__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
rviz_2d_overlay_msgs__msg__OverlayText *
rviz_2d_overlay_msgs__msg__OverlayText__create();

/// Destroy msg/OverlayText message.
/**
 * It calls
 * rviz_2d_overlay_msgs__msg__OverlayText__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
void
rviz_2d_overlay_msgs__msg__OverlayText__destroy(rviz_2d_overlay_msgs__msg__OverlayText * msg);

/// Check for msg/OverlayText message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
bool
rviz_2d_overlay_msgs__msg__OverlayText__are_equal(const rviz_2d_overlay_msgs__msg__OverlayText * lhs, const rviz_2d_overlay_msgs__msg__OverlayText * rhs);

/// Copy a msg/OverlayText message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
bool
rviz_2d_overlay_msgs__msg__OverlayText__copy(
  const rviz_2d_overlay_msgs__msg__OverlayText * input,
  rviz_2d_overlay_msgs__msg__OverlayText * output);

/// Initialize array of msg/OverlayText messages.
/**
 * It allocates the memory for the number of elements and calls
 * rviz_2d_overlay_msgs__msg__OverlayText__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
bool
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__init(rviz_2d_overlay_msgs__msg__OverlayText__Sequence * array, size_t size);

/// Finalize array of msg/OverlayText messages.
/**
 * It calls
 * rviz_2d_overlay_msgs__msg__OverlayText__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
void
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__fini(rviz_2d_overlay_msgs__msg__OverlayText__Sequence * array);

/// Create array of msg/OverlayText messages.
/**
 * It allocates the memory for the array and calls
 * rviz_2d_overlay_msgs__msg__OverlayText__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
rviz_2d_overlay_msgs__msg__OverlayText__Sequence *
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__create(size_t size);

/// Destroy array of msg/OverlayText messages.
/**
 * It calls
 * rviz_2d_overlay_msgs__msg__OverlayText__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
void
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__destroy(rviz_2d_overlay_msgs__msg__OverlayText__Sequence * array);

/// Check for msg/OverlayText message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
bool
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__are_equal(const rviz_2d_overlay_msgs__msg__OverlayText__Sequence * lhs, const rviz_2d_overlay_msgs__msg__OverlayText__Sequence * rhs);

/// Copy an array of msg/OverlayText messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rviz_2d_overlay_msgs
bool
rviz_2d_overlay_msgs__msg__OverlayText__Sequence__copy(
  const rviz_2d_overlay_msgs__msg__OverlayText__Sequence * input,
  rviz_2d_overlay_msgs__msg__OverlayText__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_2D_OVERLAY_MSGS__MSG__DETAIL__OVERLAY_TEXT__FUNCTIONS_H_
