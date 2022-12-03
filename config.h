// Copyright 2022 Marco "Bob" (@Marco "Bob")
// SPDX-License-Identifier: GPL-2.0-or-later
#define VENDOR_ID       0x3A3C
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    BOB

#define PRODUCT         ARTSYFARTSY
#pragma once

/* Board layout */
#define MATRIX_ROWS 2
#define MATRIX_COLS 4
#define UNUSED_PINS

/* Prevent jitters in key presses */
#define DEBOUNCE 5
#define DIRECT_PINS { \
    { GP29, GP6, GP7, GP0 }, \
    { GP3, GP4, GP2, GP1}, \
}

#define ENCODERS_PAD_A { GP26 }
#define ENCODERS_PAD_B { GP27 }
#define WS2812_PIO_USE_PIO1
#define RGB_DI_PIN GP28
#define RGBLED_NUM 2
