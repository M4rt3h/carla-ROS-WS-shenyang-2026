// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrStatus2.idl
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
#include "delphi_esr_msgs/msg/detail/esr_status2__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_status2__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_status2__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("delphi_esr_msgs.msg._esr_status2.EsrStatus2", full_classname_dest, 43) == 0);
  }
  delphi_esr_msgs__msg__EsrStatus2 * ros_message = _ros_message;
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
  {  // maximum_tracks_ack
    PyObject * field = PyObject_GetAttrString(_pymsg, "maximum_tracks_ack");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maximum_tracks_ack = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rolling_count_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "rolling_count_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rolling_count_2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // overheat_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "overheat_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->overheat_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // range_perf_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "range_perf_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->range_perf_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // internal_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "internal_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->internal_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // xcvr_operational
    PyObject * field = PyObject_GetAttrString(_pymsg, "xcvr_operational");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->xcvr_operational = (Py_True == field);
    Py_DECREF(field);
  }
  {  // raw_data_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw_data_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->raw_data_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steering_angle_ack
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_angle_ack");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steering_angle_ack = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->temperature = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // veh_spd_comp_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_spd_comp_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_spd_comp_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // grouping_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "grouping_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->grouping_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // yaw_rate_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate_bias");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate_bias = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sw_version_dsp
    PyObject * field = PyObject_GetAttrString(_pymsg, "sw_version_dsp");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->sw_version_dsp, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_status2__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrStatus2 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_status2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrStatus2");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrStatus2 * ros_message = (delphi_esr_msgs__msg__EsrStatus2 *)raw_ros_message;
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
  {  // maximum_tracks_ack
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->maximum_tracks_ack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maximum_tracks_ack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rolling_count_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rolling_count_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rolling_count_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overheat_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->overheat_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overheat_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range_perf_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->range_perf_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range_perf_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // internal_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->internal_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "internal_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xcvr_operational
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->xcvr_operational ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xcvr_operational", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raw_data_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->raw_data_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "raw_data_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_angle_ack
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steering_angle_ack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_angle_ack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_spd_comp_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_spd_comp_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_spd_comp_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grouping_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->grouping_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "grouping_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate_bias
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate_bias);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate_bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sw_version_dsp
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->sw_version_dsp.data,
      strlen(ros_message->sw_version_dsp.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sw_version_dsp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
