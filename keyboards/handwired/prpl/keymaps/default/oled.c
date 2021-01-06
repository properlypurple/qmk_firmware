#pragma once


#if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
#    include "rgb.c"
#endif

//https://github.com/qmk/qmk_firmware/blob/master/keyboards/crkbd/keymaps/gotham/oled.c
#ifdef OLED_DRIVER_ENABLE

// Logos
//
void render_prpl(void) {
    static const char PROGMEM font_prpl[5] = {0xbc, 0xbd, 0xbe, 0xbf, 0};
    oled_write_P(font_prpl, false);
}

void render_resist(void) {
    static const char PROGMEM font_resist[6] = {0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0};
    oled_write_P(font_resist, false);
}

void render_cat_logo(void) {
    static const char PROGMEM font_logo[16] = {0x80, 0x81, 0x82, 0x83, 0x84, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0};
    oled_write_P(font_logo, false);
}

void render_qmk_logo(void) {
    static const char PROGMEM font_qmk_logo[16] = {0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0};
    oled_write_P(font_qmk_logo, false);
}


// 5x1 Layer indicator

void render_layer(void) {
    static const char PROGMEM font_layer[4][6] = {
        {0x85, 0x86, 0x87, 0x88, 0x89, 0},
        {0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0},
        {0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0},
        {0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0},
    };
    uint8_t layer = 0;

    switch (get_highest_layer(layer_state)) {
        case _LOWER:
            layer=1;
            break;
        case _RAISE:
            layer=2;
            break;
        case _ADJUST:
            layer=3;
            break;
        default:
            layer=0;
            break;
    }
    oled_write_P(font_layer[layer], false);
  }

#ifdef RGBLIGHT_ENABLE

void render_rgb_status(void) {
    static const char PROGMEM font_rgb_off[3] = {0xcf, 0xd0, 0};
    static const char PROGMEM font_rgb_on[3]  = {0xd1, 0xd2, 0};

    bool rgb_enabled = rgblight_config.enable;

    oled_write_P(rgb_enabled ? font_rgb_on : font_rgb_off, false);
}
#endif

// 2x1 Ctrl, Alt, Shift, GUI, Mouse

void render_mod_ctrl(void) {
    static const char PROGMEM font_ctrl[3] = {0x93, 0x94, 0};
    oled_write_P(font_ctrl, false);
};

void render_mod_alt(void) {
    static const char PROGMEM font_alt[3] = {0xb3, 0xb4, 0};
    oled_write_P(font_alt, false);
}

void render_mod_shift(void) {
    static const char PROGMEM font_shift[3] = {0xd3, 0xd4, 0};
    oled_write_P(font_shift, false);
}

void render_mod_gui(void) {
    static const char PROGMEM font_gui[3] = {0x95, 0x96, 0};
    oled_write_P(font_gui, false);
}

#ifdef MOUSEKEY_ENABLE
void render_mod_mouse(void) {
    static const char PROGMEM font_mouse[3] = {0x97, 0x98, 0};
    oled_write_P(font_mouse, false);
}
#endif

// 5x2 Mod and feature indicator clusters

void render_mod_status(void) {
#ifdef NO_ACTION_ONESHOT
    uint8_t modifiers = get_mods();
#else
    uint8_t modifiers = get_mods() | get_oneshot_mods();
#endif

    (modifiers & MOD_MASK_CTRL) ? render_mod_ctrl() : oled_write_P(PSTR("  "), false);
    oled_write_P(PSTR(" "), false);
    (modifiers & MOD_MASK_SHIFT) ? render_mod_shift() : oled_write_P(PSTR("  "), false);

    (modifiers & MOD_MASK_ALT) ? render_mod_alt() : oled_write_P(PSTR("  "), false);
    oled_write_P(PSTR(" "), false);
    (modifiers & MOD_MASK_GUI) ? render_mod_gui() : oled_write_P(PSTR("  "), false);
}

void render_feature_status(void) {
#if defined(RGBLIGHT_ENABLE)
    render_rgb_status();
#endif
}


void render_kb_map(void) {

    uint32_t layer = eeconfig_read_default_layer() -1;
    bool blink = (timer_read() % 1000) < 500;

    if (layer == 0) {
        oled_write_ln_P(blink ? PSTR("> W_") : PSTR("> W"), false);
    } else if ( layer == 1 ) {
        oled_write_ln_P(blink ? PSTR("> D_") : PSTR("> D"), false);
    } else if (layer == 3) {
        oled_write_ln_P(blink ? PSTR("> Q_") : PSTR("> Q"), false);
    } else {
        oled_write_ln_P(blink ? PSTR("> ?_") : PSTR("> ?"), false);
    }

}

void render_status_secondary(void) {
    render_prpl();
    oled_write_ln("\n", false);

    render_kb_map();

    oled_write_ln("", false);
    oled_write_ln("", false);


    render_layer();



    oled_write_ln("", false);
    oled_write_ln("", false);

    #if defined(RGB_MATRIX_ENABLE) || defined(RGBLIGHT_ENABLE) || defined(AUDIO_ENABLE)
        layer_state_is(_ADJUST) ? render_feature_status() : render_mod_status();
    #else
        render_mod_status();
    #endif

    oled_write_ln("", false);
    oled_write_ln("", false);



}

void render_status_main(void) {
    render_resist();
    oled_write_ln("\n", false);
    render_cat_logo();
    oled_write_ln("", false);

    render_qmk_logo();

    oled_write_ln("", false);
    //oled_write_P(PSTR("Not \nall \nwho \nwander \nare \nlost!!"), false);

    oled_write_ln("", false);


}


oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_90;
}

void oled_task_user(void) {

    if (!is_keyboard_master()) {
        render_status_main();
    } else {
        render_status_secondary();
    }
}





#endif
