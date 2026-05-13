// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carla_ros_scenario_runner_types:msg/CarlaScenarioList.idl
// generated code does not contain a copyright notice
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `scenarios`
#include "carla_ros_scenario_runner_types/msg/detail/carla_scenario__functions.h"

bool
carla_ros_scenario_runner_types__msg__CarlaScenarioList__init(carla_ros_scenario_runner_types__msg__CarlaScenarioList * msg)
{
  if (!msg) {
    return false;
  }
  // scenarios
  if (!carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__init(&msg->scenarios, 0)) {
    carla_ros_scenario_runner_types__msg__CarlaScenarioList__fini(msg);
    return false;
  }
  return true;
}

void
carla_ros_scenario_runner_types__msg__CarlaScenarioList__fini(carla_ros_scenario_runner_types__msg__CarlaScenarioList * msg)
{
  if (!msg) {
    return;
  }
  // scenarios
  carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__fini(&msg->scenarios);
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenarioList__are_equal(const carla_ros_scenario_runner_types__msg__CarlaScenarioList * lhs, const carla_ros_scenario_runner_types__msg__CarlaScenarioList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // scenarios
  if (!carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__are_equal(
      &(lhs->scenarios), &(rhs->scenarios)))
  {
    return false;
  }
  return true;
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenarioList__copy(
  const carla_ros_scenario_runner_types__msg__CarlaScenarioList * input,
  carla_ros_scenario_runner_types__msg__CarlaScenarioList * output)
{
  if (!input || !output) {
    return false;
  }
  // scenarios
  if (!carla_ros_scenario_runner_types__msg__CarlaScenario__Sequence__copy(
      &(input->scenarios), &(output->scenarios)))
  {
    return false;
  }
  return true;
}

carla_ros_scenario_runner_types__msg__CarlaScenarioList *
carla_ros_scenario_runner_types__msg__CarlaScenarioList__create()
{
  carla_ros_scenario_runner_types__msg__CarlaScenarioList * msg = (carla_ros_scenario_runner_types__msg__CarlaScenarioList *)malloc(sizeof(carla_ros_scenario_runner_types__msg__CarlaScenarioList));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carla_ros_scenario_runner_types__msg__CarlaScenarioList));
  bool success = carla_ros_scenario_runner_types__msg__CarlaScenarioList__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
carla_ros_scenario_runner_types__msg__CarlaScenarioList__destroy(carla_ros_scenario_runner_types__msg__CarlaScenarioList * msg)
{
  if (msg) {
    carla_ros_scenario_runner_types__msg__CarlaScenarioList__fini(msg);
  }
  free(msg);
}


bool
carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence__init(carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  carla_ros_scenario_runner_types__msg__CarlaScenarioList * data = NULL;
  if (size) {
    data = (carla_ros_scenario_runner_types__msg__CarlaScenarioList *)calloc(size, sizeof(carla_ros_scenario_runner_types__msg__CarlaScenarioList));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carla_ros_scenario_runner_types__msg__CarlaScenarioList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carla_ros_scenario_runner_types__msg__CarlaScenarioList__fini(&data[i - 1]);
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
carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence__fini(carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      carla_ros_scenario_runner_types__msg__CarlaScenarioList__fini(&array->data[i]);
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

carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence *
carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence__create(size_t size)
{
  carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence * array = (carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence *)malloc(sizeof(carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence__destroy(carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence * array)
{
  if (array) {
    carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence__fini(array);
  }
  free(array);
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence__are_equal(const carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence * lhs, const carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carla_ros_scenario_runner_types__msg__CarlaScenarioList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence__copy(
  const carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence * input,
  carla_ros_scenario_runner_types__msg__CarlaScenarioList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carla_ros_scenario_runner_types__msg__CarlaScenarioList);
    carla_ros_scenario_runner_types__msg__CarlaScenarioList * data =
      (carla_ros_scenario_runner_types__msg__CarlaScenarioList *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carla_ros_scenario_runner_types__msg__CarlaScenarioList__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carla_ros_scenario_runner_types__msg__CarlaScenarioList__fini(&data[i]);
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
    if (!carla_ros_scenario_runner_types__msg__CarlaScenarioList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
