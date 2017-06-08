/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_CIS_3H1_SET_A_H
#define FIMC_IS_CIS_3H1_SET_A_H

#include "fimc-is-cis.h"
#include "fimc-is-cis-3h1.h"

/* 3h1 sensor setting version - S5K3H1S_EVT0_Ver_0.08_161007 */

/* 0: 3264 x 2448 @30  MIPI lane: 2, MIPI data rate(Mbps/lane): 1473.3, MIPI Mclk(Mhz): 26 */
/* 1: 2448 x 2448 @30  MIPI lane: 2, MIPI data rate(Mbps/lane): 1473.3, MIPI Mclk(Mhz): 26 */
/* 2: 3264 x 1836 @30  MIPI lane: 2, MIPI data rate(Mbps/lane): 1473.3, MIPI Mclk(Mhz): 26 */
/* 3: 1632 x  918 @60  MIPI lane: 2, MIPI data rate(Mbps/lane):  719.3, MIPI Mclk(Mhz): 26 */
/* 4: 1632 x  918 @30  MIPI lane: 2, MIPI data rate(Mbps/lane):  719.3, MIPI MClk(Mhz): 26 */
/* 5: 1632 x 1224 @30  MIPI lane: 2, MIPI data rate(Mbps/lane):  719.3, MIPI MClk(Mhz): 26 */
/* 6: 1224 x 1224 @30  MIPI lane: 2, MIPI data rate(Mbps/lane):  719.3, MIPI MClk(Mhz): 26 */
/* 7:  800 x  600 @120 MIPI lane: 2, MIPI data rate(Mbps/lane):  364.0, MIPI MClk(Mhz): 26 */
/* 8:  752 x 1328 @15  MIPI lane: 2, MIPI data rate(Mbps/lane): 1473.3, MIPI MClk(Mhz): 26 */
/* 9:  376 x  664 @110 MIPI lane: 2, MIPI data rate(Mbps/lane): 1473.3, MIPI MClk(Mhz): 26 */

const u32 sensor_3h1_setfile_A_3264x2448_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6028,	0x2000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0344,	0x0010,	0x02,
	0x0348,	0x0CCF,	0x02,
	0x0346,	0x0010,	0x02,
	0x034A,	0x099F,	0x02,
	0x034C,	0x0CC0,	0x02,
	0x034E,	0x0990,	0x02,
	0x0342,	0x13D0,	0x02,
	0x0340,	0x0A5C,	0x02,
	0x0900,	0x0011,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x379E,	0x0104,	0x02,
	0x31B8,	0x0040,	0x02,
	0x37FA,	0x0032,	0x02,
	0xF46C,	0x0010,	0x02,
	0xF414,	0x64C6,	0x02,
	0xF416,	0x002F,	0x02,
	0xF462,	0x0000,	0x02,
	0xF464,	0x0000,	0x02,
	0xF476,	0x0082,	0x02,
	0x37C2,	0x0804,	0x02,
	0x37C6,	0x0203,	0x02,
	0x37BE,	0x0909,	0x02,
	0x37BA,	0x130D,	0x02,
	0xF44C,	0x0014,	0x02,
	0xF452,	0x000B,	0x02,
	0xF44E,	0x0012,	0x02,
	0x37DE,	0x0000,	0x02,
	0x37E0,	0x7FE7,	0x02,
	0x37E2,	0x03FF,	0x02,
	0x37F0,	0x007F,	0x02,
	0x0200,	0x13B8,	0x02,
	0x021C,	0x13B8,	0x02,
	0x3158,	0x0068,	0x02,
	0x3254,	0x0001,	0x02,
	0x3258,	0x0001,	0x02,
	0x325C,	0x0003,	0x02,
	0x3260,	0x0002,	0x02,
	0x3298,	0x000A,	0x02,
	0x32B8,	0x0002,	0x02,
	0x32BC,	0x0000,	0x02,
	0x31B2,	0x0200,	0x02,
	0x3ACE,	0xFECD,	0x02,
	0x3B00,	0xFEF6,	0x02,
	0x3B32,	0xFEF6,	0x02,
	0x3E0C,	0x0FF7,	0x02,
	0x3DF8,	0x1008,	0x02,
	0x3E02,	0x1008,	0x02,
	0x3AC4,	0xFF29,	0x02,
	0x3AF6,	0xFF3E,	0x02,
	0x3B28,	0xFF3E,	0x02,
	0x3E0A,	0x0FF7,	0x02,
	0x3DF6,	0x1000,	0x02,
	0x3E00,	0x1000,	0x02,
	0x3ABA,	0xFF43,	0x02,
	0x3AEC,	0xFF7B,	0x02,
	0x3B1E,	0xFF7B,	0x02,
	0x3E08,	0x1000,	0x02,
	0x3DF4,	0x0FF7,	0x02,
	0x3DFE,	0x0FF7,	0x02,
	0x3DE4,	0x0001,	0x02,
	0x3AA4,	0x0100,	0x02,
	0xF4A2,	0x000C,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43CA,	0x02,
	0x1132,	0x0000,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x00A3,	0x02,
	0x030C,	0x0003,	0x02,
	0x030E,	0x0055,	0x02,
	0x300A,	0x0000,	0x02,
	0x3092,	0x0001,	0x02,   /* 0x0000 : AP direct , 0x0001: C3*/
	0x31AA,	0x0001,	0x02,
	0xB134,	0x0000,	0x02,
	0x307C,	0x0340,	0x02,
	0x3052,	0x0104,	0x02,
	0x6214,	0x7970,	0x02,
	0x0216,	0x0100,	0x02,
};

