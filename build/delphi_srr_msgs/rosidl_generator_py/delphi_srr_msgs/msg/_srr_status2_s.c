// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_srr_msgs:msg/SrrStatus2.idl
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
#include "delphi_srr_msgs/msg/detail/srr_status2__struct.h"
#include "delphi_srr_msgs/msg/detail/srr_status2__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_srr_msgs__msg__srr_status2__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("delphi_srr_msgs.msg._srr_status2.SrrStatus2", full_classname_dest, 43) == 0);
  }
  delphi_srr_msgs__msg__SrrStatus2 * ros_message = _ros_message;
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
  {  // can_tx_alignment_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_alignment_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_alignment_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_comm_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_comm_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_tx_comm_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_tx_steering_angle_sign
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_steering_angle_sign");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_tx_steering_angle_sign = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_tx_yaw_rate_bias
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_yaw_rate_bias");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_tx_yaw_rate_bias = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_tx_veh_spd_comp_factor
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_veh_spd_comp_factor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_tx_veh_spd_comp_factor = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_tx_sw_version_dsp
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_sw_version_dsp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_sw_version_dsp = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_temperature
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_temperature");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_temperature = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_range_perf_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_range_perf_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_tx_range_perf_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_tx_overheat_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_overheat_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_tx_overheat_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_tx_internal_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_internal_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_tx_internal_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_tx_xcvr_operational
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_xcvr_operational");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_tx_xcvr_operational = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_tx_steering_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_steering_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_steering_angle = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_tx_rolling_count_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_tx_rolling_count_2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_tx_rolling_count_2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_srr_msgs__msg__srr_status2__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SrrStatus2 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_srr_msgs.msg._srr_status2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SrrStatus2");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_srr_msgs__msg__SrrStatus2 * ros_message = (delphi_srr_msgs__msg__SrrStatus2 *)raw_ros_message;
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
  {  // can_tx_alignment_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_alignment_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_alignment_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_comm_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_tx_comm_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_comm_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_steering_angle_sign
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_tx_steering_angle_sign ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_steering_angle_sign", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_yaw_rate_bias
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_tx_yaw_rate_bias);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_yaw_rate_bias", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_veh_spd_comp_factor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_tx_veh_spd_comp_factor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_veh_spd_comp_factor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_sw_version_dsp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_sw_version_dsp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_sw_version_dsp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_temperature
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->can_tx_temperature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_temperature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_range_perf_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_tx_range_perf_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_range_perf_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_overheat_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_tx_overheat_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_overheat_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_internal_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_tx_internal_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_internal_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_xcvr_operational
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_tx_xcvr_operational ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_xcvr_operational", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_steering_angle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_steering_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_steering_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_tx_rolling_count_2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_tx_rolling_count_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_tx_rolling_count_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
