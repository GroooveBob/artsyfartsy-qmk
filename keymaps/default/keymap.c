#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    [0] = LAYOUT_all(
    RGB_TOG, KC_T, KC_R, KC_A,
    RGB_MODE_FORWARD, KC_I, KC_Y, KC_E
)

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   {ENCODER_CCW_CW(KC_RIGHT, KC_LEFT)  },
};
#endif
