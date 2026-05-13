// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from neobotix_usboard_msgs:msg/AnsToCmdConnect.idl
// generated code does not contain a copyright notice

#ifndef NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__FUNCTIONS_H_
#define NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "neobotix_usboard_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "neobotix_usboard_msgs/msg/detail/ans_to_cmd_connect__struct.h"

/// Initialize msg/AnsToCmdConnect message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * neobotix_usboard_msgs__msg__AnsToCmdConnect
 * )) before or use
 * neobotix_usboard_msgs__msg__AnsToCmdConnect__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
bool
neobotix_usboard_msgs__msg__AnsToCmdConnect__init(neobotix_usboard_msgs__msg__AnsToCmdConnect * msg);

/// Finalize msg/AnsToCmdConnect message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
void
neobotix_usboard_msgs__msg__AnsToCmdConnect__fini(neobotix_usboard_msgs__msg__AnsToCmdConnect * msg);

/// Create msg/AnsToCmdConnect message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * neobotix_usboard_msgs__msg__AnsToCmdConnect__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
neobotix_usboard_msgs__msg__AnsToCmdConnect *
neobotix_usboard_msgs__msg__AnsToCmdConnect__create();

/// Destroy msg/AnsToCmdConnect message.
/**
 * It calls
 * neobotix_usboard_msgs__msg__AnsToCmdConnect__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
void
neobotix_usboard_msgs__msg__AnsToCmdConnect__destroy(neobotix_usboard_msgs__msg__AnsToCmdConnect * msg);

/// Check for msg/AnsToCmdConnect message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
bool
neobotix_usboard_msgs__msg__AnsToCmdConnect__are_equal(const neobotix_usboard_msgs__msg__AnsToCmdConnect * lhs, const neobotix_usboard_msgs__msg__AnsToCmdConnect * rhs);

/// Copy a msg/AnsToCmdConnect message.
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
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
bool
neobotix_usboard_msgs__msg__AnsToCmdConnect__copy(
  const neobotix_usboard_msgs__msg__AnsToCmdConnect * input,
  neobotix_usboard_msgs__msg__AnsToCmdConnect * output);

/// Initialize array of msg/AnsToCmdConnect messages.
/**
 * It allocates the memory for the number of elements and calls
 * neobotix_usboard_msgs__msg__AnsToCmdConnect__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
bool
neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence__init(neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence * array, size_t size);

/// Finalize array of msg/AnsToCmdConnect messages.
/**
 * It calls
 * neobotix_usboard_msgs__msg__AnsToCmdConnect__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
void
neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence__fini(neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence * array);

/// Create array of msg/AnsToCmdConnect messages.
/**
 * It allocates the memory for the array and calls
 * neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence *
neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence__create(size_t size);

/// Destroy array of msg/AnsToCmdConnect messages.
/**
 * It calls
 * neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
void
neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence__destroy(neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence * array);

/// Check for msg/AnsToCmdConnect message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
bool
neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence__are_equal(const neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence * lhs, const neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence * rhs);

/// Copy an array of msg/AnsToCmdConnect messages.
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
ROSIDL_GENERATOR_C_PUBLIC_neobotix_usboard_msgs
bool
neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence__copy(
  const neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence * input,
  neobotix_usboard_msgs__msg__AnsToCmdConnect__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NEOBOTIX_USBOARD_MSGS__MSG__DETAIL__ANS_TO_CMD_CONNECT__FUNCTIONS_H_
