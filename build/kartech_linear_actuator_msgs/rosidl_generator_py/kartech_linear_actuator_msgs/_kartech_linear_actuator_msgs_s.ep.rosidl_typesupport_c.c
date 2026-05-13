// generated from rosidl_generator_py/resource/_idl_pkg_typesupport_entry_point.c.em
// generated code does not contain a copyright notice
#include <Python.h>

static PyMethodDef kartech_linear_actuator_msgs__methods[] = {
  {NULL, NULL, 0, NULL}  /* sentinel */
};

static struct PyModuleDef kartech_linear_actuator_msgs__module = {
  PyModuleDef_HEAD_INIT,
  "_kartech_linear_actuator_msgs_support",
  "_kartech_linear_actuator_msgs_doc",
  -1,  /* -1 means that the module keeps state in global variables */
  kartech_linear_actuator_msgs__methods,
  NULL,
  NULL,
  NULL,
  NULL,
};

#include <stdbool.h>
#include <stdint.h>
#include "rosidl_runtime_c/visibility_control.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/actuator_unique_id_req__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/actuator_unique_id_req__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/actuator_unique_id_req__functions.h"

static void * kartech_linear_actuator_msgs__msg__actuator_unique_id_req__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__create();
}

static void kartech_linear_actuator_msgs__msg__actuator_unique_id_req__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq * ros_message = (kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__ActuatorUniqueIdReq__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__actuator_unique_id_req__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__actuator_unique_id_req__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ActuatorUniqueIdReq);

int8_t
_register_msg_type__msg__actuator_unique_id_req(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__actuator_unique_id_req__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__actuator_unique_id_req",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__actuator_unique_id_req__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__actuator_unique_id_req",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__actuator_unique_id_req__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__actuator_unique_id_req",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__actuator_unique_id_req__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__actuator_unique_id_req",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ActuatorUniqueIdReq),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__actuator_unique_id_req",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/auto_zero_cal_cmd__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/auto_zero_cal_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/auto_zero_cal_cmd__functions.h"

static void * kartech_linear_actuator_msgs__msg__auto_zero_cal_cmd__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__AutoZeroCalCmd__create();
}

static void kartech_linear_actuator_msgs__msg__auto_zero_cal_cmd__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__AutoZeroCalCmd * ros_message = (kartech_linear_actuator_msgs__msg__AutoZeroCalCmd *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__AutoZeroCalCmd__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__auto_zero_cal_cmd__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__auto_zero_cal_cmd__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, AutoZeroCalCmd);

int8_t
_register_msg_type__msg__auto_zero_cal_cmd(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__auto_zero_cal_cmd__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__auto_zero_cal_cmd",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__auto_zero_cal_cmd__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__auto_zero_cal_cmd",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__auto_zero_cal_cmd__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__auto_zero_cal_cmd",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__auto_zero_cal_cmd__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__auto_zero_cal_cmd",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, AutoZeroCalCmd),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__auto_zero_cal_cmd",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_kd_freq_deadband_cmd__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_kd_freq_deadband_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_kd_freq_deadband_cmd__functions.h"

static void * kartech_linear_actuator_msgs__msg__configure_outputs_kd_freq_deadband_cmd__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd__create();
}

static void kartech_linear_actuator_msgs__msg__configure_outputs_kd_freq_deadband_cmd__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd * ros_message = (kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__ConfigureOutputsKdFreqDeadbandCmd__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__configure_outputs_kd_freq_deadband_cmd__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__configure_outputs_kd_freq_deadband_cmd__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ConfigureOutputsKdFreqDeadbandCmd);

int8_t
_register_msg_type__msg__configure_outputs_kd_freq_deadband_cmd(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_kd_freq_deadband_cmd__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__configure_outputs_kd_freq_deadband_cmd",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_kd_freq_deadband_cmd__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__configure_outputs_kd_freq_deadband_cmd",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_kd_freq_deadband_cmd__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__configure_outputs_kd_freq_deadband_cmd",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_kd_freq_deadband_cmd__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__configure_outputs_kd_freq_deadband_cmd",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ConfigureOutputsKdFreqDeadbandCmd),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__configure_outputs_kd_freq_deadband_cmd",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_kp_ki_cmd__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_kp_ki_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_kp_ki_cmd__functions.h"

