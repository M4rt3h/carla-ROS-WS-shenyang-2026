// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ibeo_msgs:msg/ScannerInfo2205.idl
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
#include "ibeo_msgs/msg/detail/scanner_info2205__struct.h"
#include "ibeo_msgs/msg/detail/scanner_info2205__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ibeo_msgs/msg/detail/resolution_info__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__mounting_position_f__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__mounting_position_f__convert_to_py(void * raw_ros_message);
bool ibeo_msgs__msg__resolution_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ibeo_msgs__msg__resolution_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ibeo_msgs__msg__scanner_info2205__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("ibeo_msgs.msg._scanner_info2205.ScannerInfo2205", full_classname_dest, 47) == 0);
  }
  ibeo_msgs__msg__ScannerInfo2205 * ros_message = _ros_message;
  {  // device_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "device_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->device_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // scanner_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "scanner_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scanner_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // scan_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scan_number = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // start_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->start_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // end_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->end_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scan_start_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_start_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->scan_start_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scan_end_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_end_time");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->scan_end_time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scan_start_time_from_device
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_start_time_from_device");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->scan_start_time_from_device)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scan_end_time_from_device
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_end_time_from_device");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->scan_end_time_from_device)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scan_frequency
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_frequency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->scan_frequency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // beam_tilt
    PyObject * field = PyObject_GetAttrString(_pymsg, "beam_tilt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->beam_tilt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // scan_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_flags");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scan_flags = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mounting_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "mounting_position");
    if (!field) {
      return false;
    }
    if (!ibeo_msgs__msg__mounting_position_f__convert_from_py(field, &ros_message->mounting_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // resolutions
    PyObject * field = PyObject_GetAttrString(_pymsg, "resolutions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'resolutions'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 8;
    ibeo_msgs__msg__ResolutionInfo * dest = ros_message->resolutions;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ibeo_msgs__msg__resolution_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ibeo_msgs__msg__scanner_info2205__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ScannerInfo2205 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ibeo_msgs.msg._scanner_info2205");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ScannerInfo2205");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ibeo_msgs__msg__ScannerInfo2205 * ros_message = (ibeo_msgs__msg__ScannerInfo2205 *)raw_ros_message;
  {  // device_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->device_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "device_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scanner_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scanner_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scanner_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scan_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->start_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->end_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_start_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->scan_start_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_start_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_end_time
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->scan_end_time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_end_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_start_time_from_device
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->scan_start_time_from_device);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_start_time_from_device", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_end_time_from_device
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->scan_end_time_from_device);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_end_time_from_device", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_frequency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->scan_frequency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_frequency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // beam_tilt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->beam_tilt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "beam_tilt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_flags
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scan_flags);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_flags", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mounting_position
    PyObject * field = NULL;
    field = ibeo_msgs__msg__mounting_position_f__convert_to_py(&ros_message->mounting_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mounting_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // resolutions
    PyObject * field = NULL;
    size_t size = 8;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ibeo_msgs__msg__ResolutionInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->resolutions[i]);
      PyObject * pyitem = ibeo_msgs__msg__resolution_info__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "resolutions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
