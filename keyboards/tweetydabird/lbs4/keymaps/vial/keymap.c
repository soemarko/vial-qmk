// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MPLY,
		RGB_TOG,	KC_MUTE,	
		KC_MPRV,	KC_MNXT
    ),
	
	[1] = LAYOUT(
		KC_TRNS,
        KC_TRNS, 	KC_TRNS,	
		KC_TRNS, 	KC_TRNS
    ),
	
	[2] = LAYOUT(
        KC_TRNS, 	
		KC_TRNS,	KC_TRNS,
		KC_TRNS, 	KC_TRNS
    ),

    [3] = LAYOUT(
        KC_TRNS, 	
		KC_TRNS,	KC_TRNS, 	
		KC_TRNS, 	KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif