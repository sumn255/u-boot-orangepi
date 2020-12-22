/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2010
 * Texas Instruments, <www.ti.com>
 *
 *	Aneesh V <aneesh@ti.com>
 *	Sricharan R <r.sricharan@ti.com>
 */
#ifndef _CLOCKS_OMAP5_H_
#define _CLOCKS_OMAP5_H_
#include <asm/omap_common.h>

/*
 * Assuming a maximum of 1.5 GHz ARM speed and a minimum of 2 cycles per
 * loop, allow for a minimum of 2 ms wait (in reality the wait will be
 * much more than that)
 */
#define LDELAY		1000000

/* CM_DLL_CTRL */
#define CM_DLL_CTRL_OVERRIDE_SHIFT		0
#define CM_DLL_CTRL_OVERRIDE_MASK		(1 << 0)
#define CM_DLL_CTRL_NO_OVERRIDE			0

/* CM_CLKMODE_DPLL */
#define CM_CLKMODE_DPLL_REGM4XEN_SHIFT		11
#define CM_CLKMODE_DPLL_REGM4XEN_MASK		(1 << 11)
#define CM_CLKMODE_DPLL_LPMODE_EN_SHIFT		10
#define CM_CLKMODE_DPLL_LPMODE_EN_MASK		(1 << 10)
#define CM_CLKMODE_DPLL_RELOCK_RAMP_EN_SHIFT	9
#define CM_CLKMODE_DPLL_RELOCK_RAMP_EN_MASK	(1 << 9)
#define CM_CLKMODE_DPLL_DRIFTGUARD_EN_SHIFT	8
#define CM_CLKMODE_DPLL_DRIFTGUARD_EN_MASK	(1 << 8)
#define CM_CLKMODE_DPLL_RAMP_RATE_SHIFT		5
#define CM_CLKMODE_DPLL_RAMP_RATE_MASK		(0x7 << 5)
#define CM_CLKMODE_DPLL_EN_SHIFT		0
#define CM_CLKMODE_DPLL_EN_MASK			(0x7 << 0)

#define CM_CLKMODE_DPLL_DPLL_EN_SHIFT		0
#define CM_CLKMODE_DPLL_DPLL_EN_MASK		7

#define DPLL_EN_STOP			1
#define DPLL_EN_MN_BYPASS		4
#define DPLL_EN_LOW_POWER_BYPASS	5
#define DPLL_EN_FAST_RELOCK_BYPASS	6
#define DPLL_EN_LOCK			7

/* CM_IDLEST_DPLL fields */
#define ST_DPLL_CLK_MASK		1

/* SGX */
#define CLKSEL_GPU_HYD_GCLK_MASK		(1 << 25)
#define CLKSEL_GPU_CORE_GCLK_MASK		(1 << 24)

/* CM_CLKSEL_DPLL */
#define CM_CLKSEL_DPLL_DPLL_SD_DIV_SHIFT	24
#define CM_CLKSEL_DPLL_DPLL_SD_DIV_MASK		(0xFF << 24)
#define CM_CLKSEL_DPLL_M_SHIFT			8
#define CM_CLKSEL_DPLL_M_MASK			(0x7FF << 8)
#define CM_CLKSEL_DPLL_N_SHIFT			0
#define CM_CLKSEL_DPLL_N_MASK			0x7F
#define CM_CLKSEL_DCC_EN_SHIFT			22
#define CM_CLKSEL_DCC_EN_MASK			(1 << 22)

/* CM_SYS_CLKSEL */
#define CM_SYS_CLKSEL_SYS_CLKSEL_MASK  7

/* CM_CLKSEL_CORE */
#define CLKSEL_CORE_SHIFT	0
#define CLKSEL_L3_SHIFT		4
#define CLKSEL_L4_SHIFT		8

#define CLKSEL_CORE_X2_DIV_1	0
#define CLKSEL_L3_CORE_DIV_2	1
#define CLKSEL_L4_L3_DIV_2	1

