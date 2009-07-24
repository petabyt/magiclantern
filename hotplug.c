/** \file
 * Hotplug event detection.
 *
 * Ignores the video input so that no LCD switch occurs.
 */
/*
 * Copyright (C) 2009 Trammell Hudson <hudson+ml@osresearch.net>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

#include "dryos.h"

struct hotplug_struct
{
	uint32_t		initialized;	// off 0x00
	uint32_t		off_0x04;
	uint32_t		off_0x08;
	uint32_t		off_0x0c;
	uint32_t		off_0x10;
	uint32_t		off_0x14;
	uint32_t		off_0x18;
	uint32_t		off_0x1c;
	uint32_t		off_0x20;
	uint32_t		video_state;	// off_0x24;
	uint32_t		off_0x28;
	uint32_t		off_0x2c;
	uint32_t		last_video_state; // off_0x30;
};

extern struct hotplug_struct hotplug_struct;

static void
my_hotplug_task( void )
{
	volatile uint32_t * camera_engine = (void*) 0xC0220000;

	DebugMsg( DM_MAGIC, 3,
		"%s: Starting up using camera engine %x",
		__func__,
		camera_engine
	);

	return;

	while(1)
	{
		// \todo THIS DOES NOT WORK!
		uint32_t video_state = camera_engine[0x70/4];
		if( video_state == 1 )
		{
			if( hotplug_struct.last_video_state != video_state )
			{
				DebugMsg( 0x84, 3, "Video Connect -->" );
				hotplug_struct.last_video_state = video_state;
			}
		} else {
			if( hotplug_struct.last_video_state != video_state )
			{
				DebugMsg( 0x84, 3, "Video Disconnect" );
				hotplug_struct.last_video_state = video_state;
			}
		}

		// Something with a semaphore?  Sleep?
	}
}

TASK_OVERRIDE( hotplug_task, my_hotplug_task );
