/*
 * OMAP 32k counter function prototypes
 *
 * Copyright (C) 2012 Texas Instruments, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * XXX Needed until the OMAP 32k counter code is moved to somewhere under
 * drivers/.
 */
#ifndef __ARCH_ARM_PLAT_OMAP_COUNTER_32K_H
#define __ARCH_ARM_PLAT_OMAP_COUNTER_32K_H

#include <linux/kernel.h>

extern int omap_init_clocksource_32k(void __iomem *vbase);

#endif
