// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrStatus8.idl
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
#include "delphi_esr_msgs/msg/detail/esr_status8__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_status8__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_status8__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("delphi_esr_msgs.msg._esr_status8.EsrStatus8", full_classname_dest, 43) == 0);
  }
  delphi_esr_msgs__msg__EsrStatus8 * ros_message = _ros_message;
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
  {  // canmsg
    PyObject * field = PyObject_GetAttrString(_pymsg, "canmsg");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->canmsg, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // history_fault_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "history_fault_0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->history_fault_0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // history_fault_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "history_fault_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->history_fault_1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // history_fault_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "history_fault_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->history_fault_2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // history_fault_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "history_fault_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->history_fault_3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // history_fault_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "history_fault_4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->history_fault_4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // history_fault_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "history_fault_5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->history_fault_5 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // history_fault_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "history_fault_6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->history_fault_6 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // history_fault_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "history_fault_7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->history_fault_7 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_status8__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrStatus8 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_status8");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrStatus8");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrStatus8 * ros_message = (delphi_esr_msgs__msg__EsrStatus8 *)raw_ros_message;
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
  {  // canmsg
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->canmsg.data,
      strlen(ros_message->canmsg.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "canmsg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // history_fault_0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->history_fault_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "history_fault_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // history_fault_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->history_fault_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "history_fault_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // history_fault_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->history_fault_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "history_fault_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // history_fault_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->history_fault_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "history_fault_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // history_fault_4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->history_fault_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "history_fault_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // history_fault_5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->history_fault_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "history_fault_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // history_fault_6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->history_fault_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "history_fault_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // history_fault_7
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->history_fault_7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "history_fault_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
