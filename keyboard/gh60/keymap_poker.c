#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// 0 : base layer (linux)
  /* NOTE:
	*	FN 5 and 6 could be used to gear up and down through other layers (mac, windows, gaming, other?)
	* should try to put in a key combination to reset the firmware without having to take apart the keyboard ?
	* remove numpad (use actual numbers in pad formation)
	* create a tmux layer where every key press is preceded by ctrl-b ?
	* should have backspace on mod layers
	* change movment layer to right hand side ?
	* add a mod layer that has all symbols instead of numbers on left
	* new layout structure:
	* 	shift num row right by one
	*		shift bottom letter row one to the right
	* adjust mouse buttons so you can drag easily
	*/
	KEYMAP( \
		GRV,							TAB,						Q,							W,							E,							R,							T,							Y,							U,							I,							O,							P,							BSLS,						BSPC, \
		CAPS,							ESC,						A,							S,							D,							F,							G,							H,							J,							K,							L,							SCLN,						QUOT,						ENT, \
		LSFT,							LSFT,						Z,							X,							C,							V,							B,							N,							M,							COMM,						DOT,						SLSH,						RSFT,						ENT, \
		FN0,							LCTL,						LALT,						LGUI,						FN1,						FN2,						FN3,						SPC,						FN4,						FN5,						LGUI,						LALT,						LCTL,						ENT),
	// 1 : test layer : alternate key layout
	//		bottom letter row shifted to right
	//		semi macro key test (ctrl alt f6)
	KEYMAP( \
		GRV,							TAB,						Q,							W,							E,							R,							T,							Y,							U,							I,							O,							P,							BSLS,						BSPC, \
		CAPS,							ESC,						A,							S,							D,							F,							G,							H,							J,							K,							L,							SCLN,						QUOT,						ENT, \
		FN6,							FN7,						LSFT						Z,							X,							C,							V,							B,							N,							M,							COMM,						DOT,						SLSH,						RSFT, \
		FN0,							LCTL,						LALT,						LGUI,						FN1,						FN2,						FN3,						SPC,						FN4,						FN5,						LGUI,						LALT,						LCTL,						FN8),
  // 2 : top numbers
  KEYMAP( \
      GRV,            1,           		2,       				3,       				4,		      		5,       				6,       				7,       				8,      				9,   	   				0,       				MINS,    				EQL,         		DELETE, \
      TRNS,           TRNS,           TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		LBRC,       		RBRC,       		TRNS,       		TRNS,           TRNS, \
      TRNS,           TRNS,           TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		COMM,       		DOT,       			TRNS,       		TRNS,           TRNS, \
      TRNS,           TRNS,           TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,           TRNS),
  // 3 : Number pad on home row
  KEYMAP( \
      TRNS,           TRNS,        		TRNS,       		TRNS,	    			TRNS,       		TRNS,	    			TRNS,       		TRNS,	    			7,      				8,      				9,      				PMNS,						TRNS,		    		TRNS, \
      TRNS,           TRNS,        		TRNS,       		TRNS,	    			TRNS,       		TRNS,	    			TRNS,       		TRNS,	    			4,      				5,      				6,      				PPLS,						TRNS,		    		TRNS, \
      TRNS,           TRNS,        		TRNS,       		TRNS,	    			TRNS,       		TRNS,	    			TRNS,       		TRNS,	    			1,      				2,      				3,							PENT,						TRNS,		    		TRNS, \
      TRNS,           TRNS,        		TRNS,       		TRNS,	    			TRNS,       		TRNS,	    			TRNS,       		TRNS,	    			P0,      				PSLS,    				PDOT,    				PAST,						TRNS,		    		TRNS),
  // 4 : Movement
  KEYMAP( \
      TRNS,           TRNS,        		TRNS,       		WH_L,	    			WH_U,       		WH_D,	    			WH_R,       		HOME,    				PGDN,    				PGUP,    				END,     				NLCK,   				TRNS,		    		TRNS, \
      TRNS,           TRNS,        		BTN3,       		MS_L,	    			MS_U,       		MS_D,	    			MS_R,       		LEFT,						DOWN,    				UP,      				RIGHT,   				TRNS,   				TRNS,		    		TRNS, \
      TRNS,           TRNS,        		ACL0,       		ACL1,	    			ACL2,       		BTN1,	    			BTN2,       		TRNS,	    			TRNS,       		TRNS,       		TRNS,	    			TRNS,   				TRNS,		    		TRNS, \
      TRNS,           TRNS,        		TRNS,       		TRNS,	    			TRNS,       		TRNS,	    			TRNS,       		TRNS,	    			TRNS,       		TRNS,       		TRNS,	    			TRNS,   				TRNS,		    		TRNS),
  // 5 : F keys
	KEYMAP( \
			TRNS,           F1,							F2,							F3,							F4,							F5,							F6,							F7,							F8,							F9,							F10,						F11,						F12,           	TRNS, \
			TRNS,           F13,						F14,						F15,						F16,						F17,						F18,						F19,						F20,						F21,						F22,						F23,						F24,						TRNS, \
			TRNS,           TRNS,           TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,           TRNS, \
			TRNS,           TRNS,           TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,           TRNS),
	// 6 : testing out mod keys at layer level (ie shift before every keypress - only works with left hand side modifiers)
	KEYMAP( \
			GRV,            1,           		2,       				3,       				4,		      		5,       				6,       				7,       				8,      				9,   	   				0,       				MINS,    				EQL,         		DELETE, \
			TRNS,           TRNS,           TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		LBRC,       		RBRC,       		TRNS,       		TRNS,           TRNS, \
			TRNS,           TRNS,           TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		COMM,       		DOT,       			TRNS,       		TRNS,           TRNS, \
			TRNS,           TRNS,           TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,       		TRNS,           TRNS)
};
const action_t PROGMEM fn_actions[] = {
  // first number is the number of the function key used to get to the layer, the second is the layer
	// [0] = ACTION_LAYER_MOMENTARY(3),
	[0] = ACTION_LAYER_MOMENTARY(5),
	[1] = ACTION_LAYER_MOMENTARY(2),
	[2] = ACTION_LAYER_TAP_TOGGLE(4),
	[3] = ACTION_LAYER_MOMENTARY(3),
	[4] = ACTION_DEFAULT_LAYER_SET(0),
	[5] = ACTION_LAYER_TOGGLE(1),
	[6] = ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_F6),
	[7] = ACTION_LAYER_MODS(6, MOD_LSFT),
	[8] = ACTION_MACRO(SHUTDOWN)
};


// macros:

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case SHUTDOWN:
            return (record->event.pressed ?
                    MACRO( I(0), D(LGUI), D(ENT), END ) :
                    MACRO( I(0), U(LGUI), U(ENT), END ) :
										MACRO( I(0), W(255), T(r), T(e), T(b), T(o), T(o), T(t), T(ENT), END ) :
                    MACRO_NONE );
        case 1:
            return (record->event.pressed ?
                    MACRO( D(LALT), D(TAB), END ) :
                    MACRO( U(TAB), END ));
    }
    return MACRO_NONE;
}


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
