// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_mrr_msgs:msg/MrrHeaderInformationDetections.idl
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
#include "delphi_mrr_msgs/msg/detail/mrr_header_information_detections__struct.h"
#include "delphi_mrr_msgs/msg/detail/mrr_header_information_detections__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_mrr_msgs__msg__mrr_header_information_detections__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[86];
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
    assert(strncmp("delphi_mrr_msgs.msg._mrr_header_information_detections.MrrHeaderInformationDetections", full_classname_dest, 85) == 0);
  }
  delphi_mrr_msgs__msg__MrrHeaderInformationDetections * ros_message = _ros_message;
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
  {  // can_align_updates_done
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_align_updates_done");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_align_updates_done = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_scan_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_scan_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_scan_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_number_of_det
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_number_of_det");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_number_of_det = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_look_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_look_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_look_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // can_look_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_look_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->can_look_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_mrr_msgs__msg__mrr_header_information_detections__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MrrHeaderInformationDetections */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_mrr_msgs.msg._mrr_header_information_detections");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MrrHeaderInformationDetections");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_mrr_msgs__msg__MrrHeaderInformationDetections * ros_message = (delphi_mrr_msgs__msg__MrrHeaderInformationDetections *)raw_ros_message;
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
  {  // can_align_updates_done
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_align_updates_done);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_align_updates_done", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_scan_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_scan_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_scan_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_number_of_det
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_number_of_det);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_number_of_det", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_look_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_look_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_look_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_look_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->can_look_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_look_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
