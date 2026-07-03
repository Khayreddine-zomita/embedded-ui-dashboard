/**
 * @file screen_ph_calibration_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_ph_calibration_gen.h"
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

lv_obj_t * screen_ph_calibration_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_ph_calibration_#");
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
    lv_obj_set_width(lv_label_0, 190);
    lv_label_set_text(lv_label_0, "PH CALIBRATION");
    lv_label_set_long_mode(lv_label_0, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_0, COLOR_GL_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_0, font_inter_14, 0);

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_1, 392);
    lv_obj_set_y(lv_label_1, 10);
    lv_obj_set_width(lv_label_1, 60);
    lv_label_set_text(lv_label_1, "1 / 3");
    lv_label_set_long_mode(lv_label_1, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_1, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_1, font_inter_12, 0);

    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_3, 8);
    lv_obj_set_y(lv_obj_3, 42);
    lv_obj_set_width(lv_obj_3, 464);
    lv_obj_set_height(lv_obj_3, 202);
    lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_3, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_3, 255, 0);
    lv_obj_set_style_radius(lv_obj_3, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_3, 0, 0);
    lv_obj_set_style_border_width(lv_obj_3, 1, 0);
    lv_obj_set_style_border_color(lv_obj_3, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_2, 16);
    lv_obj_set_y(lv_label_2, 14);
    lv_obj_set_width(lv_label_2, 130);
    lv_label_set_text(lv_label_2, "STEP 1");
    lv_label_set_long_mode(lv_label_2, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_2, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_2, font_inter_14, 0);

    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_3, 16);
    lv_obj_set_y(lv_label_3, 44);
    lv_obj_set_width(lv_label_3, 390);
    lv_label_set_text(lv_label_3, "Place pH probe in 7.0 reference solution.");
    lv_label_set_long_mode(lv_label_3, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_3, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_3, font_inter_14, 0);

    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_4, 16);
    lv_obj_set_y(lv_obj_4, 76);
    lv_obj_set_width(lv_obj_4, 432);
    lv_obj_set_height(lv_obj_4, 1);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_4, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_4, 255, 0);
    lv_obj_set_style_border_width(lv_obj_4, 0, 0);

    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_4, 16);
    lv_obj_set_y(lv_label_4, 98);
    lv_obj_set_width(lv_label_4, 100);
    lv_label_set_text(lv_label_4, "Reading");
    lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_4, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_4, font_inter_11, 0);

    lv_obj_t * ph_cal_reading = lv_label_create(lv_obj_3);
    lv_obj_set_name(ph_cal_reading, "ph_cal_reading");
    lv_obj_set_x(ph_cal_reading, 16);
    lv_obj_set_y(ph_cal_reading, 120);
    lv_obj_set_width(ph_cal_reading, 120);
    lv_label_set_text(ph_cal_reading, "6.98");
    lv_label_set_long_mode(ph_cal_reading, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(ph_cal_reading, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(ph_cal_reading, font_inter_26, 0);

    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_5, 138);
    lv_obj_set_y(lv_label_5, 137);
    lv_obj_set_width(lv_label_5, 40);
    lv_label_set_text(lv_label_5, "pH");
    lv_label_set_long_mode(lv_label_5, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_5, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_5, font_inter_12, 0);

    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_5, 286);
    lv_obj_set_y(lv_obj_5, 112);
    lv_obj_set_width(lv_obj_5, 146);
    lv_obj_set_height(lv_obj_5, 42);
    lv_obj_set_flag(lv_obj_5, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_5, COLOR_MUTED_GRAY, 0);
    lv_obj_set_style_bg_opa(lv_obj_5, 255, 0);
    lv_obj_set_style_radius(lv_obj_5, 8, 0);
    lv_obj_set_style_border_width(lv_obj_5, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_5, 0, 0);
    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_5);
    lv_obj_set_x(lv_obj_6, 12);
    lv_obj_set_y(lv_obj_6, 17);
    lv_obj_set_width(lv_obj_6, 8);
    lv_obj_set_height(lv_obj_6, 8);
    lv_obj_set_flag(lv_obj_6, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_6, COLOR_ALERT_ORANGE, 0);
    lv_obj_set_style_bg_opa(lv_obj_6, 255, 0);
    lv_obj_set_style_radius(lv_obj_6, 4, 0);
    lv_obj_set_style_border_width(lv_obj_6, 0, 0);

    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_6, 28);
    lv_obj_set_y(lv_label_6, 9);
    lv_obj_set_width(lv_label_6, 100);
    lv_label_set_text(lv_label_6, "Waiting");
    lv_label_set_long_mode(lv_label_6, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_6, COLOR_ALERT_ORANGE, 0);
    lv_obj_set_style_text_font(lv_label_6, font_inter_11, 0);

    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_7, 28);
    lv_obj_set_y(lv_label_7, 24);
    lv_obj_set_width(lv_label_7, 108);
    lv_label_set_text(lv_label_7, "for stability");
    lv_label_set_long_mode(lv_label_7, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_7, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_7, font_inter_9, 0);

    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_8, 16);
    lv_obj_set_y(lv_label_8, 176);
    lv_obj_set_width(lv_label_8, 330);
    lv_label_set_text(lv_label_8, "Save point only after the reading is stable.");
    lv_label_set_long_mode(lv_label_8, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_8, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_8, font_inter_10, 0);

    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_7, 8);
    lv_obj_set_y(lv_obj_7, 254);
    lv_obj_set_width(lv_obj_7, 226);
    lv_obj_set_height(lv_obj_7, 48);
    lv_obj_set_flag(lv_obj_7, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_7, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_7, 255, 0);
    lv_obj_set_style_radius(lv_obj_7, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_7, 0, 0);
    lv_obj_set_style_border_width(lv_obj_7, 1, 0);
    lv_obj_set_style_border_color(lv_obj_7, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_9, 0);
    lv_obj_set_y(lv_label_9, 16);
    lv_obj_set_width(lv_label_9, 226);
    lv_label_set_text(lv_label_9, "CANCEL");
    lv_label_set_long_mode(lv_label_9, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_9, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_9, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_9, font_inter_12, 0);

    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_8, 246);
    lv_obj_set_y(lv_obj_8, 254);
    lv_obj_set_width(lv_obj_8, 226);
    lv_obj_set_height(lv_obj_8, 48);
    lv_obj_set_flag(lv_obj_8, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_8, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_8, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_bg_opa(lv_obj_8, 255, 0);
    lv_obj_set_style_radius(lv_obj_8, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_8, 0, 0);
    lv_obj_set_style_border_width(lv_obj_8, 0, 0);
    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_10, 0);
    lv_obj_set_y(lv_label_10, 16);
    lv_obj_set_width(lv_label_10, 226);
    lv_label_set_text(lv_label_10, "SAVE POINT");
    lv_label_set_long_mode(lv_label_10, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_10, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_10, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

