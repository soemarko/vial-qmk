/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

#define VIAL_KEYBOARD_UID {0x8A, 0x26, 0x2A, 0x7F, 0x97, 0xA4, 0x2E, 0xF5}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}
#define VIAL_TAP_DANCE_ENTRIES 4

#define USE_SERIAL

#define EE_HANDS

#define KINETIC_SPEED

#define RGB_DI_PIN D1
#define RGBLED_NUM 24
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT {12, 12}

// #define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_SLEEP

#define RCPC_KEYS KC_RSFT, KC_RSFT, KC_SLSH
