/**
 * @file screen_settings_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_settings_gen.h"
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

lv_obj_t * screen_settings_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_settings_#");
    lv_obj_set_width(lv_obj_0, 480);
    lv_obj_set_height(lv_obj_0, 320);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_APP_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * global_top_status_bar_0 = global_top_status_bar_create(lv_obj_0, "GL TOWERS", "13:20", "WiFi");
    lv_obj_set_x(global_top_status_bar_0, 0);
    lv_obj_set_y(global_top_status_bar_0, 0);

    lv_obj_t * lv_obj_1 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_1, 8);
    lv_obj_set_y(lv_obj_1, 42);
    lv_obj_set_width(lv_obj_1, 128);
    lv_obj_set_height(lv_obj_1, 212);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_1, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_1, 255, 0);
    lv_obj_set_style_radius(lv_obj_1, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);
    lv_obj_set_style_border_width(lv_obj_1, 1, 0);
    lv_obj_set_style_border_color(lv_obj_1, COLOR_DIVIDER, 0);
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_2, 8);
    lv_obj_set_y(lv_obj_2, 8);
    lv_obj_set_width(lv_obj_2, 112);
    lv_obj_set_height(lv_obj_2, 42);
    lv_obj_set_flag(lv_obj_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_2, COLOR_MUTED_GRAY, 0);
    lv_obj_set_style_bg_opa(lv_obj_2, 255, 0);
    lv_obj_set_style_radius(lv_obj_2, 8, 0);
    lv_obj_set_style_border_width(lv_obj_2, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_2, 0, 0);
    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_2);
    lv_obj_set_x(lv_label_0, 10);
    lv_obj_set_y(lv_label_0, 7);
    lv_obj_set_width(lv_label_0, 92);
    lv_label_set_text(lv_label_0, "WiFi");
    lv_label_set_long_mode(lv_label_0, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_0, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_0, font_inter_12, 0);

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_2);
    lv_obj_set_x(lv_label_1, 10);
    lv_obj_set_y(lv_label_1, 24);
    lv_obj_set_width(lv_label_1, 92);
    lv_label_set_text(lv_label_1, "Network");
    lv_label_set_long_mode(lv_label_1, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_1, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_1, font_inter_9, 0);

    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_2, 18);
    lv_obj_set_y(lv_label_2, 66);
    lv_obj_set_width(lv_label_2, 92);
    lv_label_set_text(lv_label_2, "Display");
    lv_label_set_long_mode(lv_label_2, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_2, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_2, font_inter_11, 0);

    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_3, 18);
    lv_obj_set_y(lv_label_3, 82);
    lv_obj_set_width(lv_label_3, 92);
    lv_label_set_text(lv_label_3, "Brightness");
    lv_label_set_long_mode(lv_label_3, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_3, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_3, font_inter_9, 0);

    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_3, 12);
    lv_obj_set_y(lv_obj_3, 104);
    lv_obj_set_width(lv_obj_3, 104);
    lv_obj_set_height(lv_obj_3, 1);
    lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_3, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_3, 255, 0);
    lv_obj_set_style_border_width(lv_obj_3, 0, 0);

    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_4, 18);
    lv_obj_set_y(lv_label_4, 118);
    lv_obj_set_width(lv_label_4, 92);
    lv_label_set_text(lv_label_4, "General");
    lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_4, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_4, font_inter_11, 0);

    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_5, 18);
    lv_obj_set_y(lv_label_5, 134);
    lv_obj_set_width(lv_label_5, 92);
    lv_label_set_text(lv_label_5, "Units and prefs");
    lv_label_set_long_mode(lv_label_5, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_5, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_5, font_inter_9, 0);

    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_4, 12);
    lv_obj_set_y(lv_obj_4, 156);
    lv_obj_set_width(lv_obj_4, 104);
    lv_obj_set_height(lv_obj_4, 1);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_4, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_4, 255, 0);
    lv_obj_set_style_border_width(lv_obj_4, 0, 0);

    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_6, 18);
    lv_obj_set_y(lv_label_6, 170);
    lv_obj_set_width(lv_label_6, 92);
    lv_label_set_text(lv_label_6, "Maintenance");
    lv_label_set_long_mode(lv_label_6, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_6, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_6, font_inter_11, 0);

    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_7, 18);
    lv_obj_set_y(lv_label_7, 186);
    lv_obj_set_width(lv_label_7, 92);
    lv_label_set_text(lv_label_7, "Service reset");
    lv_label_set_long_mode(lv_label_7, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_7, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_7, font_inter_9, 0);

    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_5, 144);
    lv_obj_set_y(lv_obj_5, 42);
    lv_obj_set_width(lv_obj_5, 328);
    lv_obj_set_height(lv_obj_5, 212);
    lv_obj_set_flag(lv_obj_5, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_5, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_5, 255, 0);
    lv_obj_set_style_radius(lv_obj_5, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_5, 0, 0);
    lv_obj_set_style_border_width(lv_obj_5, 1, 0);
    lv_obj_set_style_border_color(lv_obj_5, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_8, 14);
    lv_obj_set_y(lv_label_8, 12);
    lv_obj_set_width(lv_label_8, 180);
    lv_label_set_text(lv_label_8, "WIFI NETWORK");
    lv_label_set_long_mode(lv_label_8, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_8, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_8, font_inter_15, 0);

    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_9, 14);
    lv_obj_set_y(lv_label_9, 48);
    lv_obj_set_width(lv_label_9, 90);
    lv_label_set_text(lv_label_9, "Network");
    lv_label_set_long_mode(lv_label_9, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_9, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_9, font_inter_11, 0);

    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_10, 172);
    lv_obj_set_y(lv_label_10, 48);
    lv_obj_set_width(lv_label_10, 140);
    lv_label_set_text(lv_label_10, "GL_Towers_2.4G");
    lv_label_set_long_mode(lv_label_10, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_10, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_10, font_inter_11, 0);

    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_5);
    lv_obj_set_x(lv_obj_6, 14);
    lv_obj_set_y(lv_obj_6, 70);
    lv_obj_set_width(lv_obj_6, 300);
    lv_obj_set_height(lv_obj_6, 1);
    lv_obj_set_flag(lv_obj_6, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_6, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_6, 255, 0);
    lv_obj_set_style_border_width(lv_obj_6, 0, 0);

    lv_obj_t * lv_label_11 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_11, 14);
    lv_obj_set_y(lv_label_11, 82);
    lv_obj_set_width(lv_label_11, 90);
    lv_label_set_text(lv_label_11, "IP address");
    lv_label_set_long_mode(lv_label_11, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_11, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_11, font_inter_11, 0);

    lv_obj_t * lv_label_12 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_12, 204);
    lv_obj_set_y(lv_label_12, 82);
    lv_obj_set_width(lv_label_12, 108);
    lv_label_set_text(lv_label_12, "192.168.1.60");
    lv_label_set_long_mode(lv_label_12, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_12, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_12, font_inter_11, 0);

    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_5);
    lv_obj_set_x(lv_obj_7, 14);
    lv_obj_set_y(lv_obj_7, 138);
    lv_obj_set_width(lv_obj_7, 300);
    lv_obj_set_height(lv_obj_7, 1);
    lv_obj_set_flag(lv_obj_7, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_7, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_7, 255, 0);
    lv_obj_set_style_border_width(lv_obj_7, 0, 0);

    lv_obj_t * lv_label_13 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_13, 14);
    lv_obj_set_y(lv_label_13, 116);
    lv_obj_set_width(lv_label_13, 90);
    lv_label_set_text(lv_label_13, "Status");
    lv_label_set_long_mode(lv_label_13, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_13, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_13, font_inter_11, 0);

    lv_obj_t * lv_label_14 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_14, 224);
    lv_obj_set_y(lv_label_14, 116);
    lv_obj_set_width(lv_label_14, 88);
    lv_label_set_text(lv_label_14, "Connected");
    lv_label_set_long_mode(lv_label_14, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_14, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_14, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_14, font_inter_11, 0);

    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_5);
    lv_obj_set_x(lv_obj_8, 14);
    lv_obj_set_y(lv_obj_8, 174);
    lv_obj_set_width(lv_obj_8, 300);
    lv_obj_set_height(lv_obj_8, 28);
    lv_obj_set_flag(lv_obj_8, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_8, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_8, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_8, 255, 0);
    lv_obj_set_style_radius(lv_obj_8, 8, 0);
    lv_obj_set_style_border_width(lv_obj_8, 1, 0);
    lv_obj_set_style_border_color(lv_obj_8, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_pad_all(lv_obj_8, 0, 0);
    lv_obj_t * lv_label_15 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_15, 0);
    lv_obj_set_y(lv_label_15, 8);
    lv_obj_set_width(lv_label_15, 300);
    lv_label_set_text(lv_label_15, "CHANGE NETWORK");
    lv_label_set_long_mode(lv_label_15, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_15, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_15, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_15, font_inter_11, 0);

    lv_obj_t * global_bottom_nav_0 = global_bottom_nav_create(lv_obj_0, COLOR_DARK_FOREST, COLOR_DARK_FOREST, COLOR_DARK_FOREST, COLOR_DARK_FOREST, COLOR_STATUS_HEALTHY);
    lv_obj_set_x(global_bottom_nav_0, 0);
    lv_obj_set_y(global_bottom_nav_0, 280);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

