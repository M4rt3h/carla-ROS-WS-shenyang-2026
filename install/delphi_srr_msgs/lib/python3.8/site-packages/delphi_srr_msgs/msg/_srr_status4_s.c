// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_srr_msgs:msg/SrrStatus4.idl
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
#include "delphi_srr_msgs/msg/detail/srr_status4__struct.h"
#include "delphi_srr_msgs/msg/detail/srr_status4__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_srr_msgs__msg__srr_status4__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("delphi_srr_msgs.msg._srr_status4.SrrStatus4", full_classname_dest, 43) == 0);
  }
  delphi_srr_msgs__msg__SrrStatus4 * ros_message = _ros_message;
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
  {  // can_tx_sw_version_host
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_sw_version_host");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_sw_version_host = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_path_id_blis_ignore
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_path_id_blis_ignore");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_path_id_blis_ignore = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_path_id_blis
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_path_id_blis");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_path_id_blis = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_angle_misalignment
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_angle_misalignment");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_tx_angle_misalignment = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_tx_auto_align_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_auto_align_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_tx_auto_align_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_srr_msgs__msg__srr_status4__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SrrStatus4 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_srr_msgs.msg._srr_status4");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SrrStatus4");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_srr_msgs__msg__SrrStatus4 * ros_message = (delphi_srr_msgs__msg__SrrStatus4 *)raw_ros_message;
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
  {  // can_tx_sw_version_host
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_sw_version_host);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_sw_version_host", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_path_id_blis_ignore
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_path_id_blis_ignore);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_path_id_blis_ignore", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_path_id_blis
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_path_id_blis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_path_id_blis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_angle_misalignment
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_tx_angle_misalignment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_angle_misalignment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_auto_align_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_tx_auto_align_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_auto_align_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
