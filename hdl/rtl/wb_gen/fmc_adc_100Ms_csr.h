/*
  Register definitions for slave core: FMC ADC 100MS/s core registers

  * File           : fmc_adc_100Ms_csr.h
  * Author         : auto-generated by wbgen2 from fmc_adc_100Ms_csr.wb
  * Created        : Tue Nov  6 10:51:54 2018
  * Standard       : ANSI C

    THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE fmc_adc_100Ms_csr.wb
    DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!

*/

#ifndef __WBGEN2_REGDEFS_FMC_ADC_100MS_CSR_WB
#define __WBGEN2_REGDEFS_FMC_ADC_100MS_CSR_WB

#ifdef __KERNEL__
#include <linux/types.h>
#else
#include <inttypes.h>
#endif

#if defined( __GNUC__)
#define PACKED __attribute__ ((packed))
#else
#error "Unsupported compiler?"
#endif

#ifndef __WBGEN2_MACROS_DEFINED__
#define __WBGEN2_MACROS_DEFINED__
#define WBGEN2_GEN_MASK(offset, size) (((1<<(size))-1) << (offset))
#define WBGEN2_GEN_WRITE(value, offset, size) (((value) & ((1<<(size))-1)) << (offset))
#define WBGEN2_GEN_READ(reg, offset, size) (((reg) >> (offset)) & ((1<<(size))-1))
#define WBGEN2_SIGN_EXTEND(value, bits) (((value) & (1<<bits) ? ~((1<<(bits))-1): 0 ) | (value))
#endif


/* definitions for register: Control register */

/* definitions for field: State machine commands (ignore on read) in reg: Control register */
#define FMC_ADC_100MS_CSR_CTL_FSM_CMD_MASK    WBGEN2_GEN_MASK(0, 2)
#define FMC_ADC_100MS_CSR_CTL_FSM_CMD_SHIFT   0
#define FMC_ADC_100MS_CSR_CTL_FSM_CMD_W(value) WBGEN2_GEN_WRITE(value, 0, 2)
#define FMC_ADC_100MS_CSR_CTL_FSM_CMD_R(reg)  WBGEN2_GEN_READ(reg, 0, 2)

/* definitions for field: FMC Si750 output enable in reg: Control register */
#define FMC_ADC_100MS_CSR_CTL_FMC_CLK_OE      WBGEN2_GEN_MASK(2, 1)

/* definitions for field: Offset DACs clear (active low) in reg: Control register */
#define FMC_ADC_100MS_CSR_CTL_OFFSET_DAC_CLR_N WBGEN2_GEN_MASK(3, 1)

/* definitions for field: Manual serdes bitslip (ignore on read) in reg: Control register */
#define FMC_ADC_100MS_CSR_CTL_MAN_BITSLIP     WBGEN2_GEN_MASK(4, 1)

/* definitions for field: Enable test data in reg: Control register */
#define FMC_ADC_100MS_CSR_CTL_TEST_DATA_EN    WBGEN2_GEN_MASK(5, 1)

/* definitions for field: Manual TRIG LED in reg: Control register */
#define FMC_ADC_100MS_CSR_CTL_TRIG_LED        WBGEN2_GEN_MASK(6, 1)

/* definitions for field: Manual ACQ LED in reg: Control register */
#define FMC_ADC_100MS_CSR_CTL_ACQ_LED         WBGEN2_GEN_MASK(7, 1)

/* definitions for field: Clear trigger status in reg: Control register */
#define FMC_ADC_100MS_CSR_CTL_CLEAR_TRIG_STAT WBGEN2_GEN_MASK(8, 1)

/* definitions for register: Status register */

/* definitions for field: State machine status in reg: Status register */
#define FMC_ADC_100MS_CSR_STA_FSM_MASK        WBGEN2_GEN_MASK(0, 3)
#define FMC_ADC_100MS_CSR_STA_FSM_SHIFT       0
#define FMC_ADC_100MS_CSR_STA_FSM_W(value)    WBGEN2_GEN_WRITE(value, 0, 3)
#define FMC_ADC_100MS_CSR_STA_FSM_R(reg)      WBGEN2_GEN_READ(reg, 0, 3)

