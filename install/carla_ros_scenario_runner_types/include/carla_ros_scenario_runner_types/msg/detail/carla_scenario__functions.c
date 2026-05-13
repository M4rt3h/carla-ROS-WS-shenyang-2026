// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenario.idl
// generated code does not contain a copyright notice
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `scenario_file`
#include "rosidl_runtime_c/string_functions.h"

bool
carla_ros_scenario_runner_types__msg__CarlaScenario__init(carla_ros_scenario_runner_types__msg__CarlaScenario * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    carla_ros_scenario_runner_types__msg__CarlaScenario__fini(msg);
    return false;
  }
  // scenario_file
  if (!rosidl_runtime_c__String__init(&msg->scenario_file)) {
    carla_ros_scenario_runner_types__msg__CarlaScenario__fini(msg);
    return false;
  }
  return true;
}

void
carla_ros_scenario_runner_types__msg__CarlaScenario__fini(carla_ros_scenario_runner_types__msg__CarlaScenario * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // scenario_file
  rosidl_runtime_c__String__fini(&msg->scenario_file);
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenario__are_equal(const carla_ros_scenario_runner_types__msg__CarlaScenario * lhs, const carla_ros_scenario_runner_types__msg__CarlaScenario * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // scenario_file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->scenario_file), &(rhs->scenario_file)))
  {
    return false;
  }
  return true;
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenario__copy(
  const carla_ros_scenario_runner_types__msg__CarlaScenario * input,
  carla_ros_scenario_runner_types__msg__CarlaScenario * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // scenario_file
  if (!rosidl_runtime_c__String__copy(
      &(input->scenario_file), &(output->scenario_file)))
  {
    return false;
  }
  return true;
}

carla_ros_scenario_runner_types__msg__CarlaScenario *
carla_ros_scenario_runner_types__msg__CarlaScenario__create()
{
  carla_ros_scenario_runner_types__msg__CarlaScenario * msg = (carla_ros_scenario_runner_types__msg__CarlaScenario *)malloc(sizeof(carla_ros_scenario_runner_types__msg__CarlaScenario));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_ros_scenario_runner_types__msg__CarlaScenario));
  bool success = carla_ros_scenario_runner_types__msg__CarlaScenario__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
carla_ros_scenario_runner_types__msg__CarlaScenario__destroy(carla_ros_scenario_runner_types__msg__CarlaScenario * msg)
{
  if (msg) {
    carla_ros_scenario_runner_types__msg__CarlaScenario__fini(msg);
  }
  free(msg);
}


bool
carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__init(carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  carla_ros_scenario_runner_types__msg__CarlaScenario * data = NULL;
  if (size) {
    data = (carla_ros_scenario_runner_types__msg__CarlaScenario *)calloc(size, sizeof(carla_ros_scenario_runner_types__msg__CarlaScenario));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_ros_scenario_runner_types__msg__CarlaScenario__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_ros_scenario_runner_types__msg__CarlaScenario__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__fini(carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carla_ros_scenario_runner_types__msg__CarlaScenario__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence *
carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__create(size_t size)
{
  carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence * array = (carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence *)malloc(sizeof(carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__destroy(carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence * array)
{
  if (array) {
    carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__fini(array);
  }
  free(array);
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__are_equal(const carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence * lhs, const carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_ros_scenario_runner_types__msg__CarlaScenario__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__copy(
  const carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence * input,
  carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_ros_scenario_runner_types__msg__CarlaScenario);
    carla_ros_scenario_runner_types__msg__CarlaScenario * data =
      (carla_ros_scenario_runner_types__msg__CarlaScenario *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_ros_scenario_runner_types__msg__CarlaScenario__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_ros_scenario_runner_types__msg__CarlaScenario__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carla_ros_scenario_runner_types__msg__CarlaScenario__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
