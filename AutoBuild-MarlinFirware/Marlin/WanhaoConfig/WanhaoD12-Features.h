#pragma once

/**
 * Skew Compensation
 */
#ifdef WD12_SKEW_COMPENSATION
#define SKEW_CORRECTION
#define SKEW_CORRECTION_FOR_Z
#define SKEW_CORRECTION_GCODE

#define WD12_XY_DIAG_AC 282.8427124746
#define WD12_XY_DIAG_BD 282.8427124746
#define WD12_XZ_DIAG_AC 282.8427124746
#define WD12_XZ_DIAG_BD 282.8427124746
#define WD12_YZ_DIAG_AC 282.8427124746
#define WD12_YZ_DIAG_BD 282.8427124746

#define WD12_XY_SIDE_AD 200
#define WD12_YZ_SIDE_AD 200

#define WD12_XY_SKEW_FACTOR 0.0
#define WD12_XZ_SKEW_FACTOR 0.0
#define WD12_YZ_SKEW_FACTOR 0.0
#endif

/**
 * Clean Nozzle
 */
#ifdef WD12_CLEAN_NOZZLE
#define NOZZLE_CLEAN_FEATURE
#define WD12_NOZZLE_CLEAN_STROKES 12
#define WD12_NOZZLE_CLEAN_TRIANGLES 3
#define WD12_NOZZLE_CLEAN_CIRCLE_RADIUS 4
#define WD12_NOZZLE_CLEAN_CIRCLE_FN 10
#define WD12_NOZZLE_CLEAN_MIN_TEMP 185
#endif

/**
 * Gcode Macros
 */
#ifdef WD12_GCODE_MACROS
#define GCODE_MACROS
#define WD12_GCODE_MACROS_SLOTS       5  // Up to 10 may be used
#define WD12_GCODE_MACROS_SLOT_SIZE  50  // Maximum length of a single macro
#endif

/**
 * Custom Menus
 */
#ifdef WD12_CUSTOM_USER_MENUS
// TODO : Migrate This to Marlin 2.0.8
#define WD12_CUSTOM_USER_MENU_TITLE "Custom WD12 Commands"
#define WD12_USER_SCRIPT_DONE "M117 User Script Done"

#ifdef WD12_MATERIALS
#define USER_CMD_1_ENABLE
#define WD12_USER_DESC_1 WD12_PREHEAT_1_LABEL                         //PLA
#define WD12_USER_GCODE_1 "M140 S" STRINGIFY(WD12_PREHEAT_1_TEMP_BED) "\nM104 S" STRINGIFY(WD12_PREHEAT_1_TEMP_HOTEND)

#define USER_CMD_2_ENABLE
#define WD12_USER_DESC_2 WD12_PREHEAT_2_LABEL                         //ABS
#define WD12_USER_GCODE_2 "M140 S" STRINGIFY(WD12_PREHEAT_2_TEMP_BED) "\nM104 S" STRINGIFY(WD12_PREHEAT_2_TEMP_HOTEND)
#endif
#endif