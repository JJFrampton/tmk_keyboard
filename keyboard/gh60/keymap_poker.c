#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(TAB,  	Q,   	W,      E,      R,      T,      Y,      U,      I,      O,      P,      LBRC,   RBRC,   BSPC,      \
           ESC, 	A,   	S,      D,      F,      G,      H,      J,      K,      L,      SCLN,   QUOT,   ENT,            \
           LSFT, 	Z,   	X,      C,      V,      B,      N,      M,      COMM,   DOT,    SLSH,   RSFT,   FN0,          \
           LCTL,	LALT,	FN1,                    SPC,                                    PAUS,   RALT),
};
const action_t PROGMEM fn_actions[] = {

};
