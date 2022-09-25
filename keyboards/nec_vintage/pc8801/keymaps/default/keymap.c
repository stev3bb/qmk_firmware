// Copyright 2022 Steve (@stev3bb)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "print.h"

// void keyboard_post_init_user(void) {
//   // Customise these values to desired behaviour
//   debug_enable=true;
//   debug_matrix=true;
//   // debug_keyboard=true;
//   // xprintf("debugging mode!");
//   //debug_mouse=true;
// }

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     if (record->event.pressed) {
//         uprintf("hi");
//     }
//     return true;
//   //If console is enabled, it will print the matrix position and status of each key pressed
//     #ifdef CONSOLE_ENABLE
//         uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
//     #endif 
//     return true;
// }


// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE, 
    _FN
};

// * Keyboard visual layout
// *
// *
// * | Copy | Paste |  F1 |  F2 |  F3 |  F4 |  |  F5 |  F6 |  F7 |  F8 |  | F9 | F10 |                      | pgdn | pgup |
// * |  Esc  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  | ^ |  $ | Back |     | Ins  | Del  |        | Clr | Hlp | - | / |
// * |  Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  @  |  [  |                                            |  7  |  8  | 9 | * |
// * | Ctl | Caps |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  :  | ] |   Enter  |                              |  4  |  5  | 6 | + |
// * |   Shift   |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |  \  |   Shift   |                 |  ^  |          |  1  |  2  | 3 | = |
// * | Fn | Alt  |    Space     |    Space    |    Space    |  Win | Alt |                                 |  <  |  v  |  >  |    |  0  |  ,  | . | Enter |
// *   

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_COPY , KC_PASTE ,  KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 , KC_F6 , KC_F7 , KC_F8 ,  KC_F9 , KC_F10,                                  KC_PAGE_UP , KC_PAGE_DOWN ,                 KC_CLEAR , KC_HELP , KC_KP_MINUS , KC_KP_SLASH , 
        KC_ESC , KC_1 , KC_2 , KC_3 , KC_4 , KC_5 , KC_6 , KC_7 , KC_8 , KC_9 , KC_0 , KC_MINUS , KC_EQUAL, KC_BSLS , KC_BSPC,                      KC_INS , KC_DEL ,                       KC_KP_7 , KC_KP_8 , KC_KP_9 , KC_PAST ,   
        KC_TAB , KC_Q , KC_W , KC_E , KC_R , KC_T , KC_Y , KC_U , KC_I , KC_O , KC_P , KC_GRV , KC_LBRC ,                                                                                    KC_KP_4 , KC_KP_5 , KC_KP_6 , KC_PPLS ,       
        KC_LCTL , KC_LCAP , KC_A , KC_S , KC_D , KC_F , KC_G , KC_H , KC_J , KC_K , KC_L , KC_SCLN , KC_QUOT , KC_RBRC , KC_ENT ,                                                             KC_KP_1 , KC_KP_2 , KC_KP_3 , KC_PEQL,       
        KC_LSFT , KC_Z , KC_X , KC_C , KC_V , KC_B , KC_N , KC_M , KC_COMM , KC_DOT , KC_SLSH , KC_NO , KC_RSFT,                                       KC_UP,                               KC_KP_0 , KC_PCMM , KC_PDOT , KC_PENT ,        
        MO(_FN) , KC_LALT ,      KC_SPC      ,      KC_SPC      ,      KC_SPC       ,   KC_RWIN  , KC_RALT,                                   KC_LEFT , KC_DOWN , KC_RIGHT                                                         
    ),
    [_FN] = LAYOUT(
        QK_RBT , _______ ,  DB_TOGG , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,  _______ , _______ ,                                         _______ , _______ ,           _______ , _______ , _______ , _______ , 
        QK_BOOT , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______  , _______,             _______ , _______ ,           _______ , _______ , _______ , _______ ,   
        _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,                                                               _______ , _______ , _______ , _______ ,       
        _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,                                           _______ , _______ , _______ , _______,       
        _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______,                                        _______,                _______ , _______ , _______ , _______ ,        
        _______ , _______ ,      _______      ,      _______      ,      _______       ,       _______, _______,                                                        _______ , _______ , _______                                                          
    )
};