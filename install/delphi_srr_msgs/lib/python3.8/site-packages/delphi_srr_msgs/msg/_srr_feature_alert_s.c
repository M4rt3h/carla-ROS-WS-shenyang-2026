// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_srr_msgs:msg/SrrFeatureAlert.idl
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
#include "delphi_srr_msgs/msg/detail/srr_feature_alert__struct.h"
#include "delphi_srr_msgs/msg/detail/srr_feature_alert__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_srr_msgs__msg__srr_feature_alert__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("delphi_srr_msgs.msg._srr_feature_alert.SrrFeatureAlert", full_classname_dest, 54) == 0);
  }
  delphi_srr_msgs__msg__SrrFeatureAlert * ros_message = _ros_message;
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
  {  // lcma_blis_ignored_track_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lcma_blis_ignored_track_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lcma_blis_ignored_track_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lcma_blis_track_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lcma_blis_track_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lcma_blis_track_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lcma_cvw_ttc
    PyObject * field = PyObject_GetAttrString(_pymsg, "lcma_cvw_ttc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lcma_cvw_ttc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cta_ttc_alert
    PyObject * field = PyObject_GetAttrString(_pymsg, "cta_ttc_alert");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cta_ttc_alert = (Py_True == field);
    Py_DECREF(field);
  }
  {  // cta_selected_track_ttc
    PyObject * field = PyObject_GetAttrString(_pymsg, "cta_selected_track_ttc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cta_selected_track_ttc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cta_selected_track
    PyObject * field = PyObject_GetAttrString(_pymsg, "cta_selected_track");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cta_selected_track = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cta_alert
    PyObject * field = PyObject_GetAttrString(_pymsg, "cta_alert");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cta_alert = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cta_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "cta_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->cta_active = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lcma_cvw_cipv
    PyObject * field = PyObject_GetAttrString(_pymsg, "lcma_cvw_cipv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lcma_cvw_cipv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lcma_cvw_alert_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "lcma_cvw_alert_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lcma_cvw_alert_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lcma_blis_alert_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "lcma_blis_alert_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lcma_blis_alert_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lcma_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "lcma_active");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lcma_active = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_srr_msgs__msg__srr_feature_alert__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SrrFeatureAlert */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_srr_msgs.msg._srr_feature_alert");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SrrFeatureAlert");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_srr_msgs__msg__SrrFeatureAlert * ros_message = (delphi_srr_msgs__msg__SrrFeatureAlert *)raw_ros_message;
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
  {  // lcma_blis_ignored_track_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lcma_blis_ignored_track_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lcma_blis_ignored_track_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lcma_blis_track_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lcma_blis_track_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lcma_blis_track_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lcma_cvw_ttc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lcma_cvw_ttc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lcma_cvw_ttc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cta_ttc_alert
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cta_ttc_alert ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cta_ttc_alert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cta_selected_track_ttc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cta_selected_track_ttc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cta_selected_track_ttc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cta_selected_track
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cta_selected_track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cta_selected_track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cta_alert
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cta_alert);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cta_alert", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cta_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->cta_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cta_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lcma_cvw_cipv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lcma_cvw_cipv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lcma_cvw_cipv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lcma_cvw_alert_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lcma_cvw_alert_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lcma_cvw_alert_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lcma_blis_alert_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lcma_blis_alert_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lcma_blis_alert_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lcma_active
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lcma_active ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lcma_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
