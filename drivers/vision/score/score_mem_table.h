/*
 * Samsung Exynos SoC series SCore driver
 *
 * Definition of memory in kernel space that SCore device uses
 *
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *              http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __SCORE_MEM_TABLE_H__
#define __SCORE_MEM_TABLE_H__

#include "score_firmware.h"

/* Memory size that SCore driver uses in kernel space */
/* (TODO this is temporal value) */
#define SCORE_MEMORY_INTERNAL_SIZE	(SZ_16M)

#define SCORE_FW_SIZE			(SZ_1M * 6)
#define SCORE_MASTER_TEXT_SIZE		(SZ_1M)
#define SCORE_MASTER_DATA_SIZE		(SZ_1M)
#define SCORE_KNIGHT1_TEXT_SIZE		(SZ_1M)
#define SCORE_KNIGHT1_DATA_SIZE		(SZ_1M)
#define SCORE_KNIGHT2_TEXT_SIZE		(SZ_1M)
#define SCORE_KNIGHT2_DATA_SIZE		(SZ_1M)

#define SCORE_MC_MALLOC_SIZE		(SZ_1M)
#define SCORE_KC_MALLOC_SIZE		(SZ_1M)
#define SCORE_MALLOC_SIZE		\
	(SCORE_MC_MALLOC_SIZE + SCORE_KC_MALLOC_SIZE * 2)
#define SCORE_PRINT_SIZE		(SZ_1M)
#define SCORE_MC_PROFILER_SIZE		(SZ_1M)
#define SCORE_KC_PROFILER_SIZE		(SZ_1M)
#define SCORE_PROFILER_SIZE		\
	(SCORE_MC_PROFILER_SIZE + SCORE_KC_PROFILER_SIZE * 2)
#endif

