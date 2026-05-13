// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from derived_object_msgs:msg/ObjectWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__FUNCTIONS_H_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "derived_object_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "derived_object_msgs/msg/detail/object_with_covariance__struct.h"

/// Initialize msg/ObjectWithCovariance message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * derived_object_msgs__msg__ObjectWithCovariance
 * )) before or use
 * derived_object_msgs__msg__ObjectWithCovariance__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__ObjectWithCovariance__init(derived_object_msgs__msg__ObjectWithCovariance * msg);

/// Finalize msg/ObjectWithCovariance message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__ObjectWithCovariance__fini(derived_object_msgs__msg__ObjectWithCovariance * msg);

/// Create msg/ObjectWithCovariance message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * derived_object_msgs__msg__ObjectWithCovariance__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
derived_object_msgs__msg__ObjectWithCovariance *
derived_object_msgs__msg__ObjectWithCovariance__create();

/// Destroy msg/ObjectWithCovariance message.
/**
 * It calls
 * derived_object_msgs__msg__ObjectWithCovariance__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__ObjectWithCovariance__destroy(derived_object_msgs__msg__ObjectWithCovariance * msg);

/// Check for msg/ObjectWithCovariance message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__ObjectWithCovariance__are_equal(const derived_object_msgs__msg__ObjectWithCovariance * lhs, const derived_object_msgs__msg__ObjectWithCovariance * rhs);

/// Copy a msg/ObjectWithCovariance message.
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
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__ObjectWithCovariance__copy(
  const derived_object_msgs__msg__ObjectWithCovariance * input,
  derived_object_msgs__msg__ObjectWithCovariance * output);

/// Initialize array of msg/ObjectWithCovariance messages.
/**
 * It allocates the memory for the number of elements and calls
 * derived_object_msgs__msg__ObjectWithCovariance__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__ObjectWithCovariance__Sequence__init(derived_object_msgs__msg__ObjectWithCovariance__Sequence * array, size_t size);

/// Finalize array of msg/ObjectWithCovariance messages.
/**
 * It calls
 * derived_object_msgs__msg__ObjectWithCovariance__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__ObjectWithCovariance__Sequence__fini(derived_object_msgs__msg__ObjectWithCovariance__Sequence * array);

/// Create array of msg/ObjectWithCovariance messages.
/**
 * It allocates the memory for the array and calls
 * derived_object_msgs__msg__ObjectWithCovariance__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
derived_object_msgs__msg__ObjectWithCovariance__Sequence *
derived_object_msgs__msg__ObjectWithCovariance__Sequence__create(size_t size);

/// Destroy array of msg/ObjectWithCovariance messages.
/**
 * It calls
 * derived_object_msgs__msg__ObjectWithCovariance__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__ObjectWithCovariance__Sequence__destroy(derived_object_msgs__msg__ObjectWithCovariance__Sequence * array);

/// Check for msg/ObjectWithCovariance message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__ObjectWithCovariance__Sequence__are_equal(const derived_object_msgs__msg__ObjectWithCovariance__Sequence * lhs, const derived_object_msgs__msg__ObjectWithCovariance__Sequence * rhs);

/// Copy an array of msg/ObjectWithCovariance messages.
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
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__ObjectWithCovariance__Sequence__copy(
  const derived_object_msgs__msg__ObjectWithCovariance__Sequence * input,
  derived_object_msgs__msg__ObjectWithCovariance__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE__FUNCTIONS_H_
