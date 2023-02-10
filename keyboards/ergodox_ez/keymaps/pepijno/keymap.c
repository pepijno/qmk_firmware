#include QMK_KEYBOARD_H
#include "version.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox(
    KC_ESCAPE, KC_1,        KC_2,             KC_3,             KC_4,        KC_5,        KC_NO,
    KC_CAPS,   LT(1, KC_Q), KC_W,             KC_E,             KC_R,        KC_T,        TG(6),
    KC_TAB,    KC_A,        LT(6, KC_S),      LT(5, KC_D),      LT(4, KC_F), LT(3, KC_G),
    KC_LSFT,   KC_Z,        KC_X,             KC_C,             KC_V,        KC_B,        KC_DELETE,
    KC_LCTL,   KC_F8,       KC_LEFT,          KC_RIGHT,         KC_LALT,

    KC_HOME,   KC_END,      KC_NO,            LCTL_T(KC_SPACE), KC_BSPC,     KC_NO,

    KC_NO, KC_6,   KC_7,      KC_8,     KC_9,    KC_0,           KC_MINUS,
    TG(7), KC_Y,   KC_U,      KC_I,     KC_O,    KC_P,           KC_BSLS,
           KC_H,   KC_J,      KC_K,     KC_L,    LT(2, KC_SCLN), KC_QUOTE,
    TG(3), KC_N,   KC_M,      KC_COMMA, KC_DOT,  KC_SLASH,       KC_RSFT,
           KC_UP,  KC_DOWN,   KC_SLEP,  TO(0),   KC_RCTL,

           KC_F17, KC_ESCAPE, KC_PGUP,  KC_PGDN, KC_LSFT,        KC_ENTER
  ),
  [1] = LAYOUT_ergodox(
    KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    KC_NO,   KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO,
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,
             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,
             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

             KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO
  ),
  [2] = LAYOUT_ergodox(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
    KC_TRNS, KC_NO,   KC_MPLY, KC_MPRV, KC_MNXT, KC_NO, KC_NO,
             KC_VOLU, KC_VOLD, KC_MUTE, KC_NO,   KC_NO,

             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO
  ),
  [3] = LAYOUT_ergodox(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
    KC_TRNS, KC_WH_U, KC_NO,   KC_MS_U, KC_NO,   KC_NO, KC_NO,
             KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO,
    KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,
             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,

             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO
  ),
  [4] = LAYOUT_ergodox(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_TRNS, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_GRV,  KC_NO,
             KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_PIPE, KC_NO,
    KC_TRNS, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_NO,
             KC_AMPR, KC_NO,   KC_NO,   KC_NO,   KC_NO,

             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  ),
  [5] = LAYOUT_ergodox(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,

    KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
    KC_NO, KC_PPLS, KC_P7, KC_P8, KC_P9, KC_UNDS, KC_NO,
           KC_PEQL, KC_P4, KC_P5, KC_P6, KC_NO,   KC_NO,
    KC_NO, KC_PMNS, KC_P1, KC_P2, KC_P3, KC_NO,   KC_NO,
           KC_NO,   KC_NO, KC_P0, KC_NO, KC_NO,

           KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
  ),
  [6] = LAYOUT_ergodox(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_Q,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_S,    KC_D,    KC_F,    KC_G,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_HOME, KC_UP,   KC_END,  KC_TRNS, KC_TRNS,
             KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [7] = LAYOUT_ergodox(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_TRNS,
    KC_TRNS, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,
    KC_TRNS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_TRNS,
             KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_TRNS,
    KC_TRNS, KC_K,    KC_M,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,

             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  ),

};

void led_set_keymap(uint8_t usb_led) {

}

void matrix_init_user (void) {

}


layer_state_t layer_state_set_user(layer_state_t state) {

    uint8_t layer = get_highest_layer(state);

  //  ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      case 0:
        break;
      case 1:
        ergodox_right_led_1_on();
        break;
      case 2:
        ergodox_right_led_2_on();
        break;
      case 3:
        ergodox_right_led_3_on();
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }
    return state;

};
