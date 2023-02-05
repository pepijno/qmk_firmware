#include QMK_KEYBOARD_H

#define BASE_COLOR RGB_ORANGE
#define RGBLIGHT_SLEEP

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_5x15(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, TG(2), TG(5), TG(3), KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_DEL, LT(1,KC_Q), KC_W, KC_E, KC_R, KC_T, KC_HOME, TG(4), KC_PGUP, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_TAB, KC_A, LT(5,KC_S), LT(4,KC_D), LT(3,KC_F), LT(2,KC_G), KC_END, KC_UP, KC_PGDN, KC_H, KC_J, KC_K, KC_L, LT(2,KC_SCLN), KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LEFT, KC_DOWN, KC_RGHT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LCTL, KC_LGUI, KC_LEFT, KC_RIGHT, KC_LALT, LCTL_T(KC_SPC), KC_BSPC, KC_DEL, KC_RSFT, KC_ENT, KC_UP, KC_DOWN, RESET, RGB_TOG, KC_RCTL),
	[1] = LAYOUT_ortho_5x15(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_NO, KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[2] = LAYOUT_ortho_5x15(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MPLY, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, KC_VOLD, KC_MUTE, KC_NO, KC_NO),
	[3] = LAYOUT_ortho_5x15(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_GRV, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AMPR, KC_NO, KC_NO, KC_NO, KC_NO),
	[4] = LAYOUT_ortho_5x15(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS, KC_PAST, KC_PCMM, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P7, KC_TRNS, KC_P9, KC_PPLS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P4, KC_P5, KC_P6, KC_PEQL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PMNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_PDOT, KC_PENT, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),
	[5] = LAYOUT_ortho_5x15(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_Q, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_HOME, KC_UP, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_S, KC_D, KC_F, KC_G, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS)
};

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) { */
/*   if (record->event.pressed) { */
/*     backlight_level(4); */
/*   } else { */
/*     backlight_level(6); */
/*   } */

/*   if (IS_MOD(keycode)) { */
/*     if (record->event.pressed) { */
/*       rgblight_setrgb(RGB_RED); */
/*     } else { */
/*       rgblight_setrgb(BASE_COLOR); */
/*     } */
/*   } */

/*   return true; */
/* } */

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
    }
  return state;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(1, KC_Q):
            return 2000;
        case LT(5, KC_S):
            return 2000;
        case LT(4, KC_D):
            return 2000;
        case LT(3, KC_F):
            return 2000;
        case LT(2, KC_G):
            return 2000;
        case LT(2, KC_SCLN):
            return 2000;
        default:
            return TAPPING_TERM;
    }
}