const u32 sensor_3h1_setfile_A_2448x2448_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6028,	0x2000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0344,	0x01A8,	0x02,
	0x0348,	0x0B37,	0x02,
	0x0346,	0x0010,	0x02,
	0x034A,	0x099F,	0x02,
	0x034C,	0x0990,	0x02,
	0x034E,	0x0990,	0x02,
	0x0342,	0x13D0,	0x02,
	0x0340,	0x0A5C,	0x02,
	0x0900,	0x0011,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x379E,	0x0104,	0x02,
	0x31B8,	0x0040,	0x02,
	0x37FA,	0x0032,	0x02,
	0xF46C,	0x0010,	0x02,
	0xF414,	0x64C6,	0x02,
	0xF416,	0x002F,	0x02,
	0xF462,	0x0000,	0x02,
	0xF464,	0x0000,	0x02,
	0xF476,	0x0082,	0x02,
	0x37C2,	0x0804,	0x02,
	0x37C6,	0x0203,	0x02,
	0x37BE,	0x0909,	0x02,
	0x37BA,	0x130D,	0x02,
	0xF44C,	0x0014,	0x02,
	0xF452,	0x000B,	0x02,
	0xF44E,	0x0012,	0x02,
	0x37DE,	0x0000,	0x02,
	0x37E0,	0x7FE7,	0x02,
	0x37E2,	0x03FF,	0x02,
	0x37F0,	0x007F,	0x02,
	0x0200,	0x13B8,	0x02,
	0x021C,	0x13B8,	0x02,
	0x3158,	0x0068,	0x02,
	0x3254,	0x0001,	0x02,
	0x3258,	0x0001,	0x02,
	0x325C,	0x0003,	0x02,
	0x3260,	0x0002,	0x02,
	0x3298,	0x000A,	0x02,
	0x32B8,	0x0002,	0x02,
	0x32BC,	0x0000,	0x02,
	0x31B2,	0x0200,	0x02,
	0x3ACE,	0xFECD,	0x02,
	0x3B00,	0xFEF6,	0x02,
	0x3B32,	0xFEF6,	0x02,
	0x3E0C,	0x0FF7,	0x02,
	0x3DF8,	0x1008,	0x02,
	0x3E02,	0x1008,	0x02,
	0x3AC4,	0xFF29,	0x02,
	0x3AF6,	0xFF3E,	0x02,
	0x3B28,	0xFF3E,	0x02,
	0x3E0A,	0x0FF7,	0x02,
	0x3DF6,	0x1000,	0x02,
	0x3E00,	0x1000,	0x02,
	0x3ABA,	0xFF43,	0x02,
	0x3AEC,	0xFF7B,	0x02,
	0x3B1E,	0xFF7B,	0x02,
	0x3E08,	0x1000,	0x02,
	0x3DF4,	0x0FF7,	0x02,
	0x3DFE,	0x0FF7,	0x02,
	0x3DE4,	0x0001,	0x02,
	0x3AA4,	0x0100,	0x02,
	0xF4A2,	0x000C,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43CA,	0x02,
	0x1132,	0x0000,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x00A3,	0x02,
	0x030C,	0x0003,	0x02,
	0x030E,	0x0055,	0x02,
	0x300A,	0x0000,	0x02,
	0x3092,	0x0001,	0x02,
	0x31AA,	0x0001,	0x02,
	0xB134,	0x0000,	0x02,
	0x307C,	0x0340,	0x02,
	0x3052,	0x0104,	0x02,
	0x6214,	0x7970,	0x02,
	0x0216,	0x0100,	0x02,
};

