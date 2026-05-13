// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrEthTx.idl
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
#include "delphi_esr_msgs/msg/detail/esr_eth_tx__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_eth_tx__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_eth_tx__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("delphi_esr_msgs.msg._esr_eth_tx.EsrEthTx", full_classname_dest, 40) == 0);
  }
  delphi_esr_msgs__msg__EsrEthTx * ros_message = _ros_message;
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
  {  // xcp_format_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "xcp_format_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->xcp_format_version = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // scan_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scan_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tcp_size
    PyObject * field = PyObject_GetAttrString(_pymsg, "tcp_size");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tcp_size = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // xcp_scan_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "xcp_scan_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->xcp_scan_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // look_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "look_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->look_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mmr_scan_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "mmr_scan_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mmr_scan_index = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_report_host_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_report_host_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_report_host_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_report_host_yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_report_host_yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_report_host_yaw_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // xcp_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "xcp_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->xcp_timestamp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // release_revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "release_revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->release_revision = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // promote_revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "promote_revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->promote_revision = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // field_revision
    PyObject * field = PyObject_GetAttrString(_pymsg, "field_revision");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->field_revision = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_report_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_report_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_report_count = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // target_report_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_report_range");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 64;
      float * dest = ros_message->target_report_range;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // target_report_range_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_report_range_rate");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 64;
      float * dest = ros_message->target_report_range_rate;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // target_report_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_report_theta");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 64;
      float * dest = ros_message->target_report_theta;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // target_report_amplitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_report_amplitude");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 64;
      float * dest = ros_message->target_report_amplitude;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_eth_tx__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrEthTx */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_eth_tx");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrEthTx");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrEthTx * ros_message = (delphi_esr_msgs__msg__EsrEthTx *)raw_ros_message;
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
  {  // xcp_format_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->xcp_format_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xcp_format_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scan_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scan_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tcp_size
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tcp_size);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tcp_size", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xcp_scan_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->xcp_scan_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xcp_scan_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // look_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->look_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "look_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mmr_scan_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mmr_scan_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mmr_scan_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_report_host_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_report_host_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_report_host_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_report_host_yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_report_host_yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_report_host_yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xcp_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->xcp_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xcp_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // release_revision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->release_revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "release_revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // promote_revision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->promote_revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "promote_revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // field_revision
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->field_revision);
    {
      int rc = PyObject_SetAttrString(_pymessage, "field_revision", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_report_count
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->target_report_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_report_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_report_range
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "target_report_range");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->target_report_range[0]);
    memcpy(dst, src, 64 * sizeof(float));
    Py_DECREF(field);
  }
  {  // target_report_range_rate
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "target_report_range_rate");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->target_report_range_rate[0]);
    memcpy(dst, src, 64 * sizeof(float));
    Py_DECREF(field);
  }
  {  // target_report_theta
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "target_report_theta");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->target_report_theta[0]);
    memcpy(dst, src, 64 * sizeof(float));
    Py_DECREF(field);
  }
  {  // target_report_amplitude
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "target_report_amplitude");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->target_report_amplitude[0]);
    memcpy(dst, src, 64 * sizeof(float));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
