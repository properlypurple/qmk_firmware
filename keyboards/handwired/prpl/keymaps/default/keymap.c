#include QMK_KEYBOARD_H
//#include "print.h"
//
#include "keymap.h"



void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
 //debug_enable=true;
  //debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;


}




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_WORKMAN] = LAYOUT_ortho_5x14( \
   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,      KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
   KC_TAB,  KC_Q,    KC_D,    KC_R,    KC_W,      KC_B,                      KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN, KC_DEL, \
   KC_BSPC, KC_A,    KC_S,    KC_H,    KC_T,      KC_G,   KC_MUTE, KC_PSCR,  KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,    KC_QUOT, \
   KC_LSFT, KC_Z,    KC_X,    KC_M,    KC_C,      KC_V,   KC_LBRC, KC_RBRC,  KC_K,    KC_L,    KC_COMM, TD_DOT,  KC_SLSH, KC_ENT, \
   KC_HYPR, KC_LCTL, KC_LGUI, KC_LALT, LOWER,     KC_SPC, KC_SPC,  KC_SPC,   KC_ENT,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),


[_DVORAK] = LAYOUT_ortho_5x14( \
   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,      KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
   KC_TAB,  KC_QUOT, KC_COMM, TD_DOT,  KC_P,      KC_Y,                      KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_DEL, \
   KC_BSPC, KC_A,    KC_O,    KC_E,    KC_U,      KC_I,    KC_MUTE, KC_PSCR, KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS, \
   KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,      KC_X,    KC_LBRC, KC_RBRC, KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_ENT, \
   KC_HYPR, KC_LCTL, KC_LGUI, KC_LALT, LOWER,     KC_SPC,  KC_SPC,  KC_SPC,  KC_ENT,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),

[_QWERTY] = LAYOUT_ortho_5x14( \
   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,      KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,      KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL, \
   KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,      KC_G,    KC_MUTE, KC_PSCR, KC_H,    KC_J,    KC_K,    KC_L,    KC_COLN, KC_QUOT, \
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,    KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, TD_DOT,  KC_SLSH, KC_ENT, \
   KC_HYPR, KC_LCTL, KC_LGUI, KC_LALT, LOWER,     KC_SPC,  KC_SPC,  KC_SPC,  KC_ENT,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_5x14( \
  _______, _______, _______, _______, _______, _______,                   _______, _______,   _______,   _______, _______, _______, \
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR,   KC_ASTR,   KC_LPRN, KC_RPRN, KC_DEL, \
  KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_MPLY, _______, KC_F6,   KC_UNDS,   KC_PLUS,   KC_LCBR, KC_RCBR, KC_PIPE, \
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  _______, _______, KC_F12,  S(KC_NUHS),S(KC_NUBS),_______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   KC_MNXT,   KC_VOLD, KC_VOLU, KC_MPLY \
), 

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_ortho_5x14( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, \
  KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_MPLY, _______, KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, \
  _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  _______, _______, KC_F12,  KC_NUHS, KC_NUBS, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______,_______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY \
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] =  LAYOUT_ortho_5x14( \
  WORKMAN, DVORAK,  QWERTY,  _______, _______, _______,                   _______, _______, _______, _______, _______, RESET, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, KC_DEL, \
  _______, _______, _______, AU_ON,   AU_OFF,  AG_NORM, RGB_MOD, RGB_TOG, AG_SWAP, WORKMAN, _______, DVORAK,  _______, _______, \
  _______, _______, _______, _______, _______, RGB_SAD, RGB_HUI, RGB_VAI, RGB_SAI, _______, _______, _______, _______, _______, \
  EEP_RST, _______, _______, _______, _______, _______, RGB_HUD, RGB_VAD, _______, _______, _______, _______, _______, _______ \
)


};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    mod_state = get_mods();
    oneshot_mod_state = get_oneshot_mods();
  switch (keycode) {
    case WORKMAN:
      if (record->event.pressed) {
          set_single_persistent_default_layer(_WORKMAN);
      }
      return false;
    case DVORAK:
      if (record->event.pressed) {
          set_single_persistent_default_layer(_DVORAK);
      }
      return false;
    case QWERTY:
      if (record->event.pressed) {
          set_single_persistent_default_layer(_QWERTY);
      }
      return false;

    }
    return true;
}

//encoders

void encoder_update_user(uint8_t index, bool clockwise) {
// left encoder
    if (index == 0) {
        switch(biton32(layer_state)){
            case _RAISE:
                clockwise ? tap_code(KC_PGUP) : tap_code(KC_PGDN);
                break;
            default:
                clockwise ? tap_code(KC_AUDIO_VOL_UP) : tap_code(KC_AUDIO_VOL_DOWN);
                break;
      }
    }
// right encoder
    else if (index == 1) {
        switch(biton32(layer_state)){
            case _LOWER:
                clockwise ? tap_code(KC_DOWN) : tap_code(KC_UP);
                break;
            default:
                clockwise ? tap_code(KC_LEFT) : tap_code(KC_RGHT);
                break;
        }
    }
}




#ifdef OLED_DRIVER_ENABLE
#    include "oled.c"
#endif

#if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
#    include "rgb.c"
#endif



