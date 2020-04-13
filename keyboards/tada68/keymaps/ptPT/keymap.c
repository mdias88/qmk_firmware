#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BL  0
#define _FL1 1
#define _SC1 2

#define _______ KC_TRNS

//€
#define KC_CHAR_EURO SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_2)SS_TAP(X_KP_8))
//Ç
#define KC_UPPER_CCEDIL SS_LALT(SS_TAP(X_KP_1)SS_TAP(X_KP_2)SS_TAP(X_KP_8))
//ç
#define KC_LOWER_CCEDIL SS_LALT(SS_TAP(X_KP_1)SS_TAP(X_KP_3)SS_TAP(X_KP_5))
//á
#define KC_LOWER_AAGUDO SS_LALT(SS_TAP(X_KP_1)SS_TAP(X_KP_6)SS_TAP(X_KP_0))
//Á
#define KC_UPPER_AAGUDO SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_9)SS_TAP(X_KP_3))
//à
#define KC_LOWER_AGRAVE SS_LALT(SS_TAP(X_KP_1)SS_TAP(X_KP_3)SS_TAP(X_KP_3))
//À
#define KC_UPPER_AGRAVE SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_9)SS_TAP(X_KP_2))
//ã
#define KC_LOWER_ATILDE SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_2)SS_TAP(X_KP_7))
//Ã
#define KC_UPPER_ATILDE SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_9)SS_TAP(X_KP_5))
//â
#define KC_LOWER_ACIRCU SS_LALT(SS_TAP(X_KP_1)SS_TAP(X_KP_3)SS_TAP(X_KP_1))
//Â
#define KC_UPPER_ACIRCU SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_9)SS_TAP(X_KP_4))
//é
#define KC_LOWER_EAGUDO SS_LALT(SS_TAP(X_KP_1)SS_TAP(X_KP_3)SS_TAP(X_KP_0))
//É
#define KC_UPPER_EAGUDO SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_1)SS_TAP(X_KP_3)SS_TAP(X_KP_8))
//ê
#define KC_LOWER_ECIRCU SS_LALT(SS_TAP(X_KP_1)SS_TAP(X_KP_3)SS_TAP(X_KP_6))
//Ê
#define KC_UPPER_ECIRCU SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_0)SS_TAP(X_KP_2))
//í
#define KC_LOWER_IAGUDO SS_LALT(SS_TAP(X_KP_1)SS_TAP(X_KP_6)SS_TAP(X_KP_1))
//Í
#define KC_UPPER_IAGUDO SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_0)SS_TAP(X_KP_5))
//õ
#define KC_LOWER_OTILDE SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_4)SS_TAP(X_KP_5))
//Õ
#define KC_UPPER_OTILDE SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_1)SS_TAP(X_KP_3))
//ó
#define KC_LOWER_OAGUDO SS_LALT(SS_TAP(X_KP_1)SS_TAP(X_KP_6)SS_TAP(X_KP_2))
//Ó
#define KC_UPPER_OAGUDO SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_1)SS_TAP(X_KP_1))
//ô
#define KC_LOWER_OCIRCU SS_LALT(SS_TAP(X_KP_1)SS_TAP(X_KP_4)SS_TAP(X_KP_7))
//Ô
#define KC_UPPER_OCIRCU SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_1)SS_TAP(X_KP_2))
//ú
#define KC_LOWER_UAGUDO SS_LALT(SS_TAP(X_KP_1)SS_TAP(X_KP_6)SS_TAP(X_KP_3))
//Ú
#define KC_UPPER_UAGUDO SS_LALT(SS_TAP(X_KP_0)SS_TAP(X_KP_2)SS_TAP(X_KP_1)SS_TAP(X_KP_8))