static void * kartech_linear_actuator_msgs__msg__configure_outputs_kp_ki_cmd__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__create();
}

static void kartech_linear_actuator_msgs__msg__configure_outputs_kp_ki_cmd__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd * ros_message = (kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__ConfigureOutputsKpKiCmd__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__configure_outputs_kp_ki_cmd__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__configure_outputs_kp_ki_cmd__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ConfigureOutputsKpKiCmd);

int8_t
_register_msg_type__msg__configure_outputs_kp_ki_cmd(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_kp_ki_cmd__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__configure_outputs_kp_ki_cmd",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_kp_ki_cmd__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__configure_outputs_kp_ki_cmd",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_kp_ki_cmd__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__configure_outputs_kp_ki_cmd",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_kp_ki_cmd__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__configure_outputs_kp_ki_cmd",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ConfigureOutputsKpKiCmd),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__configure_outputs_kp_ki_cmd",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_pwm_freq_cmd__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_pwm_freq_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/configure_outputs_pwm_freq_cmd__functions.h"

static void * kartech_linear_actuator_msgs__msg__configure_outputs_pwm_freq_cmd__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__ConfigureOutputsPwmFreqCmd__create();
}

static void kartech_linear_actuator_msgs__msg__configure_outputs_pwm_freq_cmd__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__ConfigureOutputsPwmFreqCmd * ros_message = (kartech_linear_actuator_msgs__msg__ConfigureOutputsPwmFreqCmd *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__ConfigureOutputsPwmFreqCmd__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__configure_outputs_pwm_freq_cmd__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__configure_outputs_pwm_freq_cmd__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ConfigureOutputsPwmFreqCmd);

int8_t
_register_msg_type__msg__configure_outputs_pwm_freq_cmd(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_pwm_freq_cmd__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__configure_outputs_pwm_freq_cmd",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_pwm_freq_cmd__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__configure_outputs_pwm_freq_cmd",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_pwm_freq_cmd__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__configure_outputs_pwm_freq_cmd",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__configure_outputs_pwm_freq_cmd__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__configure_outputs_pwm_freq_cmd",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ConfigureOutputsPwmFreqCmd),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__configure_outputs_pwm_freq_cmd",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/enhanced_position_rpt__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/enhanced_position_rpt__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/enhanced_position_rpt__functions.h"

static void * kartech_linear_actuator_msgs__msg__enhanced_position_rpt__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__EnhancedPositionRpt__create();
}

static void kartech_linear_actuator_msgs__msg__enhanced_position_rpt__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__EnhancedPositionRpt * ros_message = (kartech_linear_actuator_msgs__msg__EnhancedPositionRpt *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__EnhancedPositionRpt__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__enhanced_position_rpt__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__enhanced_position_rpt__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, EnhancedPositionRpt);

int8_t
_register_msg_type__msg__enhanced_position_rpt(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__enhanced_position_rpt__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__enhanced_position_rpt",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__enhanced_position_rpt__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__enhanced_position_rpt",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__enhanced_position_rpt__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__enhanced_position_rpt",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__enhanced_position_rpt__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__enhanced_position_rpt",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, EnhancedPositionRpt),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__enhanced_position_rpt",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/motor_current_rpt__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/motor_current_rpt__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/motor_current_rpt__functions.h"

static void * kartech_linear_actuator_msgs__msg__motor_current_rpt__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__MotorCurrentRpt__create();
}

static void kartech_linear_actuator_msgs__msg__motor_current_rpt__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__MotorCurrentRpt * ros_message = (kartech_linear_actuator_msgs__msg__MotorCurrentRpt *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__MotorCurrentRpt__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__motor_current_rpt__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__motor_current_rpt__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, MotorCurrentRpt);

int8_t
_register_msg_type__msg__motor_current_rpt(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__motor_current_rpt__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__motor_current_rpt",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__motor_current_rpt__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__motor_current_rpt",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__motor_current_rpt__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__motor_current_rpt",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__motor_current_rpt__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__motor_current_rpt",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, MotorCurrentRpt),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__motor_current_rpt",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/motor_over_current_config_cmd__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/motor_over_current_config_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/motor_over_current_config_cmd__functions.h"