const u32 sensor_3h1_setfile_A_3264x1836_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6028,	0x2000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0344,	0x0010,	0x02,
	0x0348,	0x0CCF,	0x02,
	0x0346,	0x0144,	0x02,
	0x034A,	0x086F,	0x02,
	0x034C,	0x0CC0,	0x02,
	0x034E,	0x072C,	0x02,
	0x0342,	0x13D0,	0x02,
	0x0340,	0x0A5C,	0x02,
	0x0900,	0x0011,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x379E,	0x0104,	0x02,
	0x31B8,	0x0040,	0x02,
	0x37FA,	0x0032,	0x02,
	0xF46C,	0x0010,	0x02,
	0xF414,	0x64C6,	0x02,
	0xF416,	0x002F,	0x02,
	0xF462,	0x0000,	0x02,
	0xF464,	0x0000,	0x02,
	0xF476,	0x0082,	0x02,
	0x37C2,	0x0804,	0x02,
	0x37C6,	0x0203,	0x02,
	0x37BE,	0x0909,	0x02,
	0x37BA,	0x130D,	0x02,
	0xF44C,	0x0014,	0x02,
	0xF452,	0x000B,	0x02,
	0xF44E,	0x0012,	0x02,
	0x37DE,	0x0000,	0x02,
	0x37E0,	0x7FE7,	0x02,
	0x37E2,	0x03FF,	0x02,
	0x37F0,	0x007F,	0x02,
	0x0200,	0x13B8,	0x02,
	0x021C,	0x13B8,	0x02,
	0x3158,	0x0068,	0x02,
	0x3254,	0x0001,	0x02,
	0x3258,	0x0001,	0x02,
	0x325C,	0x0003,	0x02,
	0x3260,	0x0002,	0x02,
	0x3298,	0x000A,	0x02,
	0x32B8,	0x0002,	0x02,
	0x32BC,	0x0000,	0x02,
	0x31B2,	0x0200,	0x02,
	0x3ACE,	0xFECD,	0x02,
	0x3B00,	0xFEF6,	0x02,
	0x3B32,	0xFEF6,	0x02,
	0x3E0C,	0x0FF7,	0x02,
	0x3DF8,	0x1008,	0x02,
	0x3E02,	0x1008,	0x02,
	0x3AC4,	0xFF29,	0x02,
	0x3AF6,	0xFF3E,	0x02,
	0x3B28,	0xFF3E,	0x02,
	0x3E0A,	0x0FF7,	0x02,
	0x3DF6,	0x1000,	0x02,
	0x3E00,	0x1000,	0x02,
	0x3ABA,	0xFF43,	0x02,
	0x3AEC,	0xFF7B,	0x02,
	0x3B1E,	0xFF7B,	0x02,
	0x3E08,	0x1000,	0x02,
	0x3DF4,	0x0FF7,	0x02,
	0x3DFE,	0x0FF7,	0x02,
	0x3DE4,	0x0001,	0x02,
	0x3AA4,	0x0100,	0x02,
	0xF4A2,	0x000C,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43CA,	0x02,
	0x1132,	0x0000,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x00A3,	0x02,
	0x030C,	0x0003,	0x02,
	0x030E,	0x0055,	0x02,
	0x300A,	0x0000,	0x02,
	0x3092,	0x0001,	0x02,
	0x31AA,	0x0001,	0x02,
	0xB134,	0x0000,	0x02,
	0x307C,	0x0340,	0x02,
	0x3052,	0x0104,	0x02,
	0x6214,	0x7970,	0x02,
	0x0216,	0x0100,	0x02,
};

const u32 sensor_3h1_setfile_A_1632x918_60fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6028,	0x2000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0344,	0x0010,	0x02,
	0x0348,	0x0CCF,	0x02,
	0x0346,	0x0144,	0x02,
	0x034A,	0x086F,	0x02,
	0x034C,	0x0660,	0x02,
	0x034E,	0x0396,	0x02,
	0x0342,	0x13D0,	0x02,
	0x0340,	0x052E,	0x02,
	0x0900,	0x0112,	0x02,
	0x0386,	0x0003,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x379E,	0x0104,	0x02,
	0x31B8,	0x0020,	0x02,
	0x37FA,	0x0032,	0x02,
	0xF46C,	0x0010,	0x02,
	0xF414,	0x64C6,	0x02,
	0xF416,	0x002F,	0x02,
	0xF462,	0x0000,	0x02,
	0xF464,	0x0000,	0x02,
	0xF476,	0x0082,	0x02,
	0x37C2,	0x0804,	0x02,
	0x37C6,	0x0403,	0x02,
	0x37BE,	0x0909,	0x02,
	0x37BA,	0x130D,	0x02,
	0xF44C,	0x0014,	0x02,
	0xF452,	0x000B,	0x02,
	0xF44E,	0x0012,	0x02,
	0x37DE,	0x0000,	0x02,
	0x37E0,	0x7FE7,	0x02,
	0x37E2,	0x03FF,	0x02,
	0x37F0,	0x007F,	0x02,
	0x0200,	0x13B8,	0x02,
	0x021C,	0x13B8,	0x02,
	0x3158,	0x0060,	0x02,
	0x3254,	0x0001,	0x02,
	0x3258,	0x0001,	0x02,
	0x325C,	0x0003,	0x02,
	0x3260,	0x0002,	0x02,
	0x3298,	0x000A,	0x02,
	0x32B8,	0x0002,	0x02,
	0x32BC,	0x0000,	0x02,
	0x31B2,	0x0200,	0x02,
	0x3ACE,	0xFECD,	0x02,
	0x3B00,	0xFEF6,	0x02,
	0x3B32,	0xFEF6,	0x02,
	0x3E0C,	0x0FF7,	0x02,
	0x3DF8,	0x1008,	0x02,
	0x3E02,	0x1008,	0x02,
	0x3AC4,	0xFF29,	0x02,
	0x3AF6,	0xFF3E,	0x02,
	0x3B28,	0xFF3E,	0x02,
	0x3E0A,	0x0FF7,	0x02,
	0x3DF6,	0x1000,	0x02,
	0x3E00,	0x1000,	0x02,
	0x3ABA,	0xFF43,	0x02,
	0x3AEC,	0xFF7B,	0x02,
	0x3B1E,	0xFF7B,	0x02,
	0x3E08,	0x1000,	0x02,
	0x3DF4,	0x0FF7,	0x02,
	0x3DFE,	0x0FF7,	0x02,
	0x3DE4,	0x0001,	0x02,
	0x3AA4,	0x0100,	0x02,
	0xF4A2,	0x000C,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43CA,	0x02,
	0x1132,	0x0000,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x00A3,	0x02,
	0x030C,	0x0003,	0x02,
	0x030E,	0x0053,	0x02,
	0x300A,	0x0001,	0x02,
	0x3092,	0x0001,	0x02,
	0x31AA,	0x0001,	0x02,
	0xB134,	0x0000,	0x02,
	0x307C,	0x0340,	0x02,
	0x3052,	0x0104,	0x02,
	0x6214,	0x7970,	0x02,
	0x0216,	0x0000,	0x02,
};

