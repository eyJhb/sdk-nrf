/*
 * Copyright (c) 2020 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

/* This configuration file defines discovery parameters for BLE central.
 * Used only by ble_discovery module.
 */

/* This structure enforces the header file is included only once in the build.
 * Violating this requirement triggers a multiple definition error at link time.
 */
const struct {} ble_discovery_include_once;

#include "ble_event.h"

struct bt_peripheral {
	uint16_t pid;
	enum peer_type peer_type;
};

static const uint16_t vendor_vid = 0x16c0;

/* Peripherals parameters. */
static const struct bt_peripheral bt_peripherals[] = {
	{
		.pid = 0x27db,
		.peer_type = PEER_TYPE_KEYBOARD,
	},
};
