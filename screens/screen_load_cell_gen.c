/**
 * @file screen_load_cell_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_load_cell_gen.h"
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

lv_obj_t * screen_load_cell_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_load_cell_#");
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
    lv_label_set_text(lv_label_0, "LOAD CELL");
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
    lv_obj_set_width(lv_obj_3, 228);
    lv_obj_set_height(lv_obj_3, 250);
    lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_3, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_3, 255, 0);
    lv_obj_set_style_radius(lv_obj_3, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_3, 0, 0);
    lv_obj_set_style_border_width(lv_obj_3, 1, 0);
    lv_obj_set_style_border_color(lv_obj_3, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_3, 14);
    lv_obj_set_y(lv_label_3, 14);
    lv_obj_set_width(lv_label_3, 150);
    lv_label_set_text(lv_label_3, "TANK WEIGHT");
    lv_label_set_long_mode(lv_label_3, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_3, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_3, font_inter_14, 0);

    lv_obj_t * load_cell_liters = lv_label_create(lv_obj_3);
    lv_obj_set_name(load_cell_liters, "load_cell_liters");
    lv_obj_set_x(load_cell_liters, 14);
    lv_obj_set_y(load_cell_liters, 58);
    lv_obj_set_width(load_cell_liters, 120);
    lv_label_set_text(load_cell_liters, "6.0 L");
    lv_label_set_long_mode(load_cell_liters, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(load_cell_liters, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(load_cell_liters, font_inter_26, 0);

    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_4, 14);
    lv_obj_set_y(lv_label_4, 112);
    lv_obj_set_width(lv_label_4, 120);
    lv_label_set_text(lv_label_4, "Reservoir level");
    lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_4, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_4, font_inter_11, 0);

    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_4, 14);
    lv_obj_set_y(lv_obj_4, 140);
    lv_obj_set_width(lv_obj_4, 200);
    lv_obj_set_height(lv_obj_4, 10);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_4, COLOR_MUTED_GRAY, 0);
    lv_obj_set_style_bg_opa(lv_obj_4, 255, 0);
    lv_obj_set_style_radius(lv_obj_4, 5, 0);
    lv_obj_set_style_border_width(lv_obj_4, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_4, 0, 0);
    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_4);
    lv_obj_set_x(lv_obj_5, 0);
    lv_obj_set_y(lv_obj_5, 0);
    lv_obj_set_width(lv_obj_5, 184);
    lv_obj_set_height(lv_obj_5, 10);
    lv_obj_set_flag(lv_obj_5, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_5, COLOR_GL_GREEN, 0);
    lv_obj_set_style_bg_opa(lv_obj_5, 255, 0);
    lv_obj_set_style_radius(lv_obj_5, 5, 0);
    lv_obj_set_style_border_width(lv_obj_5, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_5, 14);
    lv_obj_set_y(lv_label_5, 168);
    lv_obj_set_width(lv_label_5, 90);
    lv_label_set_text(lv_label_5, "92% full");
    lv_label_set_long_mode(lv_label_5, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_5, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_5, font_inter_12, 0);

    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_6, 126);
    lv_obj_set_y(lv_label_6, 168);
    lv_obj_set_width(lv_label_6, 88);
    lv_label_set_text(lv_label_6, "6.5 L max");
    lv_label_set_long_mode(lv_label_6, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_6, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_6, font_inter_11, 0);

    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_6, 14);
    lv_obj_set_y(lv_obj_6, 200);
    lv_obj_set_width(lv_obj_6, 200);
    lv_obj_set_height(lv_obj_6, 1);
    lv_obj_set_flag(lv_obj_6, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_6, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_6, 255, 0);
    lv_obj_set_style_border_width(lv_obj_6, 0, 0);

    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_7, 14);
    lv_obj_set_y(lv_label_7, 218);
    lv_obj_set_width(lv_label_7, 200);
    lv_label_set_text(lv_label_7, "Load cell reading is stable");
    lv_label_set_long_mode(lv_label_7, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_7, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_7, font_inter_10, 0);

    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_7, 244);
    lv_obj_set_y(lv_obj_7, 42);
    lv_obj_set_width(lv_obj_7, 228);
    lv_obj_set_height(lv_obj_7, 250);
    lv_obj_set_flag(lv_obj_7, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_7, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_7, 255, 0);
    lv_obj_set_style_radius(lv_obj_7, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_7, 0, 0);
    lv_obj_set_style_border_width(lv_obj_7, 1, 0);
    lv_obj_set_style_border_color(lv_obj_7, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_8, 14);
    lv_obj_set_y(lv_label_8, 14);
    lv_obj_set_width(lv_label_8, 150);
    lv_label_set_text(lv_label_8, "CALIBRATION");
    lv_label_set_long_mode(lv_label_8, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_8, COLOR_ALERT_ORANGE, 0);
    lv_obj_set_style_text_font(lv_label_8, font_inter_14, 0);

    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_9, 14);
    lv_obj_set_y(lv_label_9, 52);
    lv_obj_set_width(lv_label_9, 190);
    lv_label_set_text(lv_label_9, "Empty tank before tare.");
    lv_label_set_long_mode(lv_label_9, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_9, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_9, font_inter_14, 0);

    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_10, 14);
    lv_obj_set_y(lv_label_10, 78);
    lv_obj_set_width(lv_label_10, 190);
    lv_label_set_text(lv_label_10, "Use known volume for final calibration.");
    lv_label_set_long_mode(lv_label_10, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_10, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_10, font_inter_10, 0);

    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_8, 14);
    lv_obj_set_y(lv_obj_8, 116);
    lv_obj_set_width(lv_obj_8, 200);
    lv_obj_set_height(lv_obj_8, 38);
    lv_obj_set_flag(lv_obj_8, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_8, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_8, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_8, 255, 0);
    lv_obj_set_style_radius(lv_obj_8, 8, 0);
    lv_obj_set_style_pad_all(lv_obj_8, 0, 0);
    lv_obj_set_style_border_width(lv_obj_8, 1, 0);
    lv_obj_set_style_border_color(lv_obj_8, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_11 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_11, 0);
    lv_obj_set_y(lv_label_11, 12);
    lv_obj_set_width(lv_label_11, 200);
    lv_label_set_text(lv_label_11, "TARE EMPTY");
    lv_label_set_long_mode(lv_label_11, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_11, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_11, font_inter_12, 0);

    lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_7);
    lv_obj_set_x(lv_obj_9, 14);
    lv_obj_set_y(lv_obj_9, 166);
    lv_obj_set_width(lv_obj_9, 200);
    lv_obj_set_height(lv_obj_9, 38);
    lv_obj_set_flag(lv_obj_9, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_9, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_9, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_bg_opa(lv_obj_9, 255, 0);
    lv_obj_set_style_radius(lv_obj_9, 8, 0);
    lv_obj_set_style_pad_all(lv_obj_9, 0, 0);
    lv_obj_set_style_border_width(lv_obj_9, 0, 0);
    lv_obj_t * lv_label_12 = lv_label_create(lv_obj_9);
    lv_obj_set_x(lv_label_12, 0);
    lv_obj_set_y(lv_label_12, 12);
    lv_obj_set_width(lv_label_12, 200);
    lv_label_set_text(lv_label_12, "CAL 6.5 L");
    lv_label_set_long_mode(lv_label_12, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_12, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_12, font_inter_12, 0);

    lv_obj_t * lv_label_13 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_13, 14);
    lv_obj_set_y(lv_label_13, 224);
    lv_obj_set_width(lv_label_13, 200);
    lv_label_set_text(lv_label_13, "Calibration status: ready");
    lv_label_set_long_mode(lv_label_13, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_13, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_13, font_inter_10, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