const u32 sensor_3h1_setfile_A_1632x918_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6028,	0x2000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0344,	0x0010,	0x02,
	0x0348,	0x0CCF,	0x02,
	0x0346,	0x0144,	0x02,
	0x034A,	0x086F,	0x02,
	0x034C,	0x0660,	0x02,
	0x034E,	0x0396,	0x02,
	0x0342,	0x36B0,	0x02,
	0x0340,	0x03C0,	0x02,
	0x0900,	0x0112,	0x02,
	0x0386,	0x0003,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x379E,	0x0104,	0x02,
	0x31B8,	0x0020,	0x02,
	0x37FA,	0x0032,	0x02,
	0xF46C,	0x0010,	0x02,
	0xF414,	0x64C6,	0x02,
	0xF416,	0x002F,	0x02,
	0xF462,	0x0000,	0x02,
	0xF464,	0x0000,	0x02,
	0xF476,	0x0082,	0x02,
	0x37C2,	0x0804,	0x02,
	0x37C6,	0x0403,	0x02,
	0x37BE,	0x0909,	0x02,
	0x37BA,	0x130D,	0x02,
	0xF44C,	0x0014,	0x02,
	0xF452,	0x000B,	0x02,
	0xF44E,	0x0012,	0x02,
	0x37DE,	0x0000,	0x02,
	0x37E0,	0x7FE7,	0x02,
	0x37E2,	0x03FF,	0x02,
	0x37F0,	0x007F,	0x02,
	0x0200,	0x13B8,	0x02,
	0x021C,	0x13B8,	0x02,
	0x3158,	0x0039,	0x02,
	0x3254,	0x0001,	0x02,
	0x3258,	0x0001,	0x02,
	0x325C,	0x0003,	0x02,
	0x3260,	0x0002,	0x02,
	0x3298,	0x000A,	0x02,
	0x32B8,	0x0002,	0x02,
	0x32BC,	0x0000,	0x02,
	0x31B2,	0x0200,	0x02,
	0x3ACE,	0xFECD,	0x02,
	0x3B00,	0xFEF6,	0x02,
	0x3B32,	0xFEF6,	0x02,
	0x3E0C,	0x0FF7,	0x02,
	0x3DF8,	0x1008,	0x02,
	0x3E02,	0x1008,	0x02,
	0x3AC4,	0xFF29,	0x02,
	0x3AF6,	0xFF3E,	0x02,
	0x3B28,	0xFF3E,	0x02,
	0x3E0A,	0x0FF7,	0x02,
	0x3DF6,	0x1000,	0x02,
	0x3E00,	0x1000,	0x02,
	0x3ABA,	0xFF43,	0x02,
	0x3AEC,	0xFF7B,	0x02,
	0x3B1E,	0xFF7B,	0x02,
	0x3E08,	0x1000,	0x02,
	0x3DF4,	0x0FF7,	0x02,
	0x3DFE,	0x0FF7,	0x02,
	0x3DE4,	0x0001,	0x02,
	0x3AA4,	0x0100,	0x02,
	0xF4A2,	0x000C,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43CA,	0x02,
	0x1132,	0x0000,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x00A3,	0x02,
	0x030C,	0x0003,	0x02,
	0x030E,	0x0053,	0x02,
	0x300A,	0x0001,	0x02,
	0x3092,	0x0000,	0x02,
	0x31AA,	0x0001,	0x02,
	0xB134,	0x0000,	0x02,
	0x307C,	0x0340,	0x02,
	0x3052,	0x0104,	0x02,
	0x6214,	0x7970,	0x02,
	0x0216,	0x0000,	0x02,
};

