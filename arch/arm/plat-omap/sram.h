/*
 * OMAP common SRAM prototypes
 *
 * Copyright (C) 2012 Texas Instruments, Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 *
 * XXX This file is needed until the SRAM handling is implemented via
 * some device driver.
 */

#ifndef __ARCH_ARM_PLAT_OMAP_SRAM_H
#define __ARCH_ARM_PLAT_OMAP_SRAM_H

#include <linux/kernel.h>

extern void *omap_sram_push_address(unsigned long size);
extern void omap_sram_reset(void);
extern void __init omap_map_sram(unsigned long start, unsigned long size,
				 unsigned long skip, int cached);

#endif
