// Copyright 2022 Steve (@stev3bb)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "pc8801.h"
#include "print.h"

// void keyboard_post_init_user(void){
    // debug_matrix = true;
    //debug_enable = true;
    // debug_keyboard = true;
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
  #if defined(CONSOLE_ENABLE)
    if (debug_enable == true){
      uprintf("KL: kc: 0x%04X,  row: %2u, col: %2u, , pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.row, record->event.key.col,  record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);

    }
  #endif 

  return true;
}