/* CM_ABE_PLL_REF_CLKSEL */
#define CM_ABE_PLL_REF_CLKSEL_CLKSEL_SHIFT	0
#define CM_ABE_PLL_REF_CLKSEL_CLKSEL_MASK	1
#define CM_ABE_PLL_REF_CLKSEL_CLKSEL_SYSCLK	0
#define CM_ABE_PLL_REF_CLKSEL_CLKSEL_32KCLK	1

/* CM_CLKSEL_ABE_PLL_SYS */
#define CM_CLKSEL_ABE_PLL_SYS_CLKSEL_SHIFT	0
#define CM_CLKSEL_ABE_PLL_SYS_CLKSEL_MASK	1
#define CM_ABE_PLL_SYS_CLKSEL_SYSCLK1		0
#define CM_ABE_PLL_SYS_CLKSEL_SYSCLK2		1

/* CM_BYPCLK_DPLL_IVA */
#define CM_BYPCLK_DPLL_IVA_CLKSEL_SHIFT		0
#define CM_BYPCLK_DPLL_IVA_CLKSEL_MASK		3

#define DPLL_IVA_CLKSEL_CORE_X2_DIV_2		1

/* CM_SHADOW_FREQ_CONFIG1 */
#define SHADOW_FREQ_CONFIG1_FREQ_UPDATE_MASK	1
#define SHADOW_FREQ_CONFIG1_DLL_OVERRIDE_MASK	4
#define SHADOW_FREQ_CONFIG1_DLL_RESET_MASK	8

#define SHADOW_FREQ_CONFIG1_DPLL_EN_SHIFT	8
#define SHADOW_FREQ_CONFIG1_DPLL_EN_MASK	(7 << 8)

#define SHADOW_FREQ_CONFIG1_M2_DIV_SHIFT	11
#define SHADOW_FREQ_CONFIG1_M2_DIV_MASK		(0x1F << 11)

/*CM_<clock_domain>__CLKCTRL */
#define CD_CLKCTRL_CLKTRCTRL_SHIFT		0
#define CD_CLKCTRL_CLKTRCTRL_MASK		3

#define CD_CLKCTRL_CLKTRCTRL_NO_SLEEP		0
#define CD_CLKCTRL_CLKTRCTRL_SW_SLEEP		1
#define CD_CLKCTRL_CLKTRCTRL_SW_WKUP		2
#define CD_CLKCTRL_CLKTRCTRL_HW_AUTO		3


/* CM_<clock_domain>_<module>_CLKCTRL */
#define MODULE_CLKCTRL_MODULEMODE_SHIFT		0
#define MODULE_CLKCTRL_MODULEMODE_MASK		3
#define MODULE_CLKCTRL_IDLEST_SHIFT		16
#define MODULE_CLKCTRL_IDLEST_MASK		(3 << 16)

#define MODULE_CLKCTRL_MODULEMODE_SW_DISABLE		0
#define MODULE_CLKCTRL_MODULEMODE_HW_AUTO		1
#define MODULE_CLKCTRL_MODULEMODE_SW_EXPLICIT_EN	2

#define MODULE_CLKCTRL_IDLEST_FULLY_FUNCTIONAL	0
#define MODULE_CLKCTRL_IDLEST_TRANSITIONING	1
#define MODULE_CLKCTRL_IDLEST_IDLE		2
#define MODULE_CLKCTRL_IDLEST_DISABLED		3

/* CM_L4PER_GPIO4_CLKCTRL */
#define GPIO4_CLKCTRL_OPTFCLKEN_MASK		(1 << 8)

/* CM_L3INIT_HSMMCn_CLKCTRL */
#define HSMMC_CLKCTRL_CLKSEL_MASK		(1 << 24)
#define HSMMC_CLKCTRL_CLKSEL_DIV_MASK		(3 << 25)

/* CM_L3INIT_SATA_CLKCTRL */
#define SATA_CLKCTRL_OPTFCLKEN_MASK		(1 << 8)

/* CM_WKUP_GPTIMER1_CLKCTRL */
#define GPTIMER1_CLKCTRL_CLKSEL_MASK		(1 << 24)

/* CM_CAM_ISS_CLKCTRL */
#define ISS_CLKCTRL_OPTFCLKEN_MASK		(1 << 8)

/* CM_DSS_DSS_CLKCTRL */
#define DSS_CLKCTRL_OPTFCLKEN_MASK		0xF00

/* CM_L3INIT_USBPHY_CLKCTRL */
#define USBPHY_CLKCTRL_OPTFCLKEN_PHY_48M_MASK	8

/* CM_L3INIT_USB_HOST_HS_CLKCTRL */
#define OPTFCLKEN_FUNC48M_CLK			(1 << 15)
#define OPTFCLKEN_HSIC480M_P2_CLK		(1 << 14)
#define OPTFCLKEN_HSIC480M_P1_CLK		(1 << 13)
#define OPTFCLKEN_HSIC60M_P2_CLK		(1 << 12)
#define OPTFCLKEN_HSIC60M_P1_CLK		(1 << 11)
#define OPTFCLKEN_UTMI_P3_CLK			(1 << 10)
#define OPTFCLKEN_UTMI_P2_CLK			(1 << 9)
#define OPTFCLKEN_UTMI_P1_CLK			(1 << 8)
#define OPTFCLKEN_HSIC480M_P3_CLK		(1 << 7)
#define OPTFCLKEN_HSIC60M_P3_CLK		(1 << 6)

/* CM_L3INIT_USB_TLL_HS_CLKCTRL */
#define OPTFCLKEN_USB_CH0_CLK_ENABLE	(1 << 8)
#define OPTFCLKEN_USB_CH1_CLK_ENABLE	(1 << 9)
#define OPTFCLKEN_USB_CH2_CLK_ENABLE	(1 << 10)

/* CM_COREAON_USB_PHY_CORE_CLKCTRL */
#define USBPHY_CORE_CLKCTRL_OPTFCLKEN_CLK32K	(1 << 8)

/* CM_COREAON_L3INIT_60M_GFCLK_CLKCTRL */
#define L3INIT_CLKCTRL_OPTFCLKEN_60M_GFCLK	(1 << 8)

/* CM_L3INIT_USB_OTG_SS_CLKCTRL */
#define OTG_SS_CLKCTRL_MODULEMODE_HW	(1 << 0)
#define OPTFCLKEN_REFCLK960M			(1 << 8)

/* CM_L3INIT_OCP2SCP1_CLKCTRL */
#define OCP2SCP1_CLKCTRL_MODULEMODE_HW	(1 << 0)

/* CM_MPU_MPU_CLKCTRL */
#define MPU_CLKCTRL_CLKSEL_EMIF_DIV_MODE_SHIFT	24
#define MPU_CLKCTRL_CLKSEL_EMIF_DIV_MODE_MASK	(3 << 24)
#define MPU_CLKCTRL_CLKSEL_ABE_DIV_MODE_SHIFT	26
#define MPU_CLKCTRL_CLKSEL_ABE_DIV_MODE_MASK	(1 << 26)

/* CM_WKUPAON_SCRM_CLKCTRL */
#define OPTFCLKEN_SCRM_PER_SHIFT		9
#define OPTFCLKEN_SCRM_PER_MASK			(1 << 9)
#define OPTFCLKEN_SCRM_CORE_SHIFT		8
#define OPTFCLKEN_SCRM_CORE_MASK		(1 << 8)

/* CM_COREAON_IO_SRCOMP_CLKCTRL */
#define OPTFCLKEN_SRCOMP_FCLK_SHIFT		8
#define OPTFCLKEN_SRCOMP_FCLK_MASK		(1 << 8)

/* PRM_RSTTIME */
#define RSTTIME1_SHIFT				0
#define RSTTIME1_MASK				(0x3ff << 0)

