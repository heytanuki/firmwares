/*
Copyright 2021 Astra Tanuki

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Star Boards
#define PRODUCT         Morningstar
#define DESCRIPTION     40s ortho unsplit 
#define VIAL_KEYBOARD_UID {0x08, 0x74, 0xD8, 0x73, 0xC0, 0x50, 0x61, 0xC2}
 
/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define RGB_DI_PIN D3
#define RGBLED_NUM 5

#define RGBLIGHT_ANIMATIONS



/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
*//////////////////
#define MATRIX_ROW_PINS { D1, F5, D0, F4 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6, B5, B4, E6, D7, C6, D4 }

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


