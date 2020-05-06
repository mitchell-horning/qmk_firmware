#include QMK_KEYBOARD_H

/* The Keymap */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Keymap 0: Base Layer
 *
 * ,-----------------------------------------------------.           ,-----------------------------------------------------.
 * |    ~ `    |   !  |   #  |   0  |   ^  |   %  |   +  |           |  -_  |   &  |   $  |   "  |   @  |  *   |   CAPS    |
 * |-----------+------+------+------+------+-------------|           |------+------+------+------+------+------+-----------|
 * |   INSRT   |   Q  |   W  |   E  |   R  |   T  |   (  |           |  )   |   Y  |   U  |   I  |   O  |  P   |   TERM    |
 * |-----------+------+------+------+------+------|      |           |      |------+------+------+------+------+-----------|
 * |   LCTRL   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  | ; :  |   RCTRL   |
 * |-----------+------+------+------+------+------|   [  |           |  ]   |------+------+------+------+------+-----------|
 * |           |   Z  |   X  |   C  |   V  |  / ? |   {  |           |  }   |  \ | |   B  |   N  |   M  | . >  |  ARROWS   |
 * `-----------+------+------+------+------+-------------'           `-------------+------+------+------+------+-----------'
 *     |       |      |      | NUMS |  OS  |                                       | EVAL | REPL | RFCTR| ' "  |  LOCK |
 *     `-----------------------------------'                                       `-----------------------------------'
 *                                         ,-------------.           ,-------------.
 *                                         | C-C  | PSTE |           | ALT: | M-X  |
 *                                  ,------|------|------|           |------+------+------.
 *                                  |      | ALT  |      |           |      |  ALT |      |
 *                                  | SPCE | , <  |------|           |------| Enter| BKSPC|
 *                                  |      |      | ESC  |           | TAB  |      |      |
 *                                  `--------------------'           `--------------------'
 */
[0] = LAYOUT_ergodox(
// left hand
 KC_GRV              ,KC_QUOT     ,KC_HASH     ,KC_0              ,KC_CIRC ,KC_PERC ,KC_PLUS
,KC_INS              ,KC_Q        ,KC_W        ,KC_E              ,KC_R    ,KC_T    ,KC_LPRN
,CTL_T(OSM(KC_LCTL)) ,KC_A        ,KC_S        ,KC_D              ,KC_F    ,KC_G
,KC_NO               ,KC_Z        ,KC_X        ,KC_C              ,KC_V    ,KC_SLSH ,KC_LBRC
,KC_NO               ,KC_NO       ,KC_NO       ,LT(2,TG(2)) ,LGUI_T(OSM(KC_LGUI))

                                                                   ,C(KC_C)       ,C(KC_V)
                                                                                  ,KC_NO
                                                    ,SFT_T(KC_SPC) ,ALT_T(KC_COMM),KC_ESC

                                                                // right hand
                                                               ,KC_MINS   ,KC_AMPR ,KC_DLR    ,KC_DQT  ,KC_AT   ,KC_ASTR  ,KC_CAPS
                                                               ,KC_RPRN   ,KC_Y    ,KC_U      ,KC_I    ,KC_O    ,KC_P     ,A(KC_ENT)
                                                                          ,KC_H    ,KC_J      ,KC_K    ,KC_L    ,KC_SCLN  ,CTL_T(OSM(KC_LCTL))
                                                               ,KC_RBRC   ,KC_BSLS ,KC_B      ,KC_N    ,KC_M    ,KC_DOT   ,LT(1,TG(1))
                                                                                   ,KC_NO     ,KC_NO   ,KC_NO   ,KC_NO    ,G(KC_L)

                                                               ,A(KC_COLN),A(KC_X)
                                                               ,KC_NO
                                                               ,KC_TAB  ,ALT_T(KC_ENT) ,KC_BSPC
                       ),

