#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  HSV_0_0_255,
  HSV_0_255_255,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
};

#define DUAL_FUNC_0 LT(8, KC_Y)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_TRANSPARENT, KC_HOME,        KC_F2,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,DUAL_FUNC_0,    KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_D,           KC_U,           KC_A,           KC_X,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_P,           KC_H,           KC_L,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_BSPC,        KC_C,           KC_T,           KC_I,           KC_E,           KC_O,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_B,           KC_N,           KC_R,           KC_S,           DE_Y,           KC_DELETE,      
    KC_TRANSPARENT, KC_F,           KC_V,           DE_UE,          DE_AE,          DE_OE,                                          KC_W,           DE_Z,           KC_G,           KC_K,           KC_Q,           KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_LEFT_ALT,    KC_J,           KC_COMMA,       KC_LEFT_GUI,                                                                                                    LALT(KC_F4),    KC_DOT,         DE_SS,          KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,       
    MO(1),          OSM(MOD_LSFT),  KC_TAB,                         TO(4),          OSM(MOD_RSFT),  KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, TT(3),          KC_UP,          TT(2),          KC_PSCR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, DE_HASH,        DE_AMPR,        LSFT(DE_MINS),  LSFT(DE_HASH),  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       TD(DANCE_0),    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, DE_DQOT,        DE_QST,         DE_EXLM,        DE_MINS,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,       TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),                                    DE_GRV,         DE_MORE,        DE_LESS,        DE_ACUT,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_NO,          DE_AT,          DE_PERC,        DE_EURO,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, DE_EQL,         KC_7,           KC_8,           KC_9,           KC_KP_MINUS,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_KP_PLUS,     KC_4,           KC_5,           KC_6,           KC_KP_SLASH,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_ASTERISK, KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_NO,          KC_0,           KC_KP_DOT,      KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F10,         KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_F12,         KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_F6,                                          KC_TRANSPARENT, DE_Z,           KC_U,           KC_I,           KC_O,           KC_P,           DE_UE,          
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_F5,                                                                          KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           DE_OE,          DE_AE,          
    KC_LEFT_SHIFT,  DE_Y,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         DE_MINS,        KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_NO,          KC_NO,          KC_NO,          KC_LEFT_ALT,    KC_NO,                                                                                                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_ENTER,       TO(0),                          TO(5),          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    RGB_VAD,        RGB_VAI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_MODE_FORWARD,                                KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_SAD,        RGB_SAI,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LCTL(LSFT(KC_B))),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TOGGLE_LAYER_COLOR,HSV_0_0_255,    HSV_0_255_255,  RGB_TOG,        MOON_LED_LEVEL, KC_TRANSPARENT,                                                                                                 KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MAGIC_TOGGLE_NKRO,
    KC_TRANSPARENT, KC_TRANSPARENT, TO(4),                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};





extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,255,131}, {0,0,0}, {0,255,131}, {0,0,0}, {80,242,183}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,84}, {0,255,255}, {0,255,255}, {0,255,255}, {80,242,183}, {21,3,148}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,84}, {0,255,255}, {0,255,107}, {0,255,255}, {172,255,255}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {139,255,122}, {0,0,255}, {80,242,183}, {80,242,183}, {173,255,255}, {0,0,0}, {0,255,131}, {0,0,0}, {0,0,255}, {176,255,136}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {176,255,136}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {173,255,255}, {0,255,255}, {0,255,107}, {0,255,255}, {172,255,255}, {176,255,136}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,53}, {0,255,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,107}, {41,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {80,242,183}, {0,0,0}, {0,0,0}, {172,255,255}, {41,255,255}, {171,255,255}, {0,0,0}, {0,0,0}, {0,0,160}, {171,255,255}, {171,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,255,255}, {139,255,255}, {0,255,255}, {41,255,107}, {0,0,0}, {139,255,255}, {139,255,255}, {171,255,255}, {41,255,107}, {0,0,0}, {139,255,255}, {139,255,255}, {171,255,255}, {41,255,255}, {0,0,0}, {41,255,255}, {139,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {19,255,107}, {0,0,0}, {172,255,255}, {172,255,140}, {172,255,255}, {19,255,107}, {0,0,0}, {172,255,255}, {172,255,255}, {172,255,255}, {172,255,140}, {0,0,0}, {41,255,255}, {80,242,183}, {80,242,183}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,107}, {0,255,107}, {0,255,107}, {0,0,0}, {0,0,0}, {0,255,107}, {0,255,255}, {0,255,107}, {0,0,0}, {0,0,0}, {0,255,107}, {0,255,107}, {0,255,107}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,107}, {0,255,107}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,255,255}, {171,255,255}, {0,255,131}, {171,255,255}, {171,255,255}, {0,0,118}, {0,0,118}, {0,255,255}, {0,0,118}, {0,0,0}, {0,0,118}, {0,255,255}, {0,255,255}, {0,0,118}, {0,0,0}, {0,0,118}, {0,0,118}, {0,255,255}, {0,0,118}, {0,0,0}, {0,0,118}, {0,0,118}, {0,0,118}, {0,0,118}, {171,255,255}, {0,0,118}, {0,0,118}, {0,0,118}, {0,0,118}, {0,0,0}, {41,255,255}, {80,242,183}, {171,255,255}, {0,0,165}, {0,0,53}, {0,0,0}, {0,0,127}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,127}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,118}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,118}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,53}, {0,0,0} },

    [5] = { {0,0,118}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,118}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,118}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {171,255,255}, {0,0,0}, {0,0,0}, {87,255,255}, {0,0,0}, {139,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,53}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,255,255}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,104}, {80,242,183}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,107}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {76,255,131}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {172,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MEDIA_PLAY_PAUSE);
        } else {
          unregister_code16(KC_MEDIA_PLAY_PAUSE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(LCTL(LSFT(KC_S))));
        } else {
          unregister_code16(LALT(LCTL(LSFT(KC_S))));
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_0_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,0,255);
        }
        return false;
    case HSV_0_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,255,255);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[4];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_LCBR);
        tap_code16(DE_LCBR);
        tap_code16(DE_LCBR);
    }
    if(state->count > 3) {
        tap_code16(DE_LCBR);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(DE_LCBR); break;
        case DOUBLE_TAP: register_code16(DE_RCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_LCBR); register_code16(DE_LCBR);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(DE_LCBR); break;
        case DOUBLE_TAP: unregister_code16(DE_RCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_LCBR); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_SLSH);
        tap_code16(DE_SLSH);
        tap_code16(DE_SLSH);
    }
    if(state->count > 3) {
        tap_code16(DE_SLSH);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(DE_SLSH); break;
        case SINGLE_HOLD: register_code16(DE_PIPE); break;
        case DOUBLE_TAP: register_code16(DE_BSLS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_SLSH); register_code16(DE_SLSH);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(DE_SLSH); break;
        case SINGLE_HOLD: unregister_code16(DE_PIPE); break;
        case DOUBLE_TAP: unregister_code16(DE_BSLS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_SLSH); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_LPRN);
        tap_code16(DE_LPRN);
        tap_code16(DE_LPRN);
    }
    if(state->count > 3) {
        tap_code16(DE_LPRN);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(DE_LPRN); break;
        case DOUBLE_TAP: register_code16(DE_RPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_LPRN); register_code16(DE_LPRN);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(DE_LPRN); break;
        case DOUBLE_TAP: unregister_code16(DE_RPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_LPRN); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_LBRC);
        tap_code16(DE_LBRC);
        tap_code16(DE_LBRC);
    }
    if(state->count > 3) {
        tap_code16(DE_LBRC);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(DE_LBRC); break;
        case DOUBLE_TAP: register_code16(DE_RBRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_LBRC); register_code16(DE_LBRC);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(DE_LBRC); break;
        case DOUBLE_TAP: unregister_code16(DE_RBRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_LBRC); break;
    }
    dance_state[3].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
};