/* definitions for field: SerDes PLL status in reg: Status register */
#define FMC_ADC_100MS_CSR_STA_SERDES_PLL      WBGEN2_GEN_MASK(3, 1)

/* definitions for field: SerDes synchronization status in reg: Status register */
#define FMC_ADC_100MS_CSR_STA_SERDES_SYNCED   WBGEN2_GEN_MASK(4, 1)

/* definitions for field: Acquisition configuration status in reg: Status register */
#define FMC_ADC_100MS_CSR_STA_ACQ_CFG         WBGEN2_GEN_MASK(5, 1)

/* definitions for register: Trigger status */

/* definitions for field: External trigger input in reg: Trigger status */
#define FMC_ADC_100MS_CSR_TRIG_STAT_EXT       WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Software trigger in reg: Trigger status */
#define FMC_ADC_100MS_CSR_TRIG_STAT_SW        WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Timetag trigger in reg: Trigger status */
#define FMC_ADC_100MS_CSR_TRIG_STAT_TIME      WBGEN2_GEN_MASK(4, 1)

/* definitions for field: Channel 1 internal threshold trigger in reg: Trigger status */
#define FMC_ADC_100MS_CSR_TRIG_STAT_CH1       WBGEN2_GEN_MASK(8, 1)

/* definitions for field: Channel 2 internal threshold trigger in reg: Trigger status */
#define FMC_ADC_100MS_CSR_TRIG_STAT_CH2       WBGEN2_GEN_MASK(9, 1)

/* definitions for field: Channel 3 internal threshold trigger in reg: Trigger status */
#define FMC_ADC_100MS_CSR_TRIG_STAT_CH3       WBGEN2_GEN_MASK(10, 1)

/* definitions for field: Channel 4 internal threshold trigger in reg: Trigger status */
#define FMC_ADC_100MS_CSR_TRIG_STAT_CH4       WBGEN2_GEN_MASK(11, 1)

/* definitions for register: Trigger enable */

/* definitions for field: External trigger input in reg: Trigger enable */
#define FMC_ADC_100MS_CSR_TRIG_EN_EXT         WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Software trigger in reg: Trigger enable */
#define FMC_ADC_100MS_CSR_TRIG_EN_SW          WBGEN2_GEN_MASK(1, 1)

/* definitions for field: Timetag trigger in reg: Trigger enable */
#define FMC_ADC_100MS_CSR_TRIG_EN_TIME        WBGEN2_GEN_MASK(4, 1)

/* definitions for field: Alternate timetag trigger in reg: Trigger enable */
#define FMC_ADC_100MS_CSR_TRIG_EN_ALT_TIME    WBGEN2_GEN_MASK(5, 1)

/* definitions for field: Channel 1 internal threshold trigger in reg: Trigger enable */
#define FMC_ADC_100MS_CSR_TRIG_EN_CH1         WBGEN2_GEN_MASK(8, 1)

/* definitions for field: Channel 2 internal threshold trigger in reg: Trigger enable */
#define FMC_ADC_100MS_CSR_TRIG_EN_CH2         WBGEN2_GEN_MASK(9, 1)

/* definitions for field: Channel 3 internal threshold trigger in reg: Trigger enable */
#define FMC_ADC_100MS_CSR_TRIG_EN_CH3         WBGEN2_GEN_MASK(10, 1)

/* definitions for field: Channel 4 internal threshold trigger in reg: Trigger enable */
#define FMC_ADC_100MS_CSR_TRIG_EN_CH4         WBGEN2_GEN_MASK(11, 1)

/* definitions for register: Trigger polarity */

/* definitions for field: External trigger input in reg: Trigger polarity */
#define FMC_ADC_100MS_CSR_TRIG_POL_EXT        WBGEN2_GEN_MASK(0, 1)

/* definitions for field: Channel 1 internal threshold trigger in reg: Trigger polarity */
#define FMC_ADC_100MS_CSR_TRIG_POL_CH1        WBGEN2_GEN_MASK(8, 1)

/* definitions for field: Channel 2 internal threshold trigger in reg: Trigger polarity */
#define FMC_ADC_100MS_CSR_TRIG_POL_CH2        WBGEN2_GEN_MASK(9, 1)

