// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from delphi_mrr_msgs:msg/ActiveFaultLatched1.idl
// generated code does not contain a copyright notice

#ifndef DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__STRUCT_HPP_
#define DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__delphi_mrr_msgs__msg__ActiveFaultLatched1 __attribute__((deprecated))
#else
# define DEPRECATED__delphi_mrr_msgs__msg__ActiveFaultLatched1 __declspec(deprecated)
#endif

namespace delphi_mrr_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActiveFaultLatched1_
{
  using Type = ActiveFaultLatched1_<ContainerAllocator>;

  explicit ActiveFaultLatched1_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active_flt_latched_byte7_bit7 = false;
      this->active_flt_latched_byte7_bit6 = false;
      this->active_flt_latched_byte7_bit5 = false;
      this->active_flt_latched_byte7_bit4 = false;
      this->arm_to_dsp_chksum_fault = false;
      this->dsp_to_arm_chksum_fault = false;
      this->host_to_arm_chksum_fault = false;
      this->arm_to_host_chksum_fault = false;
      this->loop_bw_out_of_range = false;
      this->dsp_overrun_fault = false;
      this->active_flt_latched_byte6_bit5 = false;
      this->tuning_sensitivity_fault = false;
      this->saturated_tuning_freq_fault = false;
      this->local_osc_power_fault = false;
      this->transmitter_power_fault = false;
      this->active_flt_latched_byte6_bit0 = false;
      this->active_flt_latched_byte5_bit7 = false;
      this->active_flt_latched_byte5_bit6 = false;
      this->xcvr_device_spi_fault = false;
      this->freq_synthesizer_spi_fault = false;
      this->analog_converter_devic_spi_fault = false;
      this->side_lobe_blockage = false;
      this->active_flt_latched_byte5_bit1 = false;
      this->mnr_blocked = false;
      this->ecu_temp_high_fault = false;
      this->transmitter_temp_high_fault = false;
      this->alignment_routine_failed_fault = false;
      this->unreasonable_radar_data = false;
      this->microprocessor_temp_high_fault = false;
      this->vertical_alignment_out_of_range = false;
      this->horizontal_alignment_out_of_range = false;
      this->factory_alignment_mode = false;
      this->battery_low_fault = false;
      this->battery_high_fault = false;
      this->v_1p25_supply_out_of_range = false;
      this->active_flt_latched_byte3_bit4 = false;
      this->thermistor_out_of_range = false;
      this->v_3p3_dac_supply_out_of_range = false;
      this->v_3p3_raw_supply_out_of_range = false;
      this->v_5_supply_out_of_range = false;
      this->transmitter_id_fault = false;
      this->active_flt_latched_byte2_bit6 = false;
      this->active_flt_latched_byte2_bit5 = false;
      this->active_flt_latched_byte2_bit4 = false;
      this->active_flt_latched_byte2_bit3 = false;
      this->active_flt_latched_byte2_bit2 = false;
      this->pcan_missing_msg_fault = false;
      this->pcan_bus_off = false;
      this->active_flt_latched_byte1_bit7 = false;
      this->active_flt_latched_byte1_bit6 = false;
      this->instruction_set_check_fault = false;
      this->stack_overflow_fault = false;
      this->watchdog_fault = false;
      this->pll_lock_fault = false;
      this->active_flt_latched_byte1_bit1 = false;
      this->ram_memory_test_fault = false;
      this->usc_validation_fault = false;
      this->active_flt_latched_byte0_bit6 = false;
      this->active_flt_latched_byte0_bit5 = false;
      this->active_flt_latched_byte0_bit4 = false;
      this->active_flt_latched_byte0_bit3 = false;
      this->keep_alive_checksum_fault = false;
      this->program_calibration_flash_checksum = false;
      this->application_flash_checksum_fault = false;
    }
  }

  explicit ActiveFaultLatched1_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->active_flt_latched_byte7_bit7 = false;
      this->active_flt_latched_byte7_bit6 = false;
      this->active_flt_latched_byte7_bit5 = false;
      this->active_flt_latched_byte7_bit4 = false;
      this->arm_to_dsp_chksum_fault = false;
      this->dsp_to_arm_chksum_fault = false;
      this->host_to_arm_chksum_fault = false;
      this->arm_to_host_chksum_fault = false;
      this->loop_bw_out_of_range = false;
      this->dsp_overrun_fault = false;
      this->active_flt_latched_byte6_bit5 = false;
      this->tuning_sensitivity_fault = false;
      this->saturated_tuning_freq_fault = false;
      this->local_osc_power_fault = false;
      this->transmitter_power_fault = false;
      this->active_flt_latched_byte6_bit0 = false;
      this->active_flt_latched_byte5_bit7 = false;
      this->active_flt_latched_byte5_bit6 = false;
      this->xcvr_device_spi_fault = false;
      this->freq_synthesizer_spi_fault = false;
      this->analog_converter_devic_spi_fault = false;
      this->side_lobe_blockage = false;
      this->active_flt_latched_byte5_bit1 = false;
      this->mnr_blocked = false;
      this->ecu_temp_high_fault = false;
      this->transmitter_temp_high_fault = false;
      this->alignment_routine_failed_fault = false;
      this->unreasonable_radar_data = false;
      this->microprocessor_temp_high_fault = false;
      this->vertical_alignment_out_of_range = false;
      this->horizontal_alignment_out_of_range = false;
      this->factory_alignment_mode = false;
      this->battery_low_fault = false;
      this->battery_high_fault = false;
      this->v_1p25_supply_out_of_range = false;
      this->active_flt_latched_byte3_bit4 = false;
      this->thermistor_out_of_range = false;
      this->v_3p3_dac_supply_out_of_range = false;
      this->v_3p3_raw_supply_out_of_range = false;
      this->v_5_supply_out_of_range = false;
      this->transmitter_id_fault = false;
      this->active_flt_latched_byte2_bit6 = false;
      this->active_flt_latched_byte2_bit5 = false;
      this->active_flt_latched_byte2_bit4 = false;
      this->active_flt_latched_byte2_bit3 = false;
      this->active_flt_latched_byte2_bit2 = false;
      this->pcan_missing_msg_fault = false;
      this->pcan_bus_off = false;
      this->active_flt_latched_byte1_bit7 = false;
      this->active_flt_latched_byte1_bit6 = false;
      this->instruction_set_check_fault = false;
      this->stack_overflow_fault = false;
      this->watchdog_fault = false;
      this->pll_lock_fault = false;
      this->active_flt_latched_byte1_bit1 = false;
      this->ram_memory_test_fault = false;
      this->usc_validation_fault = false;
      this->active_flt_latched_byte0_bit6 = false;
      this->active_flt_latched_byte0_bit5 = false;
      this->active_flt_latched_byte0_bit4 = false;
      this->active_flt_latched_byte0_bit3 = false;
      this->keep_alive_checksum_fault = false;
      this->program_calibration_flash_checksum = false;
      this->application_flash_checksum_fault = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _active_flt_latched_byte7_bit7_type =
    bool;
  _active_flt_latched_byte7_bit7_type active_flt_latched_byte7_bit7;
  using _active_flt_latched_byte7_bit6_type =
    bool;
  _active_flt_latched_byte7_bit6_type active_flt_latched_byte7_bit6;
  using _active_flt_latched_byte7_bit5_type =
    bool;
  _active_flt_latched_byte7_bit5_type active_flt_latched_byte7_bit5;
  using _active_flt_latched_byte7_bit4_type =
    bool;
  _active_flt_latched_byte7_bit4_type active_flt_latched_byte7_bit4;
  using _arm_to_dsp_chksum_fault_type =
    bool;
  _arm_to_dsp_chksum_fault_type arm_to_dsp_chksum_fault;
  using _dsp_to_arm_chksum_fault_type =
    bool;
  _dsp_to_arm_chksum_fault_type dsp_to_arm_chksum_fault;
  using _host_to_arm_chksum_fault_type =
    bool;
  _host_to_arm_chksum_fault_type host_to_arm_chksum_fault;
  using _arm_to_host_chksum_fault_type =
    bool;
  _arm_to_host_chksum_fault_type arm_to_host_chksum_fault;
  using _loop_bw_out_of_range_type =
    bool;
  _loop_bw_out_of_range_type loop_bw_out_of_range;
  using _dsp_overrun_fault_type =
    bool;
  _dsp_overrun_fault_type dsp_overrun_fault;
  using _active_flt_latched_byte6_bit5_type =
    bool;
  _active_flt_latched_byte6_bit5_type active_flt_latched_byte6_bit5;
  using _tuning_sensitivity_fault_type =
    bool;
  _tuning_sensitivity_fault_type tuning_sensitivity_fault;
  using _saturated_tuning_freq_fault_type =
    bool;
  _saturated_tuning_freq_fault_type saturated_tuning_freq_fault;
  using _local_osc_power_fault_type =
    bool;
  _local_osc_power_fault_type local_osc_power_fault;
  using _transmitter_power_fault_type =
    bool;
  _transmitter_power_fault_type transmitter_power_fault;
  using _active_flt_latched_byte6_bit0_type =
    bool;
  _active_flt_latched_byte6_bit0_type active_flt_latched_byte6_bit0;
  using _active_flt_latched_byte5_bit7_type =
    bool;
  _active_flt_latched_byte5_bit7_type active_flt_latched_byte5_bit7;
  using _active_flt_latched_byte5_bit6_type =
    bool;
  _active_flt_latched_byte5_bit6_type active_flt_latched_byte5_bit6;
  using _xcvr_device_spi_fault_type =
    bool;
  _xcvr_device_spi_fault_type xcvr_device_spi_fault;
  using _freq_synthesizer_spi_fault_type =
    bool;
  _freq_synthesizer_spi_fault_type freq_synthesizer_spi_fault;
  using _analog_converter_devic_spi_fault_type =
    bool;
  _analog_converter_devic_spi_fault_type analog_converter_devic_spi_fault;
  using _side_lobe_blockage_type =
    bool;
  _side_lobe_blockage_type side_lobe_blockage;
  using _active_flt_latched_byte5_bit1_type =
    bool;
  _active_flt_latched_byte5_bit1_type active_flt_latched_byte5_bit1;
  using _mnr_blocked_type =
    bool;
  _mnr_blocked_type mnr_blocked;
  using _ecu_temp_high_fault_type =
    bool;
  _ecu_temp_high_fault_type ecu_temp_high_fault;
  using _transmitter_temp_high_fault_type =
    bool;
  _transmitter_temp_high_fault_type transmitter_temp_high_fault;
  using _alignment_routine_failed_fault_type =
    bool;
  _alignment_routine_failed_fault_type alignment_routine_failed_fault;
  using _unreasonable_radar_data_type =
    bool;
  _unreasonable_radar_data_type unreasonable_radar_data;
  using _microprocessor_temp_high_fault_type =
    bool;
  _microprocessor_temp_high_fault_type microprocessor_temp_high_fault;
  using _vertical_alignment_out_of_range_type =
    bool;
  _vertical_alignment_out_of_range_type vertical_alignment_out_of_range;
  using _horizontal_alignment_out_of_range_type =
    bool;
  _horizontal_alignment_out_of_range_type horizontal_alignment_out_of_range;
  using _factory_alignment_mode_type =
    bool;
  _factory_alignment_mode_type factory_alignment_mode;
  using _battery_low_fault_type =
    bool;
  _battery_low_fault_type battery_low_fault;
  using _battery_high_fault_type =
    bool;
  _battery_high_fault_type battery_high_fault;
  using _v_1p25_supply_out_of_range_type =
    bool;
  _v_1p25_supply_out_of_range_type v_1p25_supply_out_of_range;
  using _active_flt_latched_byte3_bit4_type =
    bool;
  _active_flt_latched_byte3_bit4_type active_flt_latched_byte3_bit4;
  using _thermistor_out_of_range_type =
    bool;
  _thermistor_out_of_range_type thermistor_out_of_range;
  using _v_3p3_dac_supply_out_of_range_type =
    bool;
  _v_3p3_dac_supply_out_of_range_type v_3p3_dac_supply_out_of_range;
  using _v_3p3_raw_supply_out_of_range_type =
    bool;
  _v_3p3_raw_supply_out_of_range_type v_3p3_raw_supply_out_of_range;
  using _v_5_supply_out_of_range_type =
    bool;
  _v_5_supply_out_of_range_type v_5_supply_out_of_range;
  using _transmitter_id_fault_type =
    bool;
  _transmitter_id_fault_type transmitter_id_fault;
  using _active_flt_latched_byte2_bit6_type =
    bool;
  _active_flt_latched_byte2_bit6_type active_flt_latched_byte2_bit6;
  using _active_flt_latched_byte2_bit5_type =
    bool;
  _active_flt_latched_byte2_bit5_type active_flt_latched_byte2_bit5;
  using _active_flt_latched_byte2_bit4_type =
    bool;
  _active_flt_latched_byte2_bit4_type active_flt_latched_byte2_bit4;
  using _active_flt_latched_byte2_bit3_type =
    bool;
  _active_flt_latched_byte2_bit3_type active_flt_latched_byte2_bit3;
  using _active_flt_latched_byte2_bit2_type =
    bool;
  _active_flt_latched_byte2_bit2_type active_flt_latched_byte2_bit2;
  using _pcan_missing_msg_fault_type =
    bool;
  _pcan_missing_msg_fault_type pcan_missing_msg_fault;
  using _pcan_bus_off_type =
    bool;
  _pcan_bus_off_type pcan_bus_off;
  using _active_flt_latched_byte1_bit7_type =
    bool;
  _active_flt_latched_byte1_bit7_type active_flt_latched_byte1_bit7;
  using _active_flt_latched_byte1_bit6_type =
    bool;
  _active_flt_latched_byte1_bit6_type active_flt_latched_byte1_bit6;
  using _instruction_set_check_fault_type =
    bool;
  _instruction_set_check_fault_type instruction_set_check_fault;
  using _stack_overflow_fault_type =
    bool;
  _stack_overflow_fault_type stack_overflow_fault;
  using _watchdog_fault_type =
    bool;
  _watchdog_fault_type watchdog_fault;
  using _pll_lock_fault_type =
    bool;
  _pll_lock_fault_type pll_lock_fault;
  using _active_flt_latched_byte1_bit1_type =
    bool;
  _active_flt_latched_byte1_bit1_type active_flt_latched_byte1_bit1;
  using _ram_memory_test_fault_type =
    bool;
  _ram_memory_test_fault_type ram_memory_test_fault;
  using _usc_validation_fault_type =
    bool;
  _usc_validation_fault_type usc_validation_fault;
  using _active_flt_latched_byte0_bit6_type =
    bool;
  _active_flt_latched_byte0_bit6_type active_flt_latched_byte0_bit6;
  using _active_flt_latched_byte0_bit5_type =
    bool;
  _active_flt_latched_byte0_bit5_type active_flt_latched_byte0_bit5;
  using _active_flt_latched_byte0_bit4_type =
    bool;
  _active_flt_latched_byte0_bit4_type active_flt_latched_byte0_bit4;
  using _active_flt_latched_byte0_bit3_type =
    bool;
  _active_flt_latched_byte0_bit3_type active_flt_latched_byte0_bit3;
  using _keep_alive_checksum_fault_type =
    bool;
  _keep_alive_checksum_fault_type keep_alive_checksum_fault;
  using _program_calibration_flash_checksum_type =
    bool;
  _program_calibration_flash_checksum_type program_calibration_flash_checksum;
  using _application_flash_checksum_fault_type =
    bool;
  _application_flash_checksum_fault_type application_flash_checksum_fault;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte7_bit7(
    const bool & _arg)
  {
    this->active_flt_latched_byte7_bit7 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte7_bit6(
    const bool & _arg)
  {
    this->active_flt_latched_byte7_bit6 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte7_bit5(
    const bool & _arg)
  {
    this->active_flt_latched_byte7_bit5 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte7_bit4(
    const bool & _arg)
  {
    this->active_flt_latched_byte7_bit4 = _arg;
    return *this;
  }
  Type & set__arm_to_dsp_chksum_fault(
    const bool & _arg)
  {
    this->arm_to_dsp_chksum_fault = _arg;
    return *this;
  }
  Type & set__dsp_to_arm_chksum_fault(
    const bool & _arg)
  {
    this->dsp_to_arm_chksum_fault = _arg;
    return *this;
  }
  Type & set__host_to_arm_chksum_fault(
    const bool & _arg)
  {
    this->host_to_arm_chksum_fault = _arg;
    return *this;
  }
  Type & set__arm_to_host_chksum_fault(
    const bool & _arg)
  {
    this->arm_to_host_chksum_fault = _arg;
    return *this;
  }
  Type & set__loop_bw_out_of_range(
    const bool & _arg)
  {
    this->loop_bw_out_of_range = _arg;
    return *this;
  }
  Type & set__dsp_overrun_fault(
    const bool & _arg)
  {
    this->dsp_overrun_fault = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte6_bit5(
    const bool & _arg)
  {
    this->active_flt_latched_byte6_bit5 = _arg;
    return *this;
  }
  Type & set__tuning_sensitivity_fault(
    const bool & _arg)
  {
    this->tuning_sensitivity_fault = _arg;
    return *this;
  }
  Type & set__saturated_tuning_freq_fault(
    const bool & _arg)
  {
    this->saturated_tuning_freq_fault = _arg;
    return *this;
  }
  Type & set__local_osc_power_fault(
    const bool & _arg)
  {
    this->local_osc_power_fault = _arg;
    return *this;
  }
  Type & set__transmitter_power_fault(
    const bool & _arg)
  {
    this->transmitter_power_fault = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte6_bit0(
    const bool & _arg)
  {
    this->active_flt_latched_byte6_bit0 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte5_bit7(
    const bool & _arg)
  {
    this->active_flt_latched_byte5_bit7 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte5_bit6(
    const bool & _arg)
  {
    this->active_flt_latched_byte5_bit6 = _arg;
    return *this;
  }
  Type & set__xcvr_device_spi_fault(
    const bool & _arg)
  {
    this->xcvr_device_spi_fault = _arg;
    return *this;
  }
  Type & set__freq_synthesizer_spi_fault(
    const bool & _arg)
  {
    this->freq_synthesizer_spi_fault = _arg;
    return *this;
  }
  Type & set__analog_converter_devic_spi_fault(
    const bool & _arg)
  {
    this->analog_converter_devic_spi_fault = _arg;
    return *this;
  }
  Type & set__side_lobe_blockage(
    const bool & _arg)
  {
    this->side_lobe_blockage = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte5_bit1(
    const bool & _arg)
  {
    this->active_flt_latched_byte5_bit1 = _arg;
    return *this;
  }
  Type & set__mnr_blocked(
    const bool & _arg)
  {
    this->mnr_blocked = _arg;
    return *this;
  }
  Type & set__ecu_temp_high_fault(
    const bool & _arg)
  {
    this->ecu_temp_high_fault = _arg;
    return *this;
  }
  Type & set__transmitter_temp_high_fault(
    const bool & _arg)
  {
    this->transmitter_temp_high_fault = _arg;
    return *this;
  }
  Type & set__alignment_routine_failed_fault(
    const bool & _arg)
  {
    this->alignment_routine_failed_fault = _arg;
    return *this;
  }
  Type & set__unreasonable_radar_data(
    const bool & _arg)
  {
    this->unreasonable_radar_data = _arg;
    return *this;
  }
  Type & set__microprocessor_temp_high_fault(
    const bool & _arg)
  {
    this->microprocessor_temp_high_fault = _arg;
    return *this;
  }
  Type & set__vertical_alignment_out_of_range(
    const bool & _arg)
  {
    this->vertical_alignment_out_of_range = _arg;
    return *this;
  }
  Type & set__horizontal_alignment_out_of_range(
    const bool & _arg)
  {
    this->horizontal_alignment_out_of_range = _arg;
    return *this;
  }
  Type & set__factory_alignment_mode(
    const bool & _arg)
  {
    this->factory_alignment_mode = _arg;
    return *this;
  }
  Type & set__battery_low_fault(
    const bool & _arg)
  {
    this->battery_low_fault = _arg;
    return *this;
  }
  Type & set__battery_high_fault(
    const bool & _arg)
  {
    this->battery_high_fault = _arg;
    return *this;
  }
  Type & set__v_1p25_supply_out_of_range(
    const bool & _arg)
  {
    this->v_1p25_supply_out_of_range = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte3_bit4(
    const bool & _arg)
  {
    this->active_flt_latched_byte3_bit4 = _arg;
    return *this;
  }
  Type & set__thermistor_out_of_range(
    const bool & _arg)
  {
    this->thermistor_out_of_range = _arg;
    return *this;
  }
  Type & set__v_3p3_dac_supply_out_of_range(
    const bool & _arg)
  {
    this->v_3p3_dac_supply_out_of_range = _arg;
    return *this;
  }
  Type & set__v_3p3_raw_supply_out_of_range(
    const bool & _arg)
  {
    this->v_3p3_raw_supply_out_of_range = _arg;
    return *this;
  }
  Type & set__v_5_supply_out_of_range(
    const bool & _arg)
  {
    this->v_5_supply_out_of_range = _arg;
    return *this;
  }
  Type & set__transmitter_id_fault(
    const bool & _arg)
  {
    this->transmitter_id_fault = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte2_bit6(
    const bool & _arg)
  {
    this->active_flt_latched_byte2_bit6 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte2_bit5(
    const bool & _arg)
  {
    this->active_flt_latched_byte2_bit5 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte2_bit4(
    const bool & _arg)
  {
    this->active_flt_latched_byte2_bit4 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte2_bit3(
    const bool & _arg)
  {
    this->active_flt_latched_byte2_bit3 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte2_bit2(
    const bool & _arg)
  {
    this->active_flt_latched_byte2_bit2 = _arg;
    return *this;
  }
  Type & set__pcan_missing_msg_fault(
    const bool & _arg)
  {
    this->pcan_missing_msg_fault = _arg;
    return *this;
  }
  Type & set__pcan_bus_off(
    const bool & _arg)
  {
    this->pcan_bus_off = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte1_bit7(
    const bool & _arg)
  {
    this->active_flt_latched_byte1_bit7 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte1_bit6(
    const bool & _arg)
  {
    this->active_flt_latched_byte1_bit6 = _arg;
    return *this;
  }
  Type & set__instruction_set_check_fault(
    const bool & _arg)
  {
    this->instruction_set_check_fault = _arg;
    return *this;
  }
  Type & set__stack_overflow_fault(
    const bool & _arg)
  {
    this->stack_overflow_fault = _arg;
    return *this;
  }
  Type & set__watchdog_fault(
    const bool & _arg)
  {
    this->watchdog_fault = _arg;
    return *this;
  }
  Type & set__pll_lock_fault(
    const bool & _arg)
  {
    this->pll_lock_fault = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte1_bit1(
    const bool & _arg)
  {
    this->active_flt_latched_byte1_bit1 = _arg;
    return *this;
  }
  Type & set__ram_memory_test_fault(
    const bool & _arg)
  {
    this->ram_memory_test_fault = _arg;
    return *this;
  }
  Type & set__usc_validation_fault(
    const bool & _arg)
  {
    this->usc_validation_fault = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte0_bit6(
    const bool & _arg)
  {
    this->active_flt_latched_byte0_bit6 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte0_bit5(
    const bool & _arg)
  {
    this->active_flt_latched_byte0_bit5 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte0_bit4(
    const bool & _arg)
  {
    this->active_flt_latched_byte0_bit4 = _arg;
    return *this;
  }
  Type & set__active_flt_latched_byte0_bit3(
    const bool & _arg)
  {
    this->active_flt_latched_byte0_bit3 = _arg;
    return *this;
  }
  Type & set__keep_alive_checksum_fault(
    const bool & _arg)
  {
    this->keep_alive_checksum_fault = _arg;
    return *this;
  }
  Type & set__program_calibration_flash_checksum(
    const bool & _arg)
  {
    this->program_calibration_flash_checksum = _arg;
    return *this;
  }
  Type & set__application_flash_checksum_fault(
    const bool & _arg)
  {
    this->application_flash_checksum_fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator> *;
  using ConstRawPtr =
    const delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__delphi_mrr_msgs__msg__ActiveFaultLatched1
    std::shared_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__delphi_mrr_msgs__msg__ActiveFaultLatched1
    std::shared_ptr<delphi_mrr_msgs::msg::ActiveFaultLatched1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActiveFaultLatched1_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->active_flt_latched_byte7_bit7 != other.active_flt_latched_byte7_bit7) {
      return false;
    }
    if (this->active_flt_latched_byte7_bit6 != other.active_flt_latched_byte7_bit6) {
      return false;
    }
    if (this->active_flt_latched_byte7_bit5 != other.active_flt_latched_byte7_bit5) {
      return false;
    }
    if (this->active_flt_latched_byte7_bit4 != other.active_flt_latched_byte7_bit4) {
      return false;
    }
    if (this->arm_to_dsp_chksum_fault != other.arm_to_dsp_chksum_fault) {
      return false;
    }
    if (this->dsp_to_arm_chksum_fault != other.dsp_to_arm_chksum_fault) {
      return false;
    }
    if (this->host_to_arm_chksum_fault != other.host_to_arm_chksum_fault) {
      return false;
    }
    if (this->arm_to_host_chksum_fault != other.arm_to_host_chksum_fault) {
      return false;
    }
    if (this->loop_bw_out_of_range != other.loop_bw_out_of_range) {
      return false;
    }
    if (this->dsp_overrun_fault != other.dsp_overrun_fault) {
      return false;
    }
    if (this->active_flt_latched_byte6_bit5 != other.active_flt_latched_byte6_bit5) {
      return false;
    }
    if (this->tuning_sensitivity_fault != other.tuning_sensitivity_fault) {
      return false;
    }
    if (this->saturated_tuning_freq_fault != other.saturated_tuning_freq_fault) {
      return false;
    }
    if (this->local_osc_power_fault != other.local_osc_power_fault) {
      return false;
    }
    if (this->transmitter_power_fault != other.transmitter_power_fault) {
      return false;
    }
    if (this->active_flt_latched_byte6_bit0 != other.active_flt_latched_byte6_bit0) {
      return false;
    }
    if (this->active_flt_latched_byte5_bit7 != other.active_flt_latched_byte5_bit7) {
      return false;
    }
    if (this->active_flt_latched_byte5_bit6 != other.active_flt_latched_byte5_bit6) {
      return false;
    }
    if (this->xcvr_device_spi_fault != other.xcvr_device_spi_fault) {
      return false;
    }
    if (this->freq_synthesizer_spi_fault != other.freq_synthesizer_spi_fault) {
      return false;
    }
    if (this->analog_converter_devic_spi_fault != other.analog_converter_devic_spi_fault) {
      return false;
    }
    if (this->side_lobe_blockage != other.side_lobe_blockage) {
      return false;
    }
    if (this->active_flt_latched_byte5_bit1 != other.active_flt_latched_byte5_bit1) {
      return false;
    }
    if (this->mnr_blocked != other.mnr_blocked) {
      return false;
    }
    if (this->ecu_temp_high_fault != other.ecu_temp_high_fault) {
      return false;
    }
    if (this->transmitter_temp_high_fault != other.transmitter_temp_high_fault) {
      return false;
    }
    if (this->alignment_routine_failed_fault != other.alignment_routine_failed_fault) {
      return false;
    }
    if (this->unreasonable_radar_data != other.unreasonable_radar_data) {
      return false;
    }
    if (this->microprocessor_temp_high_fault != other.microprocessor_temp_high_fault) {
      return false;
    }
    if (this->vertical_alignment_out_of_range != other.vertical_alignment_out_of_range) {
      return false;
    }
    if (this->horizontal_alignment_out_of_range != other.horizontal_alignment_out_of_range) {
      return false;
    }
    if (this->factory_alignment_mode != other.factory_alignment_mode) {
      return false;
    }
    if (this->battery_low_fault != other.battery_low_fault) {
      return false;
    }
    if (this->battery_high_fault != other.battery_high_fault) {
      return false;
    }
    if (this->v_1p25_supply_out_of_range != other.v_1p25_supply_out_of_range) {
      return false;
    }
    if (this->active_flt_latched_byte3_bit4 != other.active_flt_latched_byte3_bit4) {
      return false;
    }
    if (this->thermistor_out_of_range != other.thermistor_out_of_range) {
      return false;
    }
    if (this->v_3p3_dac_supply_out_of_range != other.v_3p3_dac_supply_out_of_range) {
      return false;
    }
    if (this->v_3p3_raw_supply_out_of_range != other.v_3p3_raw_supply_out_of_range) {
      return false;
    }
    if (this->v_5_supply_out_of_range != other.v_5_supply_out_of_range) {
      return false;
    }
    if (this->transmitter_id_fault != other.transmitter_id_fault) {
      return false;
    }
    if (this->active_flt_latched_byte2_bit6 != other.active_flt_latched_byte2_bit6) {
      return false;
    }
    if (this->active_flt_latched_byte2_bit5 != other.active_flt_latched_byte2_bit5) {
      return false;
    }
    if (this->active_flt_latched_byte2_bit4 != other.active_flt_latched_byte2_bit4) {
      return false;
    }
    if (this->active_flt_latched_byte2_bit3 != other.active_flt_latched_byte2_bit3) {
      return false;
    }
    if (this->active_flt_latched_byte2_bit2 != other.active_flt_latched_byte2_bit2) {
      return false;
    }
    if (this->pcan_missing_msg_fault != other.pcan_missing_msg_fault) {
      return false;
    }
    if (this->pcan_bus_off != other.pcan_bus_off) {
      return false;
    }
    if (this->active_flt_latched_byte1_bit7 != other.active_flt_latched_byte1_bit7) {
      return false;
    }
    if (this->active_flt_latched_byte1_bit6 != other.active_flt_latched_byte1_bit6) {
      return false;
    }
    if (this->instruction_set_check_fault != other.instruction_set_check_fault) {
      return false;
    }
    if (this->stack_overflow_fault != other.stack_overflow_fault) {
      return false;
    }
    if (this->watchdog_fault != other.watchdog_fault) {
      return false;
    }
    if (this->pll_lock_fault != other.pll_lock_fault) {
      return false;
    }
    if (this->active_flt_latched_byte1_bit1 != other.active_flt_latched_byte1_bit1) {
      return false;
    }
    if (this->ram_memory_test_fault != other.ram_memory_test_fault) {
      return false;
    }
    if (this->usc_validation_fault != other.usc_validation_fault) {
      return false;
    }
    if (this->active_flt_latched_byte0_bit6 != other.active_flt_latched_byte0_bit6) {
      return false;
    }
    if (this->active_flt_latched_byte0_bit5 != other.active_flt_latched_byte0_bit5) {
      return false;
    }
    if (this->active_flt_latched_byte0_bit4 != other.active_flt_latched_byte0_bit4) {
      return false;
    }
    if (this->active_flt_latched_byte0_bit3 != other.active_flt_latched_byte0_bit3) {
      return false;
    }
    if (this->keep_alive_checksum_fault != other.keep_alive_checksum_fault) {
      return false;
    }
    if (this->program_calibration_flash_checksum != other.program_calibration_flash_checksum) {
      return false;
    }
    if (this->application_flash_checksum_fault != other.application_flash_checksum_fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActiveFaultLatched1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActiveFaultLatched1_

// alias to use template instance with default allocator
using ActiveFaultLatched1 =
  delphi_mrr_msgs::msg::ActiveFaultLatched1_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace delphi_mrr_msgs

#endif  // DELPHI_MRR_MSGS__MSG__DETAIL__ACTIVE_FAULT_LATCHED1__STRUCT_HPP_
