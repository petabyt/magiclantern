/**
 * 600D (MENU pressed at startup)
 */
static struct mpu_init_spell mpu_init_spells_600D[] = {
    { { 0x06, 0x04, 0x02, 0x00, 0x00 }, .description = "Init", .out_spells = { /* spell #1 */
        { 0x06, 0x05, 0x01, 0x00, 0x03, 0x00 },                 /* reply #1.1, PROP_SHOOTING_MODE(03) */
        { 0x06, 0x05, 0x01, 0x05, 0x45, 0x00 },                 /* reply #1.2, PROP_SHUTTER */
        { 0x06, 0x05, 0x01, 0x06, 0x5b, 0x00 },                 /* reply #1.3, PROP_APERTURE */
        { 0x06, 0x05, 0x01, 0x0b, 0x00, 0x00 },                 /* reply #1.4, PROP_AEB */
        { 0x2c, 0x2a, 0x02, 0x00, 0x03, 0x03, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x87, 0x01, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x45, 0x5b, 0x01 },/* reply #1.5, Init */
        { 0x08, 0x07, 0x01, 0x33, 0x09, 0x00, 0x00, 0x00 },     /* reply #1.6 */
        { 0x06, 0x05, 0x01, 0x20, 0x00, 0x00 },                 /* reply #1.7, PROP_CARD2_EXISTS */
        { 0x06, 0x05, 0x01, 0x21, 0x01, 0x00 },                 /* reply #1.8, PROP_CARD1_EXISTS */
        { 0x06, 0x05, 0x01, 0x22, 0x00, 0x00 },                 /* reply #1.9, PROP_CARD3_EXISTS */
        { 0x06, 0x05, 0x03, 0x0c, 0x01, 0x00 },                 /* reply #1.10, PROP_CARD1_RECORD */
        { 0x06, 0x05, 0x03, 0x0d, 0x01, 0x00 },                 /* reply #1.11, PROP_CARD2_RECORD */
        { 0x06, 0x05, 0x03, 0x0e, 0x01, 0x00 },                 /* reply #1.12, PROP_CARD3_RECORD */
        { 0x08, 0x06, 0x01, 0x23, 0x00, 0x01, 0x00 },           /* reply #1.13, PROP_CARD1_STATUS(01) */
        { 0x08, 0x06, 0x01, 0x24, 0x00, 0x00, 0x00 },           /* reply #1.14, PROP_CARD2_STATUS(00) */
        { 0x08, 0x06, 0x01, 0x25, 0x00, 0x01, 0x00 },           /* reply #1.15, PROP_CARD3_STATUS(01) */
        { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 },                 /* reply #1.16 */
        { 0x06, 0x05, 0x01, 0x2c, 0x02, 0x00 },                 /* reply #1.17, PROP_CURRENT_MEDIA */
        { 0x06, 0x05, 0x03, 0x20, 0x01, 0x00 },                 /* reply #1.18 */
        { 0x06, 0x05, 0x01, 0x3d, 0x00, 0x00 },                 /* reply #1.19 */
        { 0x06, 0x05, 0x01, 0x42, 0x00, 0x00 },                 /* reply #1.20, PROP_STUDIO_MODE */
        { 0x0c, 0x0b, 0x03, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.21 */
        { 0x0c, 0x0b, 0x01, 0x0a, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.22 */
        { 0x06, 0x05, 0x01, 0x37, 0x00, 0x00 },                 /* reply #1.23, PROP_CARD_SELECT */
        { 0x06, 0x05, 0x01, 0x49, 0x01, 0x00 },                 /* reply #1.24, PROP_LIVE_VIEW_AF_MODE */
        { 0x06, 0x05, 0x01, 0x3e, 0x00, 0x00 },                 /* reply #1.25, PROP_SILENT_SHOOTING */
        { 0x08, 0x06, 0x01, 0x45, 0x07, 0x08, 0x00 },           /* reply #1.26, PROP_METERING_TIMER */
        { 0x06, 0x05, 0x01, 0x48, 0x01, 0x00 },                 /* reply #1.27, PROP_LIVE_VIEW_ENABLE */
        { 0x06, 0x05, 0x01, 0x4b, 0x01, 0x00 },                 /* reply #1.28, PROP_LIVE_VIEW_MOVIE_SELECT */
        { 0x06, 0x05, 0x01, 0x40, 0x00, 0x00 },                 /* reply #1.29 */
        { 0x06, 0x05, 0x01, 0x41, 0x00, 0x00 },                 /* reply #1.30 */
        { 0x06, 0x05, 0x01, 0x3f, 0x00, 0x00 },                 /* reply #1.31, PROP_FLASH_ENABLE */
        { 0x08, 0x06, 0x01, 0x57, 0x00, 0x01, 0x00 },           /* reply #1.32 */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00 }, .description = "Complete WaitID = 0x80000001", .out_spells = { /* spell #2 */
        { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #2.1, PROP_VIDEO_MODE */
        { 0x06, 0x05, 0x01, 0x48, 0x01, 0x00 },                 /* reply #2.2, PROP_LIVE_VIEW_ENABLE */
        { 0x06, 0x05, 0x01, 0x53, 0x00, 0x00 },                 /* reply #2.3, PROP_AF_DURING_RECORD */
        { 0x06, 0x05, 0x01, 0x58, 0x00, 0x00 },                 /* reply #2.4, PROP_VIDEO_SNAPSHOT */
        { 0x06, 0x05, 0x01, 0x59, 0x00, 0x00 },                 /* reply #2.5, PROP_MOVIE_SERVO_AF */
        { 0x06, 0x05, 0x01, 0x4a, 0x00, 0x00 },                 /* reply #2.6 */
        { 0x06, 0x05, 0x01, 0x50, 0x00, 0x00 },                 /* reply #2.7 */
        { 0x08, 0x06, 0x01, 0x51, 0x78, 0x48, 0x00 },           /* reply #2.8, PROP_AUTO_ISO_RANGE */
        { 0x06, 0x05, 0x01, 0x52, 0x03, 0x00 },                 /* reply #2.9, PROP_ALO */
        { 0x06, 0x05, 0x01, 0x54, 0x00, 0x00 },                 /* reply #2.10 */
        { 0x08, 0x06, 0x01, 0x47, 0x0a, 0x02, 0x00 },           /* reply #2.11, PROP_SELFTIMER_CONTINUOUS_NUM */
        { 0x06, 0x05, 0x03, 0x37, 0x00, 0x00 },                 /* reply #2.12 */
        { 0x12, 0x11, 0x02, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #2.13, PROP_CFN */
        { 0x0e, 0x0c, 0x03, 0x2e, 0x00, 0x00, 0x29, 0x7e, 0x00, 0x00, 0x47, 0x49, 0x00 },/* reply #2.14 */
        { 0x08, 0x07, 0x01, 0x55, 0x00, 0x02, 0x01, 0x01 },     /* reply #2.15, PROP_MULTIPLE_EXPOSURE */
        { 0x08, 0x07, 0x01, 0x55, 0x00, 0x02, 0x01, 0x01 },     /* reply #2.16, PROP_MULTIPLE_EXPOSURE */
        { 0x08, 0x07, 0x01, 0x55, 0x00, 0x02, 0x01, 0x01 },     /* reply #2.17, PROP_MULTIPLE_EXPOSURE */
        { 0x08, 0x07, 0x01, 0x55, 0x00, 0x02, 0x01, 0x01 },     /* reply #2.18, PROP_MULTIPLE_EXPOSURE */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x01, 0x55, 0x00 }, .description = "Complete WaitID = 0x8000003F", .out_spells = { /* spell #3 */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP_AVAIL_SHOT", .out_spells = { /* spell #4 */
        { 0 } } },
    { { 0x06, 0x04, 0x03, 0x10, 0x00 }, .description = "PROP 80030008", .out_spells = { /* spell #5 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x07, 0xff, 0x00 }, .description = "PROP_BURST_COUNT", .out_spells = { /* spell #6 */
        { 0 } } },
    { { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 }, {                 /* spell #7 */
        { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 },                 /* reply #7.1 */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP 80030007", .out_spells = { /* spell #8 */
        { 0 } } },
    { { 0x06, 0x05, 0x01, 0x56, 0x00, 0x00 }, {                 /* spell #9 */
        { 0 } } },
    { { 0x06, 0x05, 0x04, 0x0e, 0x01, 0x00 }, {                 /* spell #10 */
        { 0 } } },
    { { 0x08, 0x06, 0x01, 0x24, 0x00, 0x01, 0x00 }, .description = "PROP_CARD2_STATUS", .out_spells = { /* spell #11 */
        { 0x08, 0x06, 0x01, 0x24, 0x00, 0x01, 0x00 },           /* reply #11.1, PROP_CARD2_STATUS(01) */
        { 0 } } },
    { { 0x08, 0x06, 0x01, 0x27, 0x00, 0x64, 0x00 }, .description = "PROP_CARD2_FOLDER_NUMBER", .out_spells = { /* spell #12 */
        { 0 } } },
    { { 0x08, 0x07, 0x01, 0x2a, 0x24, 0xdf, 0x00, 0x00 }, .description = "PROP_CARD2_FILE_NUMBER", .out_spells = { /* spell #13 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x07, 0x0b, 0x00 }, .description = "PROP_BURST_COUNT", .out_spells = { /* spell #14 */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00 }, .description = "PROP_AVAIL_SHOT", .out_spells = { /* spell #15 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x11, 0x01, 0x00 }, {                 /* spell #16 */
        { 0 } } },
    { { 0x06, 0x05, 0x02, 0x0a, 0x00, 0x00 }, {                 /* spell #17 */
        { 0x06, 0x05, 0x01, 0x2c, 0x02, 0x00 },                 /* reply #17.1, PROP_CURRENT_MEDIA */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x0d, 0x00, 0x00 }, .description = "PROP_CARD2_RECORD", .out_spells = { /* spell #18 */
        { 0x06, 0x05, 0x03, 0x23, 0x19, 0x00 },                 /* reply #18.1 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 }, .description = "PROP_CARD1_RECORD", .out_spells = { /* spell #19 */
        { 0x1e, 0x1d, 0x03, 0x24, 0x45, 0x46, 0x2d, 0x53, 0x31, 0x38, 0x2d, 0x35, 0x35, 0x6d, 0x6d, 0x20, 0x66, 0x2f, 0x33, 0x2e, 0x35, 0x2d, 0x35, 0x2e, 0x36, 0x20, 0x49, 0x53, 0x00, 0x00 },/* reply #19.1 */
        { 0x06, 0x04, 0x03, 0x25, 0x00 },                       /* reply #19.2 */
        { 0x06, 0x05, 0x01, 0x3d, 0x00, 0x00 },                 /* reply #19.3 */
        { 0x06, 0x05, 0x03, 0x37, 0x00, 0x00 },                 /* reply #19.4 */
        { 0x06, 0x05, 0x03, 0x0d, 0x00, 0x00 },                 /* reply #19.5, PROP_CARD2_RECORD */
        { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 },                 /* reply #19.6, PROP_CARD1_RECORD */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #20 */
        { 0x0a, 0x09, 0x03, 0x00, 0x50, 0x00, 0x00, 0x1b, 0x01, 0x00 },/* reply #20.1 */
        { 0x06, 0x05, 0x03, 0x04, 0x00, 0x00 },                 /* reply #20.2, PROP_POWER_KIND */
        { 0x1a, 0x18, 0x03, 0x15, 0x01, 0x28, 0x53, 0x00, 0x30, 0x00, 0x12, 0x00, 0x37, 0x91, 0x75, 0x92, 0x1f, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00 },/* reply #20.3 */
        { 0x24, 0x22, 0x03, 0x3c, 0x00, 0x00, 0x17, 0x3f, 0xbb, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #20.4 */
        { 0x06, 0x05, 0x03, 0x17, 0x98, 0x00 },                 /* reply #20.5 */
        { 0x1a, 0x18, 0x03, 0x15, 0x01, 0x28, 0x53, 0x00, 0x30, 0x00, 0x12, 0x00, 0x37, 0x91, 0x75, 0x92, 0x1f, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00 },/* reply #20.6 */
        { 0 } } },
    { { 0x06, 0x05, 0x09, 0x11, 0x01, 0x00 }, {                 /* spell #21 */
        { 0 } } },
    { { 0x12, 0x11, 0x09, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, {/* spell #22 */
        { 0 } } },
    { { 0x08, 0x06, 0x09, 0x1f, 0x00, 0x00, 0x00 }, {           /* spell #23 */
        { 0 } } },
    { { 0x06, 0x05, 0x01, 0x5a, 0x00, 0x00 }, {                 /* spell #24 */
        { 0 } } },
    { { 0x06, 0x05, 0x01, 0x5a, 0x01, 0x00 }, {                 /* spell #25 */
        { 0 } } },
    { { 0x26, 0x24, 0x09, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, {/* spell #26 */
        { 0 } } },
    { { 0x0a, 0x08, 0x09, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00 }, {/* spell #27 */
        { 0 } } },
    { { 0x08, 0x06, 0x03, 0x18, 0x00, 0x00, 0x00 }, {           /* spell #28 */
        { 0x06, 0x05, 0x01, 0x58, 0x00, 0x00 },                 /* reply #28.1, PROP_VIDEO_SNAPSHOT */
        { 0 } } },
    { { 0x08, 0x06, 0x03, 0x1f, 0x00, 0x00, 0x00 }, {           /* spell #29 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x13, 0x00, 0x00 }, {                 /* spell #30 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x1e, 0x00, 0x00 }, {                 /* spell #31 */
        { 0 } } },
    { { 0x08, 0x07, 0x01, 0x2a, 0x24, 0xdf, 0x00, 0x00 }, .description = "PROP_CARD2_FILE_NUMBER", .out_spells = { /* spell #32 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x3d, 0x00, 0x00 }, .description = "PROP_VIDEO_SYSTEM", .out_spells = { /* spell #33 */
        { 0 } } },
    { { 0x06, 0x05, 0x02, 0x0a, 0x01, 0x00 }, {                 /* spell #34 */
        { 0x06, 0x05, 0x06, 0x11, 0x01, 0x00 },                 /* reply #34.1, GUI_Control:84, bindReceiveSwitch(17, 1) */
        { 0x06, 0x05, 0x06, 0x12, 0x00, 0x00 },                 /* reply #34.2, GUI_Control:86, bindReceiveSwitch(18, 0) */
        { 0x06, 0x05, 0x06, 0x13, 0x00, 0x00 },                 /* reply #34.3, bindReceiveSwitch(19, 0) */
        { 0x06, 0x05, 0x06, 0x1c, 0x00, 0x00 },                 /* reply #34.4, bindReceiveSwitch(28, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #34.5, GUI_Control:76, bindReceiveSwitch(38, 1) */
        { 0x44, 0x43, 0x0a, 0x08, 0xff, 0x1f, 0x01, 0x00, 0x01, 0x03, 0x98, 0x0c, 0x00, 0x45, 0x01, 0x01, 0x53, 0x28, 0x53, 0x01, 0x01, 0x00, 0x00, 0x04, 0x01, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #34.6, PD_NotifyOlcInfoChanged */
        { 0x06, 0x05, 0x04, 0x0e, 0x01, 0x00 },                 /* reply #34.7 */
        { 0 } } },
    { { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP_VIDEO_MODE", .out_spells = { /* spell #35 */
        { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #35.1, PROP_VIDEO_MODE */
        { 0x06, 0x05, 0x01, 0x53, 0x00, 0x00 },                 /* reply #35.2, PROP_AF_DURING_RECORD */
        { 0x06, 0x05, 0x01, 0x58, 0x00, 0x00 },                 /* reply #35.3, PROP_VIDEO_SNAPSHOT */
        { 0x06, 0x05, 0x01, 0x59, 0x00, 0x00 },                 /* reply #35.4, PROP_MOVIE_SERVO_AF */
        { 0 } } },
    { { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP_VIDEO_MODE", .out_spells = { /* spell #36 */
        { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #36.1, PROP_VIDEO_MODE */
        { 0x06, 0x05, 0x01, 0x53, 0x00, 0x00 },                 /* reply #36.2, PROP_AF_DURING_RECORD */
        { 0x06, 0x05, 0x01, 0x58, 0x00, 0x00 },                 /* reply #36.3, PROP_VIDEO_SNAPSHOT */
        { 0x06, 0x05, 0x01, 0x59, 0x00, 0x00 },                 /* reply #36.4, PROP_MOVIE_SERVO_AF */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #37 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #38 */
        { 0 } } },
 // { { 0x06, 0x05, 0x03, 0x16, 0x06, 0x00 }, .description = "PROP_BATTERY_CHECK", .out_spells = { 
     // { 0x06, 0x05, 0x03, 0x16, 0x00, 0x00 },                 /* reply #39.1, PROP_BATTERY_CHECK */
     // { 0 } } },
    { { 0x06, 0x05, 0x04, 0x0d, 0x01, 0x00 }, .description = "PROP_ACTIVE_SWEEP_STATUS", .out_spells = { /* spell #39 */
        { 0x06, 0x05, 0x04, 0x0d, 0x00, 0x00 },                 /* reply #39.1, PROP_ACTIVE_SWEEP_STATUS, disabled */
        { 0 } } },
    { { 0x06, 0x05, 0x08, 0x06, 0xff, 0x00 }, {                 /* spell #40 */
        { 0x06, 0x05, 0x08, 0x06, 0x00, 0x00 },                 /* reply #40.1 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #41 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #42 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #43 */
        { 0x06, 0x05, 0x03, 0x17, 0x9a, 0x00 },                 /* reply #43.1 */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #43.2, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x00, 0x01, 0x00 },                 /* reply #43.3, BGMT_MENU, GUI_Control:6, bindReceiveSwitch(0, 1) */
        { 0x06, 0x05, 0x04, 0x0d, 0x00, 0x00 },                 /* reply #43.4, PROP_ACTIVE_SWEEP_STATUS, disabled */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #44 */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #44.1, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x00, 0x01, 0x00 },                 /* reply #44.2, BGMT_MENU, GUI_Control:6, bindReceiveSwitch(0, 1) */
        { 0 } } },
 // { { 0x06, 0x05, 0x04, 0x00, 0x01, 0x00 }, .description = "NotifyGUIEvent", .out_spells = { 
     // { 0x06, 0x05, 0x06, 0x0a, 0x00, 0x00 },                 /* reply #45.1, BGMT_UNPRESS_ZOOM_OUT, GUI_Control:17, bindReceiveSwitch(10, 0) */
     // { 0x06, 0x05, 0x06, 0x09, 0x00, 0x00 },                 /* reply #45.2, BGMT_UNPRESS_ZOOM_IN, GUI_Control:15, bindReceiveSwitch(9, 0) */
     // { 0x06, 0x05, 0x04, 0x00, 0x01, 0x01 },                 /* reply #45.3, NotifyGUIEvent */
     // { 0x0e, 0x0c, 0x0a, 0x08, 0x11, 0x00, 0x15, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00 },/* reply #45.4, PD_NotifyOlcInfoChanged */
     // { 0 } } },
 // { { 0x08, 0x06, 0x00, 0x00, 0x04, 0x00, 0x00 }, .description = "Complete WaitID = 0x80020000", .out_spells = { 
     // { 0 } } },
    { { 0x06, 0x05, 0x03, 0x34, 0x00, 0x00 }, .description = "Current Q position", .out_spells = { /* spell #45 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, .description = "PROP_TFT_STATUS", .out_spells = { /* spell #46 */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.1, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.2, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.3, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.4, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.5, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.6, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.7, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.8, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.9, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.10, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.11, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.12, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.13, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.14, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.15, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.16, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.17, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.18, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.19, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.20, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.21, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.22, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.23, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.24, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.25, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.26, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.27, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.28, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.29, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.30, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.31, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.32, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.33, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.34, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.35, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.36, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.37, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.38, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.39, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.40, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.41, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.42, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.43, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.44, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.45, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.46, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.47, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.48, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.49, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.50, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.51, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.52, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.53, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.54, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.55, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.56, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x00, 0x00 },                 /* reply #46.57, BGMT_UNPRESS_RIGHT, GUI_Control:36, bindReceiveSwitch(26, 0) */
        { 0x06, 0x05, 0x06, 0x26, 0x01, 0x00 },                 /* reply #46.58, GUI_Control:76, bindReceiveSwitch(38, 1) */
     // { 0x06, 0x05, 0x06, 0x1a, 0x01, 0x00 },                 /* reply #46.59, BGMT_PRESS_RIGHT, GUI_Control:35, bindReceiveSwitch(26, 1) */
        { 0 } } },

    #include "NotifyGUIEvent.h"
    #include "UILock.h"
    #include "CardFormat.h"
    #include "GPS.h"
    #include "Shutdown.h"
};