enum my_keycodes {
  M_EMAIL = SAFE_RANGE,
  M_EMAIL2,
  KC_EURO,
  KC_CCEDI,
  KC_SC_A,
  KC_SC_E,
  KC_SC_I,
  KC_SC_O,
  KC_SC_U
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Keymap _BL: (Base Layer) Default Layer
   * ,----------------------------------------------------------------.
   * |Esc | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |~ ` |
   * |----------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |Del |
   * |----------------------------------------------------------------|
   * |CAPS   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |PgUp|
   * |----------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Up|PgDn|
   * |----------------------------------------------------------------|
   * |Ctrl|Win |Alt |        Space          |SC1| FN|Ctrl|Lef|Dow|Rig |
   * `----------------------------------------------------------------'
   */
[_BL] = LAYOUT_ansi(
  KC_ESC,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL, KC_BSPC,KC_GRV, \
  KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,KC_BSLS,KC_DEL, \
  KC_CAPS, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,         KC_ENT,KC_PGUP,  \
  KC_LSFT,         KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,   KC_RSFT,KC_UP,KC_PGDN, \
  KC_LCTL, KC_LGUI,KC_LALT,                KC_SPC,                        MO(_SC1),MO(_FL1),KC_RCTRL, KC_LEFT,KC_DOWN,KC_RGHT),

  /* Keymap _FL: Function Layer
   * ,----------------------------------------------------------------.
   * |   | F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    |Ins |
   * |----------------------------------------------------------------|
   * |     |   |Up |   |   |   |   |   |   |   |PTS|   |   |     |    |
   * |----------------------------------------------------------------|
   * |      |<- |Dn | ->|   |   |   |   |Bl-|BL|BL+|BLM|         |Hme |
   * |----------------------------------------------------------------|
   * |        |   |  |CALC|   |    |   |MUT|VU-|VU+|   |     |   |End |
   * |----------------------------------------------------------------|
   * |    |    |    |                       |   |   |    |   |   |    |
   * `----------------------------------------------------------------'
   */
[_FL1] = LAYOUT_ansi(
  _______, KC_F1 ,KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, KC_INS ,  \
  _______,_______, KC_UP,_______,_______, _______,_______,_______,_______,_______,KC_PSCREEN,_______,_______, _______,_______, \
  _______,KC_LEFT,KC_DOWN,KC_RIGHT,_______,_______,_______,_______,BL_DEC,BL_TOGG,BL_INC,BL_BRTG,        _______,KC_HOME, \
  _______,_______,_______,KC_CALC,_______,_______, _______,KC_MUTE,KC_VOLD,KC_VOLU,_______,_______, _______, KC_END, \
  _______,_______,_______,                 _______,               _______,_______,_______,_______,_______, _______),


  /* Keymap _FL: Function Layer
   * ,----------------------------------------------------------------.
   * |   | F1|F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    |Ins |
   * |----------------------------------------------------------------|
   * |     |   |   |SC_E|   |   |   |SC_U|SC_I|SC_O|   |   |   |   |  |
   * |----------------------------------------------------------------|
   * |      |SC_A|   |   |   |   |   |   |   |   |   |   |       |    |
   * |----------------------------------------------------------------|
   * |        |   |   |CCEDI|   |   |   |   |   |   |   |    |   |    |
   * |----------------------------------------------------------------|
   * |    |    |    |                       |   |   |    |   |   |    |
   * `----------------------------------------------------------------'
   */
[_SC1] = LAYOUT_ansi(
  RESET, KC_F1 ,KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL, M_EMAIL,  \
  _______,_______, _______,KC_SC_E,_______, _______,_______,KC_SC_U,KC_SC_I,KC_SC_O,_______,_______,_______, _______,M_EMAIL2, \
  _______,KC_SC_A,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______,_______, \
  _______,_______,_______,KC_CCEDI, _______,_______, _______,_______,_______,_______,_______,_______, _______, _______, \
  _______,_______,_______,                 _______,               _______,_______,_______,_______,_______, _______)
};

static bool isLeftShiftPressed = false;
static bool isRightShiftPressed = false;

static bool isSCFunctionPressed = false;

static int sc_a_aux = 0;
static int sc_e_aux = 0;
static int sc_i_aux = 0;
static int sc_o_aux = 0;
static int sc_u_aux = 0;

