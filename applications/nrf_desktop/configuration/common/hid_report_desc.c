/*
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#include <zephyr/types.h>

#include "hid_report_desc.h"

#define CONFIG_ZMK_HID_CONSUMER_REPORT_SIZE 6
#define CONFIG_ZMK_HID_KEYBOARD_REPORT_SIZE 6
#define CONFIG_ZMK_HID_REPORT_TYPE_HKRO 1
#define CONFIG_ZMK_HID_CONSUMER_REPORT_USAGES_FULL 1

#define CONFIG_ZMK_HID_INDICATORS 1
#define CONFIG_ZMK_MOUSE 1
#include <zmk/hid.h>

const uint8_t *hid_report_desc = zmk_hid_report_desc;
const size_t hid_report_desc_size = sizeof(zmk_hid_report_desc);

