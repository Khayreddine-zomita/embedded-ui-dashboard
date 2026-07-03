/**
 * @file screen_calibration_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_calibration_gen.h"
#include "../gl_towers_embedded_ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_calibration_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_calibration_#");
    lv_obj_set_width(lv_obj_0, 480);
    lv_obj_set_height(lv_obj_0, 320);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_DARK_FOREST, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_1, 0);
    lv_obj_set_y(lv_obj_1, 0);
    lv_obj_set_width(lv_obj_1, 480);
    lv_obj_set_height(lv_obj_1, 36);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_1, COLOR_DARK_FOREST, 0);
    lv_obj_set_style_bg_opa(lv_obj_1, 255, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_radius(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_2, 18);
    lv_obj_set_y(lv_obj_2, 11);
    lv_obj_set_width(lv_obj_2, 14);
    lv_obj_set_height(lv_obj_2, 14);
    lv_obj_set_flag(lv_obj_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_2, COLOR_GL_GREEN, 0);
    lv_obj_set_style_bg_opa(lv_obj_2, 255, 0);
    lv_obj_set_style_radius(lv_obj_2, 7, 0);
    lv_obj_set_style_border_width(lv_obj_2, 0, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_0, 46);
    lv_obj_set_y(lv_label_0, 10);
    lv_obj_set_width(lv_label_0, 160);
    lv_label_set_text(lv_label_0, "CALIBRATION");
    lv_label_set_long_mode(lv_label_0, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_0, COLOR_GL_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_0, font_inter_14, 0);

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_1, 360);
    lv_obj_set_y(lv_label_1, 10);
    lv_obj_set_width(lv_label_1, 52);
    lv_label_set_text(lv_label_1, "13:20");
    lv_label_set_long_mode(lv_label_1, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_1, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_1, font_inter_12, 0);

    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_2, 426);
    lv_obj_set_y(lv_label_2, 10);
    lv_obj_set_width(lv_label_2, 44);
    lv_label_set_text(lv_label_2, "WiFi");
    lv_label_set_long_mode(lv_label_2, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_2, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_2, font_inter_12, 0);

    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_3, 8);
    lv_obj_set_y(lv_obj_3, 42);
    lv_obj_set_width(lv_obj_3, 148);
    lv_obj_set_height(lv_obj_3, 190);
    lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_3, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_3, 255, 0);
    lv_obj_set_style_radius(lv_obj_3, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_3, 0, 0);
    lv_obj_set_style_border_width(lv_obj_3, 1, 0);
    lv_obj_set_style_border_color(lv_obj_3, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_3, 10);
    lv_obj_set_y(lv_label_3, 10);
    lv_obj_set_width(lv_label_3, 110);
    lv_label_set_text(lv_label_3, "pH PROBE");
    lv_label_set_long_mode(lv_label_3, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_3, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_3, font_inter_12, 0);

    lv_obj_t * cal_ph_value = lv_label_create(lv_obj_3);
    lv_obj_set_name(cal_ph_value, "cal_ph_value");
    lv_obj_set_x(cal_ph_value, 10);
    lv_obj_set_y(cal_ph_value, 48);
    lv_obj_set_width(cal_ph_value, 72);
    lv_label_set_text(cal_ph_value, "6.3");
    lv_label_set_long_mode(cal_ph_value, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(cal_ph_value, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(cal_ph_value, font_inter_26, 0);

    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_4, 10);
    lv_obj_set_y(lv_label_4, 92);
    lv_obj_set_width(lv_label_4, 128);
    lv_label_set_text(lv_label_4, "Last calibrated:");
    lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_4, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_4, font_inter_10, 0);

    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_5, 10);
    lv_obj_set_y(lv_label_5, 110);
    lv_obj_set_width(lv_label_5, 128);
    lv_label_set_text(lv_label_5, "pending");
    lv_label_set_long_mode(lv_label_5, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_5, COLOR_ALERT_ORANGE, 0);
    lv_obj_set_style_text_font(lv_label_5, font_inter_10, 0);

    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_4, 10);
    lv_obj_set_y(lv_obj_4, 146);
    lv_obj_set_width(lv_obj_4, 128);
    lv_obj_set_height(lv_obj_4, 32);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_4, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_bg_opa(lv_obj_4, 255, 0);
    lv_obj_set_style_radius(lv_obj_4, 8, 0);
    lv_obj_set_style_border_width(lv_obj_4, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_4, 0, 0);
    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_4);
    lv_obj_set_x(lv_label_6, 0);
    lv_obj_set_y(lv_label_6, 9);
    lv_obj_set_width(lv_label_6, 128);
    lv_label_set_text(lv_label_6, "START PH");
    lv_label_set_long_mode(lv_label_6, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_6, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_6, font_inter_11, 0);

    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_5, 166);
    lv_obj_set_y(lv_obj_5, 42);
    lv_obj_set_width(lv_obj_5, 148);
    lv_obj_set_height(lv_obj_5, 190);
    lv_obj_set_flag(lv_obj_5, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_5, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_5, 255, 0);
    lv_obj_set_style_radius(lv_obj_5, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_5, 0, 0);
    lv_obj_set_style_border_width(lv_obj_5, 1, 0);
    lv_obj_set_style_border_color(lv_obj_5, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_7, 10);
    lv_obj_set_y(lv_label_7, 10);
    lv_obj_set_width(lv_label_7, 110);
    lv_label_set_text(lv_label_7, "EC PROBE");
    lv_label_set_long_mode(lv_label_7, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_7, COLOR_BLUE, 0);
    lv_obj_set_style_text_font(lv_label_7, font_inter_12, 0);

    lv_obj_t * cal_ec_value = lv_label_create(lv_obj_5);
    lv_obj_set_name(cal_ec_value, "cal_ec_value");
    lv_obj_set_x(cal_ec_value, 10);
    lv_obj_set_y(cal_ec_value, 48);
    lv_obj_set_width(cal_ec_value, 72);
    lv_label_set_text(cal_ec_value, "1.6");
    lv_label_set_long_mode(cal_ec_value, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(cal_ec_value, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(cal_ec_value, font_inter_26, 0);

    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_8, 10);
    lv_obj_set_y(lv_label_8, 92);
    lv_obj_set_width(lv_label_8, 128);
    lv_label_set_text(lv_label_8, "Reference:");
    lv_label_set_long_mode(lv_label_8, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_8, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_8, font_inter_10, 0);

    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_9, 10);
    lv_obj_set_y(lv_label_9, 110);
    lv_obj_set_width(lv_label_9, 128);
    lv_label_set_text(lv_label_9, "1.413 mS/cm");
    lv_label_set_long_mode(lv_label_9, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_9, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_9, font_inter_10, 0);

    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_5);
    lv_obj_set_x(lv_obj_6, 10);
    lv_obj_set_y(lv_obj_6, 146);
    lv_obj_set_width(lv_obj_6, 128);
    lv_obj_set_height(lv_obj_6, 32);
    lv_obj_set_flag(lv_obj_6, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_6, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_bg_opa(lv_obj_6, 255, 0);
    lv_obj_set_style_radius(lv_obj_6, 8, 0);
    lv_obj_set_style_border_width(lv_obj_6, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_6, 0, 0);
    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_10, 0);
    lv_obj_set_y(lv_label_10, 9);
    lv_obj_set_width(lv_label_10, 128);
    lv_label_set_text(lv_label_10, "START EC");
    lv_label_set_long_mode(lv_label_10, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_10, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_10, font_inter_11, 0);

    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_7, 324);
    lv_obj_set_y(lv_obj_7, 42);
    lv_obj_set_width(lv_obj_7, 148);
    lv_obj_set_height(lv_obj_7, 190);
    lv_obj_set_flag(lv_obj_7, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_7, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_7, 255, 0);
    lv_obj_set_style_radius(lv_obj_7, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_7, 0, 0);
    lv_obj_set_style_border_width(lv_obj_7, 1, 0);
    lv_obj_set_style_border_color(lv_obj_7, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_11 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_11, 10);
    lv_obj_set_y(lv_label_11, 10);
    lv_obj_set_width(lv_label_11, 110);
    lv_label_set_text(lv_label_11, "LOAD CELL");
    lv_label_set_long_mode(lv_label_11, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_11, COLOR_ALERT_ORANGE, 0);
    lv_obj_set_style_text_font(lv_label_11, font_inter_12, 0);

    lv_obj_t * cal_load_cell_value = lv_label_create(lv_obj_7);
    lv_obj_set_name(cal_load_cell_value, "cal_load_cell_value");
    lv_obj_set_x(cal_load_cell_value, 10);
    lv_obj_set_y(cal_load_cell_value, 50);
    lv_obj_set_width(cal_load_cell_value, 88);
    lv_label_set_text(cal_load_cell_value, "6.0 L");
    lv_label_set_long_mode(cal_load_cell_value, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(cal_load_cell_value, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(cal_load_cell_value, font_inter_26, 0);

    lv_obj_t * lv_label_12 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_12, 10);
    lv_obj_set_y(lv_label_12, 94);
    lv_obj_set_width(lv_label_12, 128);
    lv_label_set_text(lv_label_12, "Scale status:");
    lv_label_set_long_mode(lv_label_12, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_12, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_12, font_inter_10, 0);

    lv_obj_t * lv_label_13 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_13, 10);
    lv_obj_set_y(lv_label_13, 112);
    lv_obj_set_width(lv_label_13, 128);
    lv_label_set_text(lv_label_13, "Tare ready");
    lv_label_set_long_mode(lv_label_13, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_13, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_13, font_inter_10, 0);

    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_8, 10);
    lv_obj_set_y(lv_obj_8, 146);
    lv_obj_set_width(lv_obj_8, 128);
    lv_obj_set_height(lv_obj_8, 32);
    lv_obj_set_flag(lv_obj_8, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_8, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_8, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_8, 255, 0);
    lv_obj_set_style_radius(lv_obj_8, 8, 0);
    lv_obj_set_style_border_width(lv_obj_8, 1, 0);
    lv_obj_set_style_border_color(lv_obj_8, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(lv_obj_8, 0, 0);
    lv_obj_t * lv_label_14 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_14, 0);
    lv_obj_set_y(lv_label_14, 9);
    lv_obj_set_width(lv_label_14, 128);
    lv_label_set_text(lv_label_14, "TARE");
    lv_label_set_long_mode(lv_label_14, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_14, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_14, font_inter_11, 0);

    lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_9, 8);
    lv_obj_set_y(lv_obj_9, 244);
    lv_obj_set_width(lv_obj_9, 464);
    lv_obj_set_height(lv_obj_9, 48);
    lv_obj_set_flag(lv_obj_9, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_9, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_9, COLOR_MUTED_GRAY, 0);
    lv_obj_set_style_bg_opa(lv_obj_9, 255, 0);
    lv_obj_set_style_radius(lv_obj_9, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_9, 0, 0);
    lv_obj_set_style_border_width(lv_obj_9, 0, 0);
    lv_obj_t * lv_label_15 = lv_label_create(lv_obj_9);
    lv_obj_set_x(lv_label_15, 14);
    lv_obj_set_y(lv_label_15, 10);
    lv_obj_set_width(lv_label_15, 330);
    lv_label_set_text(lv_label_15, "Calibration flows use stable readings");
    lv_label_set_long_mode(lv_label_15, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_15, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_15, font_inter_11, 0);

    lv_obj_t * lv_label_16 = lv_label_create(lv_obj_9);
    lv_obj_set_x(lv_label_16, 14);
    lv_obj_set_y(lv_label_16, 26);
    lv_obj_set_width(lv_label_16, 330);
    lv_label_set_text(lv_label_16, "before saving sensor offsets.");
    lv_label_set_long_mode(lv_label_16, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_16, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_16, font_inter_10, 0);

    lv_obj_t * lv_label_17 = lv_label_create(lv_obj_9);
    lv_obj_set_x(lv_label_17, 374);
    lv_obj_set_y(lv_label_17, 17);
    lv_obj_set_width(lv_label_17, 76);
    lv_label_set_text(lv_label_17, "READY");
    lv_label_set_long_mode(lv_label_17, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_17, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_17, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_17, font_inter_11, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