void sendUpperCaseString(char * str){
	// Gotta temporarily disable both shift keys, else this whole thing may behave oddly
	unregister_code(KC_LSFT); 
	unregister_code(KC_RSFT);
	send_keyboard_report();
	
	send_string(str);
	
	// Restore shift keys to previous state
	if(isLeftShiftPressed) register_code(KC_LSFT);
	if(isRightShiftPressed) register_code(KC_RSFT);

	send_keyboard_report();
}	

uint32_t layer_state_set_user(uint32_t state) {
    switch (biton32(state)) {
    case _FL1:
        isSCFunctionPressed = false;
		sc_a_aux = 0;
		sc_e_aux = 0;
		sc_i_aux = 0;
		sc_o_aux = 0;
		sc_u_aux = 0;
        break;
    case _SC1:
        isSCFunctionPressed = true;
        break;
    default: //  for any other layers, or the default layer
		isSCFunctionPressed = false;
		sc_a_aux = 0;
		sc_e_aux = 0;
		sc_i_aux = 0;
		sc_o_aux = 0;
		sc_u_aux = 0;
        break;
    }
  return state;
}

void deleteChar(void){
	register_code(KC_BSPC);
	send_keyboard_report();
	unregister_code(KC_BSPC);
	send_keyboard_report();
}	

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  switch (keycode) {
	//-----------------------------------------------------------------------------------------------------------------------------
	// Shift?  
	case KC_LSFT:
      if (record->event.pressed) {
        isLeftShiftPressed = true;
      }else{
		isLeftShiftPressed = false; 
	  }
      return true; // Let QMK send the enter press/release events  
	case KC_RSFT:
      if (record->event.pressed) {
        isRightShiftPressed = true;
      }else{
		isRightShiftPressed = false; 
	  }
      return true; // Let QMK send the enter press/release events  

	//-----------------------------------------------------------------------------------------------------------------------------

	//-----------------------------------------------------------------------------------------------------------------------------
	//UTILS	
    case M_EMAIL:
      if (record->event.pressed) {
        SEND_STRING("manuel.barroso.dias@accenture.com");
      } else {
        // Do something else when release
      }
      return false; // Skip all further processing of this key
	case M_EMAIL2:
      if (record->event.pressed) {
        SEND_STRING("manueldias1988@gmail.com");
      } else {
        // Do something else when release
      }
      return false; // Skip all further processing of this key 
	//-----------------------------------------------------------------------------------------------------------------------------	
		
	//-----------------------------------------------------------------------------------------------------------------------------
	//CHARS	
	case KC_EURO:
      if (record->event.pressed) {
		send_string(KC_CHAR_EURO);
      } else {
        // Do something else when release
      }
      return false; // Skip all further processing of this key    
	//-----------------------------------------------------------------------------------------------------------------------------
	
	//-----------------------------------------------------------------------------------------------------------------------------
	//Portuguese Special Chars - Simple
	case KC_CCEDI:
      if (record->event.pressed) {
		  if(isLeftShiftPressed || isRightShiftPressed){		  
			sendUpperCaseString(KC_UPPER_CCEDIL);
		  }else{
			send_string(KC_LOWER_CCEDIL);  
		  }	
      } else {
        // Do something else when release
      }
      return false; // Skip all further processing of this key      
   //-----------------------------------------------------------------------------------------------------------------------------
   
   //-----------------------------------------------------------------------------------------------------------------------------
	//Portuguese Special Chars - Multiple
	case KC_SC_A:
      if (record->event.pressed) {
		  if(sc_a_aux > 0){
			//Delete previously char
			deleteChar();
		  }
		  
		  switch(sc_a_aux){
			  case 0:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_ATILDE);
				  }else{
					send_string(KC_LOWER_ATILDE);  
				  }
				  return false;
			  case 1:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_AAGUDO);
				  }else{
					send_string(KC_LOWER_AAGUDO);  
				  }
				  return false;  
			  case 2:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_AGRAVE);
				  }else{
					send_string(KC_LOWER_AGRAVE);  
				  }
				  return false;
			  case 3:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_ACIRCU);
				  }else{
					send_string(KC_LOWER_ACIRCU);  
				  }
				  return false;
			  case 4:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_ATILDE);
				  }else{
					send_string(KC_LOWER_ATILDE);  
				  }
				  return false;
		  }
      } else {
		  if(!isSCFunctionPressed){
			sc_a_aux = 0;
		  }else{
			sc_a_aux++;
			if(sc_a_aux == 5) sc_a_aux = 1;
		  }
      }
      return false; // Skip all further processing of this key      
	case KC_SC_E:
      if (record->event.pressed) {
		  if(sc_e_aux > 0){
			//Delete previously char
			deleteChar();
		  }
		  
		  switch(sc_e_aux){
			   case 0:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_EAGUDO);
				  }else{
					send_string(KC_LOWER_EAGUDO);  
				  }
				  return false;
			   case 1:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_ECIRCU);
				  }else{
					send_string(KC_LOWER_ECIRCU);  
				  }
				  return false;  
			   case 2:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_EAGUDO);
				  }else{
					send_string(KC_LOWER_EAGUDO);  
				  }
				  return false;  
		  }
      } else {
		  if(!isSCFunctionPressed){
			sc_e_aux = 0;
		  }else{
			sc_e_aux++;
			if(sc_e_aux == 3) sc_e_aux = 1;
		  }
      }
      return false; // Skip all further processing of this key   
	case KC_SC_I:
      if (record->event.pressed) {
		  if(sc_i_aux > 0){
			//Delete previously char
			deleteChar();
		  }
		  
		  switch(sc_i_aux){
			   case 0:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_IAGUDO);
				  }else{
					send_string(KC_LOWER_IAGUDO);  
				  }
				  return false;
			   case 1:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_IAGUDO);
				  }else{
					send_string(KC_LOWER_IAGUDO);  
				  }
				  return false;  
		  }
      } else {
		  if(!isSCFunctionPressed){
			sc_i_aux = 0;
		  }else{
			sc_i_aux++;
			if(sc_i_aux == 2) sc_i_aux = 1;
		  }
      }
      return false; // Skip all further processing of this key      
	case KC_SC_O:
      if (record->event.pressed) {
		  if(sc_o_aux > 0){
			//Delete previously char
			deleteChar();
		  }
		  
		  switch(sc_o_aux){
			   case 0:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_OTILDE);
				  }else{
					send_string(KC_LOWER_OTILDE);  
				  }
				  return false;  
			   case 1:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_OAGUDO);
				  }else{
					send_string(KC_LOWER_OAGUDO);  
				  }
				  return false;
			   case 2:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_OCIRCU);
				  }else{
					send_string(KC_LOWER_OCIRCU);  
				  }
				  return false;  
			   case 3:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_OTILDE);
				  }else{
					send_string(KC_LOWER_OTILDE);  
				  }
				  return false;  
		  }
      } else {
		  if(!isSCFunctionPressed){
			sc_o_aux = 0;
		  }else{
			sc_o_aux++;
			if(sc_o_aux == 4) sc_o_aux = 1;
		  }
      }
      return false; // Skip all further processing of this key       
	case KC_SC_U:
      if (record->event.pressed) {
		  if(sc_u_aux > 0){
			//Delete previously char
			deleteChar();
		  }
		  
		  switch(sc_u_aux){
			   case 0:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_UAGUDO);
				  }else{
					send_string(KC_LOWER_UAGUDO);  
				  }
				  return false;
			   case 1:
				  if(isLeftShiftPressed || isRightShiftPressed){		  
					sendUpperCaseString(KC_UPPER_UAGUDO);
				  }else{
					send_string(KC_LOWER_UAGUDO);  
				  }
				  return false;  
		  }
      } else {
		  if(!isSCFunctionPressed){
			sc_u_aux = 0;
		  }else{
			sc_u_aux++;
			if(sc_u_aux == 2) sc_u_aux = 1;
		  }
      }
      return false; // Skip all further processing of this key
   //-----------------------------------------------------------------------------------------------------------------------------
    default:
      return true; // Process all other keycodes normally
  }
}
