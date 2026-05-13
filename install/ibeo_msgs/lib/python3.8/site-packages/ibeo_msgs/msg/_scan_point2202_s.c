// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/ScanPoint2202.idl
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
#include "ibeo_msgs/msg/detail/scan_point2202__struct.h"
#include "ibeo_msgs/msg/detail/scan_point2202__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ibeo_msgs__msg__scan_point2202__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
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
    assert(strncmp("ibeo_msgs.msg._scan_point2202.ScanPoint2202", full_classname_dest, 43) == 0);
  }
  ibeo_msgs__msg__ScanPoint2202 * ros_message = _ros_message;
  {  // layer
    PyObject * field = PyObject_GetAttrString(_pymsg, "layer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->layer = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // echo
    PyObject * field = PyObject_GetAttrString(_pymsg, "echo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->echo = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // transparent_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "transparent_point");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->transparent_point = (Py_True == field);
    Py_DECREF(field);
  }
  {  // clutter_atmospheric
    PyObject * field = PyObject_GetAttrString(_pymsg, "clutter_atmospheric");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->clutter_atmospheric = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ground
    PyObject * field = PyObject_GetAttrString(_pymsg, "ground");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ground = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dirt
    PyObject * field = PyObject_GetAttrString(_pymsg, "dirt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dirt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // horizontal_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->horizontal_angle = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // radial_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "radial_distance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radial_distance = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // echo_pulse_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "echo_pulse_width");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->echo_pulse_width = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ibeo_msgs__msg__scan_point2202__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ScanPoint2202 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._scan_point2202");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ScanPoint2202");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__ScanPoint2202 * ros_message = (ibeo_msgs__msg__ScanPoint2202 *)raw_ros_message;
  {  // layer
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->layer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "layer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // echo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->echo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "echo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transparent_point
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->transparent_point ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transparent_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clutter_atmospheric
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->clutter_atmospheric ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clutter_atmospheric", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ground
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ground ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ground", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dirt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dirt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dirt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->horizontal_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radial_distance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->radial_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radial_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // echo_pulse_width
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->echo_pulse_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "echo_pulse_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
