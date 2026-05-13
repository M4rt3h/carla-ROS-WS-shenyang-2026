// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mobileye_560_660_msgs:msg/AftermarketLane.idl
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
#include "mobileye_560_660_msgs/msg/detail/aftermarket_lane__struct.h"
#include "mobileye_560_660_msgs/msg/detail/aftermarket_lane__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mobileye_560_660_msgs__msg__aftermarket_lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("mobileye_560_660_msgs.msg._aftermarket_lane.AftermarketLane", full_classname_dest, 59) == 0);
  }
  mobileye_560_660_msgs__msg__AftermarketLane * ros_message = _ros_message;
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
  {  // lane_confidence_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_confidence_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_confidence_left = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ldw_available_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "ldw_available_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ldw_available_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lane_type_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_type_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_type_left = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // distance_to_left_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_left_lane");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_left_lane = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_confidence_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_confidence_right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_confidence_right = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ldw_available_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "ldw_available_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ldw_available_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lane_type_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_type_right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_type_right = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // distance_to_right_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_to_right_lane");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_to_right_lane = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mobileye_560_660_msgs__msg__aftermarket_lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AftermarketLane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mobileye_560_660_msgs.msg._aftermarket_lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AftermarketLane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mobileye_560_660_msgs__msg__AftermarketLane * ros_message = (mobileye_560_660_msgs__msg__AftermarketLane *)raw_ros_message;
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
  {  // lane_confidence_left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_confidence_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_confidence_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ldw_available_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ldw_available_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ldw_available_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_type_left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_type_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_type_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_left_lane
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_left_lane);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_left_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_confidence_right
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_confidence_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_confidence_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ldw_available_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ldw_available_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ldw_available_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_type_right
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_type_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_type_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_to_right_lane
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_to_right_lane);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_to_right_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
