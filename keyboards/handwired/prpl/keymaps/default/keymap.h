#pragma once

#include QMK_KEYBOARD_H

// Initialize variable holding the binary
// representation of active modifiers.
uint8_t mod_state;
uint8_t oneshot_mod_state;
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _WORKMAN 0
#define _DVORAK 1
#define _LOWER 3
#define _RAISE 4
#define _QWERTY 2
#define _ADJUST 16


enum custom_keycodes {
  WORKMAN = SAFE_RANGE,
  DVORAK,
  QWERTY,
};


#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)


// Tap dance keys
enum {
    DOT_TD = 0,
    CA_CC_CV,
};

#define TD_DOT TD(DOT_TD)
//#define CACCCV TD(CA_CC_CV)


