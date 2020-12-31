/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#ifndef __MTK_UDI_MT6779__
#define __MTK_UDI_MT6779__

#include <linux/kernel.h>

/* CPU UDI pin mux ADDR */
/* 1. Write 0x1000540C= 44000000 */
/* 2. Write 0x1000541C= 00004440 */
/* APU UDI pin mux ADDR */
/* 1. Write 0x100053FC= 00404000 */
/* 2. Write 0x1000548C= 00444000 */

#ifdef CONFIG_OF
#define DEVICE_GPIO "mediatek,gpio"
/* 0x10005000 0x1000, UDI pinmux reg */
static void __iomem  *udipin_base;
#endif

#ifdef __KERNEL__
#define UDIPIN_BASE				(udipin_base)
#else
#define UDIPIN_BASE				0x10005000
#endif

/* 0x10005000 0x1000, UDI pinmux reg */
#define UDIPIN_UDI_MUX1			(UDIPIN_BASE+0x400)
#define UDIPIN_UDI_MUX1_VALUE	(0x44000000)
#define UDIPIN_UDI_MUX2			(UDIPIN_BASE+0x410)
#define UDIPIN_UDI_MUX2_VALUE	(0x00004440)

#define UDIPIN_UDI_MUX3			(UDIPIN_BASE+0x3F0)
#define UDIPIN_UDI_MUX3_VALUE	(0x00404000)
#define UDIPIN_UDI_MUX4			(UDIPIN_BASE+0x480)
#define UDIPIN_UDI_MUX4_VALUE	(0x00444000)

#endif /* __MTK_UDI_MT6779__ */

