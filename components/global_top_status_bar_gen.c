/**
 * @file global_top_status_bar_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "global_top_status_bar_gen.h"
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

lv_obj_t * global_top_status_bar_create(lv_obj_t * parent, const char * bar_title, const char * bar_time, const char * bar_wifi)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "global_top_status_bar_#");
    lv_obj_set_width(lv_obj_0, 480);
    lv_obj_set_height(lv_obj_0, 44);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(lv_obj_0, COLOR_APP_BG, 0);
    lv_obj_set_style_bg_opa(lv_obj_0, 255, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);

    lv_obj_t * status_title = lv_label_create(lv_obj_0);
    lv_obj_set_name(status_title, "status_title");
    lv_obj_set_x(status_title, 10);
    lv_obj_set_y(status_title, 13);
    lv_obj_set_width(status_title, 170);
    lv_label_set_text(status_title, bar_title);
    lv_label_set_long_mode(status_title, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_color(status_title, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(status_title, font_inter_14, 0);

    lv_obj_t * status_time = lv_label_create(lv_obj_0);
    lv_obj_set_name(status_time, "status_time");
    lv_obj_set_x(status_time, 410);
    lv_obj_set_y(status_time, 10);
    lv_obj_set_width(status_time, 62);
    lv_label_set_text(status_time, bar_time);
    lv_label_set_long_mode(status_time, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(status_time, LV_TEXT_ALIGN_RIGHT, 0);
    lv_obj_set_style_text_color(status_time, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_text_font(status_time, font_inter_12, 0);

    lv_obj_t * home_pump_icon = lv_image_create(lv_obj_0);
    lv_obj_set_name(home_pump_icon, "home_pump_icon");
    lv_obj_set_x(home_pump_icon, 415);
    lv_obj_set_y(home_pump_icon, 8);
    lv_obj_set_width(home_pump_icon, 18);
    lv_obj_set_height(home_pump_icon, 18);
    lv_image_set_src(home_pump_icon, img_top_status_bar_no_wifi);
    lv_obj_set_flag(home_pump_icon, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(home_pump_icon, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_image_recolor(home_pump_icon, COLOR_TEXT_PRIMARY, 0);
    lv_obj_set_style_image_recolor_opa(home_pump_icon, 255, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