const u32 sensor_3h1_setfile_A_1632x1224_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6028,	0x2000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0344,	0x0010,	0x02,
	0x0348,	0x0CCF,	0x02,
	0x0346,	0x0010,	0x02,
	0x034A,	0x099F,	0x02,
	0x034C,	0x0660,	0x02,
	0x034E,	0x04C8,	0x02,
	0x0342,	0x2970,	0x02,
	0x0340,	0x04F2,	0x02,
	0x0900,	0x0112,	0x02,
	0x0386,	0x0003,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x379E,	0x0104,	0x02,
	0x31B8,	0x0020,	0x02,
	0x37FA,	0x0032,	0x02,
	0xF46C,	0x0010,	0x02,
	0xF414,	0x64C6,	0x02,
	0xF416,	0x002F,	0x02,
	0xF462,	0x0000,	0x02,
	0xF464,	0x0000,	0x02,
	0xF476,	0x0082,	0x02,
	0x37C2,	0x0804,	0x02,
	0x37C6,	0x0403,	0x02,
	0x37BE,	0x0909,	0x02,
	0x37BA,	0x130D,	0x02,
	0xF44C,	0x0014,	0x02,
	0xF452,	0x000B,	0x02,
	0xF44E,	0x0012,	0x02,
	0x37DE,	0x0000,	0x02,
	0x37E0,	0x7FE7,	0x02,
	0x37E2,	0x03FF,	0x02,
	0x37F0,	0x007F,	0x02,
	0x0200,	0x13B8,	0x02,
	0x021C,	0x13B8,	0x02,
	0x3158,	0x0060,	0x02,
	0x3254,	0x0001,	0x02,
	0x3258,	0x0001,	0x02,
	0x325C,	0x0003,	0x02,
	0x3260,	0x0002,	0x02,
	0x3298,	0x000A,	0x02,
	0x32B8,	0x0002,	0x02,
	0x32BC,	0x0000,	0x02,
	0x31B2,	0x0200,	0x02,
	0x3ACE,	0xFECD,	0x02,
	0x3B00,	0xFEF6,	0x02,
	0x3B32,	0xFEF6,	0x02,
	0x3E0C,	0x0FF7,	0x02,
	0x3DF8,	0x1008,	0x02,
	0x3E02,	0x1008,	0x02,
	0x3AC4,	0xFF29,	0x02,
	0x3AF6,	0xFF3E,	0x02,
	0x3B28,	0xFF3E,	0x02,
	0x3E0A,	0x0FF7,	0x02,
	0x3DF6,	0x1000,	0x02,
	0x3E00,	0x1000,	0x02,
	0x3ABA,	0xFF43,	0x02,
	0x3AEC,	0xFF7B,	0x02,
	0x3B1E,	0xFF7B,	0x02,
	0x3E08,	0x1000,	0x02,
	0x3DF4,	0x0FF7,	0x02,
	0x3DFE,	0x0FF7,	0x02,
	0x3DE4,	0x0001,	0x02,
	0x3AA4,	0x0100,	0x02,
	0xF4A2,	0x000C,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43CA,	0x02,
	0x1132,	0x0000,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x00A3,	0x02,
	0x030C,	0x0003,	0x02,
	0x030E,	0x0053,	0x02,
	0x300A,	0x0001,	0x02,
	0x3092,	0x0000,	0x02,
	0x31AA,	0x0001,	0x02,
	0xB134,	0x0000,	0x02,
	0x307C,	0x0340,	0x02,
	0x3052,	0x0104,	0x02,
	0x6214,	0x7970,	0x02,
	0x0216,	0x0000,	0x02,
};

const u32 sensor_3h1_setfile_A_1224x1224_30fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6028,	0x2000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0344,	0x01A8,	0x02,
	0x0348,	0x0B37,	0x02,
	0x0346,	0x0010,	0x02,
	0x034A,	0x099F,	0x02,
	0x034C,	0x04C8,	0x02,
	0x034E,	0x04C8,	0x02,
	0x0342,	0x2970,	0x02,
	0x0340,	0x04F2,	0x02,
	0x0900,	0x0112,	0x02,
	0x0386,	0x0003,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x379E,	0x0104,	0x02,
	0x31B8,	0x0020,	0x02,
	0x37FA,	0x0032,	0x02,
	0xF46C,	0x0010,	0x02,
	0xF414,	0x64C6,	0x02,
	0xF416,	0x002F,	0x02,
	0xF462,	0x0000,	0x02,
	0xF464,	0x0000,	0x02,
	0xF476,	0x0082,	0x02,
	0x37C2,	0x0804,	0x02,
	0x37C6,	0x0403,	0x02,
	0x37BE,	0x0909,	0x02,
	0x37BA,	0x130D,	0x02,
	0xF44C,	0x0014,	0x02,
	0xF452,	0x000B,	0x02,
	0xF44E,	0x0012,	0x02,
	0x37DE,	0x0000,	0x02,
	0x37E0,	0x7FE7,	0x02,
	0x37E2,	0x03FF,	0x02,
	0x37F0,	0x007F,	0x02,
	0x0200,	0x13B8,	0x02,
	0x021C,	0x13B8,	0x02,
	0x3158,	0x0030,	0x02,
	0x3254,	0x0001,	0x02,
	0x3258,	0x0001,	0x02,
	0x325C,	0x0003,	0x02,
	0x3260,	0x0002,	0x02,
	0x3298,	0x000A,	0x02,
	0x32B8,	0x0002,	0x02,
	0x32BC,	0x0000,	0x02,
	0x31B2,	0x0200,	0x02,
	0x3ACE,	0xFECD,	0x02,
	0x3B00,	0xFEF6,	0x02,
	0x3B32,	0xFEF6,	0x02,
	0x3E0C,	0x0FF7,	0x02,
	0x3DF8,	0x1008,	0x02,
	0x3E02,	0x1008,	0x02,
	0x3AC4,	0xFF29,	0x02,
	0x3AF6,	0xFF3E,	0x02,
	0x3B28,	0xFF3E,	0x02,
	0x3E0A,	0x0FF7,	0x02,
	0x3DF6,	0x1000,	0x02,
	0x3E00,	0x1000,	0x02,
	0x3ABA,	0xFF43,	0x02,
	0x3AEC,	0xFF7B,	0x02,
	0x3B1E,	0xFF7B,	0x02,
	0x3E08,	0x1000,	0x02,
	0x3DF4,	0x0FF7,	0x02,
	0x3DFE,	0x0FF7,	0x02,
	0x3DE4,	0x0001,	0x02,
	0x3AA4,	0x0100,	0x02,
	0xF4A2,	0x000C,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43CA,	0x02,
	0x1132,	0x0000,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x00A3,	0x02,
	0x030C,	0x0003,	0x02,
	0x030E,	0x0053,	0x02,
	0x300A,	0x0001,	0x02,
	0x3092,	0x0000,	0x02,
	0x31AA,	0x0001,	0x02,
	0xB134,	0x0000,	0x02,
	0x307C,	0x0340,	0x02,
	0x3052,	0x0104,	0x02,
	0x6214,	0x7970,	0x02,
	0x0216,	0x0000,	0x02,
};

const u32 sensor_3h1_setfile_A_800x600_120fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6028,	0x2000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0344,	0x0030,	0x02,
	0x0348,	0x0CAF,	0x02,
	0x0346,	0x0028,	0x02,
	0x034A,	0x0987,	0x02,
	0x034C,	0x0320,	0x02,
	0x034E,	0x0258,	0x02,
	0x0342,	0x13D0,	0x02,
	0x0340,	0x0296,	0x02,
	0x0900,	0x0114,	0x02,
	0x0386,	0x0007,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0040,	0x02,
	0x379E,	0x0104,	0x02,
	0x31B8,	0x0020,	0x02,
	0x37FA,	0x0032,	0x02,
	0xF46C,	0x0010,	0x02,
	0xF414,	0x64C6,	0x02,
	0xF416,	0x002F,	0x02,
	0xF462,	0x0000,	0x02,
	0xF464,	0x0000,	0x02,
	0xF476,	0x0082,	0x02,
	0x37C2,	0x0804,	0x02,
	0x37C6,	0x0403,	0x02,
	0x37BE,	0x0909,	0x02,
	0x37BA,	0x130D,	0x02,
	0xF44C,	0x0014,	0x02,
	0xF452,	0x000B,	0x02,
	0xF44E,	0x0012,	0x02,
	0x37DE,	0x0000,	0x02,
	0x37E0,	0x7FE7,	0x02,
	0x37E2,	0x03FF,	0x02,
	0x37F0,	0x007F,	0x02,
	0x0200,	0x13B8,	0x02,
	0x021C,	0x13B8,	0x02,
	0x3158,	0x0012,	0x02,
	0x3254,	0x0001,	0x02,
	0x3258,	0x0001,	0x02,
	0x325C,	0x0003,	0x02,
	0x3260,	0x0002,	0x02,
	0x3298,	0x000A,	0x02,
	0x32B8,	0x0002,	0x02,
	0x32BC,	0x0000,	0x02,
	0x31B2,	0x0200,	0x02,
	0x3ACE,	0xFECD,	0x02,
	0x3DE4,	0x0001,	0x02,
	0x3AA4,	0x0100,	0x02,
	0xF4A2,	0x000C,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43CA,	0x02,
	0x1132,	0x0000,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x00A3,	0x02,
	0x030C,	0x0004,	0x02,
	0x030E,	0x0070,	0x02,
	0x300A,	0x0002,	0x02,
	0x3092,	0x0001,	0x02,
	0x31AA,	0x0001,	0x02,
	0xB134,	0x0000,	0x02,
	0x307C,	0x0340,	0x02,
	0x3052,	0x0104,	0x02,
	0x6214,	0x7970,	0x02,
	0x0216,	0x0000,	0x02,
};

const u32 sensor_3h1_setfile_A_752x1328_15fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6028,	0x2000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0344,	0x04F8,	0x02,
	0x0348,	0x07E7,	0x02,
	0x0346,	0x0264,	0x02,
	0x034A,	0x0793,	0x02,
	0x034C,	0x02F0,	0x02,
	0x034E,	0x0530,	0x02,
	0x0342,	0x27A0,	0x02,
	0x0340,	0x0A5C,	0x02,
	0x0900,	0x0011,	0x02,
	0x0386,	0x0001,	0x02,
	0x0400,	0x0000,	0x02,
	0x0404,	0x0010,	0x02,
	0x379E,	0x0104,	0x02,
	0x31B8,	0x0040,	0x02,
	0x37FA,	0x0032,	0x02,
	0xF46C,	0x0010,	0x02,
	0xF414,	0x64C6,	0x02,
	0xF416,	0x002F,	0x02,
	0xF462,	0x0000,	0x02,
	0xF464,	0x0000,	0x02,
	0xF476,	0x0082,	0x02,
	0x37C2,	0x0804,	0x02,
	0x37C6,	0x0203,	0x02,
	0x37BE,	0x0909,	0x02,
	0x37BA,	0x130D,	0x02,
	0xF44C,	0x0014,	0x02,
	0xF452,	0x000B,	0x02,
	0xF44E,	0x0012,	0x02,
	0x37DE,	0x0000,	0x02,
	0x37E0,	0x7FE7,	0x02,
	0x37E2,	0x03FF,	0x02,
	0x37F0,	0x007F,	0x02,
	0x0200,	0x13B8,	0x02,
	0x021C,	0x13B8,	0x02,
	0x3158,	0x0007,	0x02,
	0x3254,	0x0001,	0x02,
	0x3258,	0x0001,	0x02,
	0x325C,	0x0003,	0x02,
	0x3260,	0x0002,	0x02,
	0x3298,	0x000A,	0x02,
	0x32B8,	0x0002,	0x02,
	0x32BC,	0x0000,	0x02,
	0x31B2,	0x0500,	0x02,
	0x3ACE,	0xFECD,	0x02,
	0x3B00,	0xFEF6,	0x02,
	0x3B32,	0xFEF6,	0x02,
	0x3E0C,	0x0FF7,	0x02,
	0x3DF8,	0x1008,	0x02,
	0x3E02,	0x1008,	0x02,
	0x3AC4,	0xFF29,	0x02,
	0x3AF6,	0xFF3E,	0x02,
	0x3B28,	0xFF3E,	0x02,
	0x3E0A,	0x0FF7,	0x02,
	0x3DF6,	0x1000,	0x02,
	0x3E00,	0x1000,	0x02,
	0x3ABA,	0xFF43,	0x02,
	0x3AEC,	0xFF7B,	0x02,
	0x3B1E,	0xFF7B,	0x02,
	0x3E08,	0x1000,	0x02,
	0x3DF4,	0x0FF7,	0x02,
	0x3DFE,	0x0FF7,	0x02,
	0x3DE4,	0x0001,	0x02,
	0x3AA4,	0x0100,	0x02,
	0xF4A2,	0x000C,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43CA,	0x02,
	0x1132,	0x0000,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x00A3,	0x02,
	0x030C,	0x0003,	0x02,
	0x030E,	0x0055,	0x02,
	0x300A,	0x0000,	0x02,
	0x3092,	0x0000,	0x02,
	0x31AA,	0x0001,	0x02,
	0xB134,	0x0000,	0x02,
	0x307C,	0x0340,	0x02,
	0x3052,	0x0104,	0x02,
	0x6214,	0x7970,	0x02,
	0x0216,	0x0000,	0x02,
};

