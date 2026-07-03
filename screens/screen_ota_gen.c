/**
 * @file screen_ota_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_ota_gen.h"
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

lv_obj_t * screen_ota_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_ota_#");
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
    lv_label_set_text(lv_label_0, "OTA UPDATE");
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
    lv_obj_set_width(lv_obj_3, 156);
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
    lv_obj_set_width(lv_label_3, 120);
    lv_label_set_text(lv_label_3, "FIRMWARE");
    lv_label_set_long_mode(lv_label_3, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_3, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_3, font_inter_14, 0);

    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_4, 12);
    lv_obj_set_y(lv_label_4, 54);
    lv_obj_set_width(lv_label_4, 100);
    lv_label_set_text(lv_label_4, "Current");
    lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_4, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_4, font_inter_10, 0);

    lv_obj_t * firmware_version = lv_label_create(lv_obj_3);
    lv_obj_set_name(firmware_version, "firmware_version");
    lv_obj_set_x(firmware_version, 12);
    lv_obj_set_y(firmware_version, 76);
    lv_obj_set_width(firmware_version, 100);
    lv_label_set_text(firmware_version, "0.1.0");
    lv_label_set_long_mode(firmware_version, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(firmware_version, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(firmware_version, font_inter_26, 0);

    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_4, 12);
    lv_obj_set_y(lv_obj_4, 124);
    lv_obj_set_width(lv_obj_4, 132);
    lv_obj_set_height(lv_obj_4, 1);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_4, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_4, 255, 0);
    lv_obj_set_style_border_width(lv_obj_4, 0, 0);

    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_5, 12);
    lv_obj_set_y(lv_label_5, 142);
    lv_obj_set_width(lv_label_5, 120);
    lv_label_set_text(lv_label_5, "Channel");
    lv_label_set_long_mode(lv_label_5, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_5, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_5, font_inter_10, 0);

    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_6, 12);
    lv_obj_set_y(lv_label_6, 160);
    lv_obj_set_width(lv_label_6, 120);
    lv_label_set_text(lv_label_6, "production");
    lv_label_set_long_mode(lv_label_6, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_6, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(lv_label_6, font_inter_11, 0);

    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_7, 12);
    lv_obj_set_y(lv_label_7, 194);
    lv_obj_set_width(lv_label_7, 120);
    lv_label_set_text(lv_label_7, "WiFi");
    lv_label_set_long_mode(lv_label_7, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_7, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_7, font_inter_10, 0);

    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_8, 12);
    lv_obj_set_y(lv_label_8, 212);
    lv_obj_set_width(lv_label_8, 120);
    lv_label_set_text(lv_label_8, "Connected");
    lv_label_set_long_mode(lv_label_8, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_8, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_8, font_inter_11, 0);

    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_5, 172);
    lv_obj_set_y(lv_obj_5, 42);
    lv_obj_set_width(lv_obj_5, 300);
    lv_obj_set_height(lv_obj_5, 250);
    lv_obj_set_flag(lv_obj_5, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_5, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_5, 255, 0);
    lv_obj_set_style_radius(lv_obj_5, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_5, 0, 0);
    lv_obj_set_style_border_width(lv_obj_5, 1, 0);
    lv_obj_set_style_border_color(lv_obj_5, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_9, 14);
    lv_obj_set_y(lv_label_9, 14);
    lv_obj_set_width(lv_label_9, 160);
    lv_label_set_text(lv_label_9, "UPDATE STATUS");
    lv_label_set_long_mode(lv_label_9, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_9, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_9, font_inter_14, 0);

    lv_obj_t * ota_status_title = lv_label_create(lv_obj_5);
    lv_obj_set_name(ota_status_title, "ota_status_title");
    lv_obj_set_x(ota_status_title, 14);
    lv_obj_set_y(ota_status_title, 54);
    lv_obj_set_width(ota_status_title, 200);
    lv_label_set_text(ota_status_title, "Ready to check");
    lv_label_set_long_mode(ota_status_title, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(ota_status_title, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(ota_status_title, font_inter_15, 0);

    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_10, 14);
    lv_obj_set_y(lv_label_10, 88);
    lv_obj_set_width(lv_label_10, 240);
    lv_label_set_text(lv_label_10, "No update in progress");
    lv_label_set_long_mode(lv_label_10, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_10, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_10, font_inter_11, 0);

    lv_obj_t * ota_progress_bar = lv_bar_create(lv_obj_5);
    lv_obj_set_name(ota_progress_bar, "ota_progress_bar");
    lv_obj_set_x(ota_progress_bar, 14);
    lv_obj_set_y(ota_progress_bar, 124);
    lv_obj_set_width(ota_progress_bar, 272);
    lv_obj_set_height(ota_progress_bar, 10);
    lv_bar_set_min_value(ota_progress_bar, 0);
    lv_bar_set_max_value(ota_progress_bar, 100);
    lv_bar_set_value(ota_progress_bar, 0, false);
    lv_bar_set_mode(ota_progress_bar, LV_BAR_MODE_NORMAL);
    lv_obj_set_flag(ota_progress_bar, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(ota_progress_bar, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ota_progress_bar, COLOR_MUTED_GRAY, LV_PART_INDICATOR);
    lv_obj_set_style_bg_opa(ota_progress_bar, 255, LV_PART_INDICATOR);
    lv_obj_set_style_radius(ota_progress_bar, 5, LV_PART_INDICATOR);
    lv_obj_set_style_border_width(ota_progress_bar, 0, 0);
    lv_obj_set_style_pad_all(ota_progress_bar, 0, 0);

    lv_obj_t * ota_progress_label = lv_label_create(lv_obj_5);
    lv_obj_set_name(ota_progress_label, "ota_progress_label");
    lv_obj_set_x(ota_progress_label, 14);
    lv_obj_set_y(ota_progress_label, 150);
    lv_obj_set_width(ota_progress_label, 80);
    lv_label_set_text(ota_progress_label, "0%");
    lv_label_set_long_mode(ota_progress_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(ota_progress_label, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(ota_progress_label, font_inter_12, 0);

    lv_obj_t * lv_label_11 = lv_label_create(lv_obj_5);
    lv_obj_set_x(lv_label_11, 184);
    lv_obj_set_y(lv_label_11, 150);
    lv_obj_set_width(lv_label_11, 100);
    lv_label_set_text(lv_label_11, "Idle");
    lv_label_set_long_mode(lv_label_11, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_11, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_11, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_11, font_inter_12, 0);

    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_5);
    lv_obj_set_x(lv_obj_6, 14);
    lv_obj_set_y(lv_obj_6, 180);
    lv_obj_set_width(lv_obj_6, 272);
    lv_obj_set_height(lv_obj_6, 1);
    lv_obj_set_flag(lv_obj_6, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_6, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_6, 255, 0);
    lv_obj_set_style_border_width(lv_obj_6, 0, 0);

    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_5);
    lv_obj_set_x(lv_obj_7, 14);
    lv_obj_set_y(lv_obj_7, 202);
    lv_obj_set_width(lv_obj_7, 272);
    lv_obj_set_height(lv_obj_7, 34);
    lv_obj_set_flag(lv_obj_7, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_7, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_bg_opa(lv_obj_7, 255, 0);
    lv_obj_set_style_radius(lv_obj_7, 8, 0);
    lv_obj_set_style_border_width(lv_obj_7, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_7, 0, 0);
    lv_obj_t * lv_label_12 = lv_label_create(lv_obj_7);
    lv_obj_set_x(lv_label_12, 0);
    lv_obj_set_y(lv_label_12, 10);
    lv_obj_set_width(lv_label_12, 272);
    lv_label_set_text(lv_label_12, "START OTA");
    lv_label_set_long_mode(lv_label_12, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_12, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_12, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_12, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

