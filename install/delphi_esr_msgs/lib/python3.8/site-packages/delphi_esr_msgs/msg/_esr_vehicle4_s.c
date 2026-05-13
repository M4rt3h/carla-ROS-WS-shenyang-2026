// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrVehicle4.idl
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
#include "delphi_esr_msgs/msg/detail/esr_vehicle4__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle4__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_vehicle4__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("delphi_esr_msgs.msg._esr_vehicle4.EsrVehicle4", full_classname_dest, 45) == 0);
  }
  delphi_esr_msgs__msg__EsrVehicle4 * ros_message = _ros_message;
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
  {  // fac_align_cmd_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "fac_align_cmd_1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fac_align_cmd_1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fac_align_cmd_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "fac_align_cmd_2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->fac_align_cmd_2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // fac_align_max_nt
    PyObject * field = PyObject_GetAttrString(_pymsg, "fac_align_max_nt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fac_align_max_nt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fac_align_samp_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "fac_align_samp_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fac_align_samp_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fac_tgt_mtg_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "fac_tgt_mtg_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fac_tgt_mtg_offset = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fac_tgt_mtg_space_hor
    PyObject * field = PyObject_GetAttrString(_pymsg, "fac_tgt_mtg_space_hor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fac_tgt_mtg_space_hor = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fac_tgt_mtg_space_ver
    PyObject * field = PyObject_GetAttrString(_pymsg, "fac_tgt_mtg_space_ver");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fac_tgt_mtg_space_ver = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // fac_tgt_range_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "fac_tgt_range_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fac_tgt_range_1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fac_tgt_range_r2m
    PyObject * field = PyObject_GetAttrString(_pymsg, "fac_tgt_range_r2m");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fac_tgt_range_r2m = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fac_tgt_range_m2t
    PyObject * field = PyObject_GetAttrString(_pymsg, "fac_tgt_range_m2t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fac_tgt_range_m2t = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_vehicle4__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrVehicle4 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_vehicle4");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrVehicle4");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrVehicle4 * ros_message = (delphi_esr_msgs__msg__EsrVehicle4 *)raw_ros_message;
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
  {  // fac_align_cmd_1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fac_align_cmd_1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fac_align_cmd_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fac_align_cmd_2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->fac_align_cmd_2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fac_align_cmd_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fac_align_max_nt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fac_align_max_nt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fac_align_max_nt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fac_align_samp_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fac_align_samp_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fac_align_samp_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fac_tgt_mtg_offset
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fac_tgt_mtg_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fac_tgt_mtg_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fac_tgt_mtg_space_hor
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fac_tgt_mtg_space_hor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fac_tgt_mtg_space_hor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fac_tgt_mtg_space_ver
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->fac_tgt_mtg_space_ver);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fac_tgt_mtg_space_ver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fac_tgt_range_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fac_tgt_range_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fac_tgt_range_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fac_tgt_range_r2m
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fac_tgt_range_r2m);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fac_tgt_range_r2m", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fac_tgt_range_m2t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fac_tgt_range_m2t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fac_tgt_range_m2t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
