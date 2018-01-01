#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// 0 : base layer (linux)
	KEYMAP(\
		GRV,			TAB,			Q,			W,			E,			R,			T,			Y,			U,			I,			O,			P,			BSLS,			BSPC,\
		CAPS,			ESC,			A,			S,			D,			F,			G,			H,			J,			K,			L,			SCLN,		QUOT,			ENT,\
		LSFT,			LSFT,			Z,			X,			C,			V,			B,			N,			M,			COMM,		DOT,		SLSH,		RSFT,			FN0,\
		FN1,			LCTL,			LGUI,		LALT,		FN2,		FN3,		FN4,		SPC,		FN5,		RGUI,		FN6,		FN7,		FN8,			FN9),
    // 1 : top numbers
    KEYMAP(\
        GRV,            KC_1,           KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    KC_EQL,         KC_DELETE,\
        TRNS,           TRNS,           TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,           TRNS,\
        TRNS,           TRNS,           TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,           TRNS,\
        TRNS,           TRNS,           TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,           TRNS),
    // 2 : Number pad on home row
    KEYMAP(\
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    KC_P7,      KC_P8,      KC_P9,      KC_PMNS,	TRNS,		    TRNS,\
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    KC_P4,      KC_P5,      KC_P6,      KC_PPLS,	TRNS,		    TRNS,\
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    KC_P1,      KC_P2,      KC_P3,	    KC_PENT,	TRNS,		    TRNS,\
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    KC_P0,      KC_PSLS,    KC_PDOT,    KC_PAST,	TRNS,		    TRNS),
    // 3 : Movement
    KEYMAP(\
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     KC_NLCK,   	TRNS,		    TRNS,\
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       KC_LEFT,	KC_DOWN,    KC_UP,      KC_RIGHT,   TRNS,   	TRNS,		    TRNS,\
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,       TRNS,	    TRNS,   	TRNS,		    TRNS,\
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,       TRNS,	    TRNS,   	TRNS,		    TRNS)
};
const action_t PROGMEM fn_actions[] = {
	[0] = ACTION_DEFAULT_LAYER_SET(0),
	[1] = ACTION_LAYER_MOMENTARY(1),
	[2] = ACTION_LAYER_MOMENTARY(2)
	
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
