/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x5_3(
        KC_Q,         KC_W,         KC_F,         KC_P,          KC_B,                                        KC_J,           KC_L,         KC_U,         KC_Y,         KC_QUOT,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T),  KC_G,                                        KC_M,           RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O),
        LT(4, KC_Z),  KC_X,         KC_C,         KC_D,          KC_V,                                        KC_K,           KC_H,         KC_COMM,      KC_DOT,       LT(4, KC_SLSH),
                                                  LT(3, KC_ESC), LT(1, KC_SPC), LT(2, KC_TAB), LT(7, KC_ENT), LT(5, KC_BSPC), LT(6, KC_DEL)
    ),

    [1] = LAYOUT_split_3x5_3(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  KC_AGAIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                  CW_TOGG,  KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                  KC_INS,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,
                                   XXXXXXX, _______, XXXXXXX, KC_ENT, KC_BSPC,  KC_DEL
    ),

    [2] = LAYOUT_split_3x5_3(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, TG(8),                     KC_AGAIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                   XXXXXXX,  KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX,  KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                                   XXXXXXX, XXXXXXX, _______, KC_BTN2, KC_BTN1,  KC_BTN3
    ),

    [3] = LAYOUT_split_3x5_3(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                   RGB_M_TW, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   OU_AUTO, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   _______, XXXXXXX, XXXXXXX, KC_MSTP, KC_MPLY, KC_MUTE
    ),

    [4] = LAYOUT_split_3x5_3(
        KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_AGAIN,                   KC_AGAIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO,
        KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                    XXXXXXX,  KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_AGAIN,                   KC_AGAIN, KC_PSTE, KC_COPY, KC_CUT,  KC_UNDO,
                                   KC_BTN3, KC_BTN1,  KC_BTN2, KC_BTN2, KC_BTN1, KC_BTN3
    ),

    [5] = LAYOUT_split_3x5_3(
        KC_LBRC, KC_7, KC_8, KC_9,   KC_RBRC,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
        KC_SCLN, KC_4, KC_5, KC_6,   KC_EQL,                    XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        KC_GRV,  KC_1, KC_2, KC_3,   KC_BSLS,                   XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUI, RGB_M_TW,
                             KC_DOT, KC_0,    KC_MINS, XXXXXXX, _______, XXXXXXX
    ),

    [7] = LAYOUT_split_3x5_3(
        KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
        KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,                   XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   KC_LPRN, KC_RPRN, KC_UNDS, _______, XXXXXXX, XXXXXXX
    ),

    [6] = LAYOUT_split_3x5_3(
        KC_F12, KC_F7, KC_F8, KC_F9,  XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
        KC_F11, KC_F4, KC_F5, KC_F6,  XXXXXXX,                 XXXXXXX, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI,
        KC_F10, KC_F1, KC_F2, KC_F3,  XXXXXXX,                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                              KC_APP, KC_SPC, KC_TAB, XXXXXXX, XXXXXXX, _______
    ),
    [8] = LAYOUT_split_3x5_3(
        KC_Q, KC_W, KC_E, KC_R,   KC_T,                   KC_Y,    KC_U,  KC_7, KC_8, KC_9,
        KC_A, KC_S, KC_D, KC_F,   KC_G,                   KC_H,    KC_J,  KC_4, KC_5, KC_6,
        KC_Z, KC_X, KC_C, KC_V,   KC_B,                   KC_N,    KC_M,  KC_1, KC_2, KC_3,
                          KC_ESC, LCTL_T(KC_SPC), KC_TAB, KC_ENT, RGB_TOG, TG(8)
    )
};
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 8:
            rgblight_enable();
            rgblight_sethsv(HSV_YELLOW);
            break;
    }
    return state;
}
