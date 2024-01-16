/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
//#include <stdio.h>

enum user_layers {
    _BASE,
    _MEDIA,
    _NAV,
    _MOUSE,
    _SYM,
    _NUM,
    _FUNC,
    _QWERT,
    _QNUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT_split_3x6_3(TG(7), KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, KC_NO, KC_NO, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G, KC_M, RSFT_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O), KC_NO, KC_NO, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_NO, LT(1,KC_ESC), LT(2,KC_TAB), LT(3,KC_SPC), LT(4,KC_ENT), LT(5,KC_BSPC), LT(6,KC_DEL)),
	[_MEDIA] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SPI, BL_TOGG, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_MSTP, KC_MPLY, KC_MUTE),
	[_NAV] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, CW_TOGG, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_ENT, KC_BSPC, KC_DEL),
	[_MOUSE] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_AGIN, KC_PSTE, KC_COPY, KC_CUT, KC_UNDO, KC_NO, KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_BTN1, KC_BTN2, KC_BTN3),
	[_SYM] = LAYOUT_split_3x6_3(KC_NO, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PIPE, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO, KC_NO, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PLUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_RPRN, KC_UNDS, KC_TRNS, KC_NO, KC_NO),
	[_NUM] = LAYOUT_split_3x6_3(KC_NO, KC_LBRC, KC_7, KC_8, KC_9, KC_RBRC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SCLN, KC_4, KC_5, KC_6, KC_BSLS, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO, KC_NO, KC_GRV, KC_1, KC_2, KC_3, KC_EQL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_DOT, KC_0, KC_MINS, KC_NO, KC_TRNS, KC_NO),
	[_FUNC] = LAYOUT_split_3x6_3(KC_NO, KC_F12, KC_F7, KC_F8, KC_F9, KC_PSCR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F4, KC_F5, KC_F6, KC_SCRL, KC_NO, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, KC_NO, KC_NO, KC_F10, KC_F1, KC_F2, KC_F3, KC_PAUS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TAB, KC_SPC, KC_NO, KC_NO, KC_TRNS),
	[_QWERT] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ESC, KC_LGUI, TT(8), KC_SPC, KC_ENT, TG(7), KC_RALT),
	[_QNUM] = LAYOUT_split_3x6_3(KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_NO, KC_INS, KC_HOME, KC_PGUP, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_DEL, KC_END, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ESC, KC_LGUI, KC_TRNS, KC_SPC, KC_ENT, TO(7), KC_LALT)
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180; // flips the display 180 degrees if offhand
    } else {
        return OLED_ROTATION_270;
    }
}

void oled_render_layer_state(void) {
    oled_write_ln_P(PSTR("Layer"), false);
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_ln_P(PSTR("Base "), false);
            break;
        case _MEDIA:
            oled_write_ln_P(PSTR("Media"), false);
            break;
        case _NAV:
            oled_write_ln_P(PSTR("Nav  "), false);
            break;
        case _MOUSE:
            oled_write_ln_P(PSTR("Mouse"), false);
            break;
        case _SYM:
            oled_write_ln_P(PSTR("Sym  "), false);
            break;
        case _NUM:
            oled_write_ln_P(PSTR("Num  "), false);
            break;
        case _FUNC:
            oled_write_ln_P(PSTR("Func "), false);
            break;
        case _QWERT:
            oled_write_ln_P(PSTR("QWERT"), false);
            break;
        case _QNUM:
            oled_write_ln_P(PSTR("QNUM "), false);
            break;
        default:
            oled_write_ln_P(PSTR("UNKWN"), false);
    }
}

void oled_render_wpm(void) {
#ifdef WPM_ENABLE
	oled_write_ln_P(PSTR(" WPM"), false);
	oled_write_P(PSTR(" "), false);
	oled_write_ln(get_u8_str(get_current_wpm(), ' '), false);
#endif // WPM_ENABLE
}

#ifdef WPM_ENABLE
static uint8_t anim = 0;
#endif // WPM_ENABLE

void oled_render_pet(void) {
	static const char PROGMEM pet_sprite[2][16] = {
		{
			0x95, 0x96, 0x97, 0x98, 0x99,
			0xB5, 0xB6, 0xB7, 0xB8, 0xB9,
			0xD5, 0xD6, 0xD7, 0xD8, 0xD9,
			0
		},
		{
			0x9A, 0x9B, 0x9C, 0x9D, 0x9E,
			0xBA, 0xBB, 0xBC, 0xBD, 0xBE,
			0xDA, 0xDB, 0xDC, 0xDD, 0xDE,
			0
		}
	};

#ifdef WPM_ENABLE
	if (get_current_wpm() > 20) {
		anim = (anim + 1) % 2;
		oled_write_P(pet_sprite[anim], false);
	} else {
		oled_write_P(pet_sprite[1], false);
	}
#else
	oled_write_P(pet_sprite[1], false);
#endif
}

void oled_render_logo(void) {
    static const char PROGMEM ixentus_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(ixentus_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
		oled_render_wpm();
		oled_render_pet();
    } else {
        oled_render_logo();
    }
    return false;
}

#endif // OLED_ENABLE

#ifdef RGB_MATRIX_ENABLE

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i <= led_max; i++) {
        if (g_led_config.flags[i] & LED_FLAG_UNDERGLOW) {
            switch (get_highest_layer(layer_state)) {
                case _MEDIA:
                    rgb_matrix_set_color(i, RGB_PURPLE);
                    break;
                case _NAV:
                    rgb_matrix_set_color(i, RGB_BLUE);
                    break;
                case _MOUSE:
                    rgb_matrix_set_color(i, RGB_YELLOW);
                    break;
                case _SYM:
                    rgb_matrix_set_color(i, RGB_GREEN);
                    break;
                case _NUM:
                    rgb_matrix_set_color(i, RGB_CYAN);
                    break;
                case _FUNC:
                    rgb_matrix_set_color(i, RGB_ORANGE);
                    break;
                case _QWERT:
                    rgb_matrix_set_color(i, RGB_RED);
                    break;
                case _QNUM:
                    rgb_matrix_set_color(i, RGB_PINK);
                    break;
                default:
                    rgb_matrix_set_color(i, RGB_OFF);
                    break;
            }
        }
    }
    return false;
}

#endif // RGB_MATRIX_ENABLE
