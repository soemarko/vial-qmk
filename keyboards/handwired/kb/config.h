#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VIAL_KEYBOARD_UID {0xD6, 0x2D, 0x9B, 0x94, 0xEC, 0xF1, 0x76, 0xC4}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }


/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         keyboard
#define DESCRIPTION     Keyboard

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 6

/* key matrix pins */
/* #define MATRIX_ROW_PINS { D1 }
#define MATRIX_COL_PINS { D0, D4, C6, D7, E6, B4 }*/
#define DIRECT_PINS { {D0, D4, C6, D7, E6, B4} }

#define ENCODERS_PAD_A { B3 }
#define ENCODERS_PAD_B { B2 }
#define ENCODER_DIRECTION_FLIP

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif