// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mobileye_560_660_msgs:msg/LkaLane.idl
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
#include "mobileye_560_660_msgs/msg/detail/lka_lane__struct.h"
#include "mobileye_560_660_msgs/msg/detail/lka_lane__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool mobileye_560_660_msgs__msg__lka_lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("mobileye_560_660_msgs.msg._lka_lane.LkaLane", full_classname_dest, 43) == 0);
  }
  mobileye_560_660_msgs__msg__LkaLane * ros_message = _ros_message;
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
  {  // lane_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->quality = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // model_degree
    PyObject * field = PyObject_GetAttrString(_pymsg, "model_degree");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->model_degree = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position_parameter_c0
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_parameter_c0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_parameter_c0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curvature_parameter_c2
    PyObject * field = PyObject_GetAttrString(_pymsg, "curvature_parameter_c2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curvature_parameter_c2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curvature_derivative_parameter_c3
    PyObject * field = PyObject_GetAttrString(_pymsg, "curvature_derivative_parameter_c3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curvature_derivative_parameter_c3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // marking_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "marking_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->marking_width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_angle_parameter_c1
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_angle_parameter_c1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_angle_parameter_c1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // view_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "view_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->view_range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // view_range_availability
    PyObject * field = PyObject_GetAttrString(_pymsg, "view_range_availability");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->view_range_availability = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mobileye_560_660_msgs__msg__lka_lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LkaLane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mobileye_560_660_msgs.msg._lka_lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LkaLane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mobileye_560_660_msgs__msg__LkaLane * ros_message = (mobileye_560_660_msgs__msg__LkaLane *)raw_ros_message;
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
  {  // lane_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // quality
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->quality);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quality", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // model_degree
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->model_degree);
    {
      int rc = PyObject_SetAttrString(_pymessage, "model_degree", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_parameter_c0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_parameter_c0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_parameter_c0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curvature_parameter_c2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curvature_parameter_c2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curvature_parameter_c2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curvature_derivative_parameter_c3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curvature_derivative_parameter_c3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curvature_derivative_parameter_c3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // marking_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->marking_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "marking_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_angle_parameter_c1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_angle_parameter_c1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_angle_parameter_c1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // view_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->view_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "view_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // view_range_availability
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->view_range_availability ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "view_range_availability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
