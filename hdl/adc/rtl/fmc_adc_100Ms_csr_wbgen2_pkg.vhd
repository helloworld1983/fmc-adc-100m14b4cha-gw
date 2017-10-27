---------------------------------------------------------------------------------------
-- Title          : Wishbone slave core for FMC ADC 100MS/s core registers
---------------------------------------------------------------------------------------
-- File           : ../rtl/fmc_adc_100Ms_csr_wbgen2_pkg.vhd
-- Author         : auto-generated by wbgen2 from fmc_adc_100Ms_csr.wb
-- Created        : Mon Jan 22 15:24:47 2018
-- Standard       : VHDL'87
---------------------------------------------------------------------------------------
-- THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE fmc_adc_100Ms_csr.wb
-- DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!
---------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

package fmc_adc_100ms_csr_wbgen2_pkg is
  
  
  -- Input registers (user design -> WB slave)
  
  type t_fmc_adc_100ms_csr_in_registers is record
    sta_fsm_i                                : std_logic_vector(2 downto 0);
    sta_serdes_pll_i                         : std_logic;
    sta_serdes_synced_i                      : std_logic;
    sta_acq_cfg_i                            : std_logic;
    shots_cnt_val_i                          : std_logic_vector(15 downto 0);
    trig_pos_i                               : std_logic_vector(31 downto 0);
    fs_freq_i                                : std_logic_vector(31 downto 0);
    samples_cnt_i                            : std_logic_vector(31 downto 0);
    ch1_sta_val_i                            : std_logic_vector(15 downto 0);
    ch2_sta_val_i                            : std_logic_vector(15 downto 0);
    ch3_sta_val_i                            : std_logic_vector(15 downto 0);
    ch4_sta_val_i                            : std_logic_vector(15 downto 0);
    multi_depth_i                            : std_logic_vector(31 downto 0);
    end record;
  
  constant c_fmc_adc_100ms_csr_in_registers_init_value: t_fmc_adc_100ms_csr_in_registers := (
    sta_fsm_i => (others => '0'),
    sta_serdes_pll_i => '0',
    sta_serdes_synced_i => '0',
    sta_acq_cfg_i => '0',
    shots_cnt_val_i => (others => '0'),
    trig_pos_i => (others => '0'),
    fs_freq_i => (others => '0'),
    samples_cnt_i => (others => '0'),
    ch1_sta_val_i => (others => '0'),
    ch2_sta_val_i => (others => '0'),
    ch3_sta_val_i => (others => '0'),
    ch4_sta_val_i => (others => '0'),
    multi_depth_i => (others => '0')
    );
    
    -- Output registers (WB slave -> user design)
    
    type t_fmc_adc_100ms_csr_out_registers is record
      ctl_fsm_cmd_o                            : std_logic_vector(1 downto 0);
      ctl_fsm_cmd_wr_o                         : std_logic;
      ctl_fmc_clk_oe_o                         : std_logic;
      ctl_offset_dac_clr_n_o                   : std_logic;
      ctl_man_bitslip_o                        : std_logic;
      ctl_test_data_en_o                       : std_logic;
      ctl_trig_led_o                           : std_logic;
      ctl_acq_led_o                            : std_logic;
      trig_cfg_hw_trig_sel_o                   : std_logic_vector(1 downto 0);
      trig_cfg_ex_hw_trig_pol_o                : std_logic;
      trig_cfg_hw_trig_en_o                    : std_logic;
      trig_cfg_sw_trig_en_o                    : std_logic;
      trig_cfg_int_trig_test_en_o              : std_logic;
      trig_dly_o                               : std_logic_vector(31 downto 0);
      sw_trig_o                                : std_logic_vector(31 downto 0);
      sw_trig_wr_o                             : std_logic;
      shots_nb_o                               : std_logic_vector(15 downto 0);
      sr_undersample_o                         : std_logic_vector(31 downto 0);
      pre_samples_o                            : std_logic_vector(31 downto 0);
      post_samples_o                           : std_logic_vector(31 downto 0);
      ch1_ctl_ssr_o                            : std_logic_vector(6 downto 0);
      ch1_gain_val_o                           : std_logic_vector(15 downto 0);
      ch1_offset_val_o                         : std_logic_vector(15 downto 0);
      ch1_sat_val_o                            : std_logic_vector(14 downto 0);
      ch1_trig_trig_en_o                       : std_logic;
      ch1_trig_trig_pol_o                      : std_logic;
      ch1_trig_reserved_o                      : std_logic_vector(5 downto 0);
      ch1_trig_int_trig_thres_filt_o           : std_logic_vector(7 downto 0);
      ch1_trig_int_trig_thres_o                : std_logic_vector(15 downto 0);
      ch2_ctl_ssr_o                            : std_logic_vector(6 downto 0);
      ch2_gain_val_o                           : std_logic_vector(15 downto 0);
      ch2_offset_val_o                         : std_logic_vector(15 downto 0);
      ch2_sat_val_o                            : std_logic_vector(14 downto 0);
      ch2_trig_trig_en_o                       : std_logic;
      ch2_trig_trig_pol_o                      : std_logic;
      ch2_trig_reserved_o                      : std_logic_vector(5 downto 0);
      ch2_trig_int_trig_thres_filt_o           : std_logic_vector(7 downto 0);
      ch2_trig_int_trig_thres_o                : std_logic_vector(15 downto 0);
      ch3_ctl_ssr_o                            : std_logic_vector(6 downto 0);
      ch3_gain_val_o                           : std_logic_vector(15 downto 0);
      ch3_offset_val_o                         : std_logic_vector(15 downto 0);
      ch3_sat_val_o                            : std_logic_vector(14 downto 0);
      ch3_trig_trig_en_o                       : std_logic;
      ch3_trig_trig_pol_o                      : std_logic;
      ch3_trig_reserved_o                      : std_logic_vector(5 downto 0);
      ch3_trig_int_trig_thres_filt_o           : std_logic_vector(7 downto 0);
      ch3_trig_int_trig_thres_o                : std_logic_vector(15 downto 0);
      ch4_ctl_ssr_o                            : std_logic_vector(6 downto 0);
      ch4_gain_val_o                           : std_logic_vector(15 downto 0);
      ch4_offset_val_o                         : std_logic_vector(15 downto 0);
      ch4_sat_val_o                            : std_logic_vector(14 downto 0);
      ch4_trig_trig_en_o                       : std_logic;
      ch4_trig_trig_pol_o                      : std_logic;
      ch4_trig_reserved_o                      : std_logic_vector(5 downto 0);
      ch4_trig_int_trig_thres_filt_o           : std_logic_vector(7 downto 0);
      ch4_trig_int_trig_thres_o                : std_logic_vector(15 downto 0);
      end record;
    
    constant c_fmc_adc_100ms_csr_out_registers_init_value: t_fmc_adc_100ms_csr_out_registers := (
      ctl_fsm_cmd_o => (others => '0'),
      ctl_fsm_cmd_wr_o => '0',
      ctl_fmc_clk_oe_o => '0',
      ctl_offset_dac_clr_n_o => '0',
      ctl_man_bitslip_o => '0',
      ctl_test_data_en_o => '0',
      ctl_trig_led_o => '0',
      ctl_acq_led_o => '0',
      trig_cfg_hw_trig_sel_o => (others => '0'),
      trig_cfg_ex_hw_trig_pol_o => '0',
      trig_cfg_hw_trig_en_o => '0',
      trig_cfg_sw_trig_en_o => '0',
      trig_cfg_int_trig_test_en_o => '0',
      trig_dly_o => (others => '0'),
      sw_trig_o => (others => '0'),
      sw_trig_wr_o => '0',
      shots_nb_o => (others => '0'),
      sr_undersample_o => (others => '0'),
      pre_samples_o => (others => '0'),
      post_samples_o => (others => '0'),
      ch1_ctl_ssr_o => (others => '0'),
      ch1_gain_val_o => (others => '0'),
      ch1_offset_val_o => (others => '0'),
      ch1_sat_val_o => (others => '0'),
      ch1_trig_trig_en_o => '0',
      ch1_trig_trig_pol_o => '0',
      ch1_trig_reserved_o => (others => '0'),
      ch1_trig_int_trig_thres_filt_o => (others => '0'),
      ch1_trig_int_trig_thres_o => (others => '0'),
      ch2_ctl_ssr_o => (others => '0'),
      ch2_gain_val_o => (others => '0'),
      ch2_offset_val_o => (others => '0'),
      ch2_sat_val_o => (others => '0'),
      ch2_trig_trig_en_o => '0',
      ch2_trig_trig_pol_o => '0',
      ch2_trig_reserved_o => (others => '0'),
      ch2_trig_int_trig_thres_filt_o => (others => '0'),
      ch2_trig_int_trig_thres_o => (others => '0'),
      ch3_ctl_ssr_o => (others => '0'),
      ch3_gain_val_o => (others => '0'),
      ch3_offset_val_o => (others => '0'),
      ch3_sat_val_o => (others => '0'),
      ch3_trig_trig_en_o => '0',
      ch3_trig_trig_pol_o => '0',
      ch3_trig_reserved_o => (others => '0'),
      ch3_trig_int_trig_thres_filt_o => (others => '0'),
      ch3_trig_int_trig_thres_o => (others => '0'),
      ch4_ctl_ssr_o => (others => '0'),
      ch4_gain_val_o => (others => '0'),
      ch4_offset_val_o => (others => '0'),
      ch4_sat_val_o => (others => '0'),
      ch4_trig_trig_en_o => '0',
      ch4_trig_trig_pol_o => '0',
      ch4_trig_reserved_o => (others => '0'),
      ch4_trig_int_trig_thres_filt_o => (others => '0'),
      ch4_trig_int_trig_thres_o => (others => '0')
      );
    function "or" (left, right: t_fmc_adc_100ms_csr_in_registers) return t_fmc_adc_100ms_csr_in_registers;
    function f_x_to_zero (x:std_logic) return std_logic;
    function f_x_to_zero (x:std_logic_vector) return std_logic_vector;
