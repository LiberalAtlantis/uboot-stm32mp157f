/* SPDX-License-Identifier: GPL-2.0+ */
/*
 *  Copyright (C) 2012 Altera Corporation <www.altera.com>
 */

#ifndef _SOCFPGA_BASE_ADDRS_H_
#define _SOCFPGA_BASE_ADDRS_H_

#define SOCFPGA_FPGA_SLAVES_ADDRESS	0xc0000000
#define SOCFPGA_STM_ADDRESS		0xfc000000
#define SOCFPGA_DAP_ADDRESS		0xff000000
#define SOCFPGA_EMAC0_ADDRESS		0xff700000
#define SOCFPGA_EMAC1_ADDRESS		0xff702000
#define SOCFPGA_SDMMC_ADDRESS		0xff704000
#define SOCFPGA_QSPI_ADDRESS		0xff705000
#define SOCFPGA_GPIO0_ADDRESS		0xff708000
#define SOCFPGA_GPIO1_ADDRESS		0xff709000
#define SOCFPGA_GPIO2_ADDRESS		0xff70a000
#define SOCFPGA_L3REGS_ADDRESS		0xff800000
#define SOCFPGA_USB0_ADDRESS		0xffb00000
#define SOCFPGA_USB1_ADDRESS		0xffb40000
#define SOCFPGA_CAN0_ADDRESS		0xffc00000
#define SOCFPGA_CAN1_ADDRESS		0xffc01000
#define SOCFPGA_UART0_ADDRESS		0xffc02000
#define SOCFPGA_UART1_ADDRESS		0xffc03000
#define SOCFPGA_I2C0_ADDRESS		0xffc04000
#define SOCFPGA_I2C1_ADDRESS		0xffc05000
#define SOCFPGA_I2C2_ADDRESS		0xffc06000
#define SOCFPGA_I2C3_ADDRESS		0xffc07000
#define SOCFPGA_SDR_ADDRESS		0xffc20000
#define SOCFPGA_L4WD0_ADDRESS		0xffd02000
#define SOCFPGA_L4WD1_ADDRESS		0xffd03000
#define SOCFPGA_CLKMGR_ADDRESS		0xffd04000
#define SOCFPGA_RSTMGR_ADDRESS		0xffd05000
#define SOCFPGA_SYSMGR_ADDRESS		0xffd08000
#define SOCFPGA_SPIS0_ADDRESS		0xffe02000
#define SOCFPGA_SPIS1_ADDRESS		0xffe03000
#define SOCFPGA_SPIM0_ADDRESS		0xfff00000
#define SOCFPGA_SPIM1_ADDRESS		0xfff01000
#define SOCFPGA_SCANMGR_ADDRESS		0xfff02000
#define SOCFPGA_ROM_ADDRESS		0xfffd0000
#define SOCFPGA_MPUSCU_ADDRESS		0xfffec000
#define SOCFPGA_MPUL2_ADDRESS		0xfffef000
#define SOCFPGA_OCRAM_ADDRESS		0xffff0000
#define SOCFPGA_LWFPGASLAVES_ADDRESS	0xff200000
#define SOCFPGA_LWHPS2FPGAREGS_ADDRESS	0xff400000
#define SOCFPGA_HPS2FPGAREGS_ADDRESS	0xff500000
#define SOCFPGA_FPGA2HPSREGS_ADDRESS	0xff600000
#define SOCFPGA_FPGAMGRREGS_ADDRESS	0xff706000
#define SOCFPGA_ACPIDMAP_ADDRESS	0xff707000
#define SOCFPGA_NANDDATA_ADDRESS	0xff900000
#define SOCFPGA_QSPIDATA_ADDRESS	0xffa00000
#define SOCFPGA_NANDREGS_ADDRESS	0xffb80000
#define SOCFPGA_FPGAMGRDATA_ADDRESS	0xffb90000
#define SOCFPGA_SPTIMER0_ADDRESS	0xffc08000
#define SOCFPGA_SPTIMER1_ADDRESS	0xffc09000
#define SOCFPGA_OSC1TIMER0_ADDRESS	0xffd00000
#define SOCFPGA_OSC1TIMER1_ADDRESS	0xffd01000
#define SOCFPGA_DMANONSECURE_ADDRESS	0xffe00000
#define SOCFPGA_DMASECURE_ADDRESS	0xffe01000

#define SOCFPGA_PHYS_OCRAM_SIZE		0x10000

#endif /* _SOCFPGA_BASE_ADDRS_H_ */