static void * kartech_linear_actuator_msgs__msg__motor_over_current_config_cmd__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__MotorOverCurrentConfigCmd__create();
}

static void kartech_linear_actuator_msgs__msg__motor_over_current_config_cmd__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__MotorOverCurrentConfigCmd * ros_message = (kartech_linear_actuator_msgs__msg__MotorOverCurrentConfigCmd *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__MotorOverCurrentConfigCmd__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__motor_over_current_config_cmd__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__motor_over_current_config_cmd__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, MotorOverCurrentConfigCmd);

int8_t
_register_msg_type__msg__motor_over_current_config_cmd(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__motor_over_current_config_cmd__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__motor_over_current_config_cmd",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__motor_over_current_config_cmd__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__motor_over_current_config_cmd",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__motor_over_current_config_cmd__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__motor_over_current_config_cmd",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__motor_over_current_config_cmd__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__motor_over_current_config_cmd",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, MotorOverCurrentConfigCmd),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__motor_over_current_config_cmd",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/position_cmd__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/position_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/position_cmd__functions.h"

static void * kartech_linear_actuator_msgs__msg__position_cmd__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__PositionCmd__create();
}

static void kartech_linear_actuator_msgs__msg__position_cmd__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__PositionCmd * ros_message = (kartech_linear_actuator_msgs__msg__PositionCmd *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__PositionCmd__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__position_cmd__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__position_cmd__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, PositionCmd);

int8_t
_register_msg_type__msg__position_cmd(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_cmd__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__position_cmd",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_cmd__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__position_cmd",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_cmd__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__position_cmd",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_cmd__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__position_cmd",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, PositionCmd),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__position_cmd",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/position_reach_error_time_config_cmd__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/position_reach_error_time_config_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/position_reach_error_time_config_cmd__functions.h"

static void * kartech_linear_actuator_msgs__msg__position_reach_error_time_config_cmd__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__PositionReachErrorTimeConfigCmd__create();
}

static void kartech_linear_actuator_msgs__msg__position_reach_error_time_config_cmd__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__PositionReachErrorTimeConfigCmd * ros_message = (kartech_linear_actuator_msgs__msg__PositionReachErrorTimeConfigCmd *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__PositionReachErrorTimeConfigCmd__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__position_reach_error_time_config_cmd__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__position_reach_error_time_config_cmd__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, PositionReachErrorTimeConfigCmd);

int8_t
_register_msg_type__msg__position_reach_error_time_config_cmd(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_reach_error_time_config_cmd__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__position_reach_error_time_config_cmd",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_reach_error_time_config_cmd__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__position_reach_error_time_config_cmd",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_reach_error_time_config_cmd__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__position_reach_error_time_config_cmd",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_reach_error_time_config_cmd__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__position_reach_error_time_config_cmd",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, PositionReachErrorTimeConfigCmd),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__position_reach_error_time_config_cmd",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/position_rpt__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/position_rpt__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/position_rpt__functions.h"

static void * kartech_linear_actuator_msgs__msg__position_rpt__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__PositionRpt__create();
}

static void kartech_linear_actuator_msgs__msg__position_rpt__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__PositionRpt * ros_message = (kartech_linear_actuator_msgs__msg__PositionRpt *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__PositionRpt__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__position_rpt__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__position_rpt__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, PositionRpt);

int8_t
_register_msg_type__msg__position_rpt(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_rpt__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__position_rpt",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_rpt__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__position_rpt",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_rpt__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__position_rpt",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__position_rpt__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__position_rpt",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, PositionRpt),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__position_rpt",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/priority_config_cmd__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/priority_config_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/priority_config_cmd__functions.h"

static void * kartech_linear_actuator_msgs__msg__priority_config_cmd__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__PriorityConfigCmd__create();
}

static void kartech_linear_actuator_msgs__msg__priority_config_cmd__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__PriorityConfigCmd * ros_message = (kartech_linear_actuator_msgs__msg__PriorityConfigCmd *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__PriorityConfigCmd__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__priority_config_cmd__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__priority_config_cmd__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, PriorityConfigCmd);

