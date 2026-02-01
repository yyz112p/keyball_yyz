/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

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

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,                                  KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,
    KC_LALT  , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                  KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_MINS  ,
    KC_LSFT  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                  KC_H     , KC_J     , KC_K     , KC_L     , MO(3)    , MO(2)    ,
    MO(1)    , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , KC_NO ,                  KC_NO , KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , MO(4)    ,
    _______  , KC_LCTL  , KC_LWIN  , MO(4)    , MO(1)    , KC_SPC   , KC_DEL,                 KC_BSPC, KC_ENT   ,LT(1,KC_LNG2),KC_RGUI, _______  , KC_INT1  , KC_NO    
  ),
//Fn1
  [1] = LAYOUT_universal(
     KC_NO , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,                                   KC_NO   , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,
    _______, KC_ESC   , S(KC_TAB), KC_UP    , KC_TAB   , KC_NO    ,                                  S(KC_4)  , S(KC_7)  , S(KC_2)  , S(KC_6)  , KC_LBRC  , KC_EQL   ,
    _______, KC_HOME  , KC_LEFT  , KC_DOWN  , KC_RGHT  , KC_END ,                                    S(KC_5)  , S(KC_8)  , S(KC_9)  , KC_QUOT  , KC_SCLN  , S(KC_INT3)  ,
    _______, C(KC_PGUP), KC_F2   , KC_INT5  , KC_INT4  , C(KC_PGDN) , KC_NO  ,              KC_NO  , S(KC_3)  , KC_RBRC  , KC_BSLS  , KC_NO    , S(KC_1)  ,S(KC_INT1),
    _______, KC_NO    , _______  , KC_NO    , _______  , _______  , _______  ,            _______  , _______  , _______  ,S(KC_RGUI), _______  , KC_NO    , _______
  ),
//mouse drag mode
  [2] = LAYOUT_universal(
       KC_NO , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,                                   KC_NO   , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  CPI_I100 , KC_NO    , SCRL_DVD , KC_NO    , KC_PSCR  , KC_NO    ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  CPI_D100 , KC_BTN1  , KC_BTN3  , KC_BTN2  , KC_NO    , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , KC_NO    ,            S(KC_9)  , KBC_SAVE , _______  , SCRL_DVI , _______  , _______  , _______  ,
    _______  , _______  , _______  , KC_NO    , KC_NO    , _______  , _______  ,        C(S(KC_TAB)) , C(KC_TAB), _______  , _______  , _______  , _______  , _______
  ),
//mouse scroll mode
  [3] = LAYOUT_universal(
       KC_NO , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,                                   KC_NO   , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,
    _______  , KC_VOLU  , KC_F7    , KC_F8    , KC_F9    , KC_F10   ,                                C(S(KC_T)) , KC_BTN4  , KC_PGUP  , KC_BTN5  , KC_PSCR  , _______  ,
    _______  , KC_VOLD  , KC_F4    , KC_F5    , KC_F6    , KC_F11   ,                                    KC_F5  , KC_BTN1  , KC_BTN3  , KC_BTN2  , KC_NO    , KC_NO    ,
    _______  , KC_NO    , KC_F1    , KC_F2    , KC_F3    , KC_F12   , KC_NO    ,             KC_NO   , A(KC_F4) , C(KC_W)  , KC_PGDN  , KC_INT5  , _______  , _______  ,
    _______  , _______  , _______  , KC_NO    , KC_NO    , _______  , _______  ,        C(S(KC_TAB)) , C(KC_TAB), _______  , _______  , _______  , _______  , KC_NO    
  ),
//Fn2
  [4] = LAYOUT_universal(
       KC_NO , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,                                   KC_NO   , KC_NO    , KC_NO    , KC_NO    , KC_NO    , KC_NO    ,
    _______  , KC_PSLS  , KC_7     , KC_8    , KC_9    , S(KC_MINS),                                   KC_PMNS , KC_7     , KC_8     , KC_9     , S(KC_MINS), _______  ,
    _______  , KC_PAST  , KC_4     , KC_5    , KC_6    , KC_PMNS   ,                                   KC_PPLS , KC_4     , KC_5     , KC_6     , KC_PSLS   , KC_NO    ,
    _______  , KC_0     , KC_1     , KC_2    , KC_3    , KC_PPLS   , KC_NO    ,              KC_NO  , KC_0     , KC_1     , KC_2     , KC_3     , KC_PAST   , KC_NO    ,
    _______  , _______  , KC_DOT   , KC_NO   , KC_NO    , _______  , _______  ,        C(S(KC_TAB)) , C(KC_TAB), _______  , _______  , _______  , _______   , KC_NO         
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    //keyball_set_scroll_mode(get_highest_layer(state) == 3);
    switch (layer){
      case 3:
        keyball_set_scroll_mode(true);
        break;
      case 4:
        keyball_set_scroll_mode(true);
      default:
        keyball_set_scroll_mode(false);
        break;
    }
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
