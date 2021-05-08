#pragma once
#pragma once


// Default Based on my setting
#define WD12_NOZZLE_TO_PROBE_OFFSET { -46, -6, -1 }

// If BLtouch connect to ZMin connector
//#define WD12_BLTOUCH_ZMAX

#if ! defined(WD12_BLTOUCH_ZMAX)
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#endif

#if defined(WD12_BLTOUCH_ZMAX)
//#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN
#define USE_ZMAX_PLUG
#define Z_MIN_PROBE_PIN PC4
#endif

#define WD12_Z_CLEARANCE_DEPLOY_PROBE 15
#define WD12_MULTIPLE_PROBING 2
#define WD12_EXTRA_PROBING    1
#define WD12_Z_CLEARANCE_BETWEEN_PROBES 7
#define WD12_Z_CLEARANCE_MULTI_PROBE 7
#define WD12_Z_AFTER_PROBING 15
#define WD12_PROBING_NOZZLE_TEMP 170
#define WD12_PROBING_BED_TEMP    80
#define WD12_GRID_MAX_POINTS_X 5
#define WD12_GRID_MAX_POINTS_Y 5

#ifdef WD12_BLTOUCH
#define ENDSTOPPULLUPS
#define BLTOUCH
#define AUTO_BED_LEVELING_BILINEAR
#endif