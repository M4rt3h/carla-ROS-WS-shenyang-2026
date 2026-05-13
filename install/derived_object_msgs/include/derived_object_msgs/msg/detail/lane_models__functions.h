// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from derived_object_msgs:msg/LaneModels.idl
// generated code does not contain a copyright notice

#ifndef DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__FUNCTIONS_H_
#define DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "derived_object_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "derived_object_msgs/msg/detail/lane_models__struct.h"

/// Initialize msg/LaneModels message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * derived_object_msgs__msg__LaneModels
 * )) before or use
 * derived_object_msgs__msg__LaneModels__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__LaneModels__init(derived_object_msgs__msg__LaneModels * msg);

/// Finalize msg/LaneModels message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__LaneModels__fini(derived_object_msgs__msg__LaneModels * msg);

/// Create msg/LaneModels message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * derived_object_msgs__msg__LaneModels__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
derived_object_msgs__msg__LaneModels *
derived_object_msgs__msg__LaneModels__create();

/// Destroy msg/LaneModels message.
/**
 * It calls
 * derived_object_msgs__msg__LaneModels__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__LaneModels__destroy(derived_object_msgs__msg__LaneModels * msg);

/// Check for msg/LaneModels message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__LaneModels__are_equal(const derived_object_msgs__msg__LaneModels * lhs, const derived_object_msgs__msg__LaneModels * rhs);

/// Copy a msg/LaneModels message.
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
derived_object_msgs__msg__LaneModels__copy(
  const derived_object_msgs__msg__LaneModels * input,
  derived_object_msgs__msg__LaneModels * output);

/// Initialize array of msg/LaneModels messages.
/**
 * It allocates the memory for the number of elements and calls
 * derived_object_msgs__msg__LaneModels__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__LaneModels__Sequence__init(derived_object_msgs__msg__LaneModels__Sequence * array, size_t size);

/// Finalize array of msg/LaneModels messages.
/**
 * It calls
 * derived_object_msgs__msg__LaneModels__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__LaneModels__Sequence__fini(derived_object_msgs__msg__LaneModels__Sequence * array);

/// Create array of msg/LaneModels messages.
/**
 * It allocates the memory for the array and calls
 * derived_object_msgs__msg__LaneModels__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
derived_object_msgs__msg__LaneModels__Sequence *
derived_object_msgs__msg__LaneModels__Sequence__create(size_t size);

/// Destroy array of msg/LaneModels messages.
/**
 * It calls
 * derived_object_msgs__msg__LaneModels__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
void
derived_object_msgs__msg__LaneModels__Sequence__destroy(derived_object_msgs__msg__LaneModels__Sequence * array);

/// Check for msg/LaneModels message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_derived_object_msgs
bool
derived_object_msgs__msg__LaneModels__Sequence__are_equal(const derived_object_msgs__msg__LaneModels__Sequence * lhs, const derived_object_msgs__msg__LaneModels__Sequence * rhs);

/// Copy an array of msg/LaneModels messages.
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
derived_object_msgs__msg__LaneModels__Sequence__copy(
  const derived_object_msgs__msg__LaneModels__Sequence * input,
  derived_object_msgs__msg__LaneModels__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DERIVED_OBJECT_MSGS__MSG__DETAIL__LANE_MODELS__FUNCTIONS_H_
