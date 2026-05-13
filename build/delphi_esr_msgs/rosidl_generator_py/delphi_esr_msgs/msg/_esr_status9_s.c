// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrStatus9.idl
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
#include "delphi_esr_msgs/msg/detail/esr_status9__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_status9__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_status9__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("delphi_esr_msgs.msg._esr_status9.EsrStatus9", full_classname_dest, 43) == 0);
  }
  delphi_esr_msgs__msg__EsrStatus9 * ros_message = _ros_message;
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
  {  // avg_pwr_cwblkg
    PyObject * field = PyObject_GetAttrString(_pymsg, "avg_pwr_cwblkg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->avg_pwr_cwblkg = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sideslip_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "sideslip_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sideslip_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // serial_num_3rd_byte
    PyObject * field = PyObject_GetAttrString(_pymsg, "serial_num_3rd_byte");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->serial_num_3rd_byte = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // water_spray_target_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "water_spray_target_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->water_spray_target_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // filtered_xohp_acc_cipv
    PyObject * field = PyObject_GetAttrString(_pymsg, "filtered_xohp_acc_cipv");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->filtered_xohp_acc_cipv = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // path_id_acc_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_id_acc_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->path_id_acc_2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // path_id_acc_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_id_acc_3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->path_id_acc_3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_status9__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrStatus9 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_status9");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrStatus9");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrStatus9 * ros_message = (delphi_esr_msgs__msg__EsrStatus9 *)raw_ros_message;
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
  {  // avg_pwr_cwblkg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->avg_pwr_cwblkg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avg_pwr_cwblkg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sideslip_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sideslip_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sideslip_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serial_num_3rd_byte
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->serial_num_3rd_byte);
    {
      int rc = PyObject_SetAttrString(_pymessage, "serial_num_3rd_byte", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // water_spray_target_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->water_spray_target_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "water_spray_target_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // filtered_xohp_acc_cipv
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->filtered_xohp_acc_cipv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "filtered_xohp_acc_cipv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_id_acc_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->path_id_acc_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_id_acc_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_id_acc_3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->path_id_acc_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_id_acc_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
