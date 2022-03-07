/**
 * Copyright 2021 Charly Delay <charly@codesink.dev> (@0xcharly)
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

enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_MOUSE,
    LAYER_RAISE,
};

#define MOUSE MO(LAYER_MOUSE)
#define RAISE MO(LAYER_RAISE)



// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // DVORAK
  [LAYER_BASE] = LAYOUT_charybdis_4x6(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       KC_EQUAL,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_GESC,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_TAB,     KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,       KC_F,    KC_G,    KC_C,    KC_R,    KC_L, KC_SLSH,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_MINUS,   KC_A,    KC_O,    KC_E,    KC_U,    KC_I,       KC_D,    KC_H,    KC_T,    KC_N,    KC_S, KC_BSLS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT,    KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,       KC_B,    KC_M,    KC_W,    KC_V,    KC_Z, KC_RSFT,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  KC_BSPC, KC_LGUI, KC_LAPO,     KC_ENT,  KC_SPC,
                                           KC_LCTL,   MOUSE,      RAISE
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),
  
  [LAYER_MOUSE] = LAYOUT_charybdis_4x6(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
       _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TILD,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, KC_HOME, KC_PGUP, KC_PGDN,  KC_END, XXXXXXX,    XXXXXXX, KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, XXXXXXX, KC_BTN2, DRGSCRL, KC_BTN1, KC_LGUI,    KC_BTN1, KC_LEFT,   KC_UP, KC_DOWN, KC_RGHT, _______,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       _______, KC_LEFT,   KC_UP, KC_DOWN, KC_RGHT, KC_BTN2,    KC_BTN2, DRGSCRL, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                  _______, _______, _______,    _______,  _______,
                                           _______, XXXXXXX,    XXXXXXX
  //                            ╰───────────────────────────╯ ╰──────────────────╯
  ),

  [LAYER_RAISE] = LAYOUT_charybdis_4x6(
  // ╭──────────-────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        KC_F12,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,
  // ├───────────-───────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       RGB_MOD,  _______, _______, _______, _______, XXXXXXX,    XXXXXXX, _______, _______, _______, _______, KC_VOLU,
  // ├────────────-──────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       RGB_TOG,  _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, KC_MUTE,
  // ├─────────────-─────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       RGB_RMOD, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, KC_VOLD,
  // ╰──────────────-────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                   KC_DEL, _______, _______,    _______, _______,
                                           _______, XXXXXXX,    XXXXXXX
  //                            ╰────-───────────────────────╯ ╰──────────────────╯
  ),
};
// clang-format on