/* definitions for field: Channel 3 internal threshold trigger in reg: Trigger polarity */
#define FMC_ADC_100MS_CSR_TRIG_POL_CH3        WBGEN2_GEN_MASK(10, 1)

/* definitions for field: Channel 4 internal threshold trigger in reg: Trigger polarity */
#define FMC_ADC_100MS_CSR_TRIG_POL_CH4        WBGEN2_GEN_MASK(11, 1)

/* definitions for register: External trigger delay */

/* definitions for register: Software trigger */

/* definitions for register: Number of shots */

/* definitions for field: Number of shots in reg: Number of shots */
#define FMC_ADC_100MS_CSR_SHOTS_NB_MASK       WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_SHOTS_NB_SHIFT      0
#define FMC_ADC_100MS_CSR_SHOTS_NB_W(value)   WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_SHOTS_NB_R(reg)     WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Multi-shot sample depth register */

/* definitions for register: Remaining shots counter */

/* definitions for field: Remaining shots counter in reg: Remaining shots counter */
#define FMC_ADC_100MS_CSR_SHOTS_CNT_VAL_MASK  WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_SHOTS_CNT_VAL_SHIFT 0
#define FMC_ADC_100MS_CSR_SHOTS_CNT_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_SHOTS_CNT_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Trigger address register */

/* definitions for register: Sampling clock frequency */

/* definitions for register: Sample rate */

/* definitions for field: Undersampling ratio in reg: Sample rate */
#define FMC_ADC_100MS_CSR_SR_UNDERSAMPLE_MASK WBGEN2_GEN_MASK(0, 32)
#define FMC_ADC_100MS_CSR_SR_UNDERSAMPLE_SHIFT 0
#define FMC_ADC_100MS_CSR_SR_UNDERSAMPLE_W(value) WBGEN2_GEN_WRITE(value, 0, 32)
#define FMC_ADC_100MS_CSR_SR_UNDERSAMPLE_R(reg) WBGEN2_GEN_READ(reg, 0, 32)

/* definitions for register: Pre-trigger samples */

/* definitions for register: Post-trigger samples */

/* definitions for register: Samples counter */

/* definitions for register: Channel 1 control register */

/* definitions for field: Solid state relays control for channel 1 in reg: Channel 1 control register */
#define FMC_ADC_100MS_CSR_CH1_CTL_SSR_MASK    WBGEN2_GEN_MASK(0, 7)
#define FMC_ADC_100MS_CSR_CH1_CTL_SSR_SHIFT   0
#define FMC_ADC_100MS_CSR_CH1_CTL_SSR_W(value) WBGEN2_GEN_WRITE(value, 0, 7)
#define FMC_ADC_100MS_CSR_CH1_CTL_SSR_R(reg)  WBGEN2_GEN_READ(reg, 0, 7)

/* definitions for register: Channel 1 status register */

/* definitions for field: Channel 1 current ADC value in reg: Channel 1 status register */
#define FMC_ADC_100MS_CSR_CH1_STA_VAL_MASK    WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH1_STA_VAL_SHIFT   0
#define FMC_ADC_100MS_CSR_CH1_STA_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH1_STA_VAL_R(reg)  WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 1 gain calibration register */

/* definitions for field: Gain calibration for channel 1 in reg: Channel 1 gain calibration register */
#define FMC_ADC_100MS_CSR_CH1_GAIN_VAL_MASK   WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH1_GAIN_VAL_SHIFT  0
#define FMC_ADC_100MS_CSR_CH1_GAIN_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH1_GAIN_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 1 offset calibration register */

/* definitions for field: Offset calibration for channel 1 in reg: Channel 1 offset calibration register */
#define FMC_ADC_100MS_CSR_CH1_OFFSET_VAL_MASK WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH1_OFFSET_VAL_SHIFT 0
#define FMC_ADC_100MS_CSR_CH1_OFFSET_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH1_OFFSET_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 1 saturation register */

