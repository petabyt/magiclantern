static struct mpu_init_spell mpu_init_spells_6D[] = {
    { { 0x06, 0x04, 0x02, 0x00, 0x00 }, .description = "Init", .out_spells = { /* spell #1 */
        { 0x50, 0x4e, 0x02, 0x0e, 0x03, 0x03, 0x03, 0x01, 0x03, 0x01, 0x00, 0x48, 0x00, 0x00, 0x00, 0x19, 0x64, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x06, 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x10, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x00, 0x78, 0x48, 0x70, 0x48, 0x70, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01 },/* reply #1.1, Mode group */
        { 0x06, 0x05, 0x01, 0x4f, 0x00, 0x00 },                 /* reply #1.2, PROP_FIXED_MOVIE */
     /* race condition? */
     // { 0x24, 0x23, 0x02, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.3, Card group */
        { 0x28, 0x27, 0x02, 0x0f, 0x01, 0x01, 0x00, 0x10, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00 },/* reply #1.4, Movie group */
        { 0x3c, 0x3a, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x02, 0x01, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x01, 0x05, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x03, 0x00 },/* reply #1.5, AF group */
        { 0x3e, 0x3c, 0x02, 0x11, 0x00, 0x4a, 0x00, 0x00, 0x4a, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x30, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00 },/* reply #1.6, AF2 group */
        { 0x0a, 0x08, 0x01, 0x6e, 0x78, 0x48, 0x00, 0x00, 0x00 },/* reply #1.7, PROP_ISO_RANGE */
        { 0x08, 0x06, 0x01, 0x0b, 0x00, 0x00, 0x00 },           /* reply #1.8, PROP_AEB */
        { 0x06, 0x05, 0x01, 0x76, 0x00, 0x00 },                 /* reply #1.9, PROP_SILENT_CONTROL_SETTING */
        { 0x06, 0x05, 0x01, 0x71, 0x00, 0x00 },                 /* reply #1.10, PROP_AF_METHOD_SELECT_FOCUS_AREA */
        { 0x06, 0x05, 0x01, 0x7e, 0x00, 0x00 },                 /* reply #1.11, PROP_GPS_COMPAS_SELECT */
        { 0x06, 0x05, 0x01, 0x7c, 0x01, 0x00 },                 /* reply #1.12, PROP_GPS_AUTO_TIME_SETTING */
        { 0x0a, 0x08, 0x01, 0x85, 0x00, 0x00, 0x00, 0x01, 0x00 },/* reply #1.13, PROP_GIS_SETTING */
        { 0x08, 0x06, 0x01, 0x47, 0x0a, 0x02, 0x00 },           /* reply #1.14, PROP_SELFTIMER_CONTINUOUS_NUM */
        { 0x06, 0x05, 0x01, 0x7b, 0x00, 0x00 },                 /* reply #1.15, PROP_CONTINUOUS_AF */
        { 0x08, 0x06, 0x01, 0x57, 0x00, 0x00, 0x00 },           /* reply #1.16, PROP_BUILTIN_STROBO_MODE */
        { 0x06, 0x05, 0x01, 0x86, 0x00, 0x00 },                 /* reply #1.17, PROP 8004004A */
        { 0x06, 0x05, 0x01, 0x87, 0x00, 0x00 },                 /* reply #1.18, PROP 8004004B */
        { 0x06, 0x05, 0x01, 0x89, 0x00, 0x00 },                 /* reply #1.19, PROP_GPS_DEVICE_ACTIVE */
        { 0x06, 0x05, 0x01, 0x8d, 0x00, 0x00 },                 /* reply #1.20, PROP 80040050 */
        { 0x06, 0x05, 0x01, 0x8e, 0x00, 0x00 },                 /* reply #1.21, PROP_GPSLOG_SETTING */
        { 0x10, 0x0e, 0x01, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.22, PROP_LV_CFILTER */
        { 0x06, 0x05, 0x01, 0x90, 0x00, 0x00 },                 /* reply #1.23, PROP_WIFI_SETTING */
        { 0x06, 0x05, 0x01, 0x8b, 0x00, 0x00 },                 /* reply #1.24, PROP 8004004E */
        { 0x08, 0x06, 0x01, 0x91, 0x00, 0x1e, 0x00 },           /* reply #1.25, PROP_BUILTINGPS_PINPOINTING_INTERVAL_SETTING */
        { 0x06, 0x05, 0x01, 0x98, 0x00, 0x00 },                 /* reply #1.26, PROP 80040056 */
        { 0x06, 0x05, 0x01, 0x92, 0x00, 0x00 },                 /* reply #1.27, PROP_IMAGE_ASPECT_RATIO */
        { 0x10, 0x0e, 0x02, 0x05, 0x07, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0x05, 0x03, 0x00 },/* reply #1.28, PROP_CFN_1 */
        { 0x20, 0x1f, 0x02, 0x07, 0x0a, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x11, 0x09, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00 },/* reply #1.29, PROP_CFN_3 */
        { 0x22, 0x21, 0x02, 0x08, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x14, 0x05, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x02, 0x00 },/* reply #1.30, PROP_CFN_4 */
        { 0x20, 0x1f, 0x02, 0x07, 0x0a, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x11, 0x09, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00 },/* reply #1.31, PROP_CFN_3 */
        { 0x06, 0x05, 0x03, 0x37, 0x00, 0x00 },                 /* reply #1.32, PROP_MIRROR_DOWN_IN_MOVIE_MODE */
        { 0x0a, 0x08, 0x03, 0x2f, 0x00, 0x60, 0x00, 0x00, 0x00 },/* reply #1.33, PROP_SPECIAL_OPTION */
        { 0x0a, 0x08, 0x03, 0x2f, 0x00, 0x60, 0x00, 0x00, 0x00 },/* reply #1.34, PROP_SPECIAL_OPTION */
        { 0x06, 0x05, 0x03, 0x20, 0x01, 0x00 },                 /* reply #1.35, PROP_STARTUP_CONDITION */
        { 0x0c, 0x0b, 0x03, 0x42, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.36, PROP_LED_LIGHT */
        { 0x06, 0x05, 0x01, 0x48, 0x01, 0x00 },                 /* reply #1.37, PROP_LIVE_VIEW_MOVIE_SELECT */
        { 0x0a, 0x08, 0x01, 0x85, 0x00, 0x00, 0x00, 0x01, 0x00 },/* reply #1.38, PROP_GIS_SETTING */
        { 0x24, 0x23, 0x02, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.39, Card group */
        { 0x28, 0x27, 0x02, 0x0f, 0x01, 0x01, 0x00, 0x10, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00 },/* reply #1.40, Movie group */
        { 0x3c, 0x3a, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x02, 0x01, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x01, 0x05, 0x00, 0x01, 0x01, 0x00, 0x01, 0x00, 0x00, 0x03, 0x00 },/* reply #1.41, AF group */
        { 0x3e, 0x3c, 0x02, 0x11, 0x00, 0x4a, 0x00, 0x00, 0x4a, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x30, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00 },/* reply #1.42, AF2 group */
        { 0x0a, 0x08, 0x01, 0x6e, 0x78, 0x48, 0x00, 0x00, 0x00 },/* reply #1.43, PROP_ISO_RANGE */
        { 0x08, 0x06, 0x01, 0x0b, 0x00, 0x00, 0x00 },           /* reply #1.44, PROP_AEB */
        { 0x06, 0x05, 0x01, 0x76, 0x00, 0x00 },                 /* reply #1.45, PROP_SILENT_CONTROL_SETTING */
        { 0x06, 0x05, 0x01, 0x71, 0x00, 0x00 },                 /* reply #1.46, PROP_AF_METHOD_SELECT_FOCUS_AREA */
        { 0x06, 0x05, 0x01, 0x7e, 0x00, 0x00 },                 /* reply #1.47, PROP_GPS_COMPAS_SELECT */
        { 0x06, 0x05, 0x01, 0x7c, 0x01, 0x00 },                 /* reply #1.48, PROP_GPS_AUTO_TIME_SETTING */
        { 0x0a, 0x08, 0x01, 0x85, 0x00, 0x00, 0x00, 0x01, 0x00 },/* reply #1.49, PROP_GIS_SETTING */
        { 0x08, 0x06, 0x01, 0x47, 0x0a, 0x02, 0x00 },           /* reply #1.50, PROP_SELFTIMER_CONTINUOUS_NUM */
        { 0x06, 0x05, 0x01, 0x7b, 0x00, 0x00 },                 /* reply #1.51, PROP_CONTINUOUS_AF */
        { 0x08, 0x06, 0x01, 0x57, 0x00, 0x00, 0x00 },           /* reply #1.52, PROP_BUILTIN_STROBO_MODE */
        { 0x06, 0x05, 0x01, 0x86, 0x00, 0x00 },                 /* reply #1.53, PROP 8004004A */
        { 0x06, 0x05, 0x01, 0x87, 0x00, 0x00 },                 /* reply #1.54, PROP 8004004B */
        { 0x06, 0x05, 0x01, 0x89, 0x00, 0x00 },                 /* reply #1.55, PROP_GPS_DEVICE_ACTIVE */
        { 0x06, 0x05, 0x01, 0x8d, 0x00, 0x00 },                 /* reply #1.56, PROP 80040050 */
        { 0x06, 0x05, 0x01, 0x8e, 0x00, 0x00 },                 /* reply #1.57, PROP_GPSLOG_SETTING */
        { 0x10, 0x0e, 0x01, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.58, PROP_LV_CFILTER */
        { 0x06, 0x05, 0x01, 0x90, 0x00, 0x00 },                 /* reply #1.59, PROP_WIFI_SETTING */
        { 0x06, 0x05, 0x01, 0x8b, 0x00, 0x00 },                 /* reply #1.60, PROP 8004004E */
        { 0x08, 0x06, 0x01, 0x91, 0x00, 0x1e, 0x00 },           /* reply #1.61, PROP_BUILTINGPS_PINPOINTING_INTERVAL_SETTING */
        { 0x06, 0x05, 0x01, 0x98, 0x00, 0x00 },                 /* reply #1.62, PROP 80040056 */
        { 0x06, 0x05, 0x01, 0x92, 0x00, 0x00 },                 /* reply #1.63, PROP_IMAGE_ASPECT_RATIO */
        { 0x10, 0x0e, 0x02, 0x05, 0x07, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0x05, 0x03, 0x00 },/* reply #1.64, PROP_CFN_1 */
        { 0x20, 0x1f, 0x02, 0x07, 0x0a, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x11, 0x09, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00 },/* reply #1.65, PROP_CFN_3 */
        { 0x22, 0x21, 0x02, 0x08, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x14, 0x05, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x02, 0x00 },/* reply #1.66, PROP_CFN_4 */
        { 0x20, 0x1f, 0x02, 0x07, 0x0a, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x11, 0x09, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00 },/* reply #1.67, PROP_CFN_3 */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x02, 0x0e, 0x00 }, .description = "Complete WaitID = 0x80000001 Mode group", .out_spells = { /* spell #2 */
        { 0x0a, 0x09, 0x01, 0x55, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01 },/* reply #2.1, PROP_MULTIPLE_EXPOSURE_SETTING */
        { 0x62, 0x61, 0x02, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x65, 0x65, 0x65, 0x55, 0x3c, 0x55, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #2.2, Lens group */
        { 0x06, 0x05, 0x03, 0x35, 0x01, 0x00 },                 /* reply #2.3, PROP_BATTERY_REPORT_COUNTER */
        { 0x1c, 0x1b, 0x03, 0x1d, 0x45, 0x03, 0x00, 0x00, 0x00, 0x35, 0x00, 0x4c, 0x50, 0x2d, 0x45, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0xcb, 0x8b, 0x41, 0x00 },/* reply #2.4, PROP_BATTERY_REPORT */
        { 0x06, 0x04, 0x03, 0x36, 0x00 },                       /* reply #2.5, PROP_BATTERY_REPORT_FINISHED */
        { 0x06, 0x05, 0x03, 0x05, 0x04, 0x00 },                 /* reply #2.6, PROP_POWER_LEVEL */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x01, 0x55, 0x00 }, .description = "Complete WaitID = 0x8000003F PROP_MULTIPLE_EXPOSURE_SETTING", .out_spells = { /* spell #3 */
        { 0x0a, 0x09, 0x01, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 },/* reply #3.1, PROP_HDR_SETTING */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x01, 0x70, 0x00 }, .description = "Complete WaitID = 0x80000045 PROP_HDR_SETTING", .out_spells = { /* spell #4 */
        { 0x06, 0x05, 0x01, 0x97, 0x00, 0x01 },                 /* reply #4.1, PROP 8003006F */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x01, 0x97, 0x00 }, .description = "Complete WaitID = 0x8003006F PROP 8003006F", .out_spells = { /* spell #5 */
     // { 0x50, 0x4e, 0x02, 0x0e, 0x03, 0x03, 0x03, 0x01, 0x03, 0x01, 0x00, 0x48, 0x00, 0x00, 0x00, 0x19, 0x64, 0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x06, 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x10, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x00, 0x78, 0x48, 0x70, 0x48, 0x70, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01 },/* reply #5.1, Mode group, mode switch? */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x02, 0x0e, 0x00 }, .description = "Complete WaitID = 0x80000001 Mode group", .out_spells = { /* spell #6 */
        { 0 } } },
    { { 0x08, 0x07, 0x03, 0x6a, 0x00, 0x0a, 0x00, 0x00 }, {     /* spell #7 */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP_AVAIL_SHOT", .out_spells = { /* spell #8 */
        { 0 } } },
    { { 0x06, 0x04, 0x03, 0x10, 0x00 }, .description = "PROP 80030008", .out_spells = { /* spell #9 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x07, 0xff, 0x00 }, .description = "PROP_BURST_COUNT", .out_spells = { /* spell #10 */
        { 0 } } },
    { { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 }, .description = "PROP_SAVE_MODE", .out_spells = { /* spell #11 */
        { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 },                 /* reply #11.1, PROP_SAVE_MODE */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP 80030007", .out_spells = { /* spell #12 */
        { 0 } } },
    { { 0x08, 0x07, 0x01, 0x2a, ARG0, ARG1, 0x00, ARG2 }, .description = "PROP_CARD2_FILE_NUMBER", .out_spells = { /* spell #13 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x07, 0x0e, 0x00 }, .description = "PROP_BURST_COUNT", .out_spells = { /* spell #14 */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x06, 0x00, 0x00, 0x04, 0xd1, 0x00 }, .description = "PROP_AVAIL_SHOT", .out_spells = { /* spell #15 */
        { 0 } } },
    { { 0x06, 0x05, 0x04, 0x0e, 0x00, 0x00 }, .description = "PROP 8002000D", .out_spells = { /* spell #16 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x11, 0x01, 0x00 }, .description = "PROP_ICU_AUTO_POWEROFF", .out_spells = { /* spell #17 */
        { 0 } } },
    { { 0x06, 0x05, 0x02, 0x0a, 0x00, 0x00 }, .description = "PROP_PERMIT_ICU_EVENT", .out_spells = { /* spell #18 */
        { 0x06, 0x05, 0x01, 0x2c, 0x02, 0x00 },                 /* reply #18.1, PROP_CURRENT_MEDIA */
        { 0x12, 0x10, 0x03, 0x00, 0x7d, 0x00, 0x00, 0x1f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #18.2, PROP 80030000 */
        { 0x06, 0x05, 0x03, 0x23, 0x01, 0x00 },                 /* reply #18.3 */
        { 0x06, 0x05, 0x03, 0x65, 0x00, 0x00 },                 /* reply #18.4, PROP_GPSLOG_RESULT */
        { 0x06, 0x05, 0x03, 0x04, 0x00, 0x00 },                 /* reply #18.5, PROP_POWER_KIND */
        { 0x06, 0x05, 0x03, 0x24, 0x00, 0x00 },                 /* reply #18.6, PROP_LENS_NAME:  */
        { 0x06, 0x04, 0x03, 0x25, 0x00 },                       /* reply #18.7 */
        { 0x24, 0x23, 0x03, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #18.8, PROP_LENS */
        { 0x24, 0x22, 0x03, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #18.9, PROP 8003003C */
        { 0x06, 0x05, 0x03, 0x17, 0x95, 0x00 },                 /* reply #18.10, PROP_EFIC_TEMP */
        { 0x24, 0x23, 0x03, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #18.11, PROP_LENS */
        { 0x06, 0x05, 0x01, 0x3d, 0x00, 0x00 },                 /* reply #18.12, PROP_TEMP_STATUS */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x0d, 0x00, 0x00 }, .description = "PROP_CARD2_RECORD", .out_spells = { /* spell #19 */
        { 0x06, 0x05, 0x03, 0x0d, 0x00, 0x00 },                 /* reply #19.1, PROP_CARD2_RECORD */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 }, .description = "PROP_CARD1_RECORD", .out_spells = { /* spell #20 */
        { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 },                 /* reply #20.1, PROP_CARD1_RECORD */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x40, 0x00, 0x00 }, .description = "PROP 80030040", .out_spells = { /* spell #21 */
        { 0 } } },
    { { 0x0c, 0x0b, 0x03, 0x53, 0x02, 0x00, 0x48, 0x81, 0x81, 0x00, 0x00, 0x00 }, .description = "PROP 80030058", .out_spells = { /* spell #22 */
        { 0 } } },
    { { 0x0c, 0x0b, 0x03, 0x53, 0x02, 0x00, 0x48, 0x81, 0x81, 0x00, 0x00, 0x00 }, .description = "PROP 80030058", .out_spells = { /* spell #23 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #24 */
        { 0 } } },
    { { 0x06, 0x05, 0x09, 0x11, 0x01, 0x00 }, .description = "PROP_LV_DISPSIZE", .out_spells = { /* spell #25 */
        { 0 } } },
    { { 0x12, 0x11, 0x09, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP 80050020", .out_spells = { /* spell #26 */
        { 0x06, 0x05, 0x03, 0x38, 0x97, 0x00 },                 /* reply #26.1, PROP 80030035 */
        { 0 } } },
    { { 0x14, 0x13, 0x09, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, {/* spell #27 */
        { 0 } } },
    { { 0x06, 0x05, 0x01, 0x5a, 0x00, 0x00 }, .description = "PROP_CONTINUOUS_AF_VALID", .out_spells = { /* spell #28 */
        { 0x06, 0x05, 0x01, 0x59, 0x00, 0x00 },                 /* reply #28.1, PROP_MOVIE_SERVO_AF */
        { 0 } } },
    { { 0x14, 0x13, 0x09, 0x25, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, {/* spell #29 */
        { 0 } } },
    { { 0x26, 0x24, 0x09, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP_LV_FOCUS_DATA", .out_spells = { /* spell #30 */
        { 0 } } },
    { { 0x0a, 0x08, 0x09, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP 8005002A", .out_spells = { /* spell #31 */
        { 0 } } },
    { { 0x0a, 0x08, 0x09, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00 }, {/* spell #32 */
        { 0 } } },
    { { 0x08, 0x06, 0x03, 0x18, 0x00, 0x00, 0x00 }, .description = "PROP 8003000F", .out_spells = { /* spell #33 */
        { 0x06, 0x05, 0x01, 0x58, 0x00, 0x00 },                 /* reply #33.1, PROP_VIDEOSNAP_MODE */
        { 0 } } },
    { { 0x08, 0x06, 0x03, 0x1f, 0x00, 0x00, 0x00 }, .description = "PROP 80030019", .out_spells = { /* spell #34 */
        { 0 } } },
    { { 0x08, 0x06, 0x04, 0x24, 0x00, 0x00, 0x00 }, {           /* spell #35 */
        { 0x06, 0x05, 0x01, 0x58, 0x00, 0x00 },                 /* reply #35.1, PROP_VIDEOSNAP_MODE */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x13, 0x00, 0x00 }, .description = "PROP_LOGICAL_CONNECT", .out_spells = { /* spell #36 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x1e, 0x00, 0x00 }, .description = "PROP 8003001A", .out_spells = { /* spell #37 */
        { 0 } } },
    { { 0x06, 0x05, 0x04, 0x23, 0x00, 0x00 }, {                 /* spell #38 */
        { 0 } } },
    { { 0x0a, 0x08, 0x01, 0x3b, 0xff, 0xff, 0x00, 0x00, 0x00 }, .description = "PROP_USBDEVICE_CONNECT", .out_spells = { /* spell #39 */
        { 0 } } },
    { { 0x0a, 0x08, 0x01, 0x3b, 0xff, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP_USBDEVICE_CONNECT", .out_spells = { /* spell #40 */
        { 0 } } },
    { { 0x0a, 0x08, 0x01, 0x3b, 0xff, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP_USBDEVICE_CONNECT", .out_spells = { /* spell #41 */
        { 0 } } },
    { { 0x06, 0x05, 0x01, 0x8a, 0x00, 0x00 }, .description = "PROP_SW2_MOVIE_START", .out_spells = { /* spell #42 */
        { 0x06, 0x05, 0x01, 0x8a, 0x00, 0x00 },                 /* reply #42.1, PROP_SW2_MOVIE_START */
        { 0 } } },
    { { 0x08, 0x06, 0x03, 0x1f, 0x00, 0x00, 0x00 }, .description = "PROP 80030019", .out_spells = { /* spell #43 */
        { 0 } } },
    { { 0x0a, 0x08, 0x01, 0x3b, 0xff, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP_USBDEVICE_CONNECT", .out_spells = { /* spell #44 */
        { 0 } } },
    { { 0x08, 0x07, 0x03, 0x68, 0x00, 0x00, 0x00, 0x00 }, {     /* spell #45 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x69, 0x00, 0x00 }, {                 /* spell #46 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x69, 0x00, 0x00 }, {                 /* spell #47 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x69, 0x00, 0x00 }, {                 /* spell #48 */
        { 0 } } },
    { { 0x08, 0x07, 0x01, 0x2a, ARG0, ARG1, 0x00, ARG2 }, .description = "PROP_CARD2_FILE_NUMBER", .out_spells = { /* spell #49 */
        { 0 } } },
    { { 0x08, 0x07, 0x01, 0x2a, ARG0, ARG1, 0x00, ARG2 }, .description = "PROP_CARD2_FILE_NUMBER", .out_spells = { /* spell #50 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #51 */
        { 0 } } },
    { { 0x1e, 0x1c, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00 }, .description = "PROP_VIDEO_MODE", .out_spells = { /* spell #52 */
        { 0x1e, 0x1c, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00 },/* reply #52.1, PROP_VIDEO_MODE */
        { 0x06, 0x05, 0x01, 0x53, 0x00, 0x00 },                 /* reply #52.2, PROP_AF_DURING_RECORD */
        { 0x06, 0x05, 0x01, 0x58, 0x00, 0x00 },                 /* reply #52.3, PROP_VIDEOSNAP_MODE */
        { 0x06, 0x05, 0x01, 0x59, 0x00, 0x00 },                 /* reply #52.4, PROP_MOVIE_SERVO_AF */
        { 0x06, 0x05, 0x01, 0x49, 0x01, 0x00 },                 /* reply #52.5, PROP_LIVE_VIEW_AF_SYSTEM */
        { 0 } } },
    { { 0x1e, 0x1c, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00 }, .description = "PROP_VIDEO_MODE", .out_spells = { /* spell #53 */
        { 0x1e, 0x1c, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00 },/* reply #53.1, PROP_VIDEO_MODE */
        { 0x06, 0x05, 0x01, 0x53, 0x00, 0x00 },                 /* reply #53.2, PROP_AF_DURING_RECORD */
        { 0x06, 0x05, 0x01, 0x58, 0x00, 0x00 },                 /* reply #53.3, PROP_VIDEOSNAP_MODE */
        { 0x06, 0x05, 0x01, 0x59, 0x00, 0x00 },                 /* reply #53.4, PROP_MOVIE_SERVO_AF */
        { 0x06, 0x05, 0x01, 0x49, 0x01, 0x00 },                 /* reply #53.5, PROP_LIVE_VIEW_AF_SYSTEM */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #54 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #55 */
        { 0 } } },
    { { 0x06, 0x05, 0x02, 0x0a, 0x01, 0x00 }, .description = "PROP_PERMIT_ICU_EVENT", .out_spells = { /* spell #56 */
        { 0x06, 0x05, 0x06, 0x11, 0x01, 0x00 },                 /* reply #56.1, GUI_Control:92, bindReceiveSwitch(17, 1) */
        { 0x06, 0x05, 0x06, 0x12, 0x00, 0x00 },                 /* reply #56.2, GUI_Control:94, bindReceiveSwitch(18, 0) */
        { 0x06, 0x05, 0x06, 0x13, 0x00, 0x00 },                 /* reply #56.3, bindReceiveSwitch(19, 0) */
        { 0x06, 0x05, 0x06, 0x22, 0x00, 0x00 },                 /* reply #56.4, bindReceiveSwitch(34, 0) */
        { 0x46, 0x45, 0x0a, 0x08, 0xff, 0x1f, 0x01, 0x00, 0x01, 0x01, 0x98, 0x10, 0x00, 0x10, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x48, 0x04, 0x01, 0x04, 0xd1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #56.5, PD_NotifyOlcInfoChanged */
        { 0x08, 0x06, 0x01, 0x04, 0x03, 0x01, 0x00 },           /* reply #56.6, PROP_AF_MODE */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x1d, 0x1f, 0x00 }, .description = "PROP_BATTERY_REPORT", .out_spells = { /* spell #57 */
        { 0x06, 0x05, 0x03, 0x35, 0x01, 0x00 },                 /* reply #57.1, PROP_BATTERY_REPORT_COUNTER */
        { 0x1c, 0x1b, 0x03, 0x1d, 0x45, 0x03, 0x00, 0x00, 0x00, 0x35, 0x00, 0x4c, 0x50, 0x2d, 0x45, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0xcb, 0x8b, 0x41, 0x00 },/* reply #57.2, PROP_BATTERY_REPORT */
        { 0x06, 0x04, 0x03, 0x36, 0x00 },                       /* reply #57.3, PROP_BATTERY_REPORT_FINISHED */
        { 0 } } },
 // { { 0x06, 0x05, 0x03, 0x16, 0x06, 0x00 }, .description = "PROP_BATTERY_CHECK", .out_spells = { 
     // { 0x06, 0x05, 0x03, 0x16, 0x00, 0x00 },                 /* reply #58.1, PROP_BATTERY_CHECK */
     // { 0 } } },
    { { 0x06, 0x05, 0x04, 0x0d, 0x01, 0x00 }, .description = "PROP_ACTIVE_SWEEP_STATUS", .out_spells = { /* spell #58 */
        { 0x06, 0x05, 0x04, 0x0d, 0x00, 0x00 },                 /* reply #58.1, PROP_ACTIVE_SWEEP_STATUS, disabled */
        { 0x06, 0x05, 0x04, 0x15, 0x00, 0x00 },                 /* reply #58.2, PROP_DL_ACTION */
        { 0 } } },
    { { 0x06, 0x05, 0x08, 0x06, 0xff, 0x00 }, .description = "COM_FA_CHECK_FROM", .out_spells = { /* spell #59 */
        { 0x06, 0x05, 0x08, 0x06, 0x00, 0x00 },                 /* reply #59.1, COM_FA_CHECK_FROM */
        { 0 } } },
    { { 0x08, 0x06, 0x01, 0x80, 0x03, 0x00, 0x00 }, .description = "PROP_GPS_TIME_SYNC", .out_spells = { /* spell #60 */
        { 0 } } },

    #include "NotifyGUIEvent.h"
    #include "UILock.h"
    #include "CardFormat.h"
    #include "MpuProperties.h"
    #include "GPS.h"
    #include "LiveView.h"
    #include "Shutdown.h"
};