/* Clock frequencies */
#define OMAP_SYS_CLK_IND_38_4_MHZ	6

/* PRM_VC_VAL_BYPASS */
#define PRM_VC_I2C_CHANNEL_FREQ_KHZ	400

/* CTRL_CORE_SRCOMP_NORTH_SIDE */
#define USB2PHY_DISCHGDET	(1 << 29)
#define USB2PHY_AUTORESUME_EN (1 << 30)

/* SMPS */
#define SMPS_I2C_SLAVE_ADDR	0x12
#define SMPS_REG_ADDR_12_MPU	0x23
#define SMPS_REG_ADDR_45_IVA	0x2B
#define SMPS_REG_ADDR_8_CORE	0x37

/* PALMAS VOLTAGE SETTINGS in mv for OPP_NOMINAL */
/* ES1.0 settings */
#define VDD_MPU		1040
#define VDD_MM		1040
#define VDD_CORE	1040

#define VDD_MPU_LOW	890
#define VDD_MM_LOW	890
#define VDD_CORE_LOW	890

/* ES2.0 settings */
#define VDD_MPU_ES2	1060
#define VDD_MM_ES2	1025
#define VDD_CORE_ES2	1040

#define VDD_MPU_ES2_HIGH 1250
#define VDD_MM_ES2_OD  1120

/* Efuse register offsets for OMAP5 platform */
#define OMAP5_ES2_EFUSE_BASE	0x4A002000
#define OMAP5_ES2_PROD_REGBITS	16

/* CONTROL_STD_FUSE_OPP_VDD_CORE_3 */
#define OMAP5_ES2_PROD_CORE_OPNO_VMIN	(OMAP5_ES2_EFUSE_BASE + 0x1D8)

/* CONTROL_STD_FUSE_OPP_VDD_MM_4 */
#define OMAP5_ES2_PROD_MM_OPNO_VMIN	(OMAP5_ES2_EFUSE_BASE + 0x1A4)
/* CONTROL_STD_FUSE_OPP_VDD_MM_5 */
#define OMAP5_ES2_PROD_MM_OPOD_VMIN	(OMAP5_ES2_EFUSE_BASE + 0x1A8)
/* CONTROL_STD_FUSE_OPP_VDD_MPU_6 */
#define OMAP5_ES2_PROD_MPU_OPNO_VMIN	(OMAP5_ES2_EFUSE_BASE + 0x1C4)
/* CONTROL_STD_FUSE_OPP_VDD_MPU_7 */
#define OMAP5_ES2_PROD_MPU_OPHI_VMIN	(OMAP5_ES2_EFUSE_BASE + 0x1C8)

/* DRA74x/75x/72x voltage settings in mv for OPP_NOM per DM */
#define VDD_MPU_DRA7_NOM	1150
#define VDD_CORE_DRA7_NOM	1150
#define VDD_EVE_DRA7_NOM	1060
#define VDD_GPU_DRA7_NOM	1060
#define VDD_IVA_DRA7_NOM	1060

/* DRA74x/75x/72x voltage settings in mv for OPP_OD per DM */
#define VDD_EVE_DRA7_OD		1150
#define VDD_GPU_DRA7_OD		1150
#define VDD_IVA_DRA7_OD		1150

/* DRA74x/75x/72x voltage settings in mv for OPP_HIGH per DM */
#define VDD_EVE_DRA7_HIGH	1250
#define VDD_GPU_DRA7_HIGH	1250
#define VDD_IVA_DRA7_HIGH	1250