int8_t
_register_msg_type__msg__priority_config_cmd(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__priority_config_cmd__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__priority_config_cmd",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__priority_config_cmd__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__priority_config_cmd",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__priority_config_cmd__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__priority_config_cmd",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__priority_config_cmd__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__priority_config_cmd",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, PriorityConfigCmd),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__priority_config_cmd",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/reassign_command_id_cmd__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/reassign_command_id_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/reassign_command_id_cmd__functions.h"

static void * kartech_linear_actuator_msgs__msg__reassign_command_id_cmd__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__create();
}

static void kartech_linear_actuator_msgs__msg__reassign_command_id_cmd__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd * ros_message = (kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__ReassignCommandIdCmd__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__reassign_command_id_cmd__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__reassign_command_id_cmd__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ReassignCommandIdCmd);

int8_t
_register_msg_type__msg__reassign_command_id_cmd(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reassign_command_id_cmd__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__reassign_command_id_cmd",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reassign_command_id_cmd__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__reassign_command_id_cmd",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reassign_command_id_cmd__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__reassign_command_id_cmd",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reassign_command_id_cmd__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__reassign_command_id_cmd",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ReassignCommandIdCmd),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__reassign_command_id_cmd",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/reassign_report_id_cmd__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/reassign_report_id_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/reassign_report_id_cmd__functions.h"

static void * kartech_linear_actuator_msgs__msg__reassign_report_id_cmd__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__create();
}

static void kartech_linear_actuator_msgs__msg__reassign_report_id_cmd__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__ReassignReportIdCmd * ros_message = (kartech_linear_actuator_msgs__msg__ReassignReportIdCmd *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__ReassignReportIdCmd__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__reassign_report_id_cmd__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__reassign_report_id_cmd__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ReassignReportIdCmd);

int8_t
_register_msg_type__msg__reassign_report_id_cmd(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reassign_report_id_cmd__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__reassign_report_id_cmd",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reassign_report_id_cmd__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__reassign_report_id_cmd",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reassign_report_id_cmd__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__reassign_report_id_cmd",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reassign_report_id_cmd__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__reassign_report_id_cmd",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ReassignReportIdCmd),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__reassign_report_id_cmd",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/report_index__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/report_index__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/report_index__functions.h"

static void * kartech_linear_actuator_msgs__msg__report_index__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__ReportIndex__create();
}

static void kartech_linear_actuator_msgs__msg__report_index__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__ReportIndex * ros_message = (kartech_linear_actuator_msgs__msg__ReportIndex *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__ReportIndex__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__report_index__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__report_index__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ReportIndex);

int8_t
_register_msg_type__msg__report_index(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__report_index__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__report_index",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__report_index__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__report_index",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__report_index__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__report_index",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__report_index__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__report_index",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ReportIndex),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__report_index",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/report_poll_req__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/report_poll_req__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/report_poll_req__functions.h"

static void * kartech_linear_actuator_msgs__msg__report_poll_req__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__ReportPollReq__create();
}

static void kartech_linear_actuator_msgs__msg__report_poll_req__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__ReportPollReq * ros_message = (kartech_linear_actuator_msgs__msg__ReportPollReq *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__ReportPollReq__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__report_poll_req__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__report_poll_req__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ReportPollReq);

int8_t
_register_msg_type__msg__report_poll_req(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__report_poll_req__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__report_poll_req",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__report_poll_req__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__report_poll_req",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__report_poll_req__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__report_poll_req",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__report_poll_req__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__report_poll_req",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ReportPollReq),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__report_poll_req",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/reset_cmd__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/reset_cmd__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/reset_cmd__functions.h"

static void * kartech_linear_actuator_msgs__msg__reset_cmd__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__ResetCmd__create();
}

static void kartech_linear_actuator_msgs__msg__reset_cmd__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__ResetCmd * ros_message = (kartech_linear_actuator_msgs__msg__ResetCmd *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__ResetCmd__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__reset_cmd__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__reset_cmd__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ResetCmd);

int8_t
_register_msg_type__msg__reset_cmd(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reset_cmd__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__reset_cmd",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reset_cmd__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__reset_cmd",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reset_cmd__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__reset_cmd",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__reset_cmd__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__reset_cmd",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ResetCmd),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__reset_cmd",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/scheduled_report_rates_req__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/scheduled_report_rates_req__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/scheduled_report_rates_req__functions.h"

static void * kartech_linear_actuator_msgs__msg__scheduled_report_rates_req__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__create();
}

static void kartech_linear_actuator_msgs__msg__scheduled_report_rates_req__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq * ros_message = (kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__ScheduledReportRatesReq__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__scheduled_report_rates_req__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__scheduled_report_rates_req__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ScheduledReportRatesReq);

int8_t
_register_msg_type__msg__scheduled_report_rates_req(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__scheduled_report_rates_req__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__scheduled_report_rates_req",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__scheduled_report_rates_req__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__scheduled_report_rates_req",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__scheduled_report_rates_req__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__scheduled_report_rates_req",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__scheduled_report_rates_req__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__scheduled_report_rates_req",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ScheduledReportRatesReq),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__scheduled_report_rates_req",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/software_revision_rpt__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/software_revision_rpt__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/software_revision_rpt__functions.h"

static void * kartech_linear_actuator_msgs__msg__software_revision_rpt__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt__create();
}

static void kartech_linear_actuator_msgs__msg__software_revision_rpt__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt * ros_message = (kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__software_revision_rpt__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__software_revision_rpt__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, SoftwareRevisionRpt);

int8_t
_register_msg_type__msg__software_revision_rpt(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__software_revision_rpt__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__software_revision_rpt",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__software_revision_rpt__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__software_revision_rpt",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__software_revision_rpt__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__software_revision_rpt",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__software_revision_rpt__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__software_revision_rpt",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, SoftwareRevisionRpt),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__software_revision_rpt",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/software_version_req__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/software_version_req__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/software_version_req__functions.h"

static void * kartech_linear_actuator_msgs__msg__software_version_req__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__SoftwareVersionReq__create();
}

static void kartech_linear_actuator_msgs__msg__software_version_req__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__SoftwareVersionReq * ros_message = (kartech_linear_actuator_msgs__msg__SoftwareVersionReq *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__SoftwareVersionReq__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__software_version_req__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__software_version_req__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, SoftwareVersionReq);

int8_t
_register_msg_type__msg__software_version_req(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__software_version_req__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__software_version_req",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__software_version_req__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__software_version_req",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__software_version_req__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__software_version_req",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__software_version_req__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__software_version_req",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, SoftwareVersionReq),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__software_version_req",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/unique_device_id_rpt__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/unique_device_id_rpt__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/unique_device_id_rpt__functions.h"

static void * kartech_linear_actuator_msgs__msg__unique_device_id_rpt__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__UniqueDeviceIdRpt__create();
}

static void kartech_linear_actuator_msgs__msg__unique_device_id_rpt__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__UniqueDeviceIdRpt * ros_message = (kartech_linear_actuator_msgs__msg__UniqueDeviceIdRpt *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__UniqueDeviceIdRpt__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__unique_device_id_rpt__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__unique_device_id_rpt__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, UniqueDeviceIdRpt);

int8_t
_register_msg_type__msg__unique_device_id_rpt(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__unique_device_id_rpt__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__unique_device_id_rpt",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__unique_device_id_rpt__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__unique_device_id_rpt",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__unique_device_id_rpt__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__unique_device_id_rpt",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__unique_device_id_rpt__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__unique_device_id_rpt",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, UniqueDeviceIdRpt),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__unique_device_id_rpt",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

// already included above
// #include <stdbool.h>
// already included above
// #include <stdint.h>
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_runtime_c/action_type_support_struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/zeroing_message_rpt__type_support.h"
#include "kartech_linear_actuator_msgs/msg/detail/zeroing_message_rpt__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/zeroing_message_rpt__functions.h"

static void * kartech_linear_actuator_msgs__msg__zeroing_message_rpt__create_ros_message(void)
{
  return kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__create();
}

