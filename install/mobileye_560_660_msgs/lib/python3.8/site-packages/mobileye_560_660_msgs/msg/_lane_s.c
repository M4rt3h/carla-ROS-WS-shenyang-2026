// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mobileye_560_660_msgs:msg/Lane.idl
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
#include "mobileye_560_660_msgs/msg/detail/lane__struct.h"
#include "mobileye_560_660_msgs/msg/detail/lane__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mobileye_560_660_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("mobileye_560_660_msgs.msg._lane.Lane", full_classname_dest, 36) == 0);
  }
  mobileye_560_660_msgs__msg__Lane * ros_message = _ros_message;
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
  {  // lane_curvature
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_curvature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_curvature = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // construction_area
    PyObject * field = PyObject_GetAttrString(_pymsg, "construction_area");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->construction_area = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pitch_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_ldw_availability
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_ldw_availability");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->right_ldw_availability = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_ldw_availability
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_ldw_availability");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->left_ldw_availability = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mobileye_560_660_msgs__msg__lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Lane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mobileye_560_660_msgs.msg._lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Lane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mobileye_560_660_msgs__msg__Lane * ros_message = (mobileye_560_660_msgs__msg__Lane *)raw_ros_message;
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
  {  // lane_curvature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_curvature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_curvature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // construction_area
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->construction_area ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "construction_area", field);
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
  {  // right_ldw_availability
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->right_ldw_availability ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_ldw_availability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_ldw_availability
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->left_ldw_availability ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_ldw_availability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
