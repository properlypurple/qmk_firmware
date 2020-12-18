#include QMK_KEYBOARD_H
//#include "print.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _WORKMAN 0
#define _DVORAK 1
#define _LOWER 4
#define _RAISE 4
#define _QWERTY 2
#define _ADJUST 16

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
 // debug_enable=true;
  //debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;


}


enum custom_keycodes {
  WORKMAN = SAFE_RANGE,
  DVORAK,
  QWERTY
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_WORKMAN] = LAYOUT_ortho_5x14( \
   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,      KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
   KC_TAB,  KC_Q,    KC_D,    KC_R,    KC_W,      KC_B,                      KC_J,    KC_F,    KC_U,    KC_P,    KC_SCLN, KC_DEL, \
   KC_BSPC, KC_A,    KC_S,    KC_H,    KC_T,      KC_G,   KC_MUTE, KC_PSCR,  KC_Y,    KC_N,    KC_E,    KC_O,    KC_I,    KC_QUOT, \
   KC_LSFT, KC_Z,    KC_X,    KC_M,    KC_C,      KC_V,   KC_LBRC, KC_RBRC,  KC_K,    KC_L,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT, \
   KC_HYPR, KC_LCTL, KC_LGUI, KC_LALT, LOWER,             KC_SPC,  KC_SPC,            RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),


[_DVORAK] = LAYOUT_ortho_5x14( \
   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,      KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
   KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,      KC_Y,                      KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_DEL, \
   KC_BSPC, KC_A,    KC_O,    KC_E,    KC_U,      KC_I,    KC_MUTE, KC_PSCR, KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS, \
   KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,      KC_X,    KC_LBRC, KC_RBRC, KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_ENT, \
   KC_HYPR, KC_LCTL, KC_LGUI, KC_LALT, LOWER,              KC_SPC,  KC_SPC,           RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),

[_QWERTY] = LAYOUT_ortho_5x14( \
   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,      KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,      KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL, \
   KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,      KC_G,    KC_MUTE, KC_PSCR, KC_H,    KC_J,    KC_K,    KC_L,    KC_COLN, KC_QUOT, \
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,    KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT, \
   KC_HYPR, KC_LCTL, KC_LGUI, KC_LALT, LOWER,              KC_SPC,  KC_SPC,           RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
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
  _______, _______, _______, _______, _______,          _______, _______,          _______,    KC_MNXT,   KC_VOLD, KC_VOLU, KC_MPLY \
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
  _______, _______, _______, _______, _______,          _______,  _______,          _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY \
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
  _______, _______, _______, _______, _______,          RGB_HUD, RGB_VAD,          _______, _______, _______, _______, _______ \
)


};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
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


#ifdef OLED_DRIVER_ENABLE

/* void render_status(void) { */
/*     // Host Keyboard Layer Status */
/*     oled_write_P(PSTR("Layer: "), false); */

/*     switch (get_highest_layer(layer_state)) { */
/*         case _WORKMAN: */
/*             oled_write_P(PSTR("Default\n"), false); */
/*             break; */
/*         case _DVORAK: */
/*             oled_write_P(PSTR("DVORAK\n"), false); */
/*             break; */
/*         default: */
/*             // Or use the write_ln shortcut over adding '\n' to the end of your string */
/*             oled_write_ln_P(PSTR("Undefined"), false); */
/*     } */

/*     // Host Keyboard LED Status */
/*     led_t led_state = host_keyboard_led_state(); */
/*     oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false); */
/*     oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false); */
/*     oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false); */
/* } */


static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}


oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_90;
    }

    return rotation;
}

void oled_task_user(void) {
//print("Hello there");
      render_status();  // Renders a static logo

}





#endif

#ifdef HELLO
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            if (IS_LAYER_ON(_ADJUST)) {
                tap_code16(RGB_HUI);
            } else if (IS_LAYER_ON(_RAISE)){
                tap_code(KC_PGUP)
            } else {
                tap_code(KC_AUDIO_VOL_UP);
            }
        } else {
            if (IS_LAYER_ON(_ADJUST)) {
                tap_code16(RGB_HUD);
            } else if (IS_LAYER_ON(_RAISE)){
                tap_code(KC_PGDN)
            } else {
                tap_code(KC_AUDIO_VOL_DOWN);
            }
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            if (IS_LAYER_ON(_LOWER)) {
                tap_code(KC_RIGHT);
             } else if (IS_LAYER_ON(_ADJUST)) {
                tap_code16(RGB_VAI);
             } else {
                tap_code(KC_DOWN);
             }

        } else {
           if (IS_LAYER_ON(_LOWER)) {
                tap_code(KC_LEFT);
           } else if (IS_LAYER_ON(_ADJUST)) {
               tap_code16(RGB_VAD);
             } else {
                tap_code(KC_UP);
             }
        }
    }
}
#endif

void encoder_update_user(uint8_t index, bool clockwise) {
// left encoder
    if (index == 0) {
        switch(biton32(layer_state)){
             case _RAISE:
                if (clockwise) {
                    tap_code(KC_PGUP);
                } else {
                    tap_code(KC_PGDN);
                }
                break;
            case _ADJUST:
                if (clockwise) {
                    tap_code16(RGB_HUI);
                } else {
                    tap_code16(RGB_HUD);

                }
                break;
            default:
                if (clockwise){
                    tap_code(KC_VOLU);
                } else{
                    tap_code(KC_VOLD);
                }
                break;
      }
    }
// right encoder
    else if (index == 1) {
        switch(biton32(layer_state)){
            case _LOWER:
                if (clockwise){
                    tap_code(KC_UP);
                } else{
                    tap_code(KC_DOWN);
                }
                break;
            case _ADJUST:
                if (clockwise){
                    tap_code16(RGB_VAI);
                } else{
                    tap_code16(RGB_VAD);
                }
                break;
            default:
                if (clockwise) {
                    tap_code(KC_RGHT);
                } else {
                    tap_code(KC_LEFT);
                }
                break;
        }
    }
}
