#ifndef GL_TOWERS_UI_CONTRACT_H
#define GL_TOWERS_UI_CONTRACT_H

#include <stdbool.h>
#include <stdint.h>

typedef struct {
    float ph;
    float ec;
    float water_temp_c;
    float air_temp_c;
    float humidity_pct;
    float tank_liters;
    float tank_percent;

    bool pump_on;
    bool irrigation_enabled;
    bool led_on;

    uint8_t led_intensity;
    uint16_t pump_on_seconds;
    uint16_t pump_pause_minutes;

    bool wifi_connected;
    int8_t wifi_rssi;
} gl_towers_ui_state_t;

typedef enum {
    UI_CMD_SET_PUMP_ENABLED,
    UI_CMD_SET_IRRIGATION_WINDOW,
    UI_CMD_SET_LED_ENABLED,
    UI_CMD_SET_LED_INTENSITY,
    UI_CMD_START_PH_CALIBRATION,
    UI_CMD_START_EC_CALIBRATION,
    UI_CMD_CHANGE_WIFI,
    UI_CMD_START_OTA_UPDATE
} gl_towers_ui_command_t;

const gl_towers_ui_state_t *gl_towers_mock_state_get(void);
void gl_towers_mock_state_tick(void);

#endif
