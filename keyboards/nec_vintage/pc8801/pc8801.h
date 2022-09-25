// Copyright 2022 Steve (@stev3bb)
// SPDX-License-Identifier: GPL-2.0-or-late

#pragma once
#include "quantum.h"

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
//                                                                                                                          
#define LAYOUT( \
    ka0 , k94 , ka1 , ka2 , ka3 , ka4 , ka5 , kc0 , kc1 , kc2 ,  kc3 , kc4,                                   k80 , k81 ,           kb0 , k93 , k95 , k96 , \
    ka7 , k61 , k62 , k63 , k64 , k65 , k66 , k67 , k70 , k71 , k60 , k57 , k56, k54 , kc5  ,                 kc6 , kc7 ,           k07 , k10 , k11,  k12 , \
    k90 , k41 , k47 , k25 , k42 , k44 , k51 , k45 , k31 , k37 , k40 , k20 , k53 ,                                                   k04 , k05 , k06 , k13 , \
    kb7 , k97 , k21 , k43 , k24 , k26 , k27 , k30 , k32 , k33 , k34 , k73 , k72 , k55 , ke0 ,                                       k01 , k02 , k03 , k14, \
    ke2 , k52 , k50 , k23 , k46 , k22 , k36 , k35 , k74 , k75 , k76 , k77 , ke3,                                 kb1,               k00 , k15 , k16 , ke1 , \
    kb5 , kb4 ,      kd1      ,      ka6     ,      kd0       ,       kd2, kd3,                            k92 , k91 , kb2 \
) {\
    { k00,k01,k02,k03,k04,k05,k06,k07 }, \
    { k10,k11,k12,k13,k14,k15,k16,KC_NO }, \
    { k20,k21,k22,k23,k24,k25,k26,k27 }, \
    { k30,k31,k32,k33,k34,k35,k36,k37 }, \
    { k40,k41,k42,k43,k44,k45,k46,k47 }, \
    { k50,k51,k52,k53,k54,k55,k56,k57 }, \
    { k60,k61,k62,k63,k64,k65,k66,k67 }, \
    { k70,k71,k72,k73,k74,k75,k76,k77 }, \
    { k80,k81,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { k90,k91,k92,k93,k94,k95,k96,k97 }, \
    { ka0,ka1,ka2,ka3,ka4,ka5,ka6,ka7 }, \
    { kb0,kb1,kb2,KC_NO,kb4,kb5,KC_NO,kb7 }, \
    { kc0,kc1,kc2,kc3,kc4,kc5,kc6,kc7 }, \
    { kd0,kd1,kd2,kd3,KC_NO,KC_NO,KC_NO,KC_NO }, \
    { ke0,ke1,ke2,ke3,KC_NO,KC_NO,KC_NO,KC_NO }, \
}

//might be broken, row 2,3,7 (starting of)
#define kEYMAP LAYOUT