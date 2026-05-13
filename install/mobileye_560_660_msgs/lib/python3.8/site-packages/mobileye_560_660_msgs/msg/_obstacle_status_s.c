// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mobileye_560_660_msgs:msg/ObstacleStatus.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mobileye_560_660_msgs/msg/detail/obstacle_status__struct.h"
#include "mobileye_560_660_msgs/msg/detail/obstacle_status__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mobileye_560_660_msgs__msg__obstacle_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mobileye_560_660_msgs.msg._obstacle_status.ObstacleStatus", full_classname_dest, 57) == 0);
  }
  mobileye_560_660_msgs__msg__ObstacleStatus * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // num_obstacles
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_obstacles");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_obstacles = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // application_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "application_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->application_version = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // active_version_number_section
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_version_number_section");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->active_version_number_section = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_close_range_cut_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_close_range_cut_in");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_close_range_cut_in = (Py_True == field);
    Py_DECREF(field);
  }
  {  // right_close_range_cut_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_close_range_cut_in");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_close_range_cut_in = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stop_go
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_go");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stop_go = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // protocol_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "protocol_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->protocol_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // close_car
    PyObject * field = PyObject_GetAttrString(_pymsg, "close_car");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->close_car = (Py_True == field);
    Py_DECREF(field);
  }
  {  // failsafe
    PyObject * field = PyObject_GetAttrString(_pymsg, "failsafe");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->failsafe = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mobileye_560_660_msgs__msg__obstacle_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObstacleStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mobileye_560_660_msgs.msg._obstacle_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObstacleStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mobileye_560_660_msgs__msg__ObstacleStatus * ros_message = (mobileye_560_660_msgs__msg__ObstacleStatus *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_obstacles
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_obstacles);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_obstacles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // application_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->application_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "application_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_version_number_section
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->active_version_number_section);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_version_number_section", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_close_range_cut_in
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_close_range_cut_in ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_close_range_cut_in", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_close_range_cut_in
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_close_range_cut_in ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_close_range_cut_in", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_go
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stop_go);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_go", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // protocol_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->protocol_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "protocol_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // close_car
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->close_car ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "close_car", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // failsafe
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->failsafe);
    {
      int rc = PyObject_SetAttrString(_pymessage, "failsafe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