end package;

package body fmc_adc_100ms_csr_wbgen2_pkg is
function f_x_to_zero (x:std_logic) return std_logic is
begin
if x = '1' then
return '1';
else
return '0';
end if;
end function;
function f_x_to_zero (x:std_logic_vector) return std_logic_vector is
variable tmp: std_logic_vector(x'length-1 downto 0);
begin
for i in 0 to x'length-1 loop
if x(i) = '1' then
tmp(i):= '1';
else
tmp(i):= '0';
end if; 
end loop; 
return tmp;
end function;
function "or" (left, right: t_fmc_adc_100ms_csr_in_registers) return t_fmc_adc_100ms_csr_in_registers is
variable tmp: t_fmc_adc_100ms_csr_in_registers;
begin
tmp.sta_fsm_i := f_x_to_zero(left.sta_fsm_i) or f_x_to_zero(right.sta_fsm_i);
tmp.sta_serdes_pll_i := f_x_to_zero(left.sta_serdes_pll_i) or f_x_to_zero(right.sta_serdes_pll_i);
tmp.sta_serdes_synced_i := f_x_to_zero(left.sta_serdes_synced_i) or f_x_to_zero(right.sta_serdes_synced_i);
tmp.sta_acq_cfg_i := f_x_to_zero(left.sta_acq_cfg_i) or f_x_to_zero(right.sta_acq_cfg_i);
tmp.shots_cnt_val_i := f_x_to_zero(left.shots_cnt_val_i) or f_x_to_zero(right.shots_cnt_val_i);
tmp.trig_pos_i := f_x_to_zero(left.trig_pos_i) or f_x_to_zero(right.trig_pos_i);
tmp.fs_freq_i := f_x_to_zero(left.fs_freq_i) or f_x_to_zero(right.fs_freq_i);
tmp.samples_cnt_i := f_x_to_zero(left.samples_cnt_i) or f_x_to_zero(right.samples_cnt_i);
tmp.ch1_sta_val_i := f_x_to_zero(left.ch1_sta_val_i) or f_x_to_zero(right.ch1_sta_val_i);
tmp.ch2_sta_val_i := f_x_to_zero(left.ch2_sta_val_i) or f_x_to_zero(right.ch2_sta_val_i);
tmp.ch3_sta_val_i := f_x_to_zero(left.ch3_sta_val_i) or f_x_to_zero(right.ch3_sta_val_i);
tmp.ch4_sta_val_i := f_x_to_zero(left.ch4_sta_val_i) or f_x_to_zero(right.ch4_sta_val_i);
tmp.multi_depth_i := f_x_to_zero(left.multi_depth_i) or f_x_to_zero(right.multi_depth_i);
return tmp;
end function;
end package body;
