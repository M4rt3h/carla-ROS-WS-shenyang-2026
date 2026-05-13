// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mobileye_560_660_msgs:msg/LkaNumOfNextLaneMarkersReported.idl
// generated code does not contain a copyright notice

#ifndef MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_NUM_OF_NEXT_LANE_MARKERS_REPORTED__FUNCTIONS_H_
#define MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_NUM_OF_NEXT_LANE_MARKERS_REPORTED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mobileye_560_660_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mobileye_560_660_msgs/msg/detail/lka_num_of_next_lane_markers_reported__struct.h"

/// Initialize msg/LkaNumOfNextLaneMarkersReported message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported
 * )) before or use
 * mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__init(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * msg);

/// Finalize msg/LkaNumOfNextLaneMarkersReported message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
void
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__fini(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * msg);

/// Create msg/LkaNumOfNextLaneMarkersReported message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported *
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__create();

/// Destroy msg/LkaNumOfNextLaneMarkersReported message.
/**
 * It calls
 * mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
void
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__destroy(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * msg);

/// Check for msg/LkaNumOfNextLaneMarkersReported message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__are_equal(const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * lhs, const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * rhs);

/// Copy a msg/LkaNumOfNextLaneMarkersReported message.
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
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__copy(
  const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * input,
  mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported * output);

/// Initialize array of msg/LkaNumOfNextLaneMarkersReported messages.
/**
 * It allocates the memory for the number of elements and calls
 * mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__init(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * array, size_t size);

/// Finalize array of msg/LkaNumOfNextLaneMarkersReported messages.
/**
 * It calls
 * mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
void
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__fini(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * array);

/// Create array of msg/LkaNumOfNextLaneMarkersReported messages.
/**
 * It allocates the memory for the array and calls
 * mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence *
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__create(size_t size);

/// Destroy array of msg/LkaNumOfNextLaneMarkersReported messages.
/**
 * It calls
 * mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
void
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__destroy(mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * array);

/// Check for msg/LkaNumOfNextLaneMarkersReported message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__are_equal(const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * lhs, const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * rhs);

/// Copy an array of msg/LkaNumOfNextLaneMarkersReported messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mobileye_560_660_msgs
bool
mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence__copy(
  const mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * input,
  mobileye_560_660_msgs__msg__LkaNumOfNextLaneMarkersReported__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOBILEYE_560_660_MSGS__MSG__DETAIL__LKA_NUM_OF_NEXT_LANE_MARKERS_REPORTED__FUNCTIONS_H_
