/*
 * menu_panel.c
 *
 *  Created on: 21 июл. 2025 г.
 *      Author: ruslan
 */

//#define MENU_MACRO
//#define MENU_DESCR_MACRO
#define MENU_DESCRS_ATTRIBS const
#define MENU_ITEMS_ATTRIBS
#include "menu.h"

//0
const char menu_text_di[] = "Digital inputs";
const char menu_text_do[] = "Digital outputs";

//1
const char menu_text_sel[] = "Select";
const char menu_text_inv[] = "Inversion";
const char menu_text_flt[] = "Filter";

//2
const char menu_text_ton[] = "T On";
const char menu_text_toff[] = "T Off";
const char menu_text_type[] = "Type";

//digital in
const char menu_text_di_out_0[] = "Cell NO";
const char menu_text_di_out_1[] = "Cell NC";
const char menu_text_di_out_2[] = "Cell Trip";
const char menu_text_di_out_3[] = "Test";
const char menu_text_di_out_4[] = "Enable run";
const char menu_text_di_out_5[] = "Increase";
const char menu_text_di_out_6[] = "Decrease";
const char menu_text_di_out_7[] = "Manual/Automatic";
const char menu_text_di_out_8[] = "Local/Remote";
const char menu_text_di_out_9[] = "FWD/BWD";
const char menu_text_di_out_10[] = "Error reset";
const char menu_text_di_out_11[] = "Emergency off";
const char menu_text_di_out_12[] = "Contactor";
const char menu_text_di_out_13[] = "Release";
const char menu_text_di_out_14[] = "External exciter";

//digital out
const char menu_text_do_out_0[] = "DO 1";
const char menu_text_do_out_1[] = "DO 2";
const char menu_text_do_out_2[] = "DO 3";
const char menu_text_do_out_3[] = "DO 4";
const char menu_text_do_out_4[] = "DO 5";
const char menu_text_do_out_5[] = "DO 6";
const char menu_text_do_out_6[] = "DO 7";
const char menu_text_do_out_7[] = "DO 8";
const char menu_text_do_out_8[] = "Relay 1";
const char menu_text_do_out_9[] = "Relay 2";
const char menu_text_do_out_10[] = "Relay 3";
const char menu_text_do_out_11[] = "Relay 4";

//digital in
MENU_VALUES(menu_enum_di_select,
            MAKE_MENU_VALUE_STRING("Const 0"),
            MAKE_MENU_VALUE_STRING("Const 1"),
            MAKE_MENU_VALUE_STRING("DI 1"),
            MAKE_MENU_VALUE_STRING("DI 2"),
            MAKE_MENU_VALUE_STRING("DI 3"),
            MAKE_MENU_VALUE_STRING("DI 4"),
            MAKE_MENU_VALUE_STRING("DI 5"),
            MAKE_MENU_VALUE_STRING("DI 6"),
            MAKE_MENU_VALUE_STRING("DI 7"),
            MAKE_MENU_VALUE_STRING("DI 8"),
            MAKE_MENU_VALUE_STRING("DI 9"),
            MAKE_MENU_VALUE_STRING("DI 10"),
            MAKE_MENU_VALUE_STRING("Em Stop"),
            MAKE_MENU_VALUE_STRING("AC Lost"),
            MAKE_MENU_VALUE_STRING("DC Lost"),
            MAKE_MENU_VALUE_STRING("Panel"));

//digital out
MENU_VALUES(menu_enum_do_select,
            MAKE_MENU_VALUE_STRING("Ready"),
            MAKE_MENU_VALUE_STRING("Run"),
            MAKE_MENU_VALUE_STRING("Error"),
            MAKE_MENU_VALUE_STRING("Warning"),
            MAKE_MENU_VALUE_STRING("Limit"),
            MAKE_MENU_VALUE_STRING("Cell ON"),
            MAKE_MENU_VALUE_STRING("Manual/Automatic"),
            MAKE_MENU_VALUE_STRING("Local/Remote"),
            MAKE_MENU_VALUE_STRING("FWD/BWD"),
            MAKE_MENU_VALUE_STRING("Fan"),
            MAKE_MENU_VALUE_STRING("Contactor"),
            MAKE_MENU_VALUE_STRING("Trip"),
            MAKE_MENU_VALUE_STRING("External Brake"),
            MAKE_MENU_VALUE_STRING("Excitation Inversion"),
            MAKE_MENU_VALUE_STRING("External exciter"),
            MAKE_MENU_VALUE_STRING("Starting resistor"));

MENU_VALUES(menu_enum_dio_inversion,
            MAKE_MENU_VALUE_STRING("Disable"),
            MAKE_MENU_VALUE_STRING("Enable"));

#define MENU_ENUM_LEN(MVARR) (sizeof(MVARR)/sizeof(menu_value_t))

MENU_VALUE_ENUM(menu_val_digital_in_select, 0, MENU_ENUM_LEN(menu_enum_di_select), menu_enum_di_select);
MENU_VALUE_ENUM(menu_val_digital_out_select, 0, MENU_ENUM_LEN(menu_enum_do_select), menu_enum_do_select);
MENU_VALUE_ENUM(menu_val_digital_inversion, 0, MENU_ENUM_LEN(menu_enum_dio_inversion), menu_enum_dio_inversion);

#undef MENU_ENUM_LEN

menu_t panel_menu_0;

MENU_DESCRS(panel_menu_descrs) {
    MENU_DESCR(0, 0, menu_text_di, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_0, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_1, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_2, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_3, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_4, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_5, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_6, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_7, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_8, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_9, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_10, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_11, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_12, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_13, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_di_out_14, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_in_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
    MENU_DESCR(0, 0, menu_text_do, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_0, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_1, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_2, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_3, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_4, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_5, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_6, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_7, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_8, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_9, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_10, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
        MENU_DESCR(1, 0, menu_text_do_out_11, 0, 0, 0, 0, 0),
            MENU_DESCR(2, 0, menu_text_sel, 0, 0, 0, 0, &menu_val_digital_out_select),
            MENU_DESCR(2, 0, menu_text_inv, 0, 0, 0, 0, &menu_val_digital_inversion),
            MENU_DESCR(2, 0, menu_text_flt, 0, 0, 0, 0, 0),
};

MENU_ITEMS(panel_menu_items, panel_menu_descrs);

void menu_panel_init(void) {
	menu_make_from_descrs(&panel_menu_0, panel_menu_items, MENU_ITEMS_COUNT(panel_menu_items),
			panel_menu_descrs, MENU_DESCRS_COUNT(panel_menu_descrs), NULL);

    menu_reset_current(&panel_menu_0);
}

//=========================================================

