/*
 * Copyright (C) 2023 Texas Instruments Incorporated
 * Copyright (C) 2025 Variscite Ltd.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 *
 *   Neither the name of Texas Instruments Incorporated nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <kernel/dpl/ClockP.h>
#include <kernel/dpl/AddrTranslateP.h>
#include "ti_drivers_config.h"
#include "ti_drivers_open_close.h"
#include "ti_board_open_close.h"


#include <kernel/dpl/CacheP.h>

CacheP_Config gCacheConfig = {};

/* This file contains the changes necessary for the VAR-SOM-AM62x */


#define VPP_ENABLE_PIN_BASE_ADDR	(GPIO_VPP_BASE_ADDR)

#define VPP_ENABLE_PIN			(47)

void keywriter_setVpp()
{
	uint32_t gpioBaseAddr = (uint32_t) AddrTranslateP_getLocalAddr(VPP_ENABLE_PIN_BASE_ADDR);

	/* set VPP core */
	GPIO_setDirMode(gpioBaseAddr, VPP_ENABLE_PIN, GPIO_DIRECTION_OUTPUT);
	GPIO_pinWriteHigh(gpioBaseAddr, VPP_ENABLE_PIN);

	ClockP_usleep(3000);	/* to be on the safe side, in normal conditions we would need 250us */
}

