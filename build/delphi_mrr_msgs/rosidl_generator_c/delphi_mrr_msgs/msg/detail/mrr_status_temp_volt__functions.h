// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from delphi_mrr_msgs:msg/MrrStatusTempVolt.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__FUNCTIONS_H_
#define DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "delphi_mrr_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "delphi_mrr_msgs/msg/detail/mrr_status_temp_volt__struct.h"

/// Initialize msg/MrrStatusTempVolt message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * delphi_mrr_msgs__msg__MrrStatusTempVolt
 * )) before or use
 * delphi_mrr_msgs__msg__MrrStatusTempVolt__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__init(delphi_mrr_msgs__msg__MrrStatusTempVolt * msg);

/// Finalize msg/MrrStatusTempVolt message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__MrrStatusTempVolt__fini(delphi_mrr_msgs__msg__MrrStatusTempVolt * msg);

/// Create msg/MrrStatusTempVolt message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * delphi_mrr_msgs__msg__MrrStatusTempVolt__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
delphi_mrr_msgs__msg__MrrStatusTempVolt *
delphi_mrr_msgs__msg__MrrStatusTempVolt__create();

/// Destroy msg/MrrStatusTempVolt message.
/**
 * It calls
 * delphi_mrr_msgs__msg__MrrStatusTempVolt__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__MrrStatusTempVolt__destroy(delphi_mrr_msgs__msg__MrrStatusTempVolt * msg);

/// Check for msg/MrrStatusTempVolt message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__are_equal(const delphi_mrr_msgs__msg__MrrStatusTempVolt * lhs, const delphi_mrr_msgs__msg__MrrStatusTempVolt * rhs);

/// Copy a msg/MrrStatusTempVolt message.
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
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__copy(
  const delphi_mrr_msgs__msg__MrrStatusTempVolt * input,
  delphi_mrr_msgs__msg__MrrStatusTempVolt * output);

/// Initialize array of msg/MrrStatusTempVolt messages.
/**
 * It allocates the memory for the number of elements and calls
 * delphi_mrr_msgs__msg__MrrStatusTempVolt__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__init(delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * array, size_t size);

/// Finalize array of msg/MrrStatusTempVolt messages.
/**
 * It calls
 * delphi_mrr_msgs__msg__MrrStatusTempVolt__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__fini(delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * array);

/// Create array of msg/MrrStatusTempVolt messages.
/**
 * It allocates the memory for the array and calls
 * delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence *
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__create(size_t size);

/// Destroy array of msg/MrrStatusTempVolt messages.
/**
 * It calls
 * delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
void
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__destroy(delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * array);

/// Check for msg/MrrStatusTempVolt message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__are_equal(const delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * lhs, const delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * rhs);

/// Copy an array of msg/MrrStatusTempVolt messages.
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
ROSIDL_GENERATOR_C_PUBLIC_delphi_mrr_msgs
bool
delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence__copy(
  const delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * input,
  delphi_mrr_msgs__msg__MrrStatusTempVolt__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__MRR_STATUS_TEMP_VOLT__FUNCTIONS_H_
