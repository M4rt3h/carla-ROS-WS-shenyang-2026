// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrStatus6.idl
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
#include "delphi_esr_msgs/msg/detail/esr_status6__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_status6__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_status6__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("delphi_esr_msgs.msg._esr_status6.EsrStatus6", full_classname_dest, 43) == 0);
  }
  delphi_esr_msgs__msg__EsrStatus6 * ros_message = _ros_message;
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
  {  // supply_1p8v_a2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_1p8v_a2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_1p8v_a2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // supply_n5v_a2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_n5v_a2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->supply_n5v_a2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wave_diff_a2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "wave_diff_a2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wave_diff_a2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sw_version_dsp_3rd_byte
    PyObject * field = PyObject_GetAttrString(_pymsg, "sw_version_dsp_3rd_byte");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sw_version_dsp_3rd_byte = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vertical_align_updated
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_align_updated");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vertical_align_updated = (Py_True == field);
    Py_DECREF(field);
  }
  {  // system_power_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_power_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_power_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // found_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "found_target");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->found_target = (Py_True == field);
    Py_DECREF(field);
  }
  {  // recommend_unconverge
    PyObject * field = PyObject_GetAttrString(_pymsg, "recommend_unconverge");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->recommend_unconverge = (Py_True == field);
    Py_DECREF(field);
  }
  {  // factory_align_status_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "factory_align_status_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->factory_align_status_1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // factory_align_status_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "factory_align_status_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->factory_align_status_2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // factory_misalignment
    PyObject * field = PyObject_GetAttrString(_pymsg, "factory_misalignment");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->factory_misalignment = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // serv_align_updates_done
    PyObject * field = PyObject_GetAttrString(_pymsg, "serv_align_updates_done");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->serv_align_updates_done = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vertical_misalignment
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_misalignment");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_misalignment = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_status6__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrStatus6 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_status6");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrStatus6");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrStatus6 * ros_message = (delphi_esr_msgs__msg__EsrStatus6 *)raw_ros_message;
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
  {  // supply_1p8v_a2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_1p8v_a2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_1p8v_a2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_n5v_a2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->supply_n5v_a2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_n5v_a2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wave_diff_a2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wave_diff_a2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wave_diff_a2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sw_version_dsp_3rd_byte
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sw_version_dsp_3rd_byte);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sw_version_dsp_3rd_byte", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_align_updated
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vertical_align_updated ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_align_updated", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_power_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_power_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_power_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // found_target
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->found_target ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "found_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // recommend_unconverge
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->recommend_unconverge ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "recommend_unconverge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // factory_align_status_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->factory_align_status_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "factory_align_status_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // factory_align_status_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->factory_align_status_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "factory_align_status_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // factory_misalignment
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->factory_misalignment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "factory_misalignment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // serv_align_updates_done
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->serv_align_updates_done);
    {
      int rc = PyObject_SetAttrString(_pymessage, "serv_align_updates_done", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_misalignment
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_misalignment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_misalignment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
