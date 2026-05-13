// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from derived_object_msgs:msg/Lane.idl
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
#include "derived_object_msgs/msg/detail/lane__struct.h"
#include "derived_object_msgs/msg/detail/lane__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool derived_object_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("derived_object_msgs.msg._lane.Lane", full_classname_dest, 34) == 0);
  }
  derived_object_msgs__msg__Lane * ros_message = _ros_message;
  {  // quality
    PyObject * field = PyObject_GetAttrString(_pymsg, "quality");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->quality = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // marker_kind
    PyObject * field = PyObject_GetAttrString(_pymsg, "marker_kind");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->marker_kind = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // curve_model_kind
    PyObject * field = PyObject_GetAttrString(_pymsg, "curve_model_kind");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->curve_model_kind = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // marker_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "marker_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->marker_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curvature
    PyObject * field = PyObject_GetAttrString(_pymsg, "curvature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curvature = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curvature_derivative
    PyObject * field = PyObject_GetAttrString(_pymsg, "curvature_derivative");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curvature_derivative = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // marker_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "marker_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->marker_width = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // view_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "view_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->view_range = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * derived_object_msgs__msg__lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Lane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("derived_object_msgs.msg._lane");
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
  derived_object_msgs__msg__Lane * ros_message = (derived_object_msgs__msg__Lane *)raw_ros_message;
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
  {  // marker_kind
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->marker_kind);
    {
      int rc = PyObject_SetAttrString(_pymessage, "marker_kind", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curve_model_kind
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->curve_model_kind);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curve_model_kind", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // marker_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->marker_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "marker_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curvature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curvature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curvature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curvature_derivative
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curvature_derivative);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curvature_derivative", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // marker_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->marker_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "marker_width", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
