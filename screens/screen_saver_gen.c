/**
 * @file screen_saver_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_saver_gen.h"
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

lv_obj_t * screen_saver_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_saver_#");
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
    lv_obj_set_height(lv_obj_1, 320);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_1, 0, 0);
    lv_obj_set_style_border_width(lv_obj_1, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_1, 0, 0);
    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_2, 230);
    lv_obj_set_y(lv_obj_2, 58);
    lv_obj_set_width(lv_obj_2, 20);
    lv_obj_set_height(lv_obj_2, 20);
    lv_obj_set_flag(lv_obj_2, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_2, COLOR_GL_GREEN, 0);
    lv_obj_set_style_bg_opa(lv_obj_2, 255, 0);
    lv_obj_set_style_radius(lv_obj_2, 10, 0);
    lv_obj_set_style_border_width(lv_obj_2, 0, 0);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_0, 0);
    lv_obj_set_y(lv_label_0, 88);
    lv_obj_set_width(lv_label_0, 480);
    lv_label_set_text(lv_label_0, "GL TOWERS");
    lv_label_set_long_mode(lv_label_0, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_0, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_0, COLOR_GL_GREEN, 0);
    lv_obj_set_style_text_font(lv_label_0, font_inter_15, 0);

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_1, 170);
    lv_obj_set_y(lv_label_1, 126);
    lv_obj_set_width(lv_label_1, 92);
    lv_label_set_text(lv_label_1, "92");
    lv_label_set_long_mode(lv_label_1, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(lv_label_1, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_1, font_inter_26, 0);

    lv_obj_t * lv_label_2 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_2, 266);
    lv_obj_set_y(lv_label_2, 126);
    lv_obj_set_width(lv_label_2, 36);
    lv_label_set_text(lv_label_2, "%");
    lv_label_set_long_mode(lv_label_2, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(lv_label_2, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_2, font_inter_26, 0);

    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_3, 0);
    lv_obj_set_y(lv_label_3, 196);
    lv_obj_set_width(lv_label_3, 480);
    lv_label_set_text(lv_label_3, "Tank 6.0 L   Pump ON   LED ON");
    lv_label_set_long_mode(lv_label_3, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_3, COLOR_MUTED_GRAY, 0);
    lv_obj_set_style_text_font(lv_label_3, font_inter_14, 0);

    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_1);
    lv_obj_set_x(lv_obj_3, 140);
    lv_obj_set_y(lv_obj_3, 222);
    lv_obj_set_width(lv_obj_3, 200);
    lv_obj_set_height(lv_obj_3, 8);
    lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_3, COLOR_MUTED_GRAY, 0);
    lv_obj_set_style_bg_opa(lv_obj_3, 255, 0);
    lv_obj_set_style_radius(lv_obj_3, 4, 0);
    lv_obj_set_style_border_width(lv_obj_3, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_3, 0, 0);
    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_x(lv_obj_4, 0);
    lv_obj_set_y(lv_obj_4, 0);
    lv_obj_set_width(lv_obj_4, 184);
    lv_obj_set_height(lv_obj_4, 8);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_4, COLOR_GL_GREEN, 0);
    lv_obj_set_style_bg_opa(lv_obj_4, 255, 0);
    lv_obj_set_style_radius(lv_obj_4, 4, 0);
    lv_obj_set_style_border_width(lv_obj_4, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_4, 0, 0);

    lv_obj_t * lv_label_4 = lv_label_create(lv_obj_1);
    lv_obj_set_x(lv_label_4, 0);
    lv_obj_set_y(lv_label_4, 248);
    lv_obj_set_width(lv_label_4, 480);
    lv_label_set_text(lv_label_4, "13:20");
    lv_label_set_long_mode(lv_label_4, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(lv_label_4, COLOR_WHITE, 0);
    lv_obj_set_style_text_font(lv_label_4, font_inter_26, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

