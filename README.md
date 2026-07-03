# GL-Towers LVGL Pro UI

This project contains the LVGL Pro UI scaffold for the GL-Towers embedded display.

## Structure

- `globals.xml` defines the GL-Towers design system: colors and shared styles.
- `components/` contains reusable visual blocks such as metric cards, pump cards, settings rows, and calibration panels.
- `widgets/` contains lower-level controls or special drawing elements.
- `screens/` contains full application pages and production secondary flows.
- `src/` contains the firmware/UI contract and mock state provider.
- `fonts/` and `images/` hold UI assets.

## Architecture Rule

Use screens for page layout, components for repeated visual patterns, widgets for specialized controls, and `globals.xml` for shared design tokens.

The first-pass demo uses mock data:

- pH: `6.1`
- EC: `1.6`
- Water temp: `22.2 C`
- Tank: `92%`
- Pump: `ON`
- LED: `ON`
- Wi-Fi: `Connected`

## Firmware Contract

The UI state contract lives in `src/gl_towers_ui_contract.h`.

The mock provider lives in `src/gl_towers_mock_state.c` and is included through `user_config.cmake`.

This lets the UI and firmware evolve independently while the visual demo stays alive early.
