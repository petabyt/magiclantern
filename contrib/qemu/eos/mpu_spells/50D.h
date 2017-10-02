/**
 * 50D version - includes card format and incomplete shutdown attempt
 */
static struct mpu_init_spell mpu_init_spells_50D[] = {
    { { 0x06, 0x04, 0x02, 0x00, 0x00 }, .description = "Init", .out_spells = { /* spell #1 */
        { 0x06, 0x05, 0x01, 0x37, 0x00, 0x00 },                 /* reply #1.1 */
        { 0x08, 0x07, 0x01, 0x33, 0x00, 0x00, 0x00, 0x00 },     /* reply #1.2 */
        { 0x0e, 0x0c, 0x02, 0x05, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.3 */
        { 0x0a, 0x09, 0x02, 0x06, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.4 */
        { 0x14, 0x12, 0x02, 0x07, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.5 */
        { 0x0e, 0x0d, 0x02, 0x08, 0x09, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.6 */
        { 0x06, 0x05, 0x01, 0x20, 0x01, 0x00 },                 /* reply #1.7 */
        { 0x06, 0x05, 0x01, 0x21, 0x00, 0x00 },                 /* reply #1.8 */
        { 0x06, 0x05, 0x01, 0x22, 0x00, 0x00 },                 /* reply #1.9 */
        { 0x06, 0x05, 0x03, 0x0c, 0x01, 0x00 },                 /* reply #1.10 */
        { 0x06, 0x05, 0x03, 0x0d, 0x01, 0x00 },                 /* reply #1.11 */
        { 0x06, 0x05, 0x03, 0x0e, 0x01, 0x00 },                 /* reply #1.12 */
        { 0x08, 0x06, 0x01, 0x23, 0x00, 0x00, 0x00 },           /* reply #1.13, PROP_CARD1_STATUS(0) */
        { 0x08, 0x06, 0x01, 0x24, 0x00, 0x00, 0x00 },           /* reply #1.14, PROP_CARD2_STATUS(0) */
        { 0x08, 0x06, 0x01, 0x25, 0x00, 0x00, 0x00 },           /* reply #1.15 */
        { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 },                 /* reply #1.16 */
        { 0x06, 0x05, 0x01, 0x37, 0x00, 0x00 },                 /* reply #1.17 */
        { 0x06, 0x05, 0x01, 0x2c, 0x01, 0x00 },                 /* reply #1.18 */
        { 0x06, 0x05, 0x03, 0x20, 0x01, 0x00 },                 /* reply #1.19 */
        { 0x06, 0x05, 0x01, 0x42, 0x00, 0x00 },                 /* reply #1.20 */
        { 0x06, 0x05, 0x01, 0x43, 0x00, 0x00 },                 /* reply #1.21 */
        { 0x06, 0x05, 0x01, 0x44, 0x00, 0x00 },                 /* reply #1.22 */
        { 0x06, 0x05, 0x01, 0x46, 0x00, 0x00 },                 /* reply #1.23 */
        { 0x06, 0x05, 0x01, 0x48, 0x02, 0x00 },                 /* reply #1.24 */
        { 0x06, 0x05, 0x01, 0x49, 0x00, 0x00 },                 /* reply #1.25 */
        { 0x06, 0x05, 0x01, 0x4b, 0x00, 0x00 },                 /* reply #1.26 */
        { 0x08, 0x06, 0x01, 0x47, 0x0a, 0x01, 0x00 },           /* reply #1.27 */
        { 0x06, 0x05, 0x01, 0x04, 0x00, 0x00 },                 /* reply #1.28 */
        { 0x06, 0x05, 0x01, 0x06, 0x30, 0x00 },                 /* reply #1.29 */
        { 0x2c, 0x2a, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x09, 0x13, 0x88, 0x00, 0x00, 0x00, 0x00, 0x84, 0x06, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0x3c, 0x00, 0x63, 0x30, 0x01 },/* reply #1.30 */
        { 0x06, 0x05, 0x03, 0x04, 0x00, 0x00 },                 /* reply #1.31 */
        { 0x06, 0x05, 0x03, 0x05, 0x02, 0x00 },                 /* reply #1.32 */
        { 0x1e, 0x1c, 0x03, 0x30, 0x51, 0x51, 0x51, 0x51, 0x51, 0x51, 0x20, 0x20, 0x00, 0x2d, 0x00, 0x2d, 0x00, 0x2d, 0x00, 0x2d, 0x00, 0x2d, 0x00, 0x2d, 0x00, 0xe0, 0x00, 0xe0, 0x00 },/* reply #1.33 */
        { 0x06, 0x05, 0x01, 0x38, 0x00, 0x00 },                 /* reply #1.34 */
        { 0x06, 0x05, 0x01, 0x39, 0x00, 0x00 },                 /* reply #1.35 */
        { 0x08, 0x06, 0x01, 0x0a, 0x00, 0x01, 0x00 },           /* reply #1.36 */
        { 0x0e, 0x0c, 0x03, 0x2e, 0x00, 0x00, 0x2e, 0x13, 0x00, 0x00, 0x2e, 0xce, 0x00 },/* reply #1.37 */
        { 0x0a, 0x08, 0x03, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #1.38 */
        { 0x06, 0x05, 0x03, 0x23, 0x16, 0x00 },                 /* reply #1.39 */
        { 0x1c, 0x1a, 0x03, 0x24, 0x45, 0x46, 0x2d, 0x53, 0x31, 0x38, 0x2d, 0x35, 0x35, 0x6d, 0x6d, 0x20, 0x66, 0x2f, 0x33, 0x2e, 0x35, 0x2d, 0x35, 0x2e, 0x36, 0x00, 0x00 },/* reply #1.40 */
        { 0x06, 0x04, 0x03, 0x25, 0x00 },                       /* reply #1.41 */
        { 0x08, 0x06, 0x01, 0x45, 0x00, 0x10, 0x00 },           /* reply #1.42 */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00 }, .description = "Complete WaitID = 0x80000001", .out_spells = { /* spell #2 */
        { 0x06, 0x05, 0x01, 0x09, 0x00, 0x00 },                 /* reply #2.1 */
        { 0x06, 0x05, 0x01, 0x0d, 0x09, 0x00 },                 /* reply #2.2 */
        { 0x06, 0x05, 0x01, 0x3e, 0x00, 0x00 },                 /* reply #2.3 */
        { 0x06, 0x05, 0x01, 0x3f, 0x00, 0x00 },                 /* reply #2.4 */
        { 0x06, 0x05, 0x01, 0x40, 0x00, 0x00 },                 /* reply #2.5 */
        { 0x06, 0x05, 0x01, 0x41, 0x00, 0x00 },                 /* reply #2.6 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x0e, 0x00, 0x00 }, {                 /* spell #3 */
        { 0x06, 0x05, 0x03, 0x0e, 0x00, 0x00 },                 /* reply #3.1 */
        { 0 } } },
    { { 0x06, 0x05, 0x01, 0x22, 0x00, 0x00 }, {                 /* spell #4 */
        { 0x06, 0x05, 0x01, 0x22, 0x00, 0x00 },                 /* reply #4.1 */
        { 0 } } },
    { { 0x08, 0x06, 0x01, 0x25, 0x00, 0x00, 0x00 }, {           /* spell #5 */
        { 0x08, 0x06, 0x01, 0x25, 0x00, 0x00, 0x00 },           /* reply #5.1 */
        { 0 } } },
    { { 0x06, 0x05, 0x01, 0x37, 0x00, 0x00 }, {                 /* spell #6 */
        { 0x06, 0x05, 0x01, 0x37, 0x00, 0x00 },                 /* reply #6.1 */
        { 0x0a, 0x08, 0x01, 0x34, 0x00, 0x00, 0x06, 0x03, 0x01 },/* reply #6.2 */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x01, 0x34, 0x00 }, .description = "Complete WaitID = 0x8000002F", .out_spells = { /* spell #7 */
        { 0x0a, 0x08, 0x01, 0x35, 0x00, 0x00, 0x01, 0x03, 0x01 },/* reply #7.1 */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x01, 0x35, 0x00 }, .description = "Complete WaitID = 0x80000030", .out_spells = { /* spell #8 */
        { 0x0a, 0x08, 0x01, 0x36, 0x00, 0x00, 0x06, 0x03, 0x01 },/* reply #8.1 */
        { 0 } } },
    { { 0x08, 0x06, 0x00, 0x00, 0x01, 0x36, 0x00 }, .description = "Complete WaitID = 0x80000031", .out_spells = { /* spell #9 */
        { 0x08, 0x06, 0x05, 0x0d, 0x11, 0xa4, 0x00 },           /* reply #9.1 */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP_AVAIL_SHOT", .out_spells = { /* spell #10 */
        { 0 } } },
    { { 0x06, 0x04, 0x03, 0x10, 0x00 }, .description = "PROP 80030008", .out_spells = { /* spell #11 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x07, 0xff, 0x00 }, .description = "PROP_BURST_COUNT", .out_spells = { /* spell #12 */
        { 0x06, 0x05, 0x06, 0x13, 0x00, 0x00 },                 /* reply #12.1, bindReceiveSwitch(19, 0) */
        { 0 } } },
    { { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 }, {                 /* spell #13 */
        { 0x06, 0x05, 0x01, 0x2e, 0x01, 0x00 },                 /* reply #13.1 */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00 }, .description = "PROP 80030007", .out_spells = { /* spell #14 */
        { 0 } } },
    { { 0x06, 0x05, 0x04, 0x0e, 0x00, 0x00 }, {                 /* spell #15 */
        { 0x06, 0x05, 0x04, 0x0e, 0x00, 0x00 },                 /* reply #15.1 */
        { 0 } } },
    { { 0x08, 0x06, 0x01, 0x25, 0x00, 0x00, 0x00 }, {           /* spell #16 */
        { 0x08, 0x06, 0x01, 0x25, 0x00, 0x00, 0x00 },           /* reply #16.1 */
//      { 0x08, 0x06, 0x05, 0x0d, 0x11, 0xa4, 0x00 },           /* reply #16.2 - infinite loop sending LensBP data? */
        { 0 } } },
//  { { 0x32, 0x30, 0x05, 0x0d, 0xca, 0x38, 0xb2, 0xbd, 0x9e, 0xb7, 0xd1, 0x86, 0xc9, 0x38, 0x05, 0xd3, 0xe7, 0xca, 0xae, 0xa0, 0x39, 0xda, 0xc5, 0xc9, 0x2a, 0x07, 0xc9, 0x88, 0xa6, 0xd1, 0x28, 0x72, 0xd2, 0x60, 0xc8, 0xc7, 0x04, 0xd6, 0x62, 0x42, 0x47, 0x28, 0x29, 0xd7, 0x1a, 0xcf, 0x69, 0x09, 0x00 }, {/* spell #17 */
//      { 0x08, 0x06, 0x05, 0x0d, 0x11, 0xa4, 0x00 },           /* reply #17.1 */
//      { 0 } } },
//  { { 0x32, 0x30, 0x05, 0x0d, 0xca, 0x38, 0xb2, 0xbd, 0x9e, 0xb7, 0xd1, 0x86, 0xc9, 0x38, 0x05, 0xd3, 0xe7, 0xca, 0xae, 0xa0, 0x39, 0xda, 0xc5, 0xc9, 0x2a, 0x07, 0xc9, 0x88, 0xa6, 0xd1, 0x28, 0x72, 0xd2, 0x60, 0xc8, 0xc7, 0x04, 0xd6, 0x62, 0x42, 0x47, 0x28, 0x29, 0xd7, 0x1a, 0xcf, 0x69, 0x09, 0x00 }, {/* spell #18 */
//      { 0 } } },
    { { 0x08, 0x06, 0x01, 0x23, 0x00, 0x01, 0x00 }, .description = "PROP_CARD1_STATUS", .out_spells = { /* spell #19 */
        { 0x08, 0x06, 0x01, 0x23, 0x00, 0x01, 0x00 },           /* reply #19.1, PROP_CARD1_STATUS(1) */
        { 0 } } },
    { { 0x08, 0x06, 0x01, 0x26, 0x00, 0x64, 0x00 }, {           /* spell #20 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x07, 0x10, 0x00 }, .description = "PROP_BURST_COUNT", .out_spells = { /* spell #21 */
        { 0 } } },
    { { 0x0a, 0x08, 0x03, 0x06, 0x00, 0x00, 0x02, 0xcd, 0x00 }, .description = "PROP_AVAIL_SHOT", .out_spells = { /* spell #22 */
        { 0 } } },
    { { 0x08, 0x07, 0x01, 0x29, 0x07, 0x30, 0x00, 0x00 }, .description = "PROP_CARD1_FILE_NUMBER", .out_spells = { /* spell #23 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x11, 0x01, 0x00 }, {                 /* spell #24 */
        { 0 } } },
    { { 0x06, 0x05, 0x02, 0x0a, 0x00, 0x00 }, {                 /* spell #25 */
        { 0x0a, 0x08, 0x03, 0x00, 0x51, 0x00, 0x00, 0x20, 0x00 },/* reply #25.1 */
        { 0x14, 0x12, 0x03, 0x15, 0x01, 0x29, 0x54, 0x00, 0x2d, 0x00, 0x12, 0x00, 0x37, 0x91, 0x25, 0x02, 0x10, 0x00, 0x00 },/* reply #25.2 */
        { 0x06, 0x05, 0x03, 0x17, 0x9b, 0x00 },                 /* reply #25.3 */
        { 0x06, 0x05, 0x01, 0x3d, 0x00, 0x00 },                 /* reply #25.4 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, {                 /* spell #26 */
        { 0 } } },
    { { 0x06, 0x05, 0x09, 0x11, 0x01, 0x00 }, {                 /* spell #27 */
        { 0 } } },
    { { 0x08, 0x06, 0x03, 0x18, 0x00, 0x00, 0x00 }, {           /* spell #28 */
        { 0 } } },
    { { 0x08, 0x06, 0x03, 0x1f, 0x00, 0x00, 0x00 }, {           /* spell #29 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x13, 0x00, 0x00 }, {                 /* spell #30 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x1e, 0x00, 0x00 }, {                 /* spell #31 */
        { 0 } } },
    { { 0x08, 0x07, 0x01, 0x3b, 0xff, 0xff, 0x00, 0x00 }, {     /* spell #32 */
        { 0 } } },
    { { 0x08, 0x07, 0x01, 0x3b, 0xff, 0x00, 0x00, 0x00 }, {     /* spell #33 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, {                 /* spell #34 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, {                 /* spell #35 */
        { 0 } } },
    { { 0x06, 0x05, 0x02, 0x0a, 0x01, 0x00 }, {                 /* spell #36 */
        { 0x42, 0x41, 0x0a, 0x08, 0xff, 0x1f, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x4d, 0x04, 0x01, 0x02, 0xcd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },/* reply #36.1, PD_NotifyOlcInfoChanged */
        { 0x06, 0x05, 0x06, 0x11, 0x01, 0x00 },                 /* reply #36.2, GUI_Control:39, bindReceiveSwitch(17, 1) */
        { 0x06, 0x05, 0x06, 0x12, 0x00, 0x00 },                 /* reply #36.3, GUI_Control:41, bindReceiveSwitch(18, 0) */
        { 0x06, 0x05, 0x06, 0x13, 0x00, 0x00 },                 /* reply #36.4, bindReceiveSwitch(19, 0) */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x16, 0x06, 0x00 }, {                 /* spell #37 */
        { 0x06, 0x05, 0x03, 0x16, 0x00, 0x00 },                 /* reply #37.1 */
        { 0 } } },
    { { 0x06, 0x05, 0x04, 0x0d, 0x01, 0x00 }, {                 /* spell #38 */
        { 0x06, 0x05, 0x04, 0x0d, 0x00, 0x00 },                 /* reply #38.1 */
     // { 0x08, 0x06, 0x05, 0x0d, 0x11, 0xa4, 0x00 },           /* reply #38.2, delayed by 106 ms, likely external input */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x00, 0x00 }, {                 /* spell #40 */
      //{ 0x08, 0x06, 0x05, 0x0d, 0x11, 0xa4, 0x00 },           /* reply #40.1 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x19, 0x01, 0x00 }, {                 /* spell #43 */
        { 0x06, 0x05, 0x03, 0x17, 0x9b, 0x00 },                 /* reply #43.1 */
        { 0 } } },

    /* MENU->Format selected here */

    { { 0x06, 0x05, 0x03, 0x16, 0x01, 0x00 }, {                 /* spell #50 */
        { 0x06, 0x05, 0x03, 0x16, 0x00, 0x00 },                 /* reply #50.1 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x0c, 0x01, 0x00 }, {                 /* spell #53 */
        { 0x06, 0x05, 0x03, 0x0c, 0x01, 0x00 },                 /* reply #53.1 */
        { 0 } } },
    { { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 }, {                 /* spell #62 */
        { 0x06, 0x05, 0x03, 0x0c, 0x00, 0x00 },                 /* reply #62.1 */
        { 0 } } },

    #include "NotifyGUIEvent.h"
    #include "UILock.h"
    #include "CardFormat.h"
    #include "Shutdown.h"
};
