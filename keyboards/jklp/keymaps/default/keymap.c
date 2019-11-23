#include "kb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	KEYMAP(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, RCTL_T(KC_SCLN),
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
		MO(2), KC_LSFT, KC_LGUI, RALT_T(KC_ENT), KC_SPC, MO(1)),

	KEYMAP(
		KC_GRV, KC_7, KC_8, KC_9, KC_MINS, KC_NO, KC_UNDS, KC_EXLM, KC_DQUO, KC_PLUS,
		KC_LALT, KC_4, KC_5, KC_6, KC_DOT, KC_CIRC, KC_MINS, KC_EQL, KC_DLR, KC_RCTL,
		KC_0, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_NO, KC_NO, KC_RABK, KC_BSLS,
		MO(3), KC_LSFT, KC_LGUI, KC_NO, KC_NO, KC_TRNS),

	KEYMAP(
		KC_NO, KC_AT, KC_LPRN, KC_RPRN, KC_NO, KC_AMPR, KC_LBRC, KC_RBRC, KC_QUOT, KC_PERC,
		KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_ESC,
		KC_BSPC, KC_NO, KC_NO, KC_NO, KC_NO, KC_TILD, KC_ASTR, KC_HASH, KC_NO, KC_SLSH,
		KC_TRNS, KC_NO, KC_NO, KC_ENT, KC_BSPC, KC_TAB),

	KEYMAP(
		KC_NO, KC_NO, LCTL(KC_SLCK), LCTL(KC_PAUS), RESET, KC_NO, KC_SLCK, KC_PAUS, KC_NO, KC_NO,
		KC_LALT, KC_LCTL, KC_LGUI, KC_LSFT, KC_NO, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MPLY,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS),

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	// keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
	uint8_t layer = biton32(layer_state);

    // Green LED is on if D5 is low
    writePin(D5, !(layer == 1 || layer == 3));

    // Yellow LED on if C7 is high
    writePin(C7, layer == 2 || layer == 3);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
