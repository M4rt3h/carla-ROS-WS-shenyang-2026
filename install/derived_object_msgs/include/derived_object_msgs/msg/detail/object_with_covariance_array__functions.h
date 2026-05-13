// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from derived_object_msgs:msg/ObjectWithCovarianceArray.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE_ARRAY__FUNCTIONS_H_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "derived_object_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "derived_object_msgs/msg/detail/object_with_covariance_array__struct.h"

/// Initialize msg/ObjectWithCovarianceArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * derived_object_msgs__msg__ObjectWithCovarianceArray
 * )) before or use
 * derived_object_msgs__msg__ObjectWithCovarianceArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__ObjectWithCovarianceArray__init(derived_object_msgs__msg__ObjectWithCovarianceArray * msg);

/// Finalize msg/ObjectWithCovarianceArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__ObjectWithCovarianceArray__fini(derived_object_msgs__msg__ObjectWithCovarianceArray * msg);

/// Create msg/ObjectWithCovarianceArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * derived_object_msgs__msg__ObjectWithCovarianceArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
derived_object_msgs__msg__ObjectWithCovarianceArray *
derived_object_msgs__msg__ObjectWithCovarianceArray__create();

/// Destroy msg/ObjectWithCovarianceArray message.
/**
 * It calls
 * derived_object_msgs__msg__ObjectWithCovarianceArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__ObjectWithCovarianceArray__destroy(derived_object_msgs__msg__ObjectWithCovarianceArray * msg);

/// Check for msg/ObjectWithCovarianceArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__ObjectWithCovarianceArray__are_equal(const derived_object_msgs__msg__ObjectWithCovarianceArray * lhs, const derived_object_msgs__msg__ObjectWithCovarianceArray * rhs);

/// Copy a msg/ObjectWithCovarianceArray message.
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
derived_object_msgs__msg__ObjectWithCovarianceArray__copy(
  const derived_object_msgs__msg__ObjectWithCovarianceArray * input,
  derived_object_msgs__msg__ObjectWithCovarianceArray * output);

/// Initialize array of msg/ObjectWithCovarianceArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * derived_object_msgs__msg__ObjectWithCovarianceArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__init(derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * array, size_t size);

/// Finalize array of msg/ObjectWithCovarianceArray messages.
/**
 * It calls
 * derived_object_msgs__msg__ObjectWithCovarianceArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__fini(derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * array);

/// Create array of msg/ObjectWithCovarianceArray messages.
/**
 * It allocates the memory for the array and calls
 * derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence *
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__create(size_t size);

/// Destroy array of msg/ObjectWithCovarianceArray messages.
/**
 * It calls
 * derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__destroy(derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * array);

/// Check for msg/ObjectWithCovarianceArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__are_equal(const derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * lhs, const derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * rhs);

/// Copy an array of msg/ObjectWithCovarianceArray messages.
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
derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence__copy(
  const derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * input,
  derived_object_msgs__msg__ObjectWithCovarianceArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__OBJECT_WITH_COVARIANCE_ARRAY__FUNCTIONS_H_
