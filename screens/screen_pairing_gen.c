/**
 * @file screen_pairing_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_pairing_gen.h"
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

lv_obj_t * screen_pairing_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_pairing_#");
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
    lv_label_set_text(lv_label_0, "DEVICE PAIRING");
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
    lv_obj_set_x(lv_label_3, 14);
    lv_obj_set_y(lv_label_3, 14);
    lv_obj_set_width(lv_label_3, 120);
    lv_label_set_text(lv_label_3, "SCAN CODE");
    lv_label_set_long_mode(lv_label_3, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_3, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_3, font_inter_14, 0);

    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_4, 18);
    lv_obj_set_y(lv_obj_4, 48);
    lv_obj_set_width(lv_obj_4, 120);
    lv_obj_set_height(lv_obj_4, 120);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_4, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(lv_obj_4, 255, 0);
    lv_obj_set_style_radius(lv_obj_4, 6, 0);
    lv_obj_set_style_border_width(lv_obj_4, 1, 0);
    lv_obj_set_style_border_color(lv_obj_4, COLOR_DIVIDER, 0);
    lv_obj_set_style_pad_all(lv_obj_4, 0, 0);
    lv_obj_t * pairing_qr = lv_qrcode_create(lv_obj_4);
    lv_obj_set_name(pairing_qr, "pairing_qr");
    lv_obj_set_x(pairing_qr, 4);
    lv_obj_set_y(pairing_qr, 4);
    lv_qrcode_set_size(pairing_qr, 112);
    lv_qrcode_set_data(pairing_qr, "GLTOWER:PAIR:GL-4821");
    lv_qrcode_set_dark_color(pairing_qr, COLOR_TEXT_PRIMARY);
    lv_qrcode_set_light_color(pairing_qr, COLOR_WHITE);
    lv_qrcode_set_quiet_zone(pairing_qr, true);
    lv_obj_set_flag(pairing_qr, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(pairing_qr, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(pairing_qr, COLOR_WHITE, 0);
    lv_obj_set_style_bg_opa(pairing_qr, 255, 0);
    lv_obj_set_style_border_width(pairing_qr, 0, 0);
    lv_obj_set_style_radius(pairing_qr, 0, 0);
    lv_obj_set_style_pad_all(pairing_qr, 0, 0);

    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_4, 0);
    lv_obj_set_y(lv_label_4, 178);
    lv_obj_set_width(lv_label_4, 156);
    lv_label_set_text(lv_label_4, "Scan to pair");
    lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_4, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_4, font_inter_11, 0);

    lv_obj_t * lv_label_5 = lv_label_create(lv_obj_3);
    lv_obj_set_x(lv_label_5, 0);
    lv_obj_set_y(lv_label_5, 198);
    lv_obj_set_width(lv_label_5, 156);
    lv_label_set_text(lv_label_5, "with mobile app");
    lv_label_set_long_mode(lv_label_5, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_5, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_5, font_inter_10, 0);

    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_5, 28);
    lv_obj_set_y(lv_obj_5, 224);
    lv_obj_set_width(lv_obj_5, 100);
    lv_obj_set_height(lv_obj_5, 12);
    lv_obj_set_flag(lv_obj_5, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_5, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_5, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_bg_opa(lv_obj_5, 255, 0);
    lv_obj_set_style_radius(lv_obj_5, 6, 0);
    lv_obj_set_style_border_width(lv_obj_5, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_5, 0, 0);

    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_0);
    lv_obj_set_x(lv_obj_6, 172);
    lv_obj_set_y(lv_obj_6, 42);
    lv_obj_set_width(lv_obj_6, 300);
    lv_obj_set_height(lv_obj_6, 250);
    lv_obj_set_flag(lv_obj_6, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_6, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_6, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_6, 255, 0);
    lv_obj_set_style_radius(lv_obj_6, 10, 0);
    lv_obj_set_style_pad_all(lv_obj_6, 0, 0);
    lv_obj_set_style_border_width(lv_obj_6, 1, 0);
    lv_obj_set_style_border_color(lv_obj_6, COLOR_DIVIDER, 0);
    lv_obj_t * lv_label_6 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_6, 14);
    lv_obj_set_y(lv_label_6, 14);
    lv_obj_set_width(lv_label_6, 150);
    lv_label_set_text(lv_label_6, "PAIRING CODE");
    lv_label_set_long_mode(lv_label_6, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_6, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_text_font(lv_label_6, font_inter_14, 0);

    lv_obj_t * pairing_code = lv_label_create(lv_obj_6);
    lv_obj_set_name(pairing_code, "pairing_code");
    lv_obj_set_x(pairing_code, 14);
    lv_obj_set_y(pairing_code, 54);
    lv_obj_set_width(pairing_code, 180);
    lv_label_set_text(pairing_code, "GL-4821");
    lv_label_set_long_mode(pairing_code, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(pairing_code, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(pairing_code, font_inter_26, 0);

    lv_obj_t * lv_label_7 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_7, 14);
    lv_obj_set_y(lv_label_7, 102);
    lv_obj_set_width(lv_label_7, 250);
    lv_label_set_text(lv_label_7, "Device broadcasts for 5 minutes.");
    lv_label_set_long_mode(lv_label_7, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_7, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_7, font_inter_12, 0);

    lv_obj_t * lv_obj_7 = lv_obj_create(lv_obj_6);
    lv_obj_set_x(lv_obj_7, 14);
    lv_obj_set_y(lv_obj_7, 132);
    lv_obj_set_width(lv_obj_7, 272);
    lv_obj_set_height(lv_obj_7, 1);
    lv_obj_set_flag(lv_obj_7, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_7, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_7, COLOR_DIVIDER, 0);
    lv_obj_set_style_bg_opa(lv_obj_7, 255, 0);
    lv_obj_set_style_border_width(lv_obj_7, 0, 0);

    lv_obj_t * lv_label_8 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_8, 14);
    lv_obj_set_y(lv_label_8, 150);
    lv_obj_set_width(lv_label_8, 90);
    lv_label_set_text(lv_label_8, "Status");
    lv_label_set_long_mode(lv_label_8, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_8, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_8, font_inter_11, 0);

    lv_obj_t * pairing_status = lv_label_create(lv_obj_6);
    lv_obj_set_name(pairing_status, "pairing_status");
    lv_obj_set_x(pairing_status, 188);
    lv_obj_set_y(pairing_status, 150);
    lv_obj_set_width(pairing_status, 98);
    lv_label_set_text(pairing_status, "Broadcasting");
    lv_label_set_long_mode(pairing_status, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(pairing_status, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(pairing_status, COLOR_SUCCESS_GREEN, 0);
    lv_obj_set_style_text_font(pairing_status, font_inter_11, 0);

    lv_obj_t * lv_label_9 = lv_label_create(lv_obj_6);
    lv_obj_set_x(lv_label_9, 14);
    lv_obj_set_y(lv_label_9, 176);
    lv_obj_set_width(lv_label_9, 120);
    lv_label_set_text(lv_label_9, "Time remaining");
    lv_label_set_long_mode(lv_label_9, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_9, COLOR_TEXT_SECONDARY, 0);
    lv_obj_set_style_text_font(lv_label_9, font_inter_11, 0);

    lv_obj_t * pairing_timer = lv_label_create(lv_obj_6);
    lv_obj_set_name(pairing_timer, "pairing_timer");
    lv_obj_set_x(pairing_timer, 226);
    lv_obj_set_y(pairing_timer, 176);
    lv_obj_set_width(pairing_timer, 60);
    lv_label_set_text(pairing_timer, "04:59");
    lv_label_set_long_mode(pairing_timer, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(pairing_timer, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(pairing_timer, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(pairing_timer, font_inter_11, 0);

    lv_obj_t * lv_obj_8 = lv_obj_create(lv_obj_6);
    lv_obj_set_x(lv_obj_8, 14);
    lv_obj_set_y(lv_obj_8, 204);
    lv_obj_set_width(lv_obj_8, 272);
    lv_obj_set_height(lv_obj_8, 34);
    lv_obj_set_flag(lv_obj_8, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_8, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_8, COLOR_GL_GREEN_DARK, 0);
    lv_obj_set_style_bg_opa(lv_obj_8, 255, 0);
    lv_obj_set_style_radius(lv_obj_8, 8, 0);
    lv_obj_set_style_border_width(lv_obj_8, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_8, 0, 0);
    lv_obj_t * lv_label_10 = lv_label_create(lv_obj_8);
    lv_obj_set_x(lv_label_10, 0);
    lv_obj_set_y(lv_label_10, 10);
    lv_obj_set_width(lv_label_10, 272);
    lv_label_set_text(lv_label_10, "RESTART PAIRING");
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

