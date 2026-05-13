// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched1.idl
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
#include "delphi_mrr_msgs/msg/detail/active_fault_latched1__struct.h"
#include "delphi_mrr_msgs/msg/detail/active_fault_latched1__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool delphi_mrr_msgs__msg__active_fault_latched1__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("delphi_mrr_msgs.msg._active_fault_latched1.ActiveFaultLatched1", full_classname_dest, 62) == 0);
  }
  delphi_mrr_msgs__msg__ActiveFaultLatched1 * ros_message = _ros_message;
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
  {  // active_flt_latched_byte7_bit7
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte7_bit7");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte7_bit7 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte7_bit6
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte7_bit6");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte7_bit6 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte7_bit5
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte7_bit5");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte7_bit5 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte7_bit4
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte7_bit4");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte7_bit4 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arm_to_dsp_chksum_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_to_dsp_chksum_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arm_to_dsp_chksum_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_to_arm_chksum_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_to_arm_chksum_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_to_arm_chksum_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // host_to_arm_chksum_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "host_to_arm_chksum_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->host_to_arm_chksum_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // arm_to_host_chksum_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "arm_to_host_chksum_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->arm_to_host_chksum_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // loop_bw_out_of_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "loop_bw_out_of_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->loop_bw_out_of_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dsp_overrun_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "dsp_overrun_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->dsp_overrun_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte6_bit5
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte6_bit5");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte6_bit5 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // tuning_sensitivity_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "tuning_sensitivity_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tuning_sensitivity_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // saturated_tuning_freq_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "saturated_tuning_freq_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->saturated_tuning_freq_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_osc_power_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_osc_power_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_osc_power_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // transmitter_power_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "transmitter_power_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->transmitter_power_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte6_bit0
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte6_bit0");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte6_bit0 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte5_bit7
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte5_bit7");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte5_bit7 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte5_bit6
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte5_bit6");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte5_bit6 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // xcvr_device_spi_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "xcvr_device_spi_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->xcvr_device_spi_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // freq_synthesizer_spi_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "freq_synthesizer_spi_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->freq_synthesizer_spi_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // analog_converter_devic_spi_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "analog_converter_devic_spi_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->analog_converter_devic_spi_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // side_lobe_blockage
    PyObject * field = PyObject_GetAttrString(_pymsg, "side_lobe_blockage");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->side_lobe_blockage = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte5_bit1
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte5_bit1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte5_bit1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // mnr_blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "mnr_blocked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->mnr_blocked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ecu_temp_high_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "ecu_temp_high_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ecu_temp_high_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // transmitter_temp_high_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "transmitter_temp_high_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->transmitter_temp_high_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // alignment_routine_failed_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "alignment_routine_failed_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->alignment_routine_failed_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // unreasonable_radar_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "unreasonable_radar_data");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->unreasonable_radar_data = (Py_True == field);
    Py_DECREF(field);
  }
  {  // microprocessor_temp_high_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "microprocessor_temp_high_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->microprocessor_temp_high_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vertical_alignment_out_of_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_alignment_out_of_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vertical_alignment_out_of_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // horizontal_alignment_out_of_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_alignment_out_of_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->horizontal_alignment_out_of_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // factory_alignment_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "factory_alignment_mode");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->factory_alignment_mode = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery_low_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_low_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->battery_low_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // battery_high_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery_high_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->battery_high_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // v_1p25_supply_out_of_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_1p25_supply_out_of_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->v_1p25_supply_out_of_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte3_bit4
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte3_bit4");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte3_bit4 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // thermistor_out_of_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "thermistor_out_of_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->thermistor_out_of_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // v_3p3_dac_supply_out_of_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_3p3_dac_supply_out_of_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->v_3p3_dac_supply_out_of_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // v_3p3_raw_supply_out_of_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_3p3_raw_supply_out_of_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->v_3p3_raw_supply_out_of_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // v_5_supply_out_of_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_5_supply_out_of_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->v_5_supply_out_of_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // transmitter_id_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "transmitter_id_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->transmitter_id_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte2_bit6
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte2_bit6");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte2_bit6 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte2_bit5
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte2_bit5");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte2_bit5 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte2_bit4
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte2_bit4");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte2_bit4 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte2_bit3
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte2_bit3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte2_bit3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte2_bit2
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte2_bit2");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte2_bit2 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pcan_missing_msg_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "pcan_missing_msg_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pcan_missing_msg_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pcan_bus_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "pcan_bus_off");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pcan_bus_off = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte1_bit7
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte1_bit7");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte1_bit7 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte1_bit6
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte1_bit6");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte1_bit6 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // instruction_set_check_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "instruction_set_check_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->instruction_set_check_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stack_overflow_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "stack_overflow_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->stack_overflow_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // watchdog_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "watchdog_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->watchdog_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pll_lock_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "pll_lock_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pll_lock_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte1_bit1
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte1_bit1");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte1_bit1 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ram_memory_test_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "ram_memory_test_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ram_memory_test_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // usc_validation_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "usc_validation_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->usc_validation_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte0_bit6
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte0_bit6");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte0_bit6 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte0_bit5
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte0_bit5");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte0_bit5 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte0_bit4
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte0_bit4");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte0_bit4 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // active_flt_latched_byte0_bit3
    PyObject * field = PyObject_GetAttrString(_pymsg, "active_flt_latched_byte0_bit3");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->active_flt_latched_byte0_bit3 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // keep_alive_checksum_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "keep_alive_checksum_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->keep_alive_checksum_fault = (Py_True == field);
    Py_DECREF(field);
  }
  {  // program_calibration_flash_checksum
    PyObject * field = PyObject_GetAttrString(_pymsg, "program_calibration_flash_checksum");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->program_calibration_flash_checksum = (Py_True == field);
    Py_DECREF(field);
  }
  {  // application_flash_checksum_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "application_flash_checksum_fault");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->application_flash_checksum_fault = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * delphi_mrr_msgs__msg__active_fault_latched1__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ActiveFaultLatched1 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("delphi_mrr_msgs.msg._active_fault_latched1");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ActiveFaultLatched1");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  delphi_mrr_msgs__msg__ActiveFaultLatched1 * ros_message = (delphi_mrr_msgs__msg__ActiveFaultLatched1 *)raw_ros_message;
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
  {  // active_flt_latched_byte7_bit7
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte7_bit7 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte7_bit7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte7_bit6
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte7_bit6 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte7_bit6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte7_bit5
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte7_bit5 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte7_bit5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte7_bit4
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte7_bit4 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte7_bit4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_to_dsp_chksum_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arm_to_dsp_chksum_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_to_dsp_chksum_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_to_arm_chksum_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_to_arm_chksum_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_to_arm_chksum_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // host_to_arm_chksum_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->host_to_arm_chksum_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "host_to_arm_chksum_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // arm_to_host_chksum_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->arm_to_host_chksum_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arm_to_host_chksum_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loop_bw_out_of_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->loop_bw_out_of_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loop_bw_out_of_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dsp_overrun_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->dsp_overrun_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dsp_overrun_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte6_bit5
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte6_bit5 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte6_bit5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tuning_sensitivity_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tuning_sensitivity_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tuning_sensitivity_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // saturated_tuning_freq_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->saturated_tuning_freq_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "saturated_tuning_freq_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_osc_power_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_osc_power_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_osc_power_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transmitter_power_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->transmitter_power_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transmitter_power_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte6_bit0
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte6_bit0 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte6_bit0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte5_bit7
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte5_bit7 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte5_bit7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte5_bit6
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte5_bit6 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte5_bit6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xcvr_device_spi_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->xcvr_device_spi_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "xcvr_device_spi_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // freq_synthesizer_spi_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->freq_synthesizer_spi_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "freq_synthesizer_spi_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // analog_converter_devic_spi_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->analog_converter_devic_spi_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "analog_converter_devic_spi_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // side_lobe_blockage
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->side_lobe_blockage ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "side_lobe_blockage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte5_bit1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte5_bit1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte5_bit1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mnr_blocked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->mnr_blocked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mnr_blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ecu_temp_high_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ecu_temp_high_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ecu_temp_high_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transmitter_temp_high_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->transmitter_temp_high_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transmitter_temp_high_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alignment_routine_failed_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->alignment_routine_failed_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alignment_routine_failed_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unreasonable_radar_data
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->unreasonable_radar_data ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unreasonable_radar_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // microprocessor_temp_high_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->microprocessor_temp_high_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "microprocessor_temp_high_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_alignment_out_of_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vertical_alignment_out_of_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_alignment_out_of_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_alignment_out_of_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->horizontal_alignment_out_of_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_alignment_out_of_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // factory_alignment_mode
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->factory_alignment_mode ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "factory_alignment_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_low_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->battery_low_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_low_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery_high_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->battery_high_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery_high_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_1p25_supply_out_of_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->v_1p25_supply_out_of_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_1p25_supply_out_of_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte3_bit4
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte3_bit4 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte3_bit4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thermistor_out_of_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->thermistor_out_of_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thermistor_out_of_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_3p3_dac_supply_out_of_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->v_3p3_dac_supply_out_of_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_3p3_dac_supply_out_of_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_3p3_raw_supply_out_of_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->v_3p3_raw_supply_out_of_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_3p3_raw_supply_out_of_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_5_supply_out_of_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->v_5_supply_out_of_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_5_supply_out_of_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transmitter_id_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->transmitter_id_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transmitter_id_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte2_bit6
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte2_bit6 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte2_bit6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte2_bit5
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte2_bit5 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte2_bit5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte2_bit4
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte2_bit4 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte2_bit4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte2_bit3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte2_bit3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte2_bit3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte2_bit2
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte2_bit2 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte2_bit2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pcan_missing_msg_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pcan_missing_msg_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pcan_missing_msg_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pcan_bus_off
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pcan_bus_off ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pcan_bus_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte1_bit7
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte1_bit7 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte1_bit7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte1_bit6
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte1_bit6 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte1_bit6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // instruction_set_check_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->instruction_set_check_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "instruction_set_check_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stack_overflow_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->stack_overflow_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stack_overflow_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // watchdog_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->watchdog_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "watchdog_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pll_lock_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pll_lock_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pll_lock_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte1_bit1
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte1_bit1 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte1_bit1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ram_memory_test_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ram_memory_test_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ram_memory_test_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usc_validation_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->usc_validation_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "usc_validation_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte0_bit6
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte0_bit6 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte0_bit6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte0_bit5
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte0_bit5 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte0_bit5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte0_bit4
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte0_bit4 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte0_bit4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // active_flt_latched_byte0_bit3
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->active_flt_latched_byte0_bit3 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "active_flt_latched_byte0_bit3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // keep_alive_checksum_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->keep_alive_checksum_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "keep_alive_checksum_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // program_calibration_flash_checksum
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->program_calibration_flash_checksum ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "program_calibration_flash_checksum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // application_flash_checksum_fault
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->application_flash_checksum_fault ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "application_flash_checksum_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
