#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// 0 : base layer (linux)
	KEYMAP( \
		GRV,			TAB,			Q,			W,			E,			R,			T,			Y,			U,			I,			O,			P,			BSLS,			BSPC, \
		CAPS,			ESC,			A,			S,			D,			F,			G,			H,			J,			K,			L,			SCLN,		QUOT,			ENT, \
		LSFT,			LSFT,			Z,			X,			C,			V,			B,			N,			M,			COMM,		DOT,		SLSH,		RSFT,			FN0, \
		FN1,			LCTL,			LGUI,		LALT,		FN2,		FN3,		FN4,		SPC,		FN5,		RGUI,		FN6,		FN7,		FN8,			FN9),
    // 1 : top numbers
    KEYMAP( \
        GRV,            1,           2,       3,       4,       5,       6,       7,       8,       9,       0,       MINS,    EQL,         DELETE, \
        TRNS,           TRNS,           TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,           TRNS, \
        TRNS,           TRNS,           TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,           TRNS, \
        TRNS,           TRNS,           TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,       TRNS,           TRNS),
    // 2 : Number pad on home row
    KEYMAP( \
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    P7,      P8,      P9,      PMNS,	TRNS,		    TRNS, \
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    P4,      P5,      P6,      PPLS,	TRNS,		    TRNS, \
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    P1,      P2,      P3,	    PENT,	TRNS,		    TRNS, \
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    P0,      PSLS,    PDOT,    PAST,	TRNS,		    TRNS),
    // 3 : Movement
    KEYMAP( \
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       HOME,    PGDN,    PGUP,    END,     NLCK,   	TRNS,		    TRNS, \
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       LEFT,	DOWN,    UP,      RIGHT,   TRNS,   	TRNS,		    TRNS, \
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,       TRNS,	    TRNS,   	TRNS,		    TRNS, \
        TRNS,           TRNS,        	TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,	    TRNS,       TRNS,       TRNS,	    TRNS,   	TRNS,		    TRNS)
};
const action_t PROGMEM fn_actions[] = {
    // first number is the layer thats activated, the secodn number is the number of the function key used to get to the layer
	[0] = ACTION_LAYER_MOMENTARY(3),
	[1] = ACTION_LAYER_MOMENTARY(2),
	[2] = ACTION_LAYER_MOMENTARY(1),
	[3] = ACTION_DEFAULT_LAYER_SET(0)
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
