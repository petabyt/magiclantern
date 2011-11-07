#ifndef _cameraspecific_gui_h_
#define _cameraspecific_gui_h_

/** Event types */
typedef enum {
	GOT_TOP_OF_CONTROL		= 0x800,
	LOST_TOP_OF_CONTROL		= 0x801,
	INITIALIZE_CONTROLLER		= 0x802,
	TERMINATE_WINSYS		= 0x804,
	DELETE_DIALOG_REQUEST		= 0x805,
	PRESS_RIGHT_BUTTON		= 0x83c,
	PRESS_LEFT_BUTTON		= 0x840,
	PRESS_UP_BUTTON			= 0x83a,
	PRESS_DOWN_BUTTON		= 0x83e,
	PRESS_UP_RIGHT			= 0x83b,
	PRESS_DOWN_RIGHT		= 0x83d,
	PRESS_UP_LEFT			= 0x841,
	PRESS_DOWN_LEFT			= 0x83f,
	PRESS_MENU_BUTTON		= 0x80F,
	UNPRESS_SET_BUTTON		= 0x813, // usually PRESS_SET + 1
	PRESS_SET_BUTTON		= 0x812, // also joy center?
	PRESS_PICSTYLE_BUTTON		= 0x81C,
	PRESS_ZOOM_IN_BUTTON		= 0x819,
	UNPRESS_ZOOM_IN_BUTTON		= 0x81A,
	PRESS_ZOOM_OUT_BUTTON		= 0x10000039,
	UNPRESS_ZOOM_OUT_BUTTON		= 0x1000003A,
	PRESS_JOY_LEFT			= 0x820,
	PRESS_JOY_UP			= 0x822,
	PRESS_JOY_DOWN			= 0x824,
	PRESS_JOY_RIGHT			= 0x826,
	PRESS_JOY_UP_LEFT		= 0x82b,
	PRESS_JOY_UP_RIGHT		= 0x825,
	PRESS_JOY_DOWN_LEFT		= 0x829,
	PRESS_JOY_DOWN_RIGHT		= 0x827,
	JOY_CENTER			= 0x823,
	PRESS_INFO_BUTTON		= 0x829,
	ELECTRONIC_SUB_DIAL_RIGHT	= 0x82B,
	ELECTRONIC_SUB_DIAL_LEFT	= 0x82C,
	DIAL_LEFT			= 0x82E,
	DIAL_RIGHT			= 0x82F,
	PRESS_PLAY_BUTTON		= 0x10000000,
	PRESS_ERASE_BUTTON		= 0x10000001,
	PRESS_DIRECT_PRINT_BUTTON	= 0x1000000C,
	PRESS_FUNC_BUTTON		= 0x10000007,
	PRESS_PICTURE_STYLE_BUTTON	= 0x10000009,
	GUICMD_OPEN_SLOT_COVER		= 0x1000000B,
	GUICMD_CLOSE_SLOT_COVER		= 0x1000000C,
	GUICMD_MADE_QR			= 0x10000037,
	GUICMD_MADE_FILE		= 0x10000038,
	GUI_TIMER4			= 0x10000054, // no idea
	GUI_TIMER2			= 0x10000069, // no idea
	GUI_TIMER3			= 0x1000006D, // no idea
	START_SHOOT_MOVIE		= 0x1000008A,
	GUI_PROP_EVENT			= 0x100000A6, // maybe?
	LOCAL_MOVIE_RECORD_STOP		= 0x10000078, // DlgLiveViewApp
	GUICMD_UI_OK			= 0x100000A1,
	GUICMD_START_AS_CHECK		= 0x100000A2,
	GUICMD_LOCK_OFF			= 0x100000A3,
	GUICMD_LOCK_ON			= 0x100000A4,
	PRESS_HALFSHUTTER_MAYBE 	= 0x10000041,
	UNPRESS_HALFSHUTTER_MAYBE 	= 0x10000042,
	START_UNAVI_AFFRAME_MODE = 0x1000003E,
	LOCAL_REFRESH_BATTERIESHISTORY = 0x10000080,

	EVENTID_METERING_START			= 0x10000062,
	EVENTID_METERING_TIMER_START	= 0x10000063,
	EVENTID_RELEASE_START			= 0x10000064,
	EVENTID_RELEASE_END				= 0x10000065,

	EVENTID_94			= 0x10000094,
	EVENT_10000086 = 0x10000086,
	EVENT_1 = 1
} gui_event_t;

#endif