/* Efuse register offsets for DRA7xx platform */
#define DRA752_EFUSE_BASE	0x4A002000
#define DRA752_EFUSE_REGBITS	16
/* STD_FUSE_OPP_VMIN_IVA_2 */
#define STD_FUSE_OPP_VMIN_IVA_NOM	(DRA752_EFUSE_BASE + 0x05CC)
/* STD_FUSE_OPP_VMIN_IVA_3 */
#define STD_FUSE_OPP_VMIN_IVA_OD	(DRA752_EFUSE_BASE + 0x05D0)
/* STD_FUSE_OPP_VMIN_IVA_4 */
#define STD_FUSE_OPP_VMIN_IVA_HIGH	(DRA752_EFUSE_BASE + 0x05D4)
/* STD_FUSE_OPP_VMIN_DSPEVE_2 */
#define STD_FUSE_OPP_VMIN_DSPEVE_NOM	(DRA752_EFUSE_BASE + 0x05E0)
/* STD_FUSE_OPP_VMIN_DSPEVE_3 */
#define STD_FUSE_OPP_VMIN_DSPEVE_OD	(DRA752_EFUSE_BASE + 0x05E4)
/* STD_FUSE_OPP_VMIN_DSPEVE_4 */
#define STD_FUSE_OPP_VMIN_DSPEVE_HIGH	(DRA752_EFUSE_BASE + 0x05E8)
/* STD_FUSE_OPP_VMIN_CORE_2 */
#define STD_FUSE_OPP_VMIN_CORE_NOM	(DRA752_EFUSE_BASE + 0x05F4)
/* STD_FUSE_OPP_VMIN_GPU_2 */
#define STD_FUSE_OPP_VMIN_GPU_NOM	(DRA752_EFUSE_BASE + 0x1B08)
/* STD_FUSE_OPP_VMIN_GPU_3 */
#define STD_FUSE_OPP_VMIN_GPU_OD	(DRA752_EFUSE_BASE + 0x1B0C)
/* STD_FUSE_OPP_VMIN_GPU_4 */
#define STD_FUSE_OPP_VMIN_GPU_HIGH	(DRA752_EFUSE_BASE + 0x1B10)
/* STD_FUSE_OPP_VMIN_MPU_2 */
#define STD_FUSE_OPP_VMIN_MPU_NOM	(DRA752_EFUSE_BASE + 0x1B20)
/* STD_FUSE_OPP_VMIN_MPU_3 */
#define STD_FUSE_OPP_VMIN_MPU_OD	(DRA752_EFUSE_BASE + 0x1B24)
/* STD_FUSE_OPP_VMIN_MPU_4 */
#define STD_FUSE_OPP_VMIN_MPU_HIGH	(DRA752_EFUSE_BASE + 0x1B28)

#if defined(CONFIG_DRA7_MPU_OPP_HIGH)
#define DRA7_MPU_OPP	OPP_HIGH
#elif defined(CONFIG_DRA7_MPU_OPP_OD)
#define DRA7_MPU_OPP	OPP_OD
#else /* OPP_NOM default */
#define DRA7_MPU_OPP	OPP_NOM
#endif

/* OPP_NOM only available option for CORE */
#define DRA7_CORE_OPP	OPP_NOM

#if defined(CONFIG_DRA7_DSPEVE_OPP_HIGH)
#define DRA7_DSPEVE_OPP	OPP_HIGH
#elif defined(CONFIG_DRA7_DSPEVE_OPP_OD)
#define DRA7_DSPEVE_OPP	OPP_OD
#else /* OPP_NOM default */
#define DRA7_DSPEVE_OPP	OPP_NOM
#endif

#if defined(CONFIG_DRA7_IVA_OPP_HIGH)
#define DRA7_IVA_OPP	OPP_HIGH
#elif defined(CONFIG_DRA7_IVA_OPP_OD)
#define DRA7_IVA_OPP	OPP_OD
#else /* OPP_NOM default */
#define DRA7_IVA_OPP	OPP_NOM
#endif

#if defined(CONFIG_DRA7_GPU_OPP_HIGH)
#define DRA7_GPU_OPP	OPP_HIGH
#elif defined(CONFIG_DRA7_GPU_OPP_OD)
#define DRA7_GPU_OPP	OPP_OD
#else /* OPP_NOM default */
#define DRA7_GPU_OPP	OPP_NOM
#endif

