#include "kb.h"

enum custom_keycodes {
    SR_LOGIN = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP( // mute zoom, screenshot, prev song, play/payse, next song (or next layer when held), mute system (encoder click)
		SGUI(KC_Z), SGUI(KC_5), KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, LT(1, KC_MEDIA_NEXT_TRACK), KC_MUTE),

	KEYMAP( // reset (for flashing), escape, transparent, system sleep, transparent, transparent
		RESET, KC_ESC, SR_LOGIN, LGUI(LALT(KC_EJCT)), KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)

};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