/* definitions for field: Saturation value for channel 1 in reg: Channel 1 saturation register */
#define FMC_ADC_100MS_CSR_CH1_SAT_VAL_MASK    WBGEN2_GEN_MASK(0, 15)
#define FMC_ADC_100MS_CSR_CH1_SAT_VAL_SHIFT   0
#define FMC_ADC_100MS_CSR_CH1_SAT_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 15)
#define FMC_ADC_100MS_CSR_CH1_SAT_VAL_R(reg)  WBGEN2_GEN_READ(reg, 0, 15)

/* definitions for register: Channel 1 trigger threshold configuration register */

/* definitions for field: Threshold for internal trigger in reg: Channel 1 trigger threshold configuration register */
#define FMC_ADC_100MS_CSR_CH1_TRIG_THRES_VAL_MASK WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH1_TRIG_THRES_VAL_SHIFT 0
#define FMC_ADC_100MS_CSR_CH1_TRIG_THRES_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH1_TRIG_THRES_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Internal trigger threshold hysteresis in reg: Channel 1 trigger threshold configuration register */
#define FMC_ADC_100MS_CSR_CH1_TRIG_THRES_HYST_MASK WBGEN2_GEN_MASK(16, 16)
#define FMC_ADC_100MS_CSR_CH1_TRIG_THRES_HYST_SHIFT 16
#define FMC_ADC_100MS_CSR_CH1_TRIG_THRES_HYST_W(value) WBGEN2_GEN_WRITE(value, 16, 16)
#define FMC_ADC_100MS_CSR_CH1_TRIG_THRES_HYST_R(reg) WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 1 trigger delay */

/* definitions for register: Channel 2 control register */

/* definitions for field: Solid state relays control for channel 2 in reg: Channel 2 control register */
#define FMC_ADC_100MS_CSR_CH2_CTL_SSR_MASK    WBGEN2_GEN_MASK(0, 7)
#define FMC_ADC_100MS_CSR_CH2_CTL_SSR_SHIFT   0
#define FMC_ADC_100MS_CSR_CH2_CTL_SSR_W(value) WBGEN2_GEN_WRITE(value, 0, 7)
#define FMC_ADC_100MS_CSR_CH2_CTL_SSR_R(reg)  WBGEN2_GEN_READ(reg, 0, 7)

/* definitions for register: Channel 2 status register */

/* definitions for field: Channel 2 current ACD value in reg: Channel 2 status register */
#define FMC_ADC_100MS_CSR_CH2_STA_VAL_MASK    WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH2_STA_VAL_SHIFT   0
#define FMC_ADC_100MS_CSR_CH2_STA_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH2_STA_VAL_R(reg)  WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 2 gain calibration register */

/* definitions for field: Gain calibration for channel 2 in reg: Channel 2 gain calibration register */
#define FMC_ADC_100MS_CSR_CH2_GAIN_VAL_MASK   WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH2_GAIN_VAL_SHIFT  0
#define FMC_ADC_100MS_CSR_CH2_GAIN_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH2_GAIN_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 2 offset calibration register */

/* definitions for field: Offset calibration for channel 2 in reg: Channel 2 offset calibration register */
#define FMC_ADC_100MS_CSR_CH2_OFFSET_VAL_MASK WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH2_OFFSET_VAL_SHIFT 0
#define FMC_ADC_100MS_CSR_CH2_OFFSET_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH2_OFFSET_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 2 saturation register */

/* definitions for field: Saturation value for channel 2 in reg: Channel 2 saturation register */
#define FMC_ADC_100MS_CSR_CH2_SAT_VAL_MASK    WBGEN2_GEN_MASK(0, 15)
#define FMC_ADC_100MS_CSR_CH2_SAT_VAL_SHIFT   0
#define FMC_ADC_100MS_CSR_CH2_SAT_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 15)
#define FMC_ADC_100MS_CSR_CH2_SAT_VAL_R(reg)  WBGEN2_GEN_READ(reg, 0, 15)

/* definitions for register: Channel 2 trigger threshold configuration register */

/* definitions for field: Threshold for internal trigger in reg: Channel 2 trigger threshold configuration register */
#define FMC_ADC_100MS_CSR_CH2_TRIG_THRES_VAL_MASK WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH2_TRIG_THRES_VAL_SHIFT 0
#define FMC_ADC_100MS_CSR_CH2_TRIG_THRES_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH2_TRIG_THRES_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Internal trigger threshold hysteresis in reg: Channel 2 trigger threshold configuration register */
#define FMC_ADC_100MS_CSR_CH2_TRIG_THRES_HYST_MASK WBGEN2_GEN_MASK(16, 16)
#define FMC_ADC_100MS_CSR_CH2_TRIG_THRES_HYST_SHIFT 16
#define FMC_ADC_100MS_CSR_CH2_TRIG_THRES_HYST_W(value) WBGEN2_GEN_WRITE(value, 16, 16)
#define FMC_ADC_100MS_CSR_CH2_TRIG_THRES_HYST_R(reg) WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 2 trigger delay */

/* definitions for register: Channel 3 control register */

/* definitions for field: Solid state relays control for channel 3 in reg: Channel 3 control register */
#define FMC_ADC_100MS_CSR_CH3_CTL_SSR_MASK    WBGEN2_GEN_MASK(0, 7)
#define FMC_ADC_100MS_CSR_CH3_CTL_SSR_SHIFT   0
#define FMC_ADC_100MS_CSR_CH3_CTL_SSR_W(value) WBGEN2_GEN_WRITE(value, 0, 7)
#define FMC_ADC_100MS_CSR_CH3_CTL_SSR_R(reg)  WBGEN2_GEN_READ(reg, 0, 7)

/* definitions for register: Channel 3 status register */

/* definitions for field: Channel 3 current ADC value in reg: Channel 3 status register */
#define FMC_ADC_100MS_CSR_CH3_STA_VAL_MASK    WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH3_STA_VAL_SHIFT   0
#define FMC_ADC_100MS_CSR_CH3_STA_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH3_STA_VAL_R(reg)  WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 3 gain calibration register */

/* definitions for field: Gain calibration for channel 3 in reg: Channel 3 gain calibration register */
#define FMC_ADC_100MS_CSR_CH3_GAIN_VAL_MASK   WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH3_GAIN_VAL_SHIFT  0
#define FMC_ADC_100MS_CSR_CH3_GAIN_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH3_GAIN_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 3 offset calibration register */

/* definitions for field: Offset calibration for channel 3 in reg: Channel 3 offset calibration register */
#define FMC_ADC_100MS_CSR_CH3_OFFSET_VAL_MASK WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH3_OFFSET_VAL_SHIFT 0
#define FMC_ADC_100MS_CSR_CH3_OFFSET_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH3_OFFSET_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 3 saturation register */

/* definitions for field: Saturation value for channel 3 in reg: Channel 3 saturation register */
#define FMC_ADC_100MS_CSR_CH3_SAT_VAL_MASK    WBGEN2_GEN_MASK(0, 15)
#define FMC_ADC_100MS_CSR_CH3_SAT_VAL_SHIFT   0
#define FMC_ADC_100MS_CSR_CH3_SAT_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 15)
#define FMC_ADC_100MS_CSR_CH3_SAT_VAL_R(reg)  WBGEN2_GEN_READ(reg, 0, 15)

/* definitions for register: Channel 3 trigger threshold configuration register */

/* definitions for field: Threshold for internal trigger in reg: Channel 3 trigger threshold configuration register */
#define FMC_ADC_100MS_CSR_CH3_TRIG_THRES_VAL_MASK WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH3_TRIG_THRES_VAL_SHIFT 0
#define FMC_ADC_100MS_CSR_CH3_TRIG_THRES_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH3_TRIG_THRES_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Internal trigger threshold hysteresis in reg: Channel 3 trigger threshold configuration register */
#define FMC_ADC_100MS_CSR_CH3_TRIG_THRES_HYST_MASK WBGEN2_GEN_MASK(16, 16)
#define FMC_ADC_100MS_CSR_CH3_TRIG_THRES_HYST_SHIFT 16
#define FMC_ADC_100MS_CSR_CH3_TRIG_THRES_HYST_W(value) WBGEN2_GEN_WRITE(value, 16, 16)
#define FMC_ADC_100MS_CSR_CH3_TRIG_THRES_HYST_R(reg) WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 3 trigger delay */

/* definitions for register: Channel 4 control register */

