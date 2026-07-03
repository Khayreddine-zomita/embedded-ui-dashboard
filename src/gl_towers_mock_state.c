#include "gl_towers_ui_contract.h"

static gl_towers_ui_state_t mock_state = {
    .ph = 6.1f,
    .ec = 1.6f,
    .water_temp_c = 22.2f,
    .air_temp_c = 22.8f,
    .humidity_pct = 71.0f,
    .tank_liters = 6.0f,
    .tank_percent = 92.0f,
    .pump_on = true,
    .irrigation_enabled = true,
    .led_on = true,
    .led_intensity = 80,
    .pump_on_seconds = 60,
    .pump_pause_minutes = 90,
    .wifi_connected = true,
    .wifi_rssi = -48,
};

const gl_towers_ui_state_t *gl_towers_mock_state_get(void)
{
    return &mock_state;
}

void gl_towers_mock_state_tick(void)
{
    mock_state.ph += 0.01f;
    if (mock_state.ph > 6.4f) {
        mock_state.ph = 6.1f;
    }

    mock_state.water_temp_c += 0.02f;
    if (mock_state.water_temp_c > 22.6f) {
        mock_state.water_temp_c = 22.2f;
    }
}
