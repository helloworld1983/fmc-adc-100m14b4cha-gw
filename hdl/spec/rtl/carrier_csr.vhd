---------------------------------------------------------------------------------------
-- Title          : Wishbone slave core for Carrier control and status registers
---------------------------------------------------------------------------------------
-- File           : ../rtl/carrier_csr.vhd
-- Author         : auto-generated by wbgen2 from carrier_csr.wb
-- Created        : Wed Apr 23 10:05:23 2014
-- Standard       : VHDL'87
---------------------------------------------------------------------------------------
-- THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE carrier_csr.wb
-- DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!
---------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity carrier_csr is
  port (
    rst_n_i                                  : in     std_logic;
    clk_sys_i                                : in     std_logic;
    wb_adr_i                                 : in     std_logic_vector(1 downto 0);
    wb_dat_i                                 : in     std_logic_vector(31 downto 0);
    wb_dat_o                                 : out    std_logic_vector(31 downto 0);
    wb_cyc_i                                 : in     std_logic;
    wb_sel_i                                 : in     std_logic_vector(3 downto 0);
    wb_stb_i                                 : in     std_logic;
    wb_we_i                                  : in     std_logic;
    wb_ack_o                                 : out    std_logic;
    wb_stall_o                               : out    std_logic;
-- Port for std_logic_vector field: 'PCB revision' in reg: 'Carrier type and PCB version'
    carrier_csr_carrier_pcb_rev_i            : in     std_logic_vector(3 downto 0);
-- Port for std_logic_vector field: 'Reserved register' in reg: 'Carrier type and PCB version'
    carrier_csr_carrier_reserved_i           : in     std_logic_vector(11 downto 0);
-- Port for std_logic_vector field: 'Carrier type' in reg: 'Carrier type and PCB version'
    carrier_csr_carrier_type_i               : in     std_logic_vector(15 downto 0);
-- Port for BIT field: 'FMC presence' in reg: 'Status'
    carrier_csr_stat_fmc_pres_i              : in     std_logic;
-- Port for BIT field: 'GN4142 core P2L PLL status' in reg: 'Status'
    carrier_csr_stat_p2l_pll_lck_i           : in     std_logic;
-- Port for BIT field: 'System clock PLL status' in reg: 'Status'
    carrier_csr_stat_sys_pll_lck_i           : in     std_logic;
-- Port for BIT field: 'DDR3 calibration status' in reg: 'Status'
    carrier_csr_stat_ddr3_cal_done_i         : in     std_logic;
-- Port for BIT field: 'Green LED' in reg: 'Control'
    carrier_csr_ctrl_led_green_o             : out    std_logic;
-- Port for BIT field: 'Red LED' in reg: 'Control'
    carrier_csr_ctrl_led_red_o               : out    std_logic;
-- Port for BIT field: 'DAC clear' in reg: 'Control'
    carrier_csr_ctrl_dac_clr_n_o             : out    std_logic;
-- Ports for BIT field: 'State of the reset line' in reg: 'Reset Register'
    carrier_csr_rst_fmc0_n_o                 : out    std_logic;
    carrier_csr_rst_fmc0_n_i                 : in     std_logic;
    carrier_csr_rst_fmc0_n_load_o            : out    std_logic
  );
end carrier_csr;

architecture syn of carrier_csr is

signal carrier_csr_ctrl_led_green_int           : std_logic      ;
signal carrier_csr_ctrl_led_red_int             : std_logic      ;
signal carrier_csr_ctrl_dac_clr_n_int           : std_logic      ;
signal ack_sreg                                 : std_logic_vector(9 downto 0);
signal rddata_reg                               : std_logic_vector(31 downto 0);
signal wrdata_reg                               : std_logic_vector(31 downto 0);
signal bwsel_reg                                : std_logic_vector(3 downto 0);
signal rwaddr_reg                               : std_logic_vector(1 downto 0);
signal ack_in_progress                          : std_logic      ;
signal wr_int                                   : std_logic      ;
signal rd_int                                   : std_logic      ;
signal allones                                  : std_logic_vector(31 downto 0);
signal allzeros                                 : std_logic_vector(31 downto 0);

begin
-- Some internal signals assignments. For (foreseen) compatibility with other bus standards.
  wrdata_reg <= wb_dat_i;
  bwsel_reg <= wb_sel_i;
  rd_int <= wb_cyc_i and (wb_stb_i and (not wb_we_i));
  wr_int <= wb_cyc_i and (wb_stb_i and wb_we_i);
  allones <= (others => '1');
  allzeros <= (others => '0');
-- 
-- Main register bank access process.
  process (clk_sys_i, rst_n_i)
  begin
    if (rst_n_i = '0') then 
      ack_sreg <= "0000000000";
      ack_in_progress <= '0';
      rddata_reg <= "00000000000000000000000000000000";
      carrier_csr_ctrl_led_green_int <= '0';
      carrier_csr_ctrl_led_red_int <= '0';
      carrier_csr_ctrl_dac_clr_n_int <= '0';
      carrier_csr_rst_fmc0_n_load_o <= '0';
    elsif rising_edge(clk_sys_i) then
-- advance the ACK generator shift register
      ack_sreg(8 downto 0) <= ack_sreg(9 downto 1);
      ack_sreg(9) <= '0';
      if (ack_in_progress = '1') then
        if (ack_sreg(0) = '1') then
          carrier_csr_rst_fmc0_n_load_o <= '0';
          ack_in_progress <= '0';
        else
          carrier_csr_rst_fmc0_n_load_o <= '0';
        end if;
      else
        if ((wb_cyc_i = '1') and (wb_stb_i = '1')) then
          case rwaddr_reg(1 downto 0) is
          when "00" => 
            if (wb_we_i = '1') then
            end if;
            rddata_reg(3 downto 0) <= carrier_csr_carrier_pcb_rev_i;
            rddata_reg(15 downto 4) <= carrier_csr_carrier_reserved_i;
            rddata_reg(31 downto 16) <= carrier_csr_carrier_type_i;
            ack_sreg(0) <= '1';
            ack_in_progress <= '1';
          when "01" => 
            if (wb_we_i = '1') then
            end if;
            rddata_reg(0) <= carrier_csr_stat_fmc_pres_i;
            rddata_reg(1) <= carrier_csr_stat_p2l_pll_lck_i;
            rddata_reg(2) <= carrier_csr_stat_sys_pll_lck_i;
            rddata_reg(3) <= carrier_csr_stat_ddr3_cal_done_i;
            rddata_reg(4) <= 'X';
            rddata_reg(5) <= 'X';
            rddata_reg(6) <= 'X';
            rddata_reg(7) <= 'X';
            rddata_reg(8) <= 'X';
            rddata_reg(9) <= 'X';
            rddata_reg(10) <= 'X';
            rddata_reg(11) <= 'X';
            rddata_reg(12) <= 'X';
            rddata_reg(13) <= 'X';
            rddata_reg(14) <= 'X';
            rddata_reg(15) <= 'X';
            rddata_reg(16) <= 'X';
            rddata_reg(17) <= 'X';
            rddata_reg(18) <= 'X';
            rddata_reg(19) <= 'X';
            rddata_reg(20) <= 'X';
            rddata_reg(21) <= 'X';
            rddata_reg(22) <= 'X';
            rddata_reg(23) <= 'X';
            rddata_reg(24) <= 'X';
            rddata_reg(25) <= 'X';
            rddata_reg(26) <= 'X';
            rddata_reg(27) <= 'X';
            rddata_reg(28) <= 'X';
            rddata_reg(29) <= 'X';
            rddata_reg(30) <= 'X';
            rddata_reg(31) <= 'X';
            ack_sreg(0) <= '1';
            ack_in_progress <= '1';
          when "10" => 
            if (wb_we_i = '1') then
              carrier_csr_ctrl_led_green_int <= wrdata_reg(0);
              carrier_csr_ctrl_led_red_int <= wrdata_reg(1);
              carrier_csr_ctrl_dac_clr_n_int <= wrdata_reg(2);
            end if;
            rddata_reg(0) <= carrier_csr_ctrl_led_green_int;
            rddata_reg(1) <= carrier_csr_ctrl_led_red_int;
            rddata_reg(2) <= carrier_csr_ctrl_dac_clr_n_int;
            rddata_reg(3) <= 'X';
            rddata_reg(4) <= 'X';
            rddata_reg(5) <= 'X';
            rddata_reg(6) <= 'X';
            rddata_reg(7) <= 'X';
            rddata_reg(8) <= 'X';
            rddata_reg(9) <= 'X';
            rddata_reg(10) <= 'X';
            rddata_reg(11) <= 'X';
            rddata_reg(12) <= 'X';
            rddata_reg(13) <= 'X';
            rddata_reg(14) <= 'X';
            rddata_reg(15) <= 'X';
            rddata_reg(16) <= 'X';
            rddata_reg(17) <= 'X';
            rddata_reg(18) <= 'X';
            rddata_reg(19) <= 'X';
            rddata_reg(20) <= 'X';
            rddata_reg(21) <= 'X';
            rddata_reg(22) <= 'X';
            rddata_reg(23) <= 'X';
            rddata_reg(24) <= 'X';
            rddata_reg(25) <= 'X';
            rddata_reg(26) <= 'X';
            rddata_reg(27) <= 'X';
            rddata_reg(28) <= 'X';
            rddata_reg(29) <= 'X';
            rddata_reg(30) <= 'X';
            rddata_reg(31) <= 'X';
            ack_sreg(0) <= '1';
            ack_in_progress <= '1';
          when "11" => 
            if (wb_we_i = '1') then
              carrier_csr_rst_fmc0_n_load_o <= '1';
            end if;
            rddata_reg(0) <= carrier_csr_rst_fmc0_n_i;
            rddata_reg(1) <= 'X';
            rddata_reg(2) <= 'X';
            rddata_reg(3) <= 'X';
            rddata_reg(4) <= 'X';
            rddata_reg(5) <= 'X';
            rddata_reg(6) <= 'X';
            rddata_reg(7) <= 'X';
            rddata_reg(8) <= 'X';
            rddata_reg(9) <= 'X';
            rddata_reg(10) <= 'X';
            rddata_reg(11) <= 'X';
            rddata_reg(12) <= 'X';
            rddata_reg(13) <= 'X';
            rddata_reg(14) <= 'X';
            rddata_reg(15) <= 'X';
            rddata_reg(16) <= 'X';
            rddata_reg(17) <= 'X';
            rddata_reg(18) <= 'X';
            rddata_reg(19) <= 'X';
            rddata_reg(20) <= 'X';
            rddata_reg(21) <= 'X';
            rddata_reg(22) <= 'X';
            rddata_reg(23) <= 'X';
            rddata_reg(24) <= 'X';
            rddata_reg(25) <= 'X';
            rddata_reg(26) <= 'X';
            rddata_reg(27) <= 'X';
            rddata_reg(28) <= 'X';
            rddata_reg(29) <= 'X';
            rddata_reg(30) <= 'X';
            rddata_reg(31) <= 'X';
            ack_sreg(0) <= '1';
            ack_in_progress <= '1';
          when others =>
-- prevent the slave from hanging the bus on invalid address
            ack_in_progress <= '1';
            ack_sreg(0) <= '1';
          end case;
        end if;
      end if;
    end if;
  end process;
  
  
-- Drive the data output bus
  wb_dat_o <= rddata_reg;
-- PCB revision
-- Reserved register
-- Carrier type
-- FMC presence
-- GN4142 core P2L PLL status
-- System clock PLL status
-- DDR3 calibration status
-- Green LED
  carrier_csr_ctrl_led_green_o <= carrier_csr_ctrl_led_green_int;
-- Red LED
  carrier_csr_ctrl_led_red_o <= carrier_csr_ctrl_led_red_int;
-- DAC clear
  carrier_csr_ctrl_dac_clr_n_o <= carrier_csr_ctrl_dac_clr_n_int;
-- State of the reset line
  carrier_csr_rst_fmc0_n_o <= wrdata_reg(0);
  rwaddr_reg <= wb_adr_i;
  wb_stall_o <= (not ack_sreg(0)) and (wb_stb_i and wb_cyc_i);
-- ACK signal generation. Just pass the LSB of ACK counter.
  wb_ack_o <= ack_sreg(0);
end syn;
