#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// 0 : base layer (linux)
	KEYMAP(\
		GRV,			TAB,			Q,			W,			E,			R,			T,			Y,			U,			I,			O,			P,			BSLS,			BSPC,\
		CAPS,			ESC,			A,			S,			D,			F,			G,			H,			J,			K,			L,			SCLN,		QUOT,			ENT,\
		LSFT,			LSFT,			Z,			X,			C,			V,			B,			N,			M,			COMM,		DOT,		SLSH,		RSFT,			FN0,\
		FN1,			LCTL,			LGUI,		LALT,		FN2,		FN3,		FN4,		SPC,		FN5,		RGUI,		FN6,		FN7,		FN8,			FN9)
};
const action_t PROGMEM fn_actions[] = {

};

// could be used for testing:
// KEYMAP(\
// 	Q,			W,			E,			R,			T,			Y,			U,			I,			O,			P,			A,			S,			D,			F,\
// 	G,			H,			J,			K,			L,			Z,			X,			C,			V,			B,			N,			M,			Q,			W,\
// 	E,			R,			T,			Y,			U,			I,			O,			P,			A,			S,			D,			F,			Q,			W,\
// 	E,			R,			T,			Y,			U,			I,			O,			P,			A,			S,			D,			F,			Q,			W)
//
//  actual keymaps:
//	KEYMAP(\
//		GRV,			TAB,			Q,			W,			E,			R,			T,			Y,			U,			I,			O,			P,			BSLS,			BSPC,\
//		CAPS,			ESC,			A,			S,			D,			F,			G,			H,			J,			K,			L,			SCLN,		QUOT,			ENT,\
//		LSFT,			LSFT,			Z,			X,			C,			V,			B,			N,			M,			COMM,		DOT,		SLSH,		RSFT,			FN0,\
//		FN1,			LCTL,			LGUI,		LALT,		FN2,		FN3,		FN4,		SPC,		SPC,		RGUI,		FN5,		FN6,		FN7,			FN8)
//
// setting up automatic modifiers on a layer
// 3.5 Momentary switching with Modifiers
//
// This registers modifier key(s) simultaneously with layer switching.
//
// ACTION_LAYER_MODS(2, MOD_LSFT | MOD_LALT)
//
// You can combine four modifiers at most but cannot use both left and right modifiers at a time, either left or right modiiers only can be allowed.