/* Keymap 2: Arrow layer
 *
 * ,-----------------------------------------------------.           ,-----------------------------------------------------.
 * |           |      |      |      |      |      |      |           |      |      |      |      |      |      |           |
 * |-----------+------+------+------+------+-------------|           |------+------+------+------+------+------+-----------|
 * |           |      |      |      |      |      |      |           |      |      | Home |  Up  |  End |      |           |
 * |-----------+------+------+------+------+------|      |           |      |------+------+------+------+------+-----------|
 * |           |      |      |      |      |      |------|           |------|      | Left | Down | Rght |      |           |
 * |-----------+------+------+------+------+------|      |           |      |------+------+------+------+------+-----------|
 * |           |      |      |      |      |      |      |           |      |      |      |      |      |      |           |
 * `-----------+------+------+------+------+-------------'           `-------------+------+------+------+------+-----------'
 *      |      |      |      |      |      |                                       |      |      |      |      |      |
 *      `----------------------------------'                                       `----------------------------------'
 *                                         ,-------------.           ,-------------.
 *                                         |      |      |           |      |      |
 *                                  ,------|------|------|           |------+------+------.
 *                                  |      |      |      |           |      |      |      |
 *                                  | Enter|      |------|           |------| PgUp | PgDn |
 *                                  |      |      |      |           |      |      |      |
 *                                  `--------------------'           `--------------------'
 */

[1] = LAYOUT_ergodox(
// left hand
 KC_TRNS ,KC_TRNS    ,KC_TRNS   ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS
,KC_TRNS ,KC_TRNS    ,KC_TRNS   ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS
,KC_TRNS ,KC_TRNS    ,KC_TRNS   ,KC_TRNS    ,KC_TRNS    ,KC_TRNS
,KC_TRNS ,KC_TRNS    ,KC_TRNS   ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS
,KC_TRNS ,KC_TRNS    ,KC_TRNS   ,KC_TRNS    ,KC_TRNS

                                             ,KC_TRNS ,KC_TRNS
                                                      ,KC_TRNS
                                    ,KC_ENT  ,KC_TRNS ,KC_TRNS

                                                                // right hand
                                                               ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
                                                               ,KC_TRNS ,KC_TRNS ,KC_HOME ,KC_UP   ,KC_END  ,KC_TRNS ,KC_TRNS
                                                                        ,KC_TRNS ,KC_LEFT ,KC_DOWN ,KC_RGHT ,KC_TRNS ,KC_TRNS
                                                               ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
                                                                                 ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS

                                                               ,KC_TRNS ,KC_TRNS
                                                               ,KC_TRNS
                                                               ,KC_TRNS ,KC_PGUP ,KC_PGDN
    ),

/* Keymap 3: Nums layer
 *
 * ,-----------------------------------------------------.           ,-----------------------------------------------------.
 * |           |      |      |      |      |      |      |           |      |      |      |      |      |      |           |
 * |-----------+------+------+------+------+-------------|           |------+------+------+------+------+------+-----------|
 * |           |      |      |      |      |      |      |           |      |      |  7   |  8   |  9   |      |           |
 * |-----------+------+------+------+------+------|      |           |      |------+------+------+------+------+-----------|
 * |           |      |      |      |      |      |------|           |------|      |  4   |  5   |  6   |      |           |
 * |-----------+------+------+------+------+------|      |           |      |------+------+------+------+------+-----------|
 * |           |      |      |      |      |      |      |           |      |      |  1   |  2   |  3   |      |           |
 * `-----------+------+------+------+------+-------------'           `-------------+------+------+------+------+-----------'
 *      |      |      |      |      |      |                                       |  0   |      |      |      |      |
 *      `----------------------------------'                                       `----------------------------------'
 *                                         ,-------------.           ,-------------.
 *                                         |      |      |           |      |      |
 *                                  ,------|------|------|           |------+------+------.
 *                                  |      |      |      |           |      |      |      |
 *                                  |      |      |------|           |------| BKSP |  ENT |
 *                                  |      |      |      |           |      |      |      |
 *                                  `--------------------'           `--------------------'
 */