static void kartech_linear_actuator_msgs__msg__zeroing_message_rpt__destroy_ros_message(void * raw_ros_message)
{
  kartech_linear_actuator_msgs__msg__ZeroingMessageRpt * ros_message = (kartech_linear_actuator_msgs__msg__ZeroingMessageRpt *)raw_ros_message;
  kartech_linear_actuator_msgs__msg__ZeroingMessageRpt__destroy(ros_message);
}

ROSIDL_GENERATOR_C_IMPORT
bool kartech_linear_actuator_msgs__msg__zeroing_message_rpt__convert_from_py(PyObject * _pymsg, void * ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * kartech_linear_actuator_msgs__msg__zeroing_message_rpt__convert_to_py(void * raw_ros_message);


ROSIDL_GENERATOR_C_IMPORT
const rosidl_message_type_support_t *
ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ZeroingMessageRpt);

int8_t
_register_msg_type__msg__zeroing_message_rpt(PyObject * pymodule)
{
  int8_t err;

  PyObject * pyobject_create_ros_message = NULL;
  pyobject_create_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__zeroing_message_rpt__create_ros_message,
    NULL, NULL);
  if (!pyobject_create_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "create_ros_message_msg__msg__zeroing_message_rpt",
    pyobject_create_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_create_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_destroy_ros_message = NULL;
  pyobject_destroy_ros_message = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__zeroing_message_rpt__destroy_ros_message,
    NULL, NULL);
  if (!pyobject_destroy_ros_message) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "destroy_ros_message_msg__msg__zeroing_message_rpt",
    pyobject_destroy_ros_message);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_destroy_ros_message);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_from_py = NULL;
  pyobject_convert_from_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__zeroing_message_rpt__convert_from_py,
    NULL, NULL);
  if (!pyobject_convert_from_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_from_py_msg__msg__zeroing_message_rpt",
    pyobject_convert_from_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_from_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_convert_to_py = NULL;
  pyobject_convert_to_py = PyCapsule_New(
    (void *)&kartech_linear_actuator_msgs__msg__zeroing_message_rpt__convert_to_py,
    NULL, NULL);
  if (!pyobject_convert_to_py) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "convert_to_py_msg__msg__zeroing_message_rpt",
    pyobject_convert_to_py);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_convert_to_py);
    // previously added objects will be removed when the module is destroyed
    return err;
  }

  PyObject * pyobject_type_support = NULL;
  pyobject_type_support = PyCapsule_New(
    (void *)ROSIDL_GET_MSG_TYPE_SUPPORT(kartech_linear_actuator_msgs, msg, ZeroingMessageRpt),
    NULL, NULL);
  if (!pyobject_type_support) {
    // previously added objects will be removed when the module is destroyed
    return -1;
  }
  err = PyModule_AddObject(
    pymodule,
    "type_support_msg__msg__zeroing_message_rpt",
    pyobject_type_support);
  if (err) {
    // the created capsule needs to be decremented
    Py_XDECREF(pyobject_type_support);
    // previously added objects will be removed when the module is destroyed
    return err;
  }
  return 0;
}

PyMODINIT_FUNC
PyInit_kartech_linear_actuator_msgs_s__rosidl_typesupport_c(void)
{
  PyObject * pymodule = NULL;
  pymodule = PyModule_Create(&kartech_linear_actuator_msgs__module);
  if (!pymodule) {
    return NULL;
  }
  int8_t err;

  err = _register_msg_type__msg__actuator_unique_id_req(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__auto_zero_cal_cmd(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__configure_outputs_kd_freq_deadband_cmd(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__configure_outputs_kp_ki_cmd(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__configure_outputs_pwm_freq_cmd(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__enhanced_position_rpt(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__motor_current_rpt(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__motor_over_current_config_cmd(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__position_cmd(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__position_reach_error_time_config_cmd(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__position_rpt(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__priority_config_cmd(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__reassign_command_id_cmd(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__reassign_report_id_cmd(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__report_index(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__report_poll_req(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__reset_cmd(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__scheduled_report_rates_req(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__software_revision_rpt(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__software_version_req(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__unique_device_id_rpt(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  err = _register_msg_type__msg__zeroing_message_rpt(pymodule);
  if (err) {
    Py_XDECREF(pymodule);
    return NULL;
  }

  return pymodule;
}
