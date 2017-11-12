#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// 0 : base layer (linux)
	KEYMAP(
		GRV,			TAB,			Q,			W,			E,			R,			T,			Y,			U,			I,			O,			P,			BSLS,			BSPC,\
		CAPS,			ESC,			A,			S,			D,			F,			G,			H,			J,			K,			L,			SCLN,		QUOT,			ENT,\
		LSFT,			LSFT,			Z,			X,			C,			V,			B,			N,			M,			COMM,		DOT,		SLSH,		RSFT,			FN0,\
		FN1,			LCTL,			LGUI,		LALT,		FN2,		FN3,		FN4,		SPC,		SPC,		RGUI,		FN5,		FN6,		FN7,			FN8),
};
const action_t PROGMEM fn_actions[] = {

};

// could be used for testing:
// KEYMAP(
// 	Q,			W,			E,			R,			T,			Y,			U,			I,			O,			P,			A,			S,			D,			F,\
// 	G,			H,			J,			K,			L,			Z,			X,			C,			V,			B,			N,			M,			Q,			W,\
// 	E,			R,			T,			Y,			U,			I,			O,			P,			A,			S,			D,			F,			Q,			W,\
// 	E,			R,			T,			Y,			U,			I,			O,			P,			A,			S,			D,			F,			Q,			W)