[2] = LAYOUT_ergodox(
// left hand
 KC_TRNS ,KC_TRNS    ,KC_TRNS   ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS
,KC_TRNS ,KC_TRNS    ,KC_TRNS   ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS
,KC_TRNS ,KC_TRNS    ,KC_TRNS   ,KC_TRNS    ,KC_TRNS    ,KC_TRNS
,KC_TRNS ,KC_TRNS    ,KC_TRNS   ,KC_TRNS    ,KC_TRNS    ,KC_TRNS    ,KC_TRNS
,KC_TRNS ,KC_TRNS    ,KC_TRNS   ,KC_TRNS    ,KC_TRNS

                                             ,KC_TRNS ,KC_TRNS
                                                      ,KC_TRNS
                                    ,KC_TRNS ,KC_TRNS ,KC_TRNS

                                                                // right hand
                                                               ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS
                                                               ,KC_TRNS ,KC_TRNS ,KC_7 ,KC_8 ,KC_9 ,KC_TRNS ,KC_TRNS
                                                                        ,KC_TRNS ,KC_4 ,KC_5 ,KC_6 ,KC_TRNS ,KC_TRNS
                                                               ,KC_TRNS ,KC_TRNS ,KC_1 ,KC_2 ,KC_3 ,KC_TRNS ,KC_TRNS
                                                                                 ,KC_0 ,KC_TRNS ,KC_TRNS ,KC_TRNS ,KC_TRNS

                                                               ,KC_TRNS ,KC_TRNS
                                                               ,KC_TRNS
                                                               ,KC_TRNS ,KC_BSPC ,KC_ENT
    ),

/* Keymap 5: Navigation & Media layer
 *
 * ,-----------------------------------------------------.           ,-----------------------------------------------------.
 * |           |  F9  |  F7  |  F5  |  F3  |  F1  |ScrLCK|           |      | F10  |  F2  |  F4  |  F6  |  F8  |           |
 * |-----------+------+------+------+------+-------------|           |------+------+------+------+------+------+-----------|
 * |           |      |      |      |      |      |      |           |      |      |      |      |      |      |           |
 * |-----------+------+------+------+------+------|      |           |      |------+------+------+------+------+-----------|
 * |           |      |      |      |      |      |------|           |------|      |      |      |      |      |           |
 * |-----------+------+------+------+------+------|      |           |      |------+------+------+------+------+-----------|
 * |           |      |      |      |      |      |      |           |      |      |      |      |      |      |           |
 * `-----------+------+------+------+------+-------------'           `-------------+------+------+------+------+-----------'
 *      |      |      |      |      |      |                                       |      |      |      |      |      |
 *      `----------------------------------'                                       `----------------------------------'
 *                                         ,-------------.           ,-------------.
 *                                         | Mute | VlUp |           | BASE |      |
 *                                  ,------|------|------|           |------+------+------.
 *                                  |      |      | VlDn |           |      |      |      |
 *                                  |      |      |------|           |------|      |      |
 *                                  |      |      |      |           |      |      |      |
 *                                  `--------------------'           `--------------------'
 */
[3] = LAYOUT_ergodox(
// left hand
 KC_NO      ,KC_F9       ,KC_F7      ,KC_F5   ,KC_F3   ,KC_F1   ,LGUI(KC_L)
,KC_NO      ,KC_NO       ,KC_NO      ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO
,KC_NO      ,KC_NO       ,KC_NO      ,KC_NO   ,KC_NO   ,KC_NO
,KC_NO      ,KC_NO       ,KC_NO      ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO
,KC_NO      ,KC_NO       ,KC_NO      ,KC_NO   ,KC_NO
                                                        ,KC_MUTE ,KC_VOLU
                                                                 ,KC_VOLD
                                                 ,KC_NO ,KC_NO   ,KC_TRNS

                                                                     // right hand
                                                                     ,KC_TRNS   ,KC_F10  ,KC_F2   ,KC_F4   ,KC_F6   ,KC_F8    ,KC_NO
                                                                     ,KC_NO     ,KC_NO   ,KC_NO   ,KC_UP   ,KC_NO   ,KC_NO    ,KC_NO
                                                                                ,KC_NO   ,KC_LEFT ,KC_DOWN ,KC_RGHT ,KC_NO    ,KC_NO
                                                                     ,KC_NO     ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO    ,KC_NO
                                                                                         ,KC_NO   ,KC_NO   ,KC_NO   ,KC_NO    ,KC_NO

                                                                     ,KC_TRNS   ,KC_NO
                                                                     ,KC_NO
                                                                     ,KC_NO     ,KC_NO   ,KC_NO
    ),

};