const u32 sensor_3h1_setfile_A_376x664_110fps[] = {
	0xFCFC,	0x4000,	0x02,
	0x6028,	0x2000,	0x02,
	0x6214,	0x7971,	0x02,
	0x6218,	0x7150,	0x02,
	0x0344,	0x04F8,	0x02,
	0x0348,	0x07E7,	0x02,
	0x0346,	0x0264,	0x02,
	0x034A,	0x0793,	0x02,
	0x034C,	0x0178,	0x02,
	0x034E,	0x0298,	0x02,
	0x0342,	0x13C0,	0x02,
	0x0340,	0x02D4,	0x02,
	0x0900,	0x0112,	0x02,
	0x0386,	0x0003,	0x02,
	0x0400,	0x0001,	0x02,
	0x0404,	0x0020,	0x02,
	0x379E,	0x0104,	0x02,
	0x31B8,	0x0020,	0x02,
	0x37FA,	0x0032,	0x02,
	0xF46C,	0x0010,	0x02,
	0xF414,	0x64C6,	0x02,
	0xF416,	0x002F,	0x02,
	0xF462,	0x0000,	0x02,
	0xF464,	0x0000,	0x02,
	0xF476,	0x0082,	0x02,
	0x37C2,	0x0804,	0x02,
	0x37C6,	0x0403,	0x02,
	0x37BE,	0x0909,	0x02,
	0x37BA,	0x130D,	0x02,
	0xF44C,	0x0014,	0x02,
	0xF452,	0x000B,	0x02,
	0xF44E,	0x0012,	0x02,
	0x37DE,	0x0000,	0x02,
	0x37E0,	0x7FE7,	0x02,
	0x37E2,	0x03FF,	0x02,
	0x37F0,	0x007F,	0x02,
	0x0200,	0x13B8,	0x02,
	0x021C,	0x13B8,	0x02,
	0x3158,	0x0028,	0x02,
	0x3254,	0x0001,	0x02,
	0x3258,	0x0001,	0x02,
	0x325C,	0x0003,	0x02,
	0x3260,	0x0002,	0x02,
	0x3298,	0x000A,	0x02,
	0x32B8,	0x0002,	0x02,
	0x32BC,	0x0000,	0x02,
	0x31B2,	0x0200,	0x02,
	0x3ACE,	0xFECD,	0x02,
	0x3B00,	0xFEF6,	0x02,
	0x3B32,	0xFEF6,	0x02,
	0x3E0C,	0x0FF7,	0x02,
	0x3DF8,	0x1008,	0x02,
	0x3E02,	0x1008,	0x02,
	0x3AC4,	0xFF29,	0x02,
	0x3AF6,	0xFF3E,	0x02,
	0x3B28,	0xFF3E,	0x02,
	0x3E0A,	0x0FF7,	0x02,
	0x3DF6,	0x1000,	0x02,
	0x3E00,	0x1000,	0x02,
	0x3ABA,	0xFF43,	0x02,
	0x3AEC,	0xFF7B,	0x02,
	0x3B1E,	0xFF7B,	0x02,
	0x3E08,	0x1000,	0x02,
	0x3DF4,	0x0FF7,	0x02,
	0x3DFE,	0x0FF7,	0x02,
	0x3DE4,	0x0001,	0x02,
	0x3AA4,	0x0100,	0x02,
	0xF4A2,	0x000C,	0x02,
	0x0136,	0x1A00,	0x02,
	0x1130,	0x43CA,	0x02,
	0x1132,	0x0000,	0x02,
	0x0304,	0x0007,	0x02,
	0x0306,	0x00A3,	0x02,
	0x030C,	0x0003,	0x02,
	0x030E,	0x0055,	0x02,
	0x300A,	0x0000,	0x02,
	0x3092,	0x0000,	0x02,
	0x31AA,	0x0001,	0x02,
	0xB134,	0x0000,	0x02,
	0x307C,	0x0340,	0x02,
	0x3052,	0x0104,	0x02,
	0x6214,	0x7970,	0x02,
	0x0216,	0x0000,	0x02,
};

