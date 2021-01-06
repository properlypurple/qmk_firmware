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
//#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
//#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }
//#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5 } //uncomment this line and comment line above if you need to reverse left-to-right key order
// pins for STM32F401
#define MATRIX_ROW_PINS {B10, B2, B1, B0, A7}
#define MATRIX_COL_PINS {A6, A5, A4, A3, A2, A1, A0}


#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
//#define SOFT_SERIAL_PIN D2
//STM32F401
//#define SOFT_SERIAL_PIN B9
#define SPLIT_HAND_PIN B3
#define SOFT_SERIAL_PIN B6
#define SELECT_SOFT_SERIAL_SPEED 0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
//#define RGB_DI_PIN D3
#define RGB_DI_PIN B8

#define RGBLED_NUM 12    // Number of LEDs
#define RGBLED_SPLIT {6,6}
#define RGBLIGHT_SPLIT
//#define RGBLIGHT_EFFECT_STATIC_GRADIENT
//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_MODE_RAINBOW_MOOD
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

//#define NO_MUSIC_MODE

//#define B7_AUDIO
#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(STARTUP_SOUND)
#endif


//#define ENCODERS_PAD_A {D4}
//#define ENCODERS_PAD_B {F4}
//#define ENCODERS_PAD_A_RIGHT {F4}
//#define ENCODERS_PAD_B_RIGHT {D4}
//
#define ENCODERS_PAD_A {B12}
#define ENCODERS_PAD_B {B13}
#define ENCODERS_PAD_A_RIGHT {B12}
#define ENCODERS_PAD_B_RIGHT {B13}


//#define F_SCL 800000L


/* OLED */
#define I2C_DRIVER I2CD1
#define I2C1_SCL_BANK GPIOB
#define I2C1_SDA_BANK GPIOB
#define I2C1_SCL 6
#define I2C1_SDA 7


//https://beta.docs.qmk.fm/developing-qmk/c-development/hardware_drivers/ws2812_driver
#define WS2812_PWM_DRIVER PWMD5  // default: PWMD2
#define WS2812_PWM_CHANNEL 2  // default: 2
#define WS2812_PWM_PAL_MODE 2  // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM2  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMA_CHANNEL 2  // DMA Channel for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
#define WS2812_DMAMUX_ID STM32_DMAMUX1_TIM2_UP // DMAMUX configuration for TIMx_UP -- only required if your MCU has a DMAMUX peripheral, see the respective reference manual for the appropriate values for your MCU.



#define SERIAL_USART_DRIVER SD1 // USART driver of TX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
