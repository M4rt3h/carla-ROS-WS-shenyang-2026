// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from kartech_linear_actuator_msgs:msg/SoftwareRevisionRpt.idl
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
#include "kartech_linear_actuator_msgs/msg/detail/software_revision_rpt__struct.h"
#include "kartech_linear_actuator_msgs/msg/detail/software_revision_rpt__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool kartech_linear_actuator_msgs__msg__software_revision_rpt__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[76];
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
    assert(strncmp("kartech_linear_actuator_msgs.msg._software_revision_rpt.SoftwareRevisionRpt", full_classname_dest, 75) == 0);
  }
  kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt * ros_message = _ros_message;
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
  {  // software_version_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_version_0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->software_version_0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // software_version_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_version_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->software_version_1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // software_version_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_version_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->software_version_2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // software_day
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_day");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->software_day = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // software_month_year
    PyObject * field = PyObject_GetAttrString(_pymsg, "software_month_year");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->software_month_year = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * kartech_linear_actuator_msgs__msg__software_revision_rpt__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SoftwareRevisionRpt */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("kartech_linear_actuator_msgs.msg._software_revision_rpt");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SoftwareRevisionRpt");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt * ros_message = (kartech_linear_actuator_msgs__msg__SoftwareRevisionRpt *)raw_ros_message;
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
  {  // software_version_0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->software_version_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_version_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // software_version_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->software_version_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_version_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // software_version_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->software_version_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_version_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // software_day
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->software_day);
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_day", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // software_month_year
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->software_month_year);
    {
      int rc = PyObject_SetAttrString(_pymessage, "software_month_year", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
