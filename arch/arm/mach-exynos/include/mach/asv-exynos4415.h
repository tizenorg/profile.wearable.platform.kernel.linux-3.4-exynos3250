/* linux/arch/arm/mach-exynos/include/mach/asv-exynos4415.h
*
* Copyright (c) 2012 Samsung Electronics Co., Ltd.
*              http://www.samsung.com/
*
* EXYNOS4415 - Adoptive Support Voltage Header file
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_EXYNOS4415_ASV_H
#define __ASM_ARCH_EXYNOS4415_ASV_H __FILE__

#define ARM_DVFS_LEVEL_NR		(16)
#define ARM_ASV_GRP_NR			(16)
#define ARM_MAX_VOLT			(1425000)

#define INT_DVFS_LEVEL_NR		(5)
#define INT_ASV_GRP_NR			(16)
#define INT_MAX_VOLT			(1025000)

#define G3D_DVFS_LEVEL_NR		(7)
#define G3D_ASV_GRP_NR			(16)
#define G3D_MAX_VOLT			(1425000)

#define MIF_DVFS_LEVEL_NR		(7)
#define MIF_ASV_GRP_NR			(16)
#define MIF_MAX_VOLT			(1000000)

static unsigned int refer_table_get_asv[2][ARM_ASV_GRP_NR] = {
	/*0  1   2   3   4   5   6   7   8   9  10  11  12  13 14 15*/
	{ 0, 0,  2,  3,  3,  4,  6,  9, 13, 23, 31, 39, 47,999, 0, 0},	/* IDS */
	{ 0, 0, 21, 23, 25, 27, 30, 33, 35, 38, 41, 43, 45,999, 0, 0},	/* HPM */
};

/* ABB setting value */
static unsigned int arm_asv_abb_info[ARM_DVFS_LEVEL_NR][ARM_ASV_GRP_NR + 1] = {
	/*  FREQ     ASV0     ASV1     ASV2     ASV3     ASV4     ASV5     ASV6     ASV7     ASV8     ASV9    ASV10    ASV11    ASV12    ASV13    ASV14   ASV15*/
	{1600000, 0, 0,   ABB_X060,   ABB_X060,   ABB_X060,   ABB_X060,   ABB_X060, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X110, ABB_X110, ABB_X110, 0, 0, },
	{1500000, 0, 0,   ABB_X060,   ABB_X060,   ABB_X060, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X110, ABB_X110, ABB_X110, 0, 0, },
	{1400000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X110, ABB_X110, ABB_X110, 0, 0, },
	{1300000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X110, ABB_X110, ABB_X110, 0, 0, },
	{1200000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X110, ABB_X110, ABB_X110, 0, 0, },
	{1100000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X110, ABB_X110, ABB_X110, 0, 0, },
	{1000000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X110, ABB_X110, ABB_X110, 0, 0, },
	{ 900000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X110, ABB_X140, ABB_X140, 0, 0, },
	{ 800000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X140, ABB_X140, ABB_X140, ABB_X140, 0, 0, },
	{ 700000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X140,   ABB_X140,   ABB_X140, ABB_X140, ABB_X140, ABB_X140, 0, 0, },
	{ 600000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_X140, ABB_X140, ABB_X140, 0, 0, },
	{ 500000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_X140, ABB_X140, ABB_X140, 0, 0, },
	{ 400000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_X140, ABB_X140, ABB_X140, 0, 0, },
	{ 300000, 0, 0, ABB_BYPASS, ABB_BYPASS,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_X140, ABB_X140, ABB_X140, 0, 0, },
	{ 200000, 0, 0, ABB_BYPASS,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_X140, ABB_X140, ABB_X140, 0, 0, },
	{ 100000, 0, 0, ABB_BYPASS,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_X140, ABB_X140, ABB_X140, 0, 0, },
};

