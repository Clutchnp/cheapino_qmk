#include QMK_KEYBOARD_H


uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_H:
            return TAPPING_TERM;
        case KC_J:
            return TAPPING_TERM;
        case KC_K:
            return TAPPING_TERM;
        case KC_L:
            return TAPPING_TERM;
        default:
            return QUICK_TAP_TERM;
    }
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // Layer 0: Base Layer
    [0] = LAYOUT_split_3x5_3(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, LSFT_T(KC_S), LALT_T(KC_D), KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LCTL_T(KC_TAB), LCTL_T(KC_Z), KC_X, KC_C, KC_V, KC_B, LSFT_T(KC_N), KC_M, KC_LALT, KC_DQUO, KC_QUOT, LM(2, MOD_LGUI), KC_SPC, MO(4), MO(3), LT(3, KC_BSPC), LT(6, KC_ESC)),
    // Windows default layer
    [1] = LAYOUT_split_3x5_3(LCTL_T(KC_Q), KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_TAB, LSFT_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_LALT, KC_DQUO, LCTL_T(KC_QUOT), LM(2, MOD_LALT), KC_SPC, MO(4), MO(3), LT(3, KC_BSPC), LT(6, KC_ESC)),

    // Layer 1
    [2] = LAYOUT_split_3x5_3(KC_Q, KC_1, KC_2, KC_3, KC_GRV, KC_K, KC_O, KC_P, KC_W, KC_S, KC_A, KC_4, KC_5, KC_6, KC_H, KC_H, KC_J, KC_K, KC_L, KC_F, KC_Z, KC_SPC, KC_C, LSFT(KC_E), KC_B, KC_I, KC_T, KC_M, LALT(KC_R), KC_D, KC_TRNS, KC_NO, KC_LGUI, KC_O, KC_LSFT, KC_RALT),

    // Layer 2: Symbols and Navigation
    [3] = LAYOUT_split_3x5_3(KC_TILD, KC_EXLM, KC_AMPR, KC_HASH, KC_EQL, KC_LBRC, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_GRV, KC_DLR, KC_COMM, KC_DOT, KC_COLN, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_PERC, KC_SCLN, KC_PIPE, KC_SLSH, KC_CIRC, KC_UNDS, KC_RBRC, KC_EQL, KC_BSLS, KC_AT, KC_ASTR, KC_LSFT, KC_ENTER, KC_PLUS, DF(1), KC_ENT, DF(7)),

    // Layer 3: Function Keys and Numpad
    [4] = LAYOUT_split_3x5_3(KC_PAST, KC_1, KC_2, KC_3, KC_0, KC_WH_U, KC_F1, KC_F2, KC_F3, KC_F11, KC_PSLS, KC_4, KC_5, KC_6, KC_PPLS, KC_F10, KC_F4, KC_F5, KC_F6, KC_END, KC_MINS, KC_7, KC_8, KC_9, KC_MINS, KC_WH_D, KC_F7, KC_F8, KC_F9, KC_F12, KC_LCTL, KC_LALT, KC_LSFT, KC_TRNS, KC_ENT, KC_TRNS),

    // Layer 4: Alternative Symbols and Navigation
    [5] = LAYOUT_split_3x5_3(KC_TILD, KC_EXLM, KC_AMPR, KC_HASH, KC_MINS, KC_UP, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_GRV, KC_DLR, KC_COMM, KC_DOT, KC_LEFT, KC_RGHT, KC_LBRC, KC_RBRC, KC_CIRC, KC_PERC, KC_PLUS, KC_PIPE, KC_SLSH, KC_COLN, KC_UNDS, KC_DOWN, KC_EQL, KC_BSLS, KC_AT, KC_ASTR, KC_LSFT, KC_ENTER, KC_SCLN, KC_TRNS, KC_ENT, KC_TRNS),

    // Layer 5: Custom Functions
    [6] = LAYOUT_split_3x5_3(

        LSFT(KC_Q), LCTL(LSFT(KC_W)), LCTL(LSFT(KC_D)), KC_DEL, LSFT(KC_V), LCTL(KC_TAB), KC_NO, KC_NO, KC_NO, LSFT(KC_A), LSFT(KC_A), LCTL(LALT(KC_C)), KC_F, KC_F13, LCTL(LALT(KC_S)), KC_H, KC_J, KC_K, KC_L, KC_NO, LSFT(KC_Z), KC_BTN1, KC_BTN2, KC_NO, LCTL(LSFT(KC_T)), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LGUI, KC_NO, KC_NO, KC_NO),

    // Layer 6:
    [7] = LAYOUT_split_3x5_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_NO, KC_NO, KC_UP, KC_NO, KC_TAB, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_RSFT, KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_NO, KC_NO, KC_NO, KC_NO, KC_RCTL, LM(9, MOD_LGUI), KC_SPC, MO(8), DF(0), KC_SPC, MO(10)),

    // Layer 7: Numeric and Arrow Keys
    [8] = LAYOUT_split_3x5_3(KC_5, KC_1, KC_2, KC_3, KC_4, KC_NO, KC_NO, KC_UP, KC_NO, KC_TAB, KC_0, KC_6, KC_7, KC_8, KC_9, KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_RSFT, KC_G, KC_J, KC_I, KC_M, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_RCTL, KC_ESC, KC_ENT, _______, _______, _______, _______),

    // Layer 8: Custom Actions
    [9]  = LAYOUT_split_3x5_3(KC_Q, KC_1, KC_2, KC_3, KC_GRV, KC_K, KC_O, KC_P, KC_W, KC_S, KC_A, KC_4, KC_5, KC_6, KC_H, KC_H, KC_J, KC_K, KC_L, KC_F, KC_Z, KC_SPC, KC_C, LSFT(KC_E), KC_B, KC_I, KC_T, KC_M, LALT(KC_R), KC_D, KC_TRNS, KC_NO, KC_LGUI, KC_O, KC_LSFT, KC_RALT),
    [10] = LAYOUT_split_3x5_3(KC_PAST, KC_1, KC_2, KC_3, KC_0, KC_WH_U, KC_F1, KC_F2, KC_F3, KC_F11, KC_PSLS, KC_4, KC_5, KC_6, KC_PPLS, KC_F10, KC_F4, KC_F5, KC_F6, KC_END, KC_MINS, KC_7, KC_8, KC_9, KC_EQL, KC_WH_D, KC_F7, KC_F8, KC_F9, KC_F12, KC_LCTL, KC_LALT, KC_LSFT, KC_TRNS, KC_ENT, KC_TRNS),
};

// Encoder Map
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {[0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}};
#endif
