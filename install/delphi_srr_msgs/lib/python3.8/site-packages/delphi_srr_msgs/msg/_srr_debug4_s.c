// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_srr_msgs:msg/SrrDebug4.idl
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
#include "delphi_srr_msgs/msg/detail/srr_debug4__struct.h"
#include "delphi_srr_msgs/msg/detail/srr_debug4__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_srr_msgs__msg__srr_debug4__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("delphi_srr_msgs.msg._srr_debug4.SrrDebug4", full_classname_dest, 41) == 0);
  }
  delphi_srr_msgs__msg__SrrDebug4 * ros_message = _ros_message;
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
  {  // timer_create_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "timer_create_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->timer_create_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // thread_create_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "thread_create_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->thread_create_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arm_calibration_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_calibration_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arm_calibration_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // spi_fee_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "spi_fee_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->spi_fee_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // spi_comm_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "spi_comm_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->spi_comm_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // socket_write_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "socket_write_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->socket_write_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_cal_obsolete_62_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_cal_obsolete_62_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_cal_obsolete_62_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // socket_read_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "socket_read_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->socket_read_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // socket_init_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "socket_init_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->socket_init_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // signal_wait_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_wait_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->signal_wait_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // signal_send_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_send_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->signal_send_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // signal_create_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_create_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->signal_create_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // shared_mem_write_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "shared_mem_write_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->shared_mem_write_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // shared_mem_read_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "shared_mem_read_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->shared_mem_read_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // shared_mem_config_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "shared_mem_config_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->shared_mem_config_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // share_mem_init_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "share_mem_init_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->share_mem_init_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ram_test_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "ram_test_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ram_test_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // num_errors
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_errors");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->num_errors = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mmap_memory_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "mmap_memory_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mmap_memory_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // isr_attach_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "isr_attach_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->isr_attach_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ipc_drv_write_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipc_drv_write_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ipc_drv_write_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ipc_drv_trigger_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipc_drv_trigger_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ipc_drv_trigger_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ipc_drv_sync_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipc_drv_sync_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ipc_drv_sync_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ipc_drv_read_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipc_drv_read_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ipc_drv_read_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ipc_drv_init_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "ipc_drv_init_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ipc_drv_init_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // interrupt_enable_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "interrupt_enable_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->interrupt_enable_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hil_format_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "hil_format_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hil_format_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flash_filesystem_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "flash_filesystem_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flash_filesystem_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // error_none
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_none");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->error_none = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_load_read_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_load_read_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_load_read_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_load_open_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_load_open_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_load_open_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_load_address_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_load_address_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_load_address_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_isp_write_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_isp_write_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_isp_write_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_ipc_read_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_ipc_read_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_ipc_read_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_ipc_init
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_ipc_init");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_ipc_init = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_init_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_init_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_init_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_drv_start_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_drv_start_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_drv_start_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_drv_load_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_drv_load_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_drv_load_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_drv_init_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_drv_init_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_drv_init_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_drv_init2_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_drv_init2_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_drv_init2_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_drv_init1_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_drv_init1_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_drv_init1_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_calibration_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_calibration_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_calibration_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_xmt_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_xmt_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_xmt_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_rcv_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_rcv_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_rcv_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // can_hardware_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_hardware_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->can_hardware_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // always_true
    PyObject * field = PyObject_GetAttrString(_pymsg, "always_true");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->always_true = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_srr_msgs__msg__srr_debug4__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SrrDebug4 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_srr_msgs.msg._srr_debug4");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SrrDebug4");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_srr_msgs__msg__SrrDebug4 * ros_message = (delphi_srr_msgs__msg__SrrDebug4 *)raw_ros_message;
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
  {  // timer_create_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->timer_create_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timer_create_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thread_create_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->thread_create_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thread_create_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_calibration_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arm_calibration_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_calibration_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spi_fee_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->spi_fee_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spi_fee_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spi_comm_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->spi_comm_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spi_comm_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // socket_write_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->socket_write_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "socket_write_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_cal_obsolete_62_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_cal_obsolete_62_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_cal_obsolete_62_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // socket_read_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->socket_read_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "socket_read_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // socket_init_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->socket_init_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "socket_init_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_wait_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->signal_wait_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_wait_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_send_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->signal_send_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_send_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_create_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->signal_create_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "signal_create_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shared_mem_write_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->shared_mem_write_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shared_mem_write_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shared_mem_read_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->shared_mem_read_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shared_mem_read_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shared_mem_config_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->shared_mem_config_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shared_mem_config_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // share_mem_init_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->share_mem_init_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "share_mem_init_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ram_test_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ram_test_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ram_test_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_errors
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->num_errors ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_errors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mmap_memory_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mmap_memory_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mmap_memory_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isr_attach_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->isr_attach_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isr_attach_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipc_drv_write_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ipc_drv_write_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipc_drv_write_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipc_drv_trigger_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ipc_drv_trigger_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipc_drv_trigger_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipc_drv_sync_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ipc_drv_sync_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipc_drv_sync_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipc_drv_read_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ipc_drv_read_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipc_drv_read_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ipc_drv_init_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ipc_drv_init_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ipc_drv_init_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // interrupt_enable_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->interrupt_enable_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "interrupt_enable_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hil_format_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hil_format_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hil_format_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flash_filesystem_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flash_filesystem_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flash_filesystem_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_none
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->error_none ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_none", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_load_read_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_load_read_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_load_read_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_load_open_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_load_open_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_load_open_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_load_address_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_load_address_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_load_address_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_isp_write_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_isp_write_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_isp_write_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_ipc_read_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_ipc_read_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_ipc_read_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_ipc_init
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_ipc_init ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_ipc_init", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_init_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_init_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_init_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_drv_start_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_drv_start_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_drv_start_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_drv_load_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_drv_load_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_drv_load_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_drv_init_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_drv_init_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_drv_init_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_drv_init2_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_drv_init2_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_drv_init2_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_drv_init1_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_drv_init1_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_drv_init1_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_calibration_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_calibration_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_calibration_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_xmt_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_xmt_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_xmt_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_rcv_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_rcv_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_rcv_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_hardware_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->can_hardware_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_hardware_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // always_true
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->always_true ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "always_true", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
