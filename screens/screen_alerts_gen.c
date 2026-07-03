/**
 * @file screen_alerts_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_alerts_gen.h"
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

lv_obj_t * screen_alerts_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_alerts_#");
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
    lv_label_set_text(lv_label_0, "ALERTS / HISTORY");
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
    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_3, 14);
    lv_obj_set_y(lv_label_3, 12);
    lv_obj_set_width(lv_label_3, 160);
    lv_label_set_text(lv_label_3, "ACTIVE ALERTS");
    lv_label_set_long_mode(lv_label_3, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_3, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_3, font_inter_14, 0);

    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_4, 14);
    lv_obj_set_y(lv_obj_4, 44);
    lv_obj_set_width(lv_obj_4, 436);
    lv_obj_set_height(lv_obj_4, 42);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_4, 0, 0);
    lv_obj_set_style_border_width(lv_obj_4, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_4, 0, 0);
    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_4);
    lv_obj_set_x(lv_label_4, 0);
    lv_obj_set_y(lv_label_4, 4);
    lv_obj_set_width(lv_label_4, 300);
    lv_label_set_text(lv_label_4, "Reservoir below refill target");
    lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_4, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_4, font_inter_12, 0);

    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_4);
    lv_obj_set_x(lv_label_5, 354);
    lv_obj_set_y(lv_label_5, 4);
    lv_obj_set_width(lv_label_5, 70);
    lv_label_set_text(lv_label_5, "LOW");
    lv_label_set_long_mode(lv_label_5, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_5, COLOR_ALERT_ORANGE, 0);
    lv_obj_set_style_text_font(lv_label_5, font_inter_10, 0);

    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_4);
    lv_obj_set_x(lv_label_6, 0);
    lv_obj_set_y(lv_label_6, 23);
    lv_obj_set_width(lv_label_6, 260);
    lv_label_set_text(lv_label_6, "Check tank level soon");
    lv_label_set_long_mode(lv_label_6, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_6, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_6, font_inter_10, 0);

    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_5, 14);
    lv_obj_set_y(lv_obj_5, 88);
    lv_obj_set_width(lv_obj_5, 436);
    lv_obj_set_height(lv_obj_5, 1);
    lv_obj_set_flag(lv_obj_5, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_5, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_5, 255, 0);
    lv_obj_set_style_border_width(lv_obj_5, 0, 0);

    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_6, 14);
    lv_obj_set_y(lv_obj_6, 96);
    lv_obj_set_width(lv_obj_6, 436);
    lv_obj_set_height(lv_obj_6, 42);
    lv_obj_set_flag(lv_obj_6, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_6, 0, 0);
    lv_obj_set_style_border_width(lv_obj_6, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_6, 0, 0);
    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_7, 0);
    lv_obj_set_y(lv_label_7, 4);
    lv_obj_set_width(lv_label_7, 260);
    lv_label_set_text(lv_label_7, "WiFi connected");
    lv_label_set_long_mode(lv_label_7, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_7, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_7, font_inter_12, 0);

    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_8, 354);
    lv_obj_set_y(lv_label_8, 4);
    lv_obj_set_width(lv_label_8, 70);
    lv_label_set_text(lv_label_8, "INFO");
    lv_label_set_long_mode(lv_label_8, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_8, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_8, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_8, font_inter_10, 0);

    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_9, 0);
    lv_obj_set_y(lv_label_9, 23);
    lv_obj_set_width(lv_label_9, 260);
    lv_label_set_text(lv_label_9, "Network link restored");
    lv_label_set_long_mode(lv_label_9, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_9, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_9, font_inter_10, 0);

    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_7, 14);
    lv_obj_set_y(lv_obj_7, 140);
    lv_obj_set_width(lv_obj_7, 436);
    lv_obj_set_height(lv_obj_7, 1);
    lv_obj_set_flag(lv_obj_7, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_7, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_7, 255, 0);
    lv_obj_set_style_border_width(lv_obj_7, 0, 0);

    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_8, 14);
    lv_obj_set_y(lv_obj_8, 148);
    lv_obj_set_width(lv_obj_8, 436);
    lv_obj_set_height(lv_obj_8, 42);
    lv_obj_set_flag(lv_obj_8, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_8, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_8, 0, 0);
    lv_obj_set_style_border_width(lv_obj_8, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_8, 0, 0);
    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_10, 0);
    lv_obj_set_y(lv_label_10, 4);
    lv_obj_set_width(lv_label_10, 300);
    lv_label_set_text(lv_label_10, "LED schedule started 06:00");
    lv_label_set_long_mode(lv_label_10, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_10, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_10, font_inter_12, 0);

    lv_obj_t * lv_label_11 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_11, 354);
    lv_obj_set_y(lv_label_11, 4);
    lv_obj_set_width(lv_label_11, 70);
    lv_label_set_text(lv_label_11, "INFO");
    lv_label_set_long_mode(lv_label_11, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_11, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_11, font_inter_10, 0);

    lv_obj_t * lv_label_12 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_12, 0);
    lv_obj_set_y(lv_label_12, 23);
    lv_obj_set_width(lv_label_12, 260);
    lv_label_set_text(lv_label_12, "Lighting cycle active");
    lv_label_set_long_mode(lv_label_12, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_12, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_12, font_inter_10, 0);

    lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_9, 8);
    lv_obj_set_y(lv_obj_9, 254);
    lv_obj_set_width(lv_obj_9, 226);
    lv_obj_set_height(lv_obj_9, 48);
    lv_obj_set_flag(lv_obj_9, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_9, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_9, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_9, 255, 0);
    lv_obj_set_style_radius(lv_obj_9, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_9, 0, 0);
    lv_obj_set_style_border_width(lv_obj_9, 1, 0);
    lv_obj_set_style_border_color(lv_obj_9, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_13 = lv_label_create(lv_obj_9);
    lv_obj_set_x(lv_label_13, 0);
    lv_obj_set_y(lv_label_13, 16);
    lv_obj_set_width(lv_label_13, 226);
    lv_label_set_text(lv_label_13, "CLEAR RESOLVED");
    lv_label_set_long_mode(lv_label_13, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_13, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_13, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_13, font_inter_12, 0);

    lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_10, 246);
    lv_obj_set_y(lv_obj_10, 254);
    lv_obj_set_width(lv_obj_10, 226);
    lv_obj_set_height(lv_obj_10, 48);
    lv_obj_set_flag(lv_obj_10, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_10, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_10, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_bg_opa(lv_obj_10, 255, 0);
    lv_obj_set_style_radius(lv_obj_10, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_10, 0, 0);
    lv_obj_set_style_border_width(lv_obj_10, 0, 0);
    lv_obj_t * lv_label_14 = lv_label_create(lv_obj_10);
    lv_obj_set_x(lv_label_14, 0);
    lv_obj_set_y(lv_label_14, 16);
    lv_obj_set_width(lv_label_14, 226);
    lv_label_set_text(lv_label_14, "EXPORT LOG");
    lv_label_set_long_mode(lv_label_14, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_14, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_14, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