/* Standard offset is 0.5v expressed in uv */
#define PALMAS_SMPS_BASE_VOLT_UV 500000

/* Offset is 0.73V for LP873x */
#define LP873X_BUCK_BASE_VOLT_UV		730000

/* Offset is 0.73V for LP87565 */
#define LP87565_BUCK_BASE_VOLT_UV		730000

/* TPS659038 */
#define TPS659038_I2C_SLAVE_ADDR		0x58
#define TPS659038_REG_ADDR_SMPS12		0x23
#define TPS659038_REG_ADDR_SMPS45		0x2B
#define TPS659038_REG_ADDR_SMPS6		0x2F
#define TPS659038_REG_ADDR_SMPS7		0x33
#define TPS659038_REG_ADDR_SMPS8		0x37

/* TPS65917 */
#define TPS65917_I2C_SLAVE_ADDR		0x58
#define TPS65917_REG_ADDR_SMPS1		0x23
#define TPS65917_REG_ADDR_SMPS2		0x27
#define TPS65917_REG_ADDR_SMPS3		0x2F
#define TPS65917_REG_ADDR_SMPS4		0x33

/* LP873X */
#define LP873X_I2C_SLAVE_ADDR		0x60
#define LP873X_REG_ADDR_BUCK0		0x6
#define LP873X_REG_ADDR_BUCK1		0x7
#define LP873X_REG_ADDR_LDO1		0xA

/* LP87565 */
#define LP87565_I2C_SLAVE_ADDR		0x61
#define LP87565_REG_ADDR_BUCK01		0xA
#define LP87565_REG_ADDR_BUCK23		0xE

/* TPS */
#define TPS62361_I2C_SLAVE_ADDR		0x60
#define TPS62361_REG_ADDR_SET0		0x0
#define TPS62361_REG_ADDR_SET1		0x1
#define TPS62361_REG_ADDR_SET2		0x2
#define TPS62361_REG_ADDR_SET3		0x3
#define TPS62361_REG_ADDR_CTRL		0x4
#define TPS62361_REG_ADDR_TEMP		0x5
#define TPS62361_REG_ADDR_RMP_CTRL	0x6
#define TPS62361_REG_ADDR_CHIP_ID	0x8
#define TPS62361_REG_ADDR_CHIP_ID_2	0x9

#define TPS62361_BASE_VOLT_MV	500
#define TPS62361_VSEL0_GPIO	7

/* Defines for DPLL setup */
#define DPLL_LOCKED_FREQ_TOLERANCE_0		0
#define DPLL_LOCKED_FREQ_TOLERANCE_500_KHZ	500
#define DPLL_LOCKED_FREQ_TOLERANCE_1_MHZ	1000

#define DPLL_NO_LOCK	0
#define DPLL_LOCK	1

#if defined(CONFIG_DRA7XX)
#define V_OSCK			20000000	/* Clock output from T2 */
#else
#define V_OSCK			19200000	/* Clock output from T2 */
#endif

#define V_SCLK	V_OSCK

/* CKO buffer control */
#define CKOBUFFER_CLK_ENABLE_MASK	(1 << 28)

/* AUXCLKx reg fields */
#define AUXCLK_ENABLE_MASK		(1 << 8)
#define AUXCLK_SRCSELECT_SHIFT		1
#define AUXCLK_SRCSELECT_MASK		(3 << 1)
#define AUXCLK_CLKDIV_SHIFT		16
#define AUXCLK_CLKDIV_MASK		(0xF << 16)

#define AUXCLK_SRCSELECT_SYS_CLK	0
#define AUXCLK_SRCSELECT_CORE_DPLL	1
#define AUXCLK_SRCSELECT_PER_DPLL	2
#define AUXCLK_SRCSELECT_ALTERNATE	3

#endif /* _CLOCKS_OMAP5_H_ */
