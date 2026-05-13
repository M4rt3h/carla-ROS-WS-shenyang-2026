// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/ScanPoint2205.idl
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
#include "ibeo_msgs/msg/detail/scan_point2205__struct.h"
#include "ibeo_msgs/msg/detail/scan_point2205__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ibeo_msgs__msg__scan_point2205__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("ibeo_msgs.msg._scan_point2205.ScanPoint2205", full_classname_dest, 43) == 0);
  }
  ibeo_msgs__msg__ScanPoint2205 * ros_message = _ros_message;
  {  // x_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_position");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_position = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // echo_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "echo_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->echo_width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
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
  {  // time_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_offset = PyLong_AsUnsignedLong(field);
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
  {  // precipitation
    PyObject * field = PyObject_GetAttrString(_pymsg, "precipitation");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->precipitation = (Py_True == field);
    Py_DECREF(field);
  }
  {  // transparent
    PyObject * field = PyObject_GetAttrString(_pymsg, "transparent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->transparent = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ibeo_msgs__msg__scan_point2205__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ScanPoint2205 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._scan_point2205");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ScanPoint2205");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__ScanPoint2205 * ros_message = (ibeo_msgs__msg__ScanPoint2205 *)raw_ros_message;
  {  // x_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_position
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // echo_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->echo_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "echo_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // time_offset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_offset", field);
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
  {  // precipitation
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->precipitation ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "precipitation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transparent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->transparent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transparent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
