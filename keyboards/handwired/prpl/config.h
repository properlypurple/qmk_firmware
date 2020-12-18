/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
p
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"
/* USB Device descriptor parameter */
#define VENDOR_ID       0xDEAD
#define PRODUCT_ID      0xDADA
#define DEVICE_VER      0x0001
#define MANUFACTURER    Properlypurple
#define PRODUCT         Prpl split keyboard
#define DESCRIPTION     A split keyboard for the weirdos

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }
//#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5 } //uncomment this line and comment line above if you need to reverse left-to-right key order

#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN D3

#define RGBLED_NUM 12    // Number of LEDs
#define RGBLED_SPLIT {6,6}
#define RGBLIGHT_SPLIT
//#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_BREATHING
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#define NO_MUSIC_MODE

//#define B6_AUDIO

//#define ENCODERS_PAD_A { D4 }
//#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A {F4}
#define ENCODERS_PAD_B {D4}
#define ENCODERS_PAD_A_RIGHT {F4}
#define ENCODERS_PAD_B_RIGHT {D4}

#define F_SCL 800000L
