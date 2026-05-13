// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ibeo_msgs:msg/TrackedProperties.idl
// generated code does not contain a copyright notice

#ifndef IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__FUNCTIONS_H_
#define IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ibeo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ibeo_msgs/msg/detail/tracked_properties__struct.h"

/// Initialize msg/TrackedProperties message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ibeo_msgs__msg__TrackedProperties
 * )) before or use
 * ibeo_msgs__msg__TrackedProperties__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__TrackedProperties__init(ibeo_msgs__msg__TrackedProperties * msg);

/// Finalize msg/TrackedProperties message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__TrackedProperties__fini(ibeo_msgs__msg__TrackedProperties * msg);

/// Create msg/TrackedProperties message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ibeo_msgs__msg__TrackedProperties__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
ibeo_msgs__msg__TrackedProperties *
ibeo_msgs__msg__TrackedProperties__create();

/// Destroy msg/TrackedProperties message.
/**
 * It calls
 * ibeo_msgs__msg__TrackedProperties__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__TrackedProperties__destroy(ibeo_msgs__msg__TrackedProperties * msg);

/// Check for msg/TrackedProperties message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__TrackedProperties__are_equal(const ibeo_msgs__msg__TrackedProperties * lhs, const ibeo_msgs__msg__TrackedProperties * rhs);

/// Copy a msg/TrackedProperties message.
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
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__TrackedProperties__copy(
  const ibeo_msgs__msg__TrackedProperties * input,
  ibeo_msgs__msg__TrackedProperties * output);

/// Initialize array of msg/TrackedProperties messages.
/**
 * It allocates the memory for the number of elements and calls
 * ibeo_msgs__msg__TrackedProperties__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__TrackedProperties__Sequence__init(ibeo_msgs__msg__TrackedProperties__Sequence * array, size_t size);

/// Finalize array of msg/TrackedProperties messages.
/**
 * It calls
 * ibeo_msgs__msg__TrackedProperties__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__TrackedProperties__Sequence__fini(ibeo_msgs__msg__TrackedProperties__Sequence * array);

/// Create array of msg/TrackedProperties messages.
/**
 * It allocates the memory for the array and calls
 * ibeo_msgs__msg__TrackedProperties__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
ibeo_msgs__msg__TrackedProperties__Sequence *
ibeo_msgs__msg__TrackedProperties__Sequence__create(size_t size);

/// Destroy array of msg/TrackedProperties messages.
/**
 * It calls
 * ibeo_msgs__msg__TrackedProperties__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
void
ibeo_msgs__msg__TrackedProperties__Sequence__destroy(ibeo_msgs__msg__TrackedProperties__Sequence * array);

/// Check for msg/TrackedProperties message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__TrackedProperties__Sequence__are_equal(const ibeo_msgs__msg__TrackedProperties__Sequence * lhs, const ibeo_msgs__msg__TrackedProperties__Sequence * rhs);

/// Copy an array of msg/TrackedProperties messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ibeo_msgs
bool
ibeo_msgs__msg__TrackedProperties__Sequence__copy(
  const ibeo_msgs__msg__TrackedProperties__Sequence * input,
  ibeo_msgs__msg__TrackedProperties__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IBEO_MSGS__MSG__DETAIL__TRACKED_PROPERTIES__FUNCTIONS_H_
