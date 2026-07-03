/**
 * @file screen_wifi_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_wifi_gen.h"
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

lv_obj_t * screen_wifi_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_wifi_#");
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
    lv_label_set_text(lv_label_0, "WIFI SETUP");
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
    lv_obj_set_width(lv_obj_3, 176);
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
    lv_obj_set_x(lv_label_3, 12);
    lv_obj_set_y(lv_label_3, 14);
    lv_obj_set_width(lv_label_3, 130);
    lv_label_set_text(lv_label_3, "AVAILABLE");
    lv_label_set_long_mode(lv_label_3, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_3, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_3, font_inter_14, 0);

    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_4, 10);
    lv_obj_set_y(lv_obj_4, 44);
    lv_obj_set_width(lv_obj_4, 156);
    lv_obj_set_height(lv_obj_4, 52);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_4, COLOR_MUTED_GRAY, 0);
    lv_obj_set_style_bg_opa(lv_obj_4, 255, 0);
    lv_obj_set_style_radius(lv_obj_4, 8, 0);
    lv_obj_set_style_border_width(lv_obj_4, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_4, 0, 0);
    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_4);
    lv_obj_set_x(lv_label_4, 10);
    lv_obj_set_y(lv_label_4, 8);
    lv_obj_set_width(lv_label_4, 136);
    lv_label_set_text(lv_label_4, "GL_Towers_2.4G");
    lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_4, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_4, font_inter_11, 0);

    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_4);
    lv_obj_set_x(lv_label_5, 10);
    lv_obj_set_y(lv_label_5, 28);
    lv_obj_set_width(lv_label_5, 136);
    lv_label_set_text(lv_label_5, "-48 dBm  Connected");
    lv_label_set_long_mode(lv_label_5, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_5, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_5, font_inter_9, 0);

    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_6, 18);
    lv_obj_set_y(lv_label_6, 116);
    lv_obj_set_width(lv_label_6, 136);
    lv_label_set_text(lv_label_6, "Greenhouse_AP");
    lv_label_set_long_mode(lv_label_6, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_6, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_6, font_inter_11, 0);

    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_7, 18);
    lv_obj_set_y(lv_label_7, 134);
    lv_obj_set_width(lv_label_7, 136);
    lv_label_set_text(lv_label_7, "-62 dBm");
    lv_label_set_long_mode(lv_label_7, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_7, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_7, font_inter_9, 0);

    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_5, 12);
    lv_obj_set_y(lv_obj_5, 158);
    lv_obj_set_width(lv_obj_5, 152);
    lv_obj_set_height(lv_obj_5, 1);
    lv_obj_set_flag(lv_obj_5, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_5, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_5, 255, 0);
    lv_obj_set_style_border_width(lv_obj_5, 0, 0);

    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_8, 18);
    lv_obj_set_y(lv_label_8, 176);
    lv_obj_set_width(lv_label_8, 136);
    lv_label_set_text(lv_label_8, "Mobile Hotspot");
    lv_label_set_long_mode(lv_label_8, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_8, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_8, font_inter_11, 0);

    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_9, 18);
    lv_obj_set_y(lv_label_9, 194);
    lv_obj_set_width(lv_label_9, 136);
    lv_label_set_text(lv_label_9, "-71 dBm");
    lv_label_set_long_mode(lv_label_9, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_9, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_9, font_inter_9, 0);

    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_10, 12);
    lv_obj_set_y(lv_label_10, 224);
    lv_obj_set_width(lv_label_10, 152);
    lv_label_set_text(lv_label_10, "3 networks found");
    lv_label_set_long_mode(lv_label_10, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_10, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_10, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_10, font_inter_9, 0);

    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_6, 192);
    lv_obj_set_y(lv_obj_6, 42);
    lv_obj_set_width(lv_obj_6, 280);
    lv_obj_set_height(lv_obj_6, 250);
    lv_obj_set_flag(lv_obj_6, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_6, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_6, 255, 0);
    lv_obj_set_style_radius(lv_obj_6, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_6, 0, 0);
    lv_obj_set_style_border_width(lv_obj_6, 1, 0);
    lv_obj_set_style_border_color(lv_obj_6, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_11 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_11, 14);
    lv_obj_set_y(lv_label_11, 14);
    lv_obj_set_width(lv_label_11, 150);
    lv_label_set_text(lv_label_11, "CONNECTION");
    lv_label_set_long_mode(lv_label_11, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_11, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_11, font_inter_14, 0);

    lv_obj_t * lv_label_12 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_12, 14);
    lv_obj_set_y(lv_label_12, 52);
    lv_obj_set_width(lv_label_12, 90);
    lv_label_set_text(lv_label_12, "Status");
    lv_label_set_long_mode(lv_label_12, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_12, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_12, font_inter_11, 0);

    lv_obj_t * lv_label_13 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_13, 168);
    lv_obj_set_y(lv_label_13, 52);
    lv_obj_set_width(lv_label_13, 96);
    lv_label_set_text(lv_label_13, "Connected");
    lv_label_set_long_mode(lv_label_13, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_13, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_13, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_13, font_inter_11, 0);

    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_6);
    lv_obj_set_x(lv_obj_7, 14);
    lv_obj_set_y(lv_obj_7, 74);
    lv_obj_set_width(lv_obj_7, 252);
    lv_obj_set_height(lv_obj_7, 1);
    lv_obj_set_flag(lv_obj_7, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_7, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_7, 255, 0);
    lv_obj_set_style_border_width(lv_obj_7, 0, 0);

    lv_obj_t * lv_label_14 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_14, 14);
    lv_obj_set_y(lv_label_14, 88);
    lv_obj_set_width(lv_label_14, 90);
    lv_label_set_text(lv_label_14, "RSSI");
    lv_label_set_long_mode(lv_label_14, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_14, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_14, font_inter_11, 0);

    lv_obj_t * lv_label_15 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_15, 184);
    lv_obj_set_y(lv_label_15, 88);
    lv_obj_set_width(lv_label_15, 80);
    lv_label_set_text(lv_label_15, "-48 dBm");
    lv_label_set_long_mode(lv_label_15, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_15, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_15, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_15, font_inter_11, 0);

    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_6);
    lv_obj_set_x(lv_obj_8, 14);
    lv_obj_set_y(lv_obj_8, 110);
    lv_obj_set_width(lv_obj_8, 252);
    lv_obj_set_height(lv_obj_8, 1);
    lv_obj_set_flag(lv_obj_8, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_8, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_8, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_8, 255, 0);
    lv_obj_set_style_border_width(lv_obj_8, 0, 0);

    lv_obj_t * lv_label_16 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_16, 14);
    lv_obj_set_y(lv_label_16, 124);
    lv_obj_set_width(lv_label_16, 90);
    lv_label_set_text(lv_label_16, "IP");
    lv_label_set_long_mode(lv_label_16, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_16, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_16, font_inter_11, 0);

    lv_obj_t * lv_label_17 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_17, 150);
    lv_obj_set_y(lv_label_17, 124);
    lv_obj_set_width(lv_label_17, 114);
    lv_label_set_text(lv_label_17, "192.168.1.60");
    lv_label_set_long_mode(lv_label_17, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_17, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_17, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_17, font_inter_11, 0);

    lv_obj_t * lv_obj_9 = lv_obj_create(lv_obj_6);
    lv_obj_set_x(lv_obj_9, 14);
    lv_obj_set_y(lv_obj_9, 146);
    lv_obj_set_width(lv_obj_9, 252);
    lv_obj_set_height(lv_obj_9, 1);
    lv_obj_set_flag(lv_obj_9, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_9, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_9, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_9, 255, 0);
    lv_obj_set_style_border_width(lv_obj_9, 0, 0);

    lv_obj_t * lv_label_18 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_18, 14);
    lv_obj_set_y(lv_label_18, 160);
    lv_obj_set_width(lv_label_18, 90);
    lv_label_set_text(lv_label_18, "Network");
    lv_label_set_long_mode(lv_label_18, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_18, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_18, font_inter_11, 0);

    lv_obj_t * lv_label_19 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_19, 132);
    lv_obj_set_y(lv_label_19, 160);
    lv_obj_set_width(lv_label_19, 132);
    lv_label_set_text(lv_label_19, "GL_Towers_2.4G");
    lv_label_set_long_mode(lv_label_19, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_19, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_19, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_19, font_inter_11, 0);

    lv_obj_t * lv_obj_10 = lv_obj_create(lv_obj_6);
    lv_obj_set_x(lv_obj_10, 14);
    lv_obj_set_y(lv_obj_10, 202);
    lv_obj_set_width(lv_obj_10, 252);
    lv_obj_set_height(lv_obj_10, 34);
    lv_obj_set_flag(lv_obj_10, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_10, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_10, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_bg_opa(lv_obj_10, 255, 0);
    lv_obj_set_style_radius(lv_obj_10, 8, 0);
    lv_obj_set_style_border_width(lv_obj_10, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_10, 0, 0);
    lv_obj_t * lv_label_20 = lv_label_create(lv_obj_10);
    lv_obj_set_x(lv_label_20, 0);
    lv_obj_set_y(lv_label_20, 10);
    lv_obj_set_width(lv_label_20, 252);
    lv_label_set_text(lv_label_20, "CHANGE WIFI");
    lv_label_set_long_mode(lv_label_20, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_20, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_20, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_20, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

