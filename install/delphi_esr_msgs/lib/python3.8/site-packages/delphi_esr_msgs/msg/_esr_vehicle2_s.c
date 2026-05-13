// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_esr_msgs:msg/EsrVehicle2.idl
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
#include "delphi_esr_msgs/msg/detail/esr_vehicle2__struct.h"
#include "delphi_esr_msgs/msg/detail/esr_vehicle2__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_esr_msgs__msg__esr_vehicle2__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("delphi_esr_msgs.msg._esr_vehicle2.EsrVehicle2", full_classname_dest, 45) == 0);
  }
  delphi_esr_msgs__msg__EsrVehicle2 * ros_message = _ros_message;
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
  {  // scan_index_ack
    PyObject * field = PyObject_GetAttrString(_pymsg, "scan_index_ack");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scan_index_ack = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_angle_misalignment
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_angle_misalignment");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_angle_misalignment = (Py_True == field);
    Py_DECREF(field);
  }
  {  // clear_faults
    PyObject * field = PyObject_GetAttrString(_pymsg, "clear_faults");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->clear_faults = (Py_True == field);
    Py_DECREF(field);
  }
  {  // high_yaw_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "high_yaw_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->high_yaw_angle = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mr_only_transmit
    PyObject * field = PyObject_GetAttrString(_pymsg, "mr_only_transmit");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mr_only_transmit = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lr_only_transmit
    PyObject * field = PyObject_GetAttrString(_pymsg, "lr_only_transmit");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lr_only_transmit = (Py_True == field);
    Py_DECREF(field);
  }
  {  // angle_misalignment
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_misalignment");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_misalignment = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lateral_mounting_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_mounting_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lateral_mounting_offset = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // radar_cmd_radiate
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_cmd_radiate");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->radar_cmd_radiate = (Py_True == field);
    Py_DECREF(field);
  }
  {  // blockage_disable
    PyObject * field = PyObject_GetAttrString(_pymsg, "blockage_disable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blockage_disable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // maximum_tracks
    PyObject * field = PyObject_GetAttrString(_pymsg, "maximum_tracks");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maximum_tracks = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // turn_signal_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_signal_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_signal_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_speed_validity
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_speed_validity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vehicle_speed_validity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mmr_upside_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "mmr_upside_down");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mmr_upside_down = (Py_True == field);
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
  {  // wiper_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "wiper_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wiper_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // raw_data_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw_data_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->raw_data_enable = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_esr_msgs__msg__esr_vehicle2__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EsrVehicle2 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_esr_msgs.msg._esr_vehicle2");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EsrVehicle2");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_esr_msgs__msg__EsrVehicle2 * ros_message = (delphi_esr_msgs__msg__EsrVehicle2 *)raw_ros_message;
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
  {  // scan_index_ack
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scan_index_ack);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scan_index_ack", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_angle_misalignment
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_angle_misalignment ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_angle_misalignment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clear_faults
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->clear_faults ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clear_faults", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // high_yaw_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->high_yaw_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "high_yaw_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mr_only_transmit
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mr_only_transmit ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mr_only_transmit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lr_only_transmit
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lr_only_transmit ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lr_only_transmit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_misalignment
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_misalignment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_misalignment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_mounting_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lateral_mounting_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_mounting_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_cmd_radiate
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->radar_cmd_radiate ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_cmd_radiate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blockage_disable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blockage_disable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blockage_disable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maximum_tracks
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->maximum_tracks);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maximum_tracks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_signal_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->turn_signal_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_signal_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_speed_validity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vehicle_speed_validity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_speed_validity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mmr_upside_down
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mmr_upside_down ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mmr_upside_down", field);
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
  {  // wiper_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wiper_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wiper_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raw_data_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->raw_data_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "raw_data_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
