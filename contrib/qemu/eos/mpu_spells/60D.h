 /**
 * These values are valid for a 60D.
 */

static struct mpu_init_spell mpu_init_spells_60D[] = { {
    { 0x06, 0x04, 0x02, 0x00, 0x00 }, {                         /* spell #1 */
        { 0x08, 0x07, 0x01, 0x33, 0x09, 0x00, 0x00, 0x00 },     /* reply #1.1 */
        { 0x06, 0x05, 0x01, 0x20, 0x00, 0x00 },                 /* reply #1.2 */
        { 0x06, 0x05, 0x01, 0x21, 0x01, 0x00 },                 /* reply #1.3 */
        { 0x06, 0x05, 0x01, 0x22, 0x00, 0x00 },                 /* reply #1.4 */
        { 0x06, 0x05, 0x03, 0x0c, 0x01, 0x00 },                 /* reply #1.5 */
        { 0x06, 0x05, 0x03, 0x0d, 0x01, 0x00 },                 /* reply #1.6 */
        { 0x06, 0x05, 0x03, 0x0e, 0x01, 0x00 },                 /* reply #1.7 */
        { 0x08, 0x06, 0x01, 0x23, 0x00, 0x01, 0x00 },           /* reply #1.8 */
        { 0x08, 0x06, 0x01, 0x24, 0x00, 0x00, 0x00 },           /* reply #1.9, PROP_CARD2_STATUS(0) */
        { 0x08, 0x06, 0x01, 0x25, 0x00, 0x01, 0x00 },           /* reply #1.10 */
        { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 },                 /* reply #1.11 */
        { 0x06, 0x05, 0x01, 0x2c, 0x02, 0x00 },                 /* reply #1.12 */
        { 0x06, 0x05, 0x03, 0x20, 0x04, 0x00 },                 /* reply #1.13 */
        { 0x06, 0x05, 0x01, 0x3d, 0x00, 0x00 },                 /* reply #1.14 */
        { 0x06, 0x05, 0x01, 0x42, 0x00, 0x00 },                 /* reply #1.15 */
        { 0x06, 0x05, 0x01, 0x00, 0x03, 0x00 },                 /* reply #1.16, PROP_SHOOTING_MODE(3) */
        { 0x2c, 0x2a, 0x02, 0x00, 0x03, 0x03, 0x03, 0x04, 0x03, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x14, 0x50, 0x00, 0x00, 0x00, 0x00, 0x81, 0x06, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x4b, 0x01 },/* reply #1.17 */
        { 0x0c, 0x0b, 0x01, 0x0a, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.18 */
        { 0x06, 0x05, 0x01, 0x37, 0x00, 0x00 },                 /* reply #1.19 */
        { 0x06, 0x05, 0x01, 0x49, 0x01, 0x00 },                 /* reply #1.20 */
        { 0x06, 0x05, 0x01, 0x3e, 0x00, 0x00 },                 /* reply #1.21 */
        { 0x08, 0x06, 0x01, 0x45, 0x00, 0x10, 0x00 },           /* reply #1.22 */
        { 0x06, 0x05, 0x01, 0x48, 0x01, 0x00 },                 /* reply #1.23 */
        { 0x06, 0x05, 0x01, 0x4b, 0x01, 0x00 },                 /* reply #1.24 */
        { 0x06, 0x05, 0x01, 0x40, 0x00, 0x00 },                 /* reply #1.25 */
        { 0x06, 0x05, 0x01, 0x41, 0x00, 0x00 },                 /* reply #1.26 */
        { 0x06, 0x05, 0x01, 0x3f, 0x00, 0x00 },                 /* reply #1.27 */
        { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.28 */
        { 0x06, 0x05, 0x01, 0x48, 0x01, 0x00 },                 /* reply #1.29 */
        { 0x06, 0x05, 0x01, 0x53, 0x00, 0x00 },                 /* reply #1.30 */
        { 0x06, 0x05, 0x01, 0x4a, 0x00, 0x00 },                 /* reply #1.31 */
        { 0x06, 0x05, 0x01, 0x50, 0x03, 0x00 },                 /* reply #1.32 */
        { 0x08, 0x06, 0x01, 0x51, 0x70, 0x48, 0x00 },           /* reply #1.33 */
        { 0x06, 0x05, 0x01, 0x52, 0x00, 0x00 },                 /* reply #1.34 */
        { 0x06, 0x05, 0x01, 0x54, 0x00, 0x00 },                 /* reply #1.35 */
        { 0x06, 0x05, 0x03, 0x37, 0x00, 0x00 },                 /* reply #1.36 */
        { 0x0e, 0x0c, 0x02, 0x05, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.37 */
        { 0x0a, 0x08, 0x02, 0x06, 0x04, 0x00, 0x00, 0x00, 0x00 },/* reply #1.38 */
        { 0x0c, 0x0a, 0x02, 0x07, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.39 */
        { 0x0c, 0x0a, 0x02, 0x08, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.40 */
        { 0x0a, 0x08, 0x03, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.41 */
        { 0x06, 0x05, 0x03, 0x05, 0x02, 0x00 },                 /* reply #1.42 */
        { 0x1e, 0x1c, 0x03, 0x30, 0x65, 0x65, 0x50, 0x50, 0x53, 0x53, 0x53, 0x53, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00 },/* reply #1.43 */
        { 0x0e, 0x0c, 0x03, 0x2e, 0x00, 0x00, 0x83, 0xad, 0x00, 0x00, 0xdb, 0x71, 0x00 },/* reply #1.44 */
        { 0x06, 0x05, 0x03, 0x35, 0x01, 0x00 },                 /* reply #1.45 */
        { 0x1c, 0x1b, 0x03, 0x1d, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x50, 0x2d, 0x45, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xae, 0x7e, 0x3b, 0x61, 0x00 },/* reply #1.46 */
        { 0x06, 0x04, 0x03, 0x36, 0x00 },                       /* reply #1.47 */
        { 0 } } }, {
    { 0x08, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00 }, {             /* spell #2, Complete WaitID = 0x80000001 */
        { 0x08, 0x07, 0x01, 0x55, 0x00, 0x02, 0x01, 0x01 },     /* reply #2.1 */
        { 0 } } }, {
    { 0x08, 0x06, 0x00, 0x00, 0x01, 0x55, 0x00 }, {             /* spell #3, Complete WaitID = 0x8000003F */
        { 0 } } }, {
    { 0x0a, 0x08, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00 }, { /* spell #4 */
        { 0 } } }, {
    { 0x06, 0x04, 0x03, 0x10, 0x00 }, {                         /* spell #5 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x07, 0xff, 0x00 }, {                   /* spell #6, PROP_BURST_COUNT(255) */
        { 0 } } }, {
    { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 }, {                   /* spell #7 */
        { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 },                 /* reply #7.1 */
        { 0 } } }, {
    { 0x0a, 0x08, 0x03, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00 }, { /* spell #8 */
        { 0 } } }, {
    { 0x06, 0x05, 0x01, 0x56, 0x00, 0x00 }, {                   /* spell #9 */
        { 0 } } }, {
    { 0x06, 0x05, 0x04, 0x0e, 0x01, 0x00 }, {                   /* spell #10 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x40, 0x00, 0x00 }, {                   /* spell #11 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x40, 0x00, 0x00 }, {                   /* spell #12 */
        { 0x06, 0x05, 0x03, 0x38, 0x95, 0x00 },                 /* reply #12.1 */
        { 0 } } }, {
    { 0x08, 0x06, 0x01, 0x24, 0x00, 0x01, 0x00 }, {             /* spell #13 */
        { 0x08, 0x06, 0x01, 0x24, 0x00, 0x01, 0x00 },           /* reply #13.1, PROP_CARD2_STATUS(1) */
        { 0 } } }, {
    { 0x08, 0x06, 0x01, 0x27, 0x00, 0x64, 0x00 }, {             /* spell #14, PROP_CARD1_FOLDER_NUMBER(100) */
        { 0 } } }, {
    { 0x08, 0x07, 0x01, 0x2a, 0x10, 0x31, 0x00, 0x00 }, {       /* spell #15, PROP_CARD2_FILE_NUMBER(4145) */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x07, 0x07, 0x00 }, {                   /* spell #16, PROP_BURST_COUNT(7) */
        { 0 } } }, {
    { 0x0a, 0x08, 0x03, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00 }, { /* spell #17 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x11, 0x01, 0x00 }, {                   /* spell #18 */
        { 0 } } }, {
    { 0x06, 0x05, 0x02, 0x0a, 0x00, 0x00 }, {                   /* spell #19 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x0d, 0x00, 0x00 }, {                   /* spell #20 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 }, {                   /* spell #21 */
        { 0x06, 0x05, 0x01, 0x2c, 0x02, 0x00 },                 /* reply #21.1 */
        { 0x0a, 0x08, 0x03, 0x00, 0x6c, 0x00, 0x00, 0x2f, 0x00 },/* reply #21.2 */
        { 0x06, 0x05, 0x03, 0x04, 0x00, 0x00 },                 /* reply #21.3 */
        { 0x1a, 0x18, 0x03, 0x15, 0x01, 0x2d, 0x58, 0x00, 0x30, 0x00, 0x12, 0x00, 0x37, 0x91, 0x75, 0x92, 0x1f, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00 },/* reply #21.4 */
        { 0x24, 0x22, 0x03, 0x3c, 0x00, 0x00, 0x88, 0xb5, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #21.5 */
        { 0x06, 0x05, 0x03, 0x17, 0x92, 0x00 },                 /* reply #21.6 */
        { 0x06, 0x05, 0x03, 0x23, 0x19, 0x00 },                 /* reply #21.7 */
        { 0x1e, 0x1d, 0x03, 0x24, 0x45, 0x46, 0x2d, 0x53, 0x31, 0x38, 0x2d, 0x35, 0x35, 0x6d, 0x6d, 0x20, 0x66, 0x2f, 0x33, 0x2e, 0x35, 0x2d, 0x35, 0x2e, 0x36, 0x20, 0x49, 0x53, 0x00, 0x00 },/* reply #21.8 */
        { 0x06, 0x04, 0x03, 0x25, 0x00 },                       /* reply #21.9 */
        { 0x06, 0x05, 0x01, 0x3d, 0x00, 0x00 },                 /* reply #21.10 */
        { 0x06, 0x05, 0x03, 0x37, 0x00, 0x00 },                 /* reply #21.11 */
        { 0x06, 0x05, 0x03, 0x0d, 0x00, 0x00 },                 /* reply #21.12 */
        { 0x1a, 0x18, 0x03, 0x15, 0x01, 0x2d, 0x58, 0x00, 0x30, 0x00, 0x12, 0x00, 0x37, 0x91, 0x75, 0x92, 0x1f, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00 },/* reply #21.13 */
        { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 },                 /* reply #21.14 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, {                   /* spell #22 */
        { 0 } } }, {
    { 0x06, 0x05, 0x09, 0x11, 0x01, 0x00 }, {                   /* spell #23 */
        { 0 } } }, {
    { 0x12, 0x11, 0x09, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, {/* spell #24 */
        { 0 } } }, {
    { 0x08, 0x06, 0x09, 0x1f, 0x00, 0x00, 0x00 }, {             /* spell #25 */
        { 0 } } }, {
    { 0x06, 0x05, 0x01, 0x5a, 0x00, 0x00 }, {                   /* spell #26 */
        { 0 } } }, {
    { 0x26, 0x24, 0x09, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, {/* spell #27 */
        { 0 } } }, {
    { 0x0a, 0x08, 0x09, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00 }, { /* spell #28 */
        { 0 } } }, {
    { 0x08, 0x06, 0x03, 0x18, 0x00, 0x00, 0x00 }, {             /* spell #29 */
        { 0 } } }, {
    { 0x08, 0x06, 0x03, 0x1f, 0x00, 0x00, 0x00 }, {             /* spell #30 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x13, 0x00, 0x00 }, {                   /* spell #31 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x1e, 0x00, 0x00 }, {                   /* spell #32 */
        { 0 } } }, {
    { 0x08, 0x07, 0x01, 0x2a, 0x10, 0x31, 0x00, 0x00 }, {       /* spell #33, PROP_CARD2_FILE_NUMBER(4145) */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x3d, 0x00, 0x00 }, {                   /* spell #34 */
        { 0 } } }, {
    { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00 }, {/* spell #35 */
        { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #35.1 */
        { 0x06, 0x05, 0x01, 0x53, 0x00, 0x00 },                 /* reply #35.2 */
        { 0 } } }, {
    { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00 }, {/* spell #36 */
        { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #36.1 */
        { 0x06, 0x05, 0x01, 0x53, 0x00, 0x00 },                 /* reply #36.2 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, {                   /* spell #37 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, {                   /* spell #38 */
        { 0 } } }, {
    { 0x06, 0x05, 0x02, 0x0a, 0x01, 0x00 }, {                   /* spell #39 */
        { 0x06, 0x05, 0x06, 0x11, 0x01, 0x00 },                 /* reply #39.1, GUI_Control:77, bindReceiveSwitch(17, 1) */
        { 0x06, 0x05, 0x06, 0x12, 0x00, 0x00 },                 /* reply #39.2, GUI_Control:79, bindReceiveSwitch(18, 0) */
        { 0x06, 0x05, 0x06, 0x13, 0x00, 0x00 },                 /* reply #39.3, bindReceiveSwitch(19, 0) */
        { 0x42, 0x41, 0x0a, 0x08, 0xff, 0x1f, 0x01, 0x00, 0x01, 0x01, 0xa0, 0x10, 0x00, 0x4d, 0x01, 0x01, 0x58, 0x2d, 0x4b, 0x01, 0x01, 0x00, 0x48, 0x04, 0x01, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #39.4, PD_NotifyOlcInfoChanged */
        { 0x06, 0x05, 0x04, 0x0e, 0x01, 0x00 },                 /* reply #39.5 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x1d, 0x1f, 0x00 }, {                   /* spell #40 */
        { 0x06, 0x05, 0x03, 0x35, 0x01, 0x00 },                 /* reply #40.1 */
        { 0x1c, 0x1b, 0x03, 0x1d, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x50, 0x2d, 0x45, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xae, 0x7e, 0x3b, 0x61, 0x00 },/* reply #40.2 */
        { 0x06, 0x04, 0x03, 0x36, 0x00 },                       /* reply #40.3 */
        { 0 } } }, {
    { 0x06, 0x05, 0x08, 0x06, 0xff, 0x00 }, {                   /* spell #41 */
        { 0x06, 0x05, 0x08, 0x06, 0x00, 0x00 },                 /* reply #41.1 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, {                   /* spell #42 */
        { 0 } } }, {
    { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, {                   /* spell #43 */
        { 0 } } }
};

/**
 * Alternative version: send everything after the first message,
 * with one exception: delay GUI-related messages.
 */
#if 0
static struct mpu_init_spell mpu_init_spells_60D[] = { {
    { 0x06, 0x04, 0x02, 0x00, 0x00 }, {
        { 0x08, 0x07, 0x01, 0x33, 0x09, 0x00, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x20, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x21, 0x01, 0x00 },
        { 0x06, 0x05, 0x01, 0x22, 0x00, 0x00 },
        { 0x06, 0x05, 0x03, 0x0c, 0x01, 0x00 },
        { 0x06, 0x05, 0x03, 0x0d, 0x01, 0x00 },
        { 0x06, 0x05, 0x03, 0x0e, 0x01, 0x00 },
        { 0x08, 0x06, 0x01, 0x23, 0x00, 0x01, 0x00 },
        { 0x08, 0x06, 0x01, 0x24, 0x00, 0x00, 0x00 },
        { 0x08, 0x06, 0x01, 0x25, 0x00, 0x01, 0x00 },
        { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 },
        { 0x06, 0x05, 0x01, 0x2c, 0x02, 0x00 },
        { 0x06, 0x05, 0x03, 0x20, 0x04, 0x00 },
        { 0x06, 0x05, 0x01, 0x3d, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x42, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x00, 0x03, 0x00 },
        { 0x2c, 0x2a, 0x02, 0x00, 0x03, 0x03, 0x03, 0x04, 0x03, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x14, 0x50, 0x00, 0x00, 0x00, 0x00, 0x81, 0x06, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x04, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x4b, 0x01 },
        { 0x0c, 0x0b, 0x01, 0x0a, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x37, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x49, 0x01, 0x00 },
        { 0x06, 0x05, 0x01, 0x3e, 0x00, 0x00 },
        { 0x08, 0x06, 0x01, 0x45, 0x00, 0x10, 0x00 },
        { 0x06, 0x05, 0x01, 0x48, 0x01, 0x00 },
        { 0x06, 0x05, 0x01, 0x4b, 0x01, 0x00 },
        { 0x06, 0x05, 0x01, 0x40, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x41, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x3f, 0x00, 0x00 },
        { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x48, 0x01, 0x00 },
        { 0x06, 0x05, 0x01, 0x53, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x4a, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x50, 0x03, 0x00 },
        { 0x08, 0x06, 0x01, 0x51, 0x70, 0x48, 0x00 },
        { 0x06, 0x05, 0x01, 0x52, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x54, 0x00, 0x00 },
        { 0x06, 0x05, 0x03, 0x37, 0x00, 0x00 },
        { 0x0e, 0x0c, 0x02, 0x05, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 },
        { 0x0a, 0x08, 0x02, 0x06, 0x04, 0x00, 0x00, 0x00, 0x00 },
        { 0x0c, 0x0a, 0x02, 0x07, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
        { 0x0c, 0x0a, 0x02, 0x08, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00 },
        { 0x0a, 0x08, 0x03, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00 },
        { 0x06, 0x05, 0x03, 0x05, 0x02, 0x00 },
        { 0x1e, 0x1c, 0x03, 0x30, 0x65, 0x65, 0x50, 0x50, 0x53, 0x53, 0x53, 0x53, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00, 0x30, 0x00 },
        { 0x0e, 0x0c, 0x03, 0x2e, 0x00, 0x00, 0x83, 0xad, 0x00, 0x00, 0xdb, 0x71, 0x00 },
        { 0x06, 0x05, 0x03, 0x35, 0x01, 0x00 },
        { 0x1c, 0x1b, 0x03, 0x1d, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x50, 0x2d, 0x45, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xae, 0x7e, 0x3b, 0x61, 0x00 },
        { 0x06, 0x04, 0x03, 0x36, 0x00 },
        { 0x08, 0x07, 0x01, 0x55, 0x00, 0x02, 0x01, 0x01 },
        { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 },
        { 0x06, 0x05, 0x03, 0x38, 0x95, 0x00 },
        { 0x08, 0x06, 0x01, 0x24, 0x00, 0x01, 0x00 },
        { 0x06, 0x05, 0x01, 0x2c, 0x02, 0x00 },
        { 0x0a, 0x08, 0x03, 0x00, 0x6c, 0x00, 0x00, 0x2f, 0x00 },
        { 0x06, 0x05, 0x03, 0x04, 0x00, 0x00 },
        { 0x1a, 0x18, 0x03, 0x15, 0x01, 0x2d, 0x58, 0x00, 0x30, 0x00, 0x12, 0x00, 0x37, 0x91, 0x75, 0x92, 0x1f, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00 },
        { 0x24, 0x22, 0x03, 0x3c, 0x00, 0x00, 0x88, 0xb5, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
        { 0x06, 0x05, 0x03, 0x17, 0x92, 0x00 },
        { 0x06, 0x05, 0x03, 0x23, 0x19, 0x00 },
        { 0x1e, 0x1d, 0x03, 0x24, 0x45, 0x46, 0x2d, 0x53, 0x31, 0x38, 0x2d, 0x35, 0x35, 0x6d, 0x6d, 0x20, 0x66, 0x2f, 0x33, 0x2e, 0x35, 0x2d, 0x35, 0x2e, 0x36, 0x20, 0x49, 0x53, 0x00, 0x00 },
        { 0x06, 0x04, 0x03, 0x25, 0x00 },
        { 0x06, 0x05, 0x01, 0x3d, 0x00, 0x00 },
        { 0x06, 0x05, 0x03, 0x37, 0x00, 0x00 },
        { 0x06, 0x05, 0x03, 0x0d, 0x00, 0x00 },
        { 0x1a, 0x18, 0x03, 0x15, 0x01, 0x2d, 0x58, 0x00, 0x30, 0x00, 0x12, 0x00, 0x37, 0x91, 0x75, 0x92, 0x1f, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00 },
        { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 },
        { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x53, 0x00, 0x00 },
        { 0x1a, 0x18, 0x01, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00 },
        { 0x06, 0x05, 0x01, 0x53, 0x00, 0x00 },
        { 0 } } }, {
    { 0x06, 0x05, 0x02, 0x0a, 0x01, 0x00 }, {       /* wait for this message before continuing */
        { 0x06, 0x05, 0x06, 0x11, 0x01, 0x00 },     /* although not correct (it's probably sensor cleaning related), this trick appears to launch the GUI */
        { 0x06, 0x05, 0x06, 0x12, 0x00, 0x00 },
        { 0x06, 0x05, 0x06, 0x13, 0x00, 0x00 },
        { 0x42, 0x41, 0x0a, 0x08, 0xff, 0x1f, 0x01, 0x00, 0x01, 0x01, 0xa0, 0x10, 0x00, 0x4d, 0x01, 0x01, 0x58, 0x2d, 0x4b, 0x01, 0x01, 0x00, 0x48, 0x04, 0x01, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },
        { 0x06, 0x05, 0x04, 0x0e, 0x01, 0x00 },
        { 0x06, 0x05, 0x03, 0x35, 0x01, 0x00 },
        { 0x1c, 0x1b, 0x03, 0x1d, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x50, 0x2d, 0x45, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0xae, 0x7e, 0x3b, 0x61, 0x00 },
        { 0x06, 0x04, 0x03, 0x36, 0x00 },
        { 0x06, 0x05, 0x08, 0x06, 0x00, 0x00 },
    { 0 } } }
};
#endif