const struct sensor_pll_info_compact sensor_3h1_pllinfo_A_3264x2448_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1473300000,
	403600000,
	0x0A5C,
	0x13D0,
};

const struct sensor_pll_info_compact sensor_3h1_pllinfo_A_2448x2448_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1473300000,
	403600000,
	0x0A5C,
	0x13D0,
};

const struct sensor_pll_info_compact sensor_3h1_pllinfo_A_3264x1836_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1473300000,
	403600000,
	0x0A5C,
	0x13D0,
};

const struct sensor_pll_info_compact sensor_3h1_pllinfo_A_1632x918_60fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	719300000,
	403600000,
	0x052E,
	0x13D0,
};

const struct sensor_pll_info_compact sensor_3h1_pllinfo_A_1632x918_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	719300000,
	403600000,
	0x03C0,
	0x36B0,
};

const struct sensor_pll_info_compact sensor_3h1_pllinfo_A_1632x1224_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	719300000,
	403600000,
	0x04F2,
	0x2970,
};

const struct sensor_pll_info_compact sensor_3h1_pllinfo_A_1224x1224_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	719300000,
	403600000,
	0x04F2,
	0x2970,
};

const struct sensor_pll_info_compact sensor_3h1_pllinfo_A_800x600_120fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	364000000,
	403600000,
	0x0296,
	0x13D0,
};

const struct sensor_pll_info_compact sensor_3h1_pllinfo_A_752x1328_15fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1473300000,
	403600000,
	0x0A5C,
	0x27A0,
};

const struct sensor_pll_info_compact sensor_3h1_pllinfo_A_376x664_110fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1473300000,
	403600000,
	0x02D4,
	0x13C0,
};

static const u32 *sensor_3h1_setfiles_A[] = {
        sensor_3h1_setfile_A_3264x2448_30fps,
        sensor_3h1_setfile_A_2448x2448_30fps,
        sensor_3h1_setfile_A_3264x1836_30fps,
        sensor_3h1_setfile_A_1632x918_60fps,
        sensor_3h1_setfile_A_1632x918_30fps,
        sensor_3h1_setfile_A_1632x1224_30fps,
        sensor_3h1_setfile_A_1224x1224_30fps,
        sensor_3h1_setfile_A_800x600_120fps,
        sensor_3h1_setfile_A_752x1328_15fps,
        sensor_3h1_setfile_A_376x664_110fps
};

static const u32 sensor_3h1_setfile_A_sizes[] = {
	sizeof(sensor_3h1_setfile_A_3264x2448_30fps) / sizeof(sensor_3h1_setfile_A_3264x2448_30fps[0]),
	sizeof(sensor_3h1_setfile_A_2448x2448_30fps) / sizeof(sensor_3h1_setfile_A_2448x2448_30fps[0]),
	sizeof(sensor_3h1_setfile_A_3264x1836_30fps) / sizeof(sensor_3h1_setfile_A_3264x1836_30fps[0]),
	sizeof(sensor_3h1_setfile_A_1632x918_60fps) / sizeof(sensor_3h1_setfile_A_1632x918_60fps[0]),
	sizeof(sensor_3h1_setfile_A_1632x918_30fps) / sizeof(sensor_3h1_setfile_A_1632x918_30fps[0]),
	sizeof(sensor_3h1_setfile_A_1632x1224_30fps) / sizeof(sensor_3h1_setfile_A_1632x1224_30fps[0]),
	sizeof(sensor_3h1_setfile_A_1224x1224_30fps) / sizeof(sensor_3h1_setfile_A_1224x1224_30fps[0]),
	sizeof(sensor_3h1_setfile_A_800x600_120fps) / sizeof(sensor_3h1_setfile_A_800x600_120fps[0]),
	sizeof(sensor_3h1_setfile_A_752x1328_15fps) / sizeof(sensor_3h1_setfile_A_752x1328_15fps[0]),
	sizeof(sensor_3h1_setfile_A_376x664_110fps) / sizeof(sensor_3h1_setfile_A_376x664_110fps[0])
};

static const struct sensor_pll_info_compact *sensor_3h1_pllinfos_A[] = {
	&sensor_3h1_pllinfo_A_3264x2448_30fps,
	&sensor_3h1_pllinfo_A_2448x2448_30fps,
	&sensor_3h1_pllinfo_A_3264x1836_30fps,
	&sensor_3h1_pllinfo_A_1632x918_60fps,
	&sensor_3h1_pllinfo_A_1632x918_30fps,
	&sensor_3h1_pllinfo_A_1632x1224_30fps,
	&sensor_3h1_pllinfo_A_1224x1224_30fps,
	&sensor_3h1_pllinfo_A_800x600_120fps,
	&sensor_3h1_pllinfo_A_752x1328_15fps,
	&sensor_3h1_pllinfo_A_376x664_110fps
};

#endif
