#include QMK_KEYBOARD_H

enum custom_layer {
    _BASE,
    _LOWER,
    _RAISE,
};
#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6
    ),
      [_LOWER] = LAYOUT(
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6
    ),
      [_RAISE] = LAYOUT(
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,
        KC_0,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,   KC_6
    )
};
