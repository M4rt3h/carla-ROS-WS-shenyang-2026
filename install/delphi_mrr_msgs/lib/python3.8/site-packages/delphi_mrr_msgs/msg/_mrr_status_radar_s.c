// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_mrr_msgs:msg/MrrStatusRadar.idl
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
#include "delphi_mrr_msgs/msg/detail/mrr_status_radar__struct.h"
#include "delphi_mrr_msgs/msg/detail/mrr_status_radar__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_mrr_msgs__msg__mrr_status_radar__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("delphi_mrr_msgs.msg._mrr_status_radar.MrrStatusRadar", full_classname_dest, 52) == 0);
  }
  delphi_mrr_msgs__msg__MrrStatusRadar * ros_message = _ros_message;
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
  {  // can_interference_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_interference_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_interference_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_recommend_unconverge
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_recommend_unconverge");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_recommend_unconverge = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_blockage_sidelobe_filter_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_blockage_sidelobe_filter_val");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_blockage_sidelobe_filter_val = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_radar_align_incomplete
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_align_incomplete");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_radar_align_incomplete = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_blockage_sidelobe
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_blockage_sidelobe");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_blockage_sidelobe = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_blockage_mnr
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_blockage_mnr");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_blockage_mnr = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_radar_ext_cond_nok
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_ext_cond_nok");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_radar_ext_cond_nok = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_radar_align_out_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_align_out_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_radar_align_out_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_radar_align_not_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_align_not_start");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_radar_align_not_start = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_radar_overheat_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_overheat_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_radar_overheat_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_radar_not_op
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_not_op");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_radar_not_op = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_xcvr_operational
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_xcvr_operational");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_xcvr_operational = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_mrr_msgs__msg__mrr_status_radar__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MrrStatusRadar */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_mrr_msgs.msg._mrr_status_radar");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MrrStatusRadar");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_mrr_msgs__msg__MrrStatusRadar * ros_message = (delphi_mrr_msgs__msg__MrrStatusRadar *)raw_ros_message;
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
  {  // can_interference_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_interference_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_interference_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_recommend_unconverge
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_recommend_unconverge ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_recommend_unconverge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_blockage_sidelobe_filter_val
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_blockage_sidelobe_filter_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_blockage_sidelobe_filter_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_align_incomplete
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_radar_align_incomplete ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_align_incomplete", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_blockage_sidelobe
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_blockage_sidelobe ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_blockage_sidelobe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_blockage_mnr
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_blockage_mnr ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_blockage_mnr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_ext_cond_nok
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_radar_ext_cond_nok ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_ext_cond_nok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_align_out_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_radar_align_out_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_align_out_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_align_not_start
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_radar_align_not_start ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_align_not_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_overheat_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_radar_overheat_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_overheat_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_not_op
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_radar_not_op ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_not_op", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_xcvr_operational
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_xcvr_operational ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_xcvr_operational", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
