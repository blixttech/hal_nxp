/*
 * NOTE: Autogenerated file by gen_soc_headers.py
 * for MCXC141VLH/signal_configuration.xml
 *
 * Copyright 2024 NXP
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _ZEPHYR_DTS_BINDING_MCXC141VLH_
#define _ZEPHYR_DTS_BINDING_MCXC141VLH_

#define KINETIS_MUX(port, pin, mux)		\
	(((((port) - 'A') & 0xF) << 28) |	\
	(((pin) & 0x3F) << 22) |		\
	(((mux) & 0x7) << 8))

#define PTA0 KINETIS_MUX('A',0,1) /* PTA0 */
#define TPM0_CH5_PTA0 KINETIS_MUX('A',0,3) /* PTA0 */
#define SWD_CLK_PTA0 KINETIS_MUX('A',0,7) /* PTA0 */
#define PTA1 KINETIS_MUX('A',1,1) /* PTA1 */
#define LPUART0_RX_PTA1 KINETIS_MUX('A',1,2) /* PTA1 */
#define TPM2_CH0_PTA1 KINETIS_MUX('A',1,3) /* PTA1 */
#define PTA2 KINETIS_MUX('A',2,1) /* PTA2 */
#define LPUART0_TX_PTA2 KINETIS_MUX('A',2,2) /* PTA2 */
#define TPM2_CH1_PTA2 KINETIS_MUX('A',2,3) /* PTA2 */
#define PTA3 KINETIS_MUX('A',3,1) /* PTA3 */
#define I2C1_SCL_PTA3 KINETIS_MUX('A',3,2) /* PTA3 */
#define TPM0_CH0_PTA3 KINETIS_MUX('A',3,3) /* PTA3 */
#define SWD_DIO_PTA3 KINETIS_MUX('A',3,7) /* PTA3 */
#define PTA4 KINETIS_MUX('A',4,1) /* PTA4 */
#define I2C1_SDA_PTA4 KINETIS_MUX('A',4,2) /* PTA4 */
#define TPM0_CH1_PTA4 KINETIS_MUX('A',4,3) /* PTA4 */
#define NMI_b_PTA4 KINETIS_MUX('A',4,7) /* PTA4 */
#define PTA5 KINETIS_MUX('A',5,1) /* PTA5 */
#define TPM0_CH2_PTA5 KINETIS_MUX('A',5,3) /* PTA5 */
#define PTA12 KINETIS_MUX('A',12,1) /* PTA12 */
#define TPM1_CH0_PTA12 KINETIS_MUX('A',12,3) /* PTA12 */
#define PTA13 KINETIS_MUX('A',13,1) /* PTA13 */
#define TPM1_CH1_PTA13 KINETIS_MUX('A',13,3) /* PTA13 */
#define EXTAL0_PTA18 KINETIS_MUX('A',18,0) /* PTA18 */
#define PTA18 KINETIS_MUX('A',18,1) /* PTA18 */
#define LPUART1_RX_PTA18 KINETIS_MUX('A',18,3) /* PTA18 */
#define TPM_CLKIN0_PTA18 KINETIS_MUX('A',18,4) /* PTA18 */
#define XTAL0_PTA19 KINETIS_MUX('A',19,0) /* PTA19 */
#define PTA19 KINETIS_MUX('A',19,1) /* PTA19 */
#define LPUART1_TX_PTA19 KINETIS_MUX('A',19,3) /* PTA19 */
#define TPM_CLKIN1_PTA19 KINETIS_MUX('A',19,4) /* PTA19 */
#define LPTMR0_ALT1_PTA19 KINETIS_MUX('A',19,6) /* PTA19 */
#define PTA20 KINETIS_MUX('A',20,1) /* PTA20 */
#define RESET_b_PTA20 KINETIS_MUX('A',20,7) /* PTA20 */
#define ADC0_SE8_PTB0 KINETIS_MUX('B',0,0) /* PTB0 */
#define PTB0 KINETIS_MUX('B',0,1) /* PTB0 */
#define LLWU_P5_PTB0 KINETIS_MUX('B',0,1) /* PTB0 */
#define I2C0_SCL_PTB0 KINETIS_MUX('B',0,2) /* PTB0 */
#define TPM1_CH0_PTB0 KINETIS_MUX('B',0,3) /* PTB0 */
#define SPI1_MOSI_PTB0 KINETIS_MUX('B',0,4) /* PTB0 */
#define SPI1_MISO_PTB0 KINETIS_MUX('B',0,5) /* PTB0 */
#define ADC0_SE9_PTB1 KINETIS_MUX('B',1,0) /* PTB1 */
#define PTB1 KINETIS_MUX('B',1,1) /* PTB1 */
#define I2C0_SDA_PTB1 KINETIS_MUX('B',1,2) /* PTB1 */
#define TPM1_CH1_PTB1 KINETIS_MUX('B',1,3) /* PTB1 */
#define SPI1_MISO_PTB1 KINETIS_MUX('B',1,4) /* PTB1 */
#define SPI1_MOSI_PTB1 KINETIS_MUX('B',1,5) /* PTB1 */
#define ADC0_SE12_PTB2 KINETIS_MUX('B',2,0) /* PTB2 */
#define PTB2 KINETIS_MUX('B',2,1) /* PTB2 */
#define I2C0_SCL_PTB2 KINETIS_MUX('B',2,2) /* PTB2 */
#define TPM2_CH0_PTB2 KINETIS_MUX('B',2,3) /* PTB2 */
#define ADC0_SE13_PTB3 KINETIS_MUX('B',3,0) /* PTB3 */
#define PTB3 KINETIS_MUX('B',3,1) /* PTB3 */
#define I2C0_SDA_PTB3 KINETIS_MUX('B',3,2) /* PTB3 */
#define TPM2_CH1_PTB3 KINETIS_MUX('B',3,3) /* PTB3 */
#define PTB16 KINETIS_MUX('B',16,1) /* PTB16 */
#define SPI1_MOSI_PTB16 KINETIS_MUX('B',16,2) /* PTB16 */
#define LPUART0_RX_PTB16 KINETIS_MUX('B',16,3) /* PTB16 */
#define TPM_CLKIN0_PTB16 KINETIS_MUX('B',16,4) /* PTB16 */
#define SPI1_MISO_PTB16 KINETIS_MUX('B',16,5) /* PTB16 */
#define PTB17 KINETIS_MUX('B',17,1) /* PTB17 */
#define SPI1_MISO_PTB17 KINETIS_MUX('B',17,2) /* PTB17 */
#define LPUART0_TX_PTB17 KINETIS_MUX('B',17,3) /* PTB17 */
#define TPM_CLKIN1_PTB17 KINETIS_MUX('B',17,4) /* PTB17 */
#define SPI1_MOSI_PTB17 KINETIS_MUX('B',17,5) /* PTB17 */
#define PTB18 KINETIS_MUX('B',18,1) /* PTB18 */
#define TPM2_CH0_PTB18 KINETIS_MUX('B',18,3) /* PTB18 */
#define PTB19 KINETIS_MUX('B',19,1) /* PTB19 */
#define TPM2_CH1_PTB19 KINETIS_MUX('B',19,3) /* PTB19 */
#define ADC0_SE14_PTC0 KINETIS_MUX('C',0,0) /* PTC0 */
#define PTC0 KINETIS_MUX('C',0,1) /* PTC0 */
#define EXTRG_IN_PTC0 KINETIS_MUX('C',0,3) /* PTC0 */
#define CMP0_OUT_PTC0 KINETIS_MUX('C',0,5) /* PTC0 */
#define ADC0_SE15_PTC1 KINETIS_MUX('C',1,0) /* PTC1 */
#define RTC_CLKIN_PTC1 KINETIS_MUX('C',1,1) /* PTC1 */
#define LLWU_P6_PTC1 KINETIS_MUX('C',1,1) /* PTC1 */
#define PTC1 KINETIS_MUX('C',1,1) /* PTC1 */
#define I2C1_SCL_PTC1 KINETIS_MUX('C',1,2) /* PTC1 */
#define TPM0_CH0_PTC1 KINETIS_MUX('C',1,4) /* PTC1 */
#define ADC0_SE11_PTC2 KINETIS_MUX('C',2,0) /* PTC2 */
#define PTC2 KINETIS_MUX('C',2,1) /* PTC2 */
#define I2C1_SDA_PTC2 KINETIS_MUX('C',2,2) /* PTC2 */
#define TPM0_CH1_PTC2 KINETIS_MUX('C',2,4) /* PTC2 */
#define PTC3 KINETIS_MUX('C',3,1) /* PTC3 */
#define LLWU_P7_PTC3 KINETIS_MUX('C',3,1) /* PTC3 */
#define SPI1_SCK_PTC3 KINETIS_MUX('C',3,2) /* PTC3 */
#define LPUART1_RX_PTC3 KINETIS_MUX('C',3,3) /* PTC3 */
#define TPM0_CH2_PTC3 KINETIS_MUX('C',3,4) /* PTC3 */
#define CLKOUT_PTC3 KINETIS_MUX('C',3,5) /* PTC3 */
#define LLWU_P8_PTC4 KINETIS_MUX('C',4,1) /* PTC4 */
#define PTC4 KINETIS_MUX('C',4,1) /* PTC4 */
#define SPI0_PCS0_PTC4 KINETIS_MUX('C',4,2) /* PTC4 */
#define LPUART1_TX_PTC4 KINETIS_MUX('C',4,3) /* PTC4 */
#define TPM0_CH3_PTC4 KINETIS_MUX('C',4,4) /* PTC4 */
#define SPI1_PCS0_PTC4 KINETIS_MUX('C',4,5) /* PTC4 */
#define PTC5 KINETIS_MUX('C',5,1) /* PTC5 */
#define LLWU_P9_PTC5 KINETIS_MUX('C',5,1) /* PTC5 */
#define SPI0_SCK_PTC5 KINETIS_MUX('C',5,2) /* PTC5 */
#define LPTMR0_ALT2_PTC5 KINETIS_MUX('C',5,3) /* PTC5 */
#define CMP0_OUT_PTC5 KINETIS_MUX('C',5,6) /* PTC5 */
#define CMP0_IN0_PTC6 KINETIS_MUX('C',6,0) /* PTC6 */
#define PTC6 KINETIS_MUX('C',6,1) /* PTC6 */
#define LLWU_P10_PTC6 KINETIS_MUX('C',6,1) /* PTC6 */
#define SPI0_MOSI_PTC6 KINETIS_MUX('C',6,2) /* PTC6 */
#define EXTRG_IN_PTC6 KINETIS_MUX('C',6,3) /* PTC6 */
#define SPI0_MISO_PTC6 KINETIS_MUX('C',6,5) /* PTC6 */
#define CMP0_IN1_PTC7 KINETIS_MUX('C',7,0) /* PTC7 */
#define PTC7 KINETIS_MUX('C',7,1) /* PTC7 */
#define SPI0_MISO_PTC7 KINETIS_MUX('C',7,2) /* PTC7 */
#define SPI0_MOSI_PTC7 KINETIS_MUX('C',7,5) /* PTC7 */
#define CMP0_IN2_PTC8 KINETIS_MUX('C',8,0) /* PTC8 */
#define PTC8 KINETIS_MUX('C',8,1) /* PTC8 */
#define I2C0_SCL_PTC8 KINETIS_MUX('C',8,2) /* PTC8 */
#define TPM0_CH4_PTC8 KINETIS_MUX('C',8,3) /* PTC8 */
#define CMP0_IN3_PTC9 KINETIS_MUX('C',9,0) /* PTC9 */
#define PTC9 KINETIS_MUX('C',9,1) /* PTC9 */
#define I2C0_SDA_PTC9 KINETIS_MUX('C',9,2) /* PTC9 */
#define TPM0_CH5_PTC9 KINETIS_MUX('C',9,3) /* PTC9 */
#define PTC10 KINETIS_MUX('C',10,1) /* PTC10 */
#define I2C1_SCL_PTC10 KINETIS_MUX('C',10,2) /* PTC10 */
#define PTC11 KINETIS_MUX('C',11,1) /* PTC11 */
#define I2C1_SDA_PTC11 KINETIS_MUX('C',11,2) /* PTC11 */
#define PTD0 KINETIS_MUX('D',0,1) /* PTD0 */
#define SPI0_PCS0_PTD0 KINETIS_MUX('D',0,2) /* PTD0 */
#define TPM0_CH0_PTD0 KINETIS_MUX('D',0,4) /* PTD0 */
#define FXIO0_D0_PTD0 KINETIS_MUX('D',0,6) /* PTD0 */
#define ADC0_SE5b_PTD1 KINETIS_MUX('D',1,0) /* PTD1 */
#define PTD1 KINETIS_MUX('D',1,1) /* PTD1 */
#define SPI0_SCK_PTD1 KINETIS_MUX('D',1,2) /* PTD1 */
#define TPM0_CH1_PTD1 KINETIS_MUX('D',1,4) /* PTD1 */
#define FXIO0_D1_PTD1 KINETIS_MUX('D',1,6) /* PTD1 */
#define PTD2 KINETIS_MUX('D',2,1) /* PTD2 */
#define SPI0_MOSI_PTD2 KINETIS_MUX('D',2,2) /* PTD2 */
#define UART2_RX_PTD2 KINETIS_MUX('D',2,3) /* PTD2 */
#define TPM0_CH2_PTD2 KINETIS_MUX('D',2,4) /* PTD2 */
#define SPI0_MISO_PTD2 KINETIS_MUX('D',2,5) /* PTD2 */
#define FXIO0_D2_PTD2 KINETIS_MUX('D',2,6) /* PTD2 */
#define PTD3 KINETIS_MUX('D',3,1) /* PTD3 */
#define SPI0_MISO_PTD3 KINETIS_MUX('D',3,2) /* PTD3 */
#define UART2_TX_PTD3 KINETIS_MUX('D',3,3) /* PTD3 */
#define TPM0_CH3_PTD3 KINETIS_MUX('D',3,4) /* PTD3 */
#define SPI0_MOSI_PTD3 KINETIS_MUX('D',3,5) /* PTD3 */
#define FXIO0_D3_PTD3 KINETIS_MUX('D',3,6) /* PTD3 */
#define LLWU_P14_PTD4 KINETIS_MUX('D',4,1) /* PTD4 */
#define PTD4 KINETIS_MUX('D',4,1) /* PTD4 */
#define SPI1_PCS0_PTD4 KINETIS_MUX('D',4,2) /* PTD4 */
#define UART2_RX_PTD4 KINETIS_MUX('D',4,3) /* PTD4 */
#define TPM0_CH4_PTD4 KINETIS_MUX('D',4,4) /* PTD4 */
#define FXIO0_D4_PTD4 KINETIS_MUX('D',4,6) /* PTD4 */
#define ADC0_SE6b_PTD5 KINETIS_MUX('D',5,0) /* PTD5 */
#define PTD5 KINETIS_MUX('D',5,1) /* PTD5 */
#define SPI1_SCK_PTD5 KINETIS_MUX('D',5,2) /* PTD5 */
#define UART2_TX_PTD5 KINETIS_MUX('D',5,3) /* PTD5 */
#define TPM0_CH5_PTD5 KINETIS_MUX('D',5,4) /* PTD5 */
#define FXIO0_D5_PTD5 KINETIS_MUX('D',5,6) /* PTD5 */
#define ADC0_SE7b_PTD6 KINETIS_MUX('D',6,0) /* PTD6 */
#define LLWU_P15_PTD6 KINETIS_MUX('D',6,1) /* PTD6 */
#define PTD6 KINETIS_MUX('D',6,1) /* PTD6 */
#define SPI1_MOSI_PTD6 KINETIS_MUX('D',6,2) /* PTD6 */
#define LPUART0_RX_PTD6 KINETIS_MUX('D',6,3) /* PTD6 */
#define I2C1_SDA_PTD6 KINETIS_MUX('D',6,4) /* PTD6 */
#define SPI1_MISO_PTD6 KINETIS_MUX('D',6,5) /* PTD6 */
#define FXIO0_D6_PTD6 KINETIS_MUX('D',6,6) /* PTD6 */
#define PTD7 KINETIS_MUX('D',7,1) /* PTD7 */
#define SPI1_MISO_PTD7 KINETIS_MUX('D',7,2) /* PTD7 */
#define LPUART0_TX_PTD7 KINETIS_MUX('D',7,3) /* PTD7 */
#define I2C1_SCL_PTD7 KINETIS_MUX('D',7,4) /* PTD7 */
#define SPI1_MOSI_PTD7 KINETIS_MUX('D',7,5) /* PTD7 */
#define FXIO0_D7_PTD7 KINETIS_MUX('D',7,6) /* PTD7 */
#define PTE0 KINETIS_MUX('E',0,1) /* PTE0 */
#define CLKOUT32K_PTE0 KINETIS_MUX('E',0,1) /* PTE0 */
#define SPI1_MISO_PTE0 KINETIS_MUX('E',0,2) /* PTE0 */
#define LPUART1_TX_PTE0 KINETIS_MUX('E',0,3) /* PTE0 */
#define RTC_CLKOUT_PTE0 KINETIS_MUX('E',0,4) /* PTE0 */
#define CMP0_OUT_PTE0 KINETIS_MUX('E',0,5) /* PTE0 */
#define I2C1_SDA_PTE0 KINETIS_MUX('E',0,6) /* PTE0 */
#define PTE1 KINETIS_MUX('E',1,1) /* PTE1 */
#define SPI1_MOSI_PTE1 KINETIS_MUX('E',1,2) /* PTE1 */
#define LPUART1_RX_PTE1 KINETIS_MUX('E',1,3) /* PTE1 */
#define SPI1_MISO_PTE1 KINETIS_MUX('E',1,5) /* PTE1 */
#define I2C1_SCL_PTE1 KINETIS_MUX('E',1,6) /* PTE1 */
#define ADC0_DP1_PTE16 KINETIS_MUX('E',16,0) /* PTE16 */
#define ADC0_SE1_PTE16 KINETIS_MUX('E',16,0) /* PTE16 */
#define PTE16 KINETIS_MUX('E',16,1) /* PTE16 */
#define SPI0_PCS0_PTE16 KINETIS_MUX('E',16,2) /* PTE16 */
#define UART2_TX_PTE16 KINETIS_MUX('E',16,3) /* PTE16 */
#define TPM_CLKIN0_PTE16 KINETIS_MUX('E',16,4) /* PTE16 */
#define FXIO0_D0_PTE16 KINETIS_MUX('E',16,6) /* PTE16 */
#define ADC0_DM1_PTE17 KINETIS_MUX('E',17,0) /* PTE17 */
#define ADC0_SE5a_PTE17 KINETIS_MUX('E',17,0) /* PTE17 */
#define PTE17 KINETIS_MUX('E',17,1) /* PTE17 */
#define SPI0_SCK_PTE17 KINETIS_MUX('E',17,2) /* PTE17 */
#define UART2_RX_PTE17 KINETIS_MUX('E',17,3) /* PTE17 */
#define TPM_CLKIN1_PTE17 KINETIS_MUX('E',17,4) /* PTE17 */
#define LPTMR0_ALT3_PTE17 KINETIS_MUX('E',17,5) /* PTE17 */
#define FXIO0_D1_PTE17 KINETIS_MUX('E',17,6) /* PTE17 */
#define ADC0_SE2_PTE18 KINETIS_MUX('E',18,0) /* PTE18 */
#define ADC0_DP2_PTE18 KINETIS_MUX('E',18,0) /* PTE18 */
#define PTE18 KINETIS_MUX('E',18,1) /* PTE18 */
#define SPI0_MOSI_PTE18 KINETIS_MUX('E',18,2) /* PTE18 */
#define I2C0_SDA_PTE18 KINETIS_MUX('E',18,4) /* PTE18 */
#define SPI0_MISO_PTE18 KINETIS_MUX('E',18,5) /* PTE18 */
#define FXIO0_D2_PTE18 KINETIS_MUX('E',18,6) /* PTE18 */
#define ADC0_SE6a_PTE19 KINETIS_MUX('E',19,0) /* PTE19 */
#define ADC0_DM2_PTE19 KINETIS_MUX('E',19,0) /* PTE19 */
#define PTE19 KINETIS_MUX('E',19,1) /* PTE19 */
#define SPI0_MISO_PTE19 KINETIS_MUX('E',19,2) /* PTE19 */
#define I2C0_SCL_PTE19 KINETIS_MUX('E',19,4) /* PTE19 */
#define SPI0_MOSI_PTE19 KINETIS_MUX('E',19,5) /* PTE19 */
#define FXIO0_D3_PTE19 KINETIS_MUX('E',19,6) /* PTE19 */
#define ADC0_DP0_PTE20 KINETIS_MUX('E',20,0) /* PTE20 */
#define ADC0_SE0_PTE20 KINETIS_MUX('E',20,0) /* PTE20 */
#define PTE20 KINETIS_MUX('E',20,1) /* PTE20 */
#define TPM1_CH0_PTE20 KINETIS_MUX('E',20,3) /* PTE20 */
#define LPUART0_TX_PTE20 KINETIS_MUX('E',20,4) /* PTE20 */
#define FXIO0_D4_PTE20 KINETIS_MUX('E',20,6) /* PTE20 */
#define ADC0_SE4a_PTE21 KINETIS_MUX('E',21,0) /* PTE21 */
#define ADC0_DM0_PTE21 KINETIS_MUX('E',21,0) /* PTE21 */
#define PTE21 KINETIS_MUX('E',21,1) /* PTE21 */
#define TPM1_CH1_PTE21 KINETIS_MUX('E',21,3) /* PTE21 */
#define LPUART0_RX_PTE21 KINETIS_MUX('E',21,4) /* PTE21 */
#define FXIO0_D5_PTE21 KINETIS_MUX('E',21,6) /* PTE21 */
#define ADC0_SE3_PTE22 KINETIS_MUX('E',22,0) /* PTE22 */
#define ADC0_DP3_PTE22 KINETIS_MUX('E',22,0) /* PTE22 */
#define PTE22 KINETIS_MUX('E',22,1) /* PTE22 */
#define TPM2_CH0_PTE22 KINETIS_MUX('E',22,3) /* PTE22 */
#define UART2_TX_PTE22 KINETIS_MUX('E',22,4) /* PTE22 */
#define FXIO0_D6_PTE22 KINETIS_MUX('E',22,6) /* PTE22 */
#define ADC0_DM3_PTE23 KINETIS_MUX('E',23,0) /* PTE23 */
#define ADC0_SE7a_PTE23 KINETIS_MUX('E',23,0) /* PTE23 */
#define PTE23 KINETIS_MUX('E',23,1) /* PTE23 */
#define TPM2_CH1_PTE23 KINETIS_MUX('E',23,3) /* PTE23 */
#define UART2_RX_PTE23 KINETIS_MUX('E',23,4) /* PTE23 */
#define FXIO0_D7_PTE23 KINETIS_MUX('E',23,6) /* PTE23 */
#define PTE24 KINETIS_MUX('E',24,1) /* PTE24 */
#define TPM0_CH0_PTE24 KINETIS_MUX('E',24,3) /* PTE24 */
#define I2C0_SCL_PTE24 KINETIS_MUX('E',24,5) /* PTE24 */
#define PTE25 KINETIS_MUX('E',25,1) /* PTE25 */
#define TPM0_CH1_PTE25 KINETIS_MUX('E',25,3) /* PTE25 */
#define I2C0_SDA_PTE25 KINETIS_MUX('E',25,5) /* PTE25 */
#define CMP0_IN5_PTE29 KINETIS_MUX('E',29,0) /* PTE29 */
#define ADC0_SE4b_PTE29 KINETIS_MUX('E',29,0) /* PTE29 */
#define PTE29 KINETIS_MUX('E',29,1) /* PTE29 */
#define TPM0_CH2_PTE29 KINETIS_MUX('E',29,3) /* PTE29 */
#define TPM_CLKIN0_PTE29 KINETIS_MUX('E',29,4) /* PTE29 */
#define ADC0_SE23_PTE30 KINETIS_MUX('E',30,0) /* PTE30 */
#define CMP0_IN4_PTE30 KINETIS_MUX('E',30,0) /* PTE30 */
#define PTE30 KINETIS_MUX('E',30,1) /* PTE30 */
#define TPM0_CH3_PTE30 KINETIS_MUX('E',30,3) /* PTE30 */
#define TPM_CLKIN1_PTE30 KINETIS_MUX('E',30,4) /* PTE30 */
#define LPUART1_TX_PTE30 KINETIS_MUX('E',30,5) /* PTE30 */
#define LPTMR0_ALT1_PTE30 KINETIS_MUX('E',30,6) /* PTE30 */
#define PTE31 KINETIS_MUX('E',31,1) /* PTE31 */
#define TPM0_CH4_PTE31 KINETIS_MUX('E',31,3) /* PTE31 */
#endif
