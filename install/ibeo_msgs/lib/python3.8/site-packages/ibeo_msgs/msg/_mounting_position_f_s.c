// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/MountingPositionF.idl
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
#include "ibeo_msgs/msg/detail/mounting_position_f__struct.h"
#include "ibeo_msgs/msg/detail/mounting_position_f__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ibeo_msgs__msg__mounting_position_f__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("ibeo_msgs.msg._mounting_position_f.MountingPositionF", full_classname_dest, 52) == 0);
  }
  ibeo_msgs__msg__MountingPositionF * ros_message = _ros_message;
  {  // yaw_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ibeo_msgs__msg__mounting_position_f__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MountingPositionF */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._mounting_position_f");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MountingPositionF");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__MountingPositionF * ros_message = (ibeo_msgs__msg__MountingPositionF *)raw_ros_message;
  {  // yaw_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
