/**
 * @file screen_diagnostics_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_diagnostics_gen.h"
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

lv_obj_t * screen_diagnostics_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_diagnostics_#");
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
    lv_label_set_text(lv_label_0, "DIAGNOSTICS");
    lv_label_set_long_mode(lv_label_0, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_0, COLOR_GL_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_0, font_inter_14, 0);

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_1, 356);
    lv_obj_set_y(lv_label_1, 10);
    lv_obj_set_width(lv_label_1, 96);
    lv_label_set_text(lv_label_1, "SERVICE");
    lv_label_set_long_mode(lv_label_1, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_1, COLOR_ALERT_ORANGE, 0);
    lv_obj_set_style_text_font(lv_label_1, font_inter_11, 0);

    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_3, 8);
    lv_obj_set_y(lv_obj_3, 42);
    lv_obj_set_width(lv_obj_3, 228);
    lv_obj_set_height(lv_obj_3, 166);
    lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_3, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_3, 255, 0);
    lv_obj_set_style_radius(lv_obj_3, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_3, 0, 0);
    lv_obj_set_style_border_width(lv_obj_3, 1, 0);
    lv_obj_set_style_border_color(lv_obj_3, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_2, 12);
    lv_obj_set_y(lv_label_2, 12);
    lv_obj_set_width(lv_label_2, 120);
    lv_label_set_text(lv_label_2, "SYSTEM");
    lv_label_set_long_mode(lv_label_2, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_2, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_2, font_inter_14, 0);

    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_3, 12);
    lv_obj_set_y(lv_label_3, 48);
    lv_obj_set_width(lv_label_3, 86);
    lv_label_set_text(lv_label_3, "Uptime");
    lv_label_set_long_mode(lv_label_3, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_3, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_3, font_inter_11, 0);

    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_4, 124);
    lv_obj_set_y(lv_label_4, 48);
    lv_obj_set_width(lv_label_4, 90);
    lv_label_set_text(lv_label_4, "00:42:18");
    lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_4, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_4, font_inter_12, 0);

    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_4, 12);
    lv_obj_set_y(lv_obj_4, 70);
    lv_obj_set_width(lv_obj_4, 204);
    lv_obj_set_height(lv_obj_4, 1);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_4, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_4, 255, 0);
    lv_obj_set_style_border_width(lv_obj_4, 0, 0);

    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_5, 12);
    lv_obj_set_y(lv_label_5, 84);
    lv_obj_set_width(lv_label_5, 86);
    lv_label_set_text(lv_label_5, "Free heap");
    lv_label_set_long_mode(lv_label_5, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_5, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_5, font_inter_11, 0);

    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_6, 144);
    lv_obj_set_y(lv_label_6, 84);
    lv_obj_set_width(lv_label_6, 70);
    lv_label_set_text(lv_label_6, "128 KB");
    lv_label_set_long_mode(lv_label_6, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_6, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_6, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_6, font_inter_12, 0);

    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_5, 12);
    lv_obj_set_y(lv_obj_5, 106);
    lv_obj_set_width(lv_obj_5, 204);
    lv_obj_set_height(lv_obj_5, 1);
    lv_obj_set_flag(lv_obj_5, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_5, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_5, 255, 0);
    lv_obj_set_style_border_width(lv_obj_5, 0, 0);

    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_7, 12);
    lv_obj_set_y(lv_label_7, 120);
    lv_obj_set_width(lv_label_7, 86);
    lv_label_set_text(lv_label_7, "Loop");
    lv_label_set_long_mode(lv_label_7, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_7, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_7, font_inter_11, 0);

    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_8, 164);
    lv_obj_set_y(lv_label_8, 120);
    lv_obj_set_width(lv_label_8, 50);
    lv_label_set_text(lv_label_8, "OK");
    lv_label_set_long_mode(lv_label_8, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_8, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_8, font_inter_12, 0);

    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_9, 12);
    lv_obj_set_y(lv_label_9, 144);
    lv_obj_set_width(lv_label_9, 204);
    lv_label_set_text(lv_label_9, "Runtime stable");
    lv_label_set_long_mode(lv_label_9, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_9, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_9, font_inter_10, 0);

    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_6, 244);
    lv_obj_set_y(lv_obj_6, 42);
    lv_obj_set_width(lv_obj_6, 228);
    lv_obj_set_height(lv_obj_6, 166);
    lv_obj_set_flag(lv_obj_6, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_6, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_6, 255, 0);
    lv_obj_set_style_radius(lv_obj_6, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_6, 0, 0);
    lv_obj_set_style_border_width(lv_obj_6, 1, 0);
    lv_obj_set_style_border_color(lv_obj_6, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_10, 12);
    lv_obj_set_y(lv_label_10, 12);
    lv_obj_set_width(lv_label_10, 120);
    lv_label_set_text(lv_label_10, "IO STATUS");
    lv_label_set_long_mode(lv_label_10, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_10, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_10, font_inter_14, 0);

    lv_obj_t * lv_label_11 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_11, 12);
    lv_obj_set_y(lv_label_11, 46);
    lv_obj_set_width(lv_label_11, 80);
    lv_label_set_text(lv_label_11, "Pump");
    lv_label_set_long_mode(lv_label_11, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_11, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_11, font_inter_11, 0);

    lv_obj_t * lv_label_12 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_12, 154);
    lv_obj_set_y(lv_label_12, 46);
    lv_obj_set_width(lv_label_12, 60);
    lv_label_set_text(lv_label_12, "ON");
    lv_label_set_long_mode(lv_label_12, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_12, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_12, font_inter_12, 0);

    lv_obj_t * lv_label_13 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_13, 12);
    lv_obj_set_y(lv_label_13, 72);
    lv_obj_set_width(lv_label_13, 80);
    lv_label_set_text(lv_label_13, "LED");
    lv_label_set_long_mode(lv_label_13, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_13, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_13, font_inter_11, 0);

    lv_obj_t * lv_label_14 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_14, 128);
    lv_obj_set_y(lv_label_14, 72);
    lv_obj_set_width(lv_label_14, 86);
    lv_label_set_text(lv_label_14, "ON 80%");
    lv_label_set_long_mode(lv_label_14, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_14, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_14, font_inter_12, 0);

    lv_obj_t * lv_label_15 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_15, 12);
    lv_obj_set_y(lv_label_15, 98);
    lv_obj_set_width(lv_label_15, 80);
    lv_label_set_text(lv_label_15, "Sensors");
    lv_label_set_long_mode(lv_label_15, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_15, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_15, font_inter_11, 0);

    lv_obj_t * lv_label_16 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_16, 134);
    lv_obj_set_y(lv_label_16, 98);
    lv_obj_set_width(lv_label_16, 80);
    lv_label_set_text(lv_label_16, "online");
    lv_label_set_long_mode(lv_label_16, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_16, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_16, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_16, font_inter_12, 0);

    lv_obj_t * lv_label_17 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_17, 12);
    lv_obj_set_y(lv_label_17, 124);
    lv_obj_set_width(lv_label_17, 80);
    lv_label_set_text(lv_label_17, "WiFi");
    lv_label_set_long_mode(lv_label_17, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_17, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_17, font_inter_11, 0);

    lv_obj_t * lv_label_18 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_18, 128);
    lv_obj_set_y(lv_label_18, 124);
    lv_obj_set_width(lv_label_18, 86);
    lv_label_set_text(lv_label_18, "-48 dBm");
    lv_label_set_long_mode(lv_label_18, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_18, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_18, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_18, font_inter_12, 0);

    lv_obj_t * lv_label_19 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_19, 12);
    lv_obj_set_y(lv_label_19, 146);
    lv_obj_set_width(lv_label_19, 204);
    lv_label_set_text(lv_label_19, "All outputs responding");
    lv_label_set_long_mode(lv_label_19, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_19, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_19, font_inter_10, 0);

    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_7, 8);
    lv_obj_set_y(lv_obj_7, 218);
    lv_obj_set_width(lv_obj_7, 300);
    lv_obj_set_height(lv_obj_7, 54);
    lv_obj_set_flag(lv_obj_7, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_7, COLOR_MUTED_GRAY, 0);
    lv_obj_set_style_bg_opa(lv_obj_7, 255, 0);
    lv_obj_set_style_radius(lv_obj_7, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_7, 0, 0);
    lv_obj_set_style_border_width(lv_obj_7, 0, 0);
    lv_obj_t * lv_label_20 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_20, 12);
    lv_obj_set_y(lv_label_20, 9);
    lv_obj_set_width(lv_label_20, 260);
    lv_label_set_text(lv_label_20, "Diagnostics are for service mode");
    lv_label_set_long_mode(lv_label_20, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_20, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_20, font_inter_11, 0);

    lv_obj_t * lv_label_21 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_21, 12);
    lv_obj_set_y(lv_label_21, 28);
    lv_obj_set_width(lv_label_21, 260);
    lv_label_set_text(lv_label_21, "Use self test before deployment.");
    lv_label_set_long_mode(lv_label_21, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_21, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_21, font_inter_10, 0);

    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_8, 316);
    lv_obj_set_y(lv_obj_8, 218);
    lv_obj_set_width(lv_obj_8, 156);
    lv_obj_set_height(lv_obj_8, 54);
    lv_obj_set_flag(lv_obj_8, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_8, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_8, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_8, 255, 0);
    lv_obj_set_style_radius(lv_obj_8, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_8, 0, 0);
    lv_obj_set_style_border_width(lv_obj_8, 1, 0);
    lv_obj_set_style_border_color(lv_obj_8, COLOR_ALERT_RED, 0);
    lv_obj_t * lv_label_22 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_22, 0);
    lv_obj_set_y(lv_label_22, 19);
    lv_obj_set_width(lv_label_22, 156);
    lv_label_set_text(lv_label_22, "RUN SELF TEST");
    lv_label_set_long_mode(lv_label_22, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_22, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_22, COLOR_ALERT_RED, 0);
    lv_obj_set_style_text_font(lv_label_22, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

