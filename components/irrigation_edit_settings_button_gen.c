/**
 * @file irrigation_edit_settings_button_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "irrigation_edit_settings_button_gen.h"
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

lv_obj_t * irrigation_edit_settings_button_create(lv_obj_t * parent, const char * button_text)
{
    LV_TRACE_OBJ_CREATE("begin");

    lv_obj_t * lv_obj_0 = lv_obj_create(parent);
    lv_obj_set_name_static(lv_obj_0, "irrigation_edit_settings_button_#");
    lv_obj_set_width(lv_obj_0, 470);
    lv_obj_set_height(lv_obj_0, 40);
    lv_obj_set_flag(lv_obj_0, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(lv_obj_0, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_opa(lv_obj_0, 0, 0);
    lv_obj_set_style_radius(lv_obj_0, 0, 0);
    lv_obj_set_style_pad_all(lv_obj_0, 0, 0);
    lv_obj_set_style_border_width(lv_obj_0, 0, 0);

    lv_obj_t * irrigation_edit_settings_btn = lv_button_create(lv_obj_0);
    lv_obj_set_name(irrigation_edit_settings_btn, "irrigation_edit_settings_btn");
    lv_obj_set_x(irrigation_edit_settings_btn, 14);
    lv_obj_set_y(irrigation_edit_settings_btn, 4);
    lv_obj_set_width(irrigation_edit_settings_btn, 452);
    lv_obj_set_height(irrigation_edit_settings_btn, 30);
    lv_obj_set_flag(irrigation_edit_settings_btn, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_scrollbar_mode(irrigation_edit_settings_btn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(irrigation_edit_settings_btn, COLOR_CARD_BG, 0);
    lv_obj_set_style_bg_opa(irrigation_edit_settings_btn, 255, 0);
    lv_obj_set_style_radius(irrigation_edit_settings_btn, 10, 0);
    lv_obj_set_style_border_width(irrigation_edit_settings_btn, 1, 0);
    lv_obj_set_style_border_color(irrigation_edit_settings_btn, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_pad_all(irrigation_edit_settings_btn, 0, 0);
    lv_obj_set_style_shadow_width(irrigation_edit_settings_btn, 0, 0);
    lv_obj_t * irrigation_edit_settings_label = lv_label_create(irrigation_edit_settings_btn);
    lv_obj_set_name(irrigation_edit_settings_label, "irrigation_edit_settings_label");
    lv_obj_set_x(irrigation_edit_settings_label, 0);
    lv_obj_set_y(irrigation_edit_settings_label, 6);
    lv_obj_set_width(irrigation_edit_settings_label, 452);
    lv_label_set_text(irrigation_edit_settings_label, button_text);
    lv_label_set_long_mode(irrigation_edit_settings_label, LV_LABEL_LONG_MODE_CLIP);
    lv_obj_set_style_text_align(irrigation_edit_settings_label, LV_TEXT_ALIGN_CENTER, 0);
    lv_obj_set_style_text_color(irrigation_edit_settings_label, COLOR_STATUS_INFO, 0);
    lv_obj_set_style_text_font(irrigation_edit_settings_label, font_inter_12, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

