/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
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

 // place overrides here


/* Use I2C or Serial, not both */
#define USE_SERIAL
//#define USE_I2C

/* Select hand configuration */
//#define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS
#define SPLIT_USB_DETECT
//#define FLIP_HALF
#define OLED_DISPLAY_ADDRESS 0x3c
/* #define SSD1306OLED */
#define TAP_CODE_DELAY 10
#define OLED_FONT_H "keyboards/handwired/prpl/keymaps/default/glcdfont.c"
