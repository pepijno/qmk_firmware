#include QMK_KEYBOARD_H

// #define BASE_COLOR RGB_ORANGE
#define RGBLIGHT_SLEEP

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x15(
        KC_NO,        KC_NO,        KC_NO,        KC_NO,         KC_NO,         KC_NO,         KC_NO, TG(8), TG(6), KC_NO,         KC_NO,          KC_NO,         KC_NO,        KC_NO,        KC_NO,
        KC_Q,         KC_W,         KC_F,         KC_P,          KC_B,          KC_NO,         KC_NO, KC_NO, KC_NO, KC_NO,         KC_J,           KC_L,          KC_U,         KC_Y,         KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T),  KC_G,          KC_NO,         KC_NO, KC_NO, KC_NO, KC_NO,         KC_M,           RSFT_T(KC_N),  RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O),
        LT(4, KC_Z),  KC_X,         KC_C,         KC_D,          KC_V,          KC_NO,         KC_NO, KC_NO, KC_NO, KC_NO,         KC_K,           KC_H,          KC_COMM,      KC_DOT,       LT(4, KC_SLSH),
        KC_NO,        KC_NO,        KC_NO,        LT(3, KC_ESC), LT(1, KC_SPC), LT(2, KC_TAB), KC_NO, KC_NO, KC_NO, LT(6, KC_ENT), LT(5, KC_BSPC), LT(7, KC_DEL), KC_NO,        KC_NO,        KC_NO
    ),
    [1] = LAYOUT_ortho_5x15(
        KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,
        QK_BOOTLOADER, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_AGAIN, KC_PSTE,  KC_COPY, KC_CUT,  KC_UNDO,
        KC_LGUI,       KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  CW_TOGG,  KC_LEFT,  KC_DOWN, KC_UP,   KC_RIGHT,
        KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_INS,   KC_HOME,  KC_PGUP, KC_PGDN, KC_END,
        KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_BSPC,  KC_DEL,   KC_NO,   KC_NO,   KC_NO
    ),
    [2] = LAYOUT_ortho_5x15(
        KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,
        QK_BOOTLOADER, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_AGAIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO,
        KC_LGUI,       KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,    KC_MS_L, KC_MS_U, KC_MS_D, KC_MS_R,
        KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,    KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,
        KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN2, KC_BTN1,  KC_BTN3, KC_NO,   KC_NO,   KC_NO
    ),
    [3] = LAYOUT_ortho_5x15(
        KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        QK_BOOTLOADER, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   RGB_TOG, RGB_VAI, RGB_SAI, RGB_HUI, RGB_MOD,
        KC_LGUI,       KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
        KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   OU_AUTO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,         KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_MUTE, KC_NO,   KC_NO,   KC_NO
    ),
    [4] = LAYOUT_ortho_5x15(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO, KC_TRNS, KC_NO, KC_NO,   KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_AGAIN, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_AGAIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,    KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,    KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_AGAIN, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_AGAIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO,
        KC_NO,   KC_NO,   KC_NO,   KC_BTN3, KC_BTN1,  KC_BTN2, KC_NO, KC_NO, KC_NO, KC_BTN2, KC_BTN1,  KC_BTN3, KC_NO,   KC_NO,   KC_NO
    ),
    [5] = LAYOUT_ortho_5x15(
        KC_NO,   KC_NO, KC_NO, KC_NO,  KC_NO,   KC_NO,   KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_LBRC, KC_7,  KC_8,  KC_9,   KC_RBRC, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   QK_BOOTLOADER,
        KC_SCLN, KC_4,  KC_5,  KC_6,   KC_EQL,  KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        KC_GRV,  KC_1,  KC_2,  KC_3,   KC_BSLS, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO, KC_NO, KC_DOT, KC_0,    KC_MINS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
    [6] = LAYOUT_ortho_5x15(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   QK_BOOTLOADER,
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_LPRN, KC_RPRN, KC_UNDS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
    [7] = LAYOUT_ortho_5x15(
        KC_NO,  KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_F12, KC_F7, KC_F8, KC_F9,  KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   QK_BOOTLOADER,
        KC_F11, KC_F4, KC_F5, KC_F6,  KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        KC_F10, KC_F1, KC_F2, KC_F3,  KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,  KC_NO, KC_NO, KC_APP, KC_SPC, KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO
    ),
    [8] = LAYOUT_ortho_5x15(
        KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_Q,  KC_W,  KC_E,  KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_A,  KC_S,  KC_D,  KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_Z,  KC_X,  KC_C,  KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
    ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 0:
            rgblight_disable();
            break;
        case 1:
            rgblight_enable();
            rgblight_setrgb(RGB_AZURE);
            break;
        case 2:
            rgblight_enable();
            rgblight_setrgb(RGB_PURPLE);
            break;
        case 3:
            rgblight_enable();
            rgblight_setrgb(RGB_RED);
            break;
        case 4:
            rgblight_enable();
            rgblight_setrgb(RGB_GREEN);
            break;
        case 5:
            rgblight_enable();
            rgblight_setrgb(RGB_CYAN);
            break;
        case 6:
            rgblight_enable();
            rgblight_setrgb(RGB_WHITE);
            break;
        case 7:
            rgblight_enable();
            rgblight_setrgb(RGB_YELLOW);
            break;
        case 8:
            rgblight_enable();
            rgblight_setrgb(RGB_WHITE);
            break;
    }
    return state;
}