/* definitions for field: Solid state relays control for channel 4 in reg: Channel 4 control register */
#define FMC_ADC_100MS_CSR_CH4_CTL_SSR_MASK    WBGEN2_GEN_MASK(0, 7)
#define FMC_ADC_100MS_CSR_CH4_CTL_SSR_SHIFT   0
#define FMC_ADC_100MS_CSR_CH4_CTL_SSR_W(value) WBGEN2_GEN_WRITE(value, 0, 7)
#define FMC_ADC_100MS_CSR_CH4_CTL_SSR_R(reg)  WBGEN2_GEN_READ(reg, 0, 7)

/* definitions for register: Channel 4 status register */

/* definitions for field: Channel 4 current ADC value in reg: Channel 4 status register */
#define FMC_ADC_100MS_CSR_CH4_STA_VAL_MASK    WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH4_STA_VAL_SHIFT   0
#define FMC_ADC_100MS_CSR_CH4_STA_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH4_STA_VAL_R(reg)  WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 4 gain calibration register */

/* definitions for field: Gain calibration for channel 4 in reg: Channel 4 gain calibration register */
#define FMC_ADC_100MS_CSR_CH4_GAIN_VAL_MASK   WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH4_GAIN_VAL_SHIFT  0
#define FMC_ADC_100MS_CSR_CH4_GAIN_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH4_GAIN_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 4 offset calibration register */

/* definitions for field: Offset calibration for channel 4 in reg: Channel 4 offset calibration register */
#define FMC_ADC_100MS_CSR_CH4_OFFSET_VAL_MASK WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH4_OFFSET_VAL_SHIFT 0
#define FMC_ADC_100MS_CSR_CH4_OFFSET_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH4_OFFSET_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for register: Channel 4 saturation register */

/* definitions for field: Saturation value for channel 4 in reg: Channel 4 saturation register */
#define FMC_ADC_100MS_CSR_CH4_SAT_VAL_MASK    WBGEN2_GEN_MASK(0, 15)
#define FMC_ADC_100MS_CSR_CH4_SAT_VAL_SHIFT   0
#define FMC_ADC_100MS_CSR_CH4_SAT_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 15)
#define FMC_ADC_100MS_CSR_CH4_SAT_VAL_R(reg)  WBGEN2_GEN_READ(reg, 0, 15)

/* definitions for register: Channel 4 trigger threshold configuration register */

/* definitions for field: Threshold for internal trigger in reg: Channel 4 trigger threshold configuration register */
#define FMC_ADC_100MS_CSR_CH4_TRIG_THRES_VAL_MASK WBGEN2_GEN_MASK(0, 16)
#define FMC_ADC_100MS_CSR_CH4_TRIG_THRES_VAL_SHIFT 0
#define FMC_ADC_100MS_CSR_CH4_TRIG_THRES_VAL_W(value) WBGEN2_GEN_WRITE(value, 0, 16)
#define FMC_ADC_100MS_CSR_CH4_TRIG_THRES_VAL_R(reg) WBGEN2_GEN_READ(reg, 0, 16)

/* definitions for field: Internal trigger threshold hysteresis in reg: Channel 4 trigger threshold configuration register */
#define FMC_ADC_100MS_CSR_CH4_TRIG_THRES_HYST_MASK WBGEN2_GEN_MASK(16, 16)
#define FMC_ADC_100MS_CSR_CH4_TRIG_THRES_HYST_SHIFT 16
#define FMC_ADC_100MS_CSR_CH4_TRIG_THRES_HYST_W(value) WBGEN2_GEN_WRITE(value, 16, 16)
#define FMC_ADC_100MS_CSR_CH4_TRIG_THRES_HYST_R(reg) WBGEN2_GEN_READ(reg, 16, 16)

/* definitions for register: Channel 4 trigger delay */

PACKED struct FMC_ADC_100MS_CSR_WB {
  /* [0x0]: REG Control register */
  uint32_t CTL;
  /* [0x4]: REG Status register */
  uint32_t STA;
  /* [0x8]: REG Trigger status */
  uint32_t TRIG_STAT;
  /* [0xc]: REG Trigger enable */
  uint32_t TRIG_EN;
  /* [0x10]: REG Trigger polarity */
  uint32_t TRIG_POL;
  /* [0x14]: REG External trigger delay */
  uint32_t EXT_TRIG_DLY;
  /* [0x18]: REG Software trigger */
  uint32_t SW_TRIG;
  /* [0x1c]: REG Number of shots */
  uint32_t SHOTS;
  /* [0x20]: REG Multi-shot sample depth register */
  uint32_t MULTI_DEPTH;
  /* [0x24]: REG Remaining shots counter */
  uint32_t SHOTS_CNT;
  /* [0x28]: REG Trigger address register */
  uint32_t TRIG_POS;
  /* [0x2c]: REG Sampling clock frequency */
  uint32_t FS_FREQ;
  /* [0x30]: REG Sample rate */
  uint32_t SR;
  /* [0x34]: REG Pre-trigger samples */
  uint32_t PRE_SAMPLES;
  /* [0x38]: REG Post-trigger samples */
  uint32_t POST_SAMPLES;
  /* [0x3c]: REG Samples counter */
  uint32_t SAMPLES_CNT;
  /* padding to: 32 words */
  uint32_t __padding_0[16];
  /* [0x80]: REG Channel 1 control register */
  uint32_t CH1_CTL;
  /* [0x84]: REG Channel 1 status register */
  uint32_t CH1_STA;
  /* [0x88]: REG Channel 1 gain calibration register */
  uint32_t CH1_GAIN;
  /* [0x8c]: REG Channel 1 offset calibration register */
  uint32_t CH1_OFFSET;
  /* [0x90]: REG Channel 1 saturation register */
  uint32_t CH1_SAT;
  /* [0x94]: REG Channel 1 trigger threshold configuration register */
  uint32_t CH1_TRIG_THRES;
  /* [0x98]: REG Channel 1 trigger delay */
  uint32_t CH1_TRIG_DLY;
  /* padding to: 64 words */
  uint32_t __padding_1[25];
  /* [0x100]: REG Channel 2 control register */
  uint32_t CH2_CTL;
  /* [0x104]: REG Channel 2 status register */
  uint32_t CH2_STA;
  /* [0x108]: REG Channel 2 gain calibration register */
  uint32_t CH2_GAIN;
  /* [0x10c]: REG Channel 2 offset calibration register */
  uint32_t CH2_OFFSET;
  /* [0x110]: REG Channel 2 saturation register */
  uint32_t CH2_SAT;
  /* [0x114]: REG Channel 2 trigger threshold configuration register */
  uint32_t CH2_TRIG_THRES;
  /* [0x118]: REG Channel 2 trigger delay */
  uint32_t CH2_TRIG_DLY;
  /* padding to: 96 words */
  uint32_t __padding_2[25];
  /* [0x180]: REG Channel 3 control register */
  uint32_t CH3_CTL;
  /* [0x184]: REG Channel 3 status register */
  uint32_t CH3_STA;
  /* [0x188]: REG Channel 3 gain calibration register */
  uint32_t CH3_GAIN;
  /* [0x18c]: REG Channel 3 offset calibration register */
  uint32_t CH3_OFFSET;
  /* [0x190]: REG Channel 3 saturation register */
  uint32_t CH3_SAT;
  /* [0x194]: REG Channel 3 trigger threshold configuration register */
  uint32_t CH3_TRIG_THRES;
  /* [0x198]: REG Channel 3 trigger delay */
  uint32_t CH3_TRIG_DLY;
  /* padding to: 128 words */
  uint32_t __padding_3[25];
  /* [0x200]: REG Channel 4 control register */
  uint32_t CH4_CTL;
  /* [0x204]: REG Channel 4 status register */
  uint32_t CH4_STA;
  /* [0x208]: REG Channel 4 gain calibration register */
  uint32_t CH4_GAIN;
  /* [0x20c]: REG Channel 4 offset calibration register */
  uint32_t CH4_OFFSET;
  /* [0x210]: REG Channel 4 saturation register */
  uint32_t CH4_SAT;
  /* [0x214]: REG Channel 4 trigger threshold configuration register */
  uint32_t CH4_TRIG_THRES;
  /* [0x218]: REG Channel 4 trigger delay */
  uint32_t CH4_TRIG_DLY;
};

#endif
