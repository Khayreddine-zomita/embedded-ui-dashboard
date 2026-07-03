/**
 * @file screen_led_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_led_gen.h"
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

lv_obj_t * screen_led_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_led_#");
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

    lv_obj_t * led_schedule_card_0 = led_schedule_card_create(lv_obj_0, "06:00 - 22:00", "16 h", "65%", "Status: ACTIVE");
    lv_obj_set_x(led_schedule_card_0, 8);
    lv_obj_set_y(led_schedule_card_0, 52);

    lv_obj_t * led_preset_card_0 = led_preset_card_create(lv_obj_0, "95", 65, COLOR_CARD_BG, COLOR_TEXT_PRIMARY, COLOR_PRIMARY_GREEN, COLOR_WHITE, COLOR_CARD_BG, COLOR_TEXT_PRIMARY, COLOR_CARD_BG, COLOR_TEXT_PRIMARY, COLOR_CARD_BG, COLOR_TEXT_PRIMARY);
    lv_obj_set_x(led_preset_card_0, 244);
    lv_obj_set_y(led_preset_card_0, 52);

    lv_obj_t * led_edit_settings_button_card_0 = led_edit_settings_button_card_create(lv_obj_0, "EDIT LED SETTINGS");
    lv_obj_set_x(led_edit_settings_button_card_0, 8);
    lv_obj_set_y(led_edit_settings_button_card_0, 222);

    lv_obj_t * global_bottom_nav_0 = global_bottom_nav_create(lv_obj_0, COLOR_DARK_FOREST, COLOR_DARK_FOREST, COLOR_DARK_FOREST, COLOR_STATUS_HEALTHY, COLOR_DARK_FOREST);
    lv_obj_set_x(global_bottom_nav_0, 0);
    lv_obj_set_y(global_bottom_nav_0, 280);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