static unsigned int int_asv_abb_info[INT_DVFS_LEVEL_NR][INT_ASV_GRP_NR + 1] = {
	/*  FREQ    ASV0    ASV1     ASV2    ASV3    ASV4    ASV5    ASV6    ASV7    ASV8    ASV9     ASV10   ASV11    ASV12    ASV13   ASV14   ASV15 */
	{267000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X110, ABB_X110, ABB_X110, ABB_X110, 0, 0, },
	{200000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X110, ABB_X110, ABB_X110, ABB_X110, 0, 0, },
	{160000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_X140, ABB_X140, ABB_X140, ABB_X140, 0, 0, },
	{133000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_X140, ABB_X140, ABB_X140, ABB_X140, 0, 0, },
	{100000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140,   ABB_X140, ABB_X140, ABB_X140, ABB_X140, ABB_X140, 0, 0, },
};

static unsigned int mif_asv_abb_info[MIF_DVFS_LEVEL_NR][MIF_ASV_GRP_NR + 1] = {
	/*  FREQ     ASV0     ASV1     ASV2     ASV3     ASV4     ASV5     ASV6     ASV7     ASV8     ASV9    ASV10    ASV11    ASV12    ASV13    ASV14   ASV15 */
	{543000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{413000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{275000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{206000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{165000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{138000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{103000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
};

static unsigned int g3d_asv_abb_info[G3D_DVFS_LEVEL_NR][G3D_ASV_GRP_NR + 1] = {
	/*  FREQ     ASV0     ASV1     ASV2     ASV3     ASV4     ASV5     ASV6     ASV7     ASV8     ASV9    ASV10    ASV11    ASV12    ASV13    ASV14   ASV15 */
	{733000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{667000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{560000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{450000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{350000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{266000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
	{160000, 0, 0, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, ABB_BYPASS, 0, 0, },
};


/* ASV setting value */
static unsigned int arm_asv_volt_info[ARM_DVFS_LEVEL_NR][ARM_ASV_GRP_NR + 1] = {
	/*  FREQ     ASV0     ASV1     ASV2     ASV3     ASV4     ASV5     ASV6     ASV7     ASV8     ASV9    ASV10    ASV11    ASV12    ASV13    ASV14   ASV15*/
	{1600000, 0, 0, 1375000, 1350000, 1325000, 1300000, 1275000, 1300000, 1275000, 1250000, 1225000, 1225000, 1200000, 1175000, 0, 0, },
	{1500000, 0, 0, 1325000, 1300000, 1275000, 1300000, 1275000, 1250000, 1225000, 1200000, 1175000, 1175000, 1150000, 1125000, 0, 0, },
	{1400000, 0, 0, 1325000, 1300000, 1275000, 1250000, 1225000, 1200000, 1175000, 1150000, 1125000, 1125000, 1100000, 1075000, 0, 0, },
	{1300000, 0, 0, 1275000, 1250000, 1225000, 1200000, 1175000, 1150000, 1125000, 1100000, 1075000, 1075000, 1050000, 1025000, 0, 0, },
	{1200000, 0, 0, 1225000, 1200000, 1175000, 1150000, 1125000, 1100000, 1075000, 1050000, 1025000, 1025000, 1000000,  975000, 0, 0, },
	{1100000, 0, 0, 1175000, 1150000, 1125000, 1100000, 1075000, 1050000, 1025000, 1000000,  975000,  975000,  950000,  925000, 0, 0, },
	{1000000, 0, 0, 1125000, 1100000, 1075000, 1050000, 1025000, 1000000,  975000,  950000,  925000,  925000,  900000,  875000, 0, 0, },
	{ 900000, 0, 0, 1075000, 1050000, 1025000, 1000000,  975000,  950000,  925000,  900000,  875000,  875000,  850000,  850000, 0, 0, },
	{ 800000, 0, 0, 1050000, 1025000, 1000000,  975000,  950000,  925000,  900000,  875000,  850000,  850000,  850000,  850000, 0, 0, },
	{ 700000, 0, 0, 1000000,  975000,  950000,  925000,  900000,  875000,  850000,  850000,  850000,  850000,  850000,  850000, 0, 0, },
	{ 600000, 0, 0,  975000,  950000,  925000,  900000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000, 0, 0, },
	{ 500000, 0, 0,  950000,  925000,  900000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000, 0, 0, },
	{ 400000, 0, 0,  925000,  900000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000, 0, 0, },
	{ 300000, 0, 0,  900000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000, 0, 0, },
	{ 200000, 0, 0,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000, 0, 0, },
	{ 100000, 0, 0,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000, 0, 0, },
};

static unsigned int int_asv_volt_info[INT_DVFS_LEVEL_NR][INT_ASV_GRP_NR + 1] = {
	/*  FREQ    ASV0    ASV1     ASV2    ASV3    ASV4    ASV5    ASV6    ASV7    ASV8    ASV9     ASV10   ASV11    ASV12    ASV13   ASV14   ASV15 */
	{267000, 0, 0, 975000, 950000, 950000, 925000, 900000, 900000, 875000, 875000, 850000, 850000, 850000, 850000, 0, 0, },
	{200000, 0, 0, 975000, 950000, 950000, 925000, 900000, 900000, 875000, 875000, 850000, 850000, 850000, 850000, 0, 0, },
	{160000, 0, 0, 925000, 900000, 900000, 875000, 850000, 850000, 850000, 850000, 850000, 850000, 850000, 850000, 0, 0, },
	{133000, 0, 0, 900000, 875000, 875000, 850000, 850000, 850000, 850000, 850000, 850000, 850000, 850000, 850000, 0, 0, },
	{100000, 0, 0, 900375, 875000, 875000, 850000, 850000, 850000, 850000, 850000, 850000, 850000, 850000, 850000, 0, 0, },
};

static unsigned int mif_asv_volt_info[MIF_DVFS_LEVEL_NR][MIF_ASV_GRP_NR + 1] = {
	/*  FREQ     ASV0     ASV1     ASV2     ASV3     ASV4     ASV5     ASV6     ASV7     ASV8     ASV9    ASV10    ASV11    ASV12    ASV13    ASV14   ASV15 */
	{543000, 0, 0, 950000, 950000, 925000, 925000, 900000, 900000, 900000, 875000, 875000, 875000, 850000, 850000, 0, 0, },
	{413000, 0, 0, 825000, 825000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 0, 0, },
	{275000, 0, 0, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 0, 0, },
	{206000, 0, 0, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 0, 0, },
	{165000, 0, 0, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 0, 0, },
	{138000, 0, 0, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 0, 0, },
	{103000, 0, 0, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 800000, 0, 0, },
};

static unsigned g3d_asv_volt_info[G3D_DVFS_LEVEL_NR][G3D_ASV_GRP_NR + 1] = {
	/*  FREQ    ASV0     ASV1     ASV2     ASV3    ASV4    ASV5    ASV6    ASV7    ASV8    ASV9    ASV10   ASV11   ASV12   ASV13   ASV14   ASV15 */
	{733000, 0, 0, 1375000, 1350000, 1325000, 1300000, 1275000, 1250000, 1225000, 1200000, 1175000, 1175000, 1150000, 1150000, 0, 0, },
	{667000, 0, 0, 1300000, 1275000, 1250000, 1225000, 1200000, 1175000, 1150000, 1125000, 1100000, 1100000, 1075000, 1075000, 0, 0, },
	{560000, 0, 0, 1175000, 1150000, 1150000, 1125000, 1100000, 1075000, 1050000, 1025000, 1000000, 1000000,  975000,  975000, 0, 0, },
	{450000, 0, 0, 1075000, 1050000, 1050000, 1025000, 1000000,  975000,  950000,  925000,  900000,  900000,  875000,  875000, 0, 0, },
	{350000, 0, 0, 1000000,  975000,  975000,  950000,  925000,  900000,  875000,  850000,  850000,  850000,  850000,  850000, 0, 0, },
	{266000, 0, 0,  925000,  900000,  900000,  875000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000, 0, 0, },
	{160000, 0, 0,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000,  850000, 0, 0, },
};
#endif /* EXYNOS4415_ASV_H */