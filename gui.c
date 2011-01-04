/** \file
 * Magic Lantern GUI main task.
 *
 * Overrides the DryOS gui_main_task() to be able to re-map events.
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
#include "property.h"
#include "bmp.h"
#include "config.h"
#include "consts-550d.109.h"

CONFIG_INT("button.menu.on", button_menu_on, BGMT_TRASH);
CONFIG_INT("button.menu.off", button_menu_off, BGMT_TRASH);

// halfshutter press is easier to detect from GUI events (PROP_HALFSHUTTER works only in LV mode)
int halfshutter_pressed = 0;
int get_halfshutter_pressed() 
{ 
	return halfshutter_pressed; 
}


struct semaphore * gui_sem;

struct gui_main_struct {
	void *			obj;		// off_0x00;
	uint32_t		counter;	// off_0x04;
	uint32_t		off_0x08;
	uint32_t		off_0x0c;
	uint32_t		off_0x10;
	uint32_t		off_0x14;
	uint32_t		off_0x18;
	uint32_t		off_0x1c;
	uint32_t		off_0x20;
	uint32_t		off_0x24;
	uint32_t		off_0x28;
	uint32_t		off_0x2c;
	uint32_t		off_0x30;
	struct msg_queue *	msg_queue;	// off_0x34;
	struct msg_queue *	msg_queue_550d;	// off_0x38;
	uint32_t		off_0x3c;
};

extern struct gui_main_struct gui_main_struct;

struct gui_timer_struct
{
	void *			obj;	// off_0x00
};

extern struct gui_timer_struct gui_timer_struct;

extern void* gui_main_task_functbl;

static void gui_main_task_550d()
{
	int kev = 0;
	struct event * event = NULL;
	int index = 0;
	void* funcs[GMT_NFUNCS];
	memcpy(funcs, GMT_FUNCTABLE, 4*GMT_NFUNCS);
	gui_init_end();
	while(1)
	{
		msg_queue_receive(gui_main_struct.msg_queue_550d, &event, 0);
		gui_main_struct.counter--;
		if (event == NULL) continue;
		index = event->type;
		if ((index >= GMT_NFUNCS) || (index < 0))
			continue;
				
		// event 0 is button press maybe?
		if( gui_state != GUISTATE_PLAYMENU && event->type == 0 )
		{
			if (event->param == button_menu_on && !gui_menu_shown()) 
			{
				give_semaphore( gui_sem );
				continue;
			}
			if (event->param == button_menu_off && gui_menu_shown()) 
			{
				gui_stop_menu();
				continue;
			} 
		}
		if (get_draw_event())
		{
			if (event->type != 2)
			{
				kev++;
				bmp_printf(FONT_SMALL, 0, 460, "Ev%d[%d]: p=%8x *o=%8x/%8x/%8x a=%8x", 
					kev, 
					event->type, 
					event->param, 
					event->obj ? *(uint32_t*)(event->obj) : 0,
					event->obj ? *(uint32_t*)(event->obj + 4) : 0,
					event->obj ? *(uint32_t*)(event->obj + 8) : 0,
					event->arg);
			}
		}
		
		if (gui_menu_shown() && event->type == 0) // some buttons hard to detect from main menu loop
		{
			//~ if (event->param == 0x56 && event->arg == 0x9) // wheel L/R
			//~ {
				//~ menu_select_current(); // quick select menu items with the wheel
				//~ continue;
			//~ }
			//~ if (event->param == 0x56 && event->arg == 0x1a) // zoom in press
			//~ {
				//~ gui_hide_menu( 100 );
				//~ lens_focus_start( 0 );
				//~ continue;
			//~ }
			if (lv_drawn() && event->param == BGMT_UNPRESS_HALFSHUTTER) // zoom out unpress, shared with halfshutter
			{
				gui_hide_menu( 2 );
				lens_focus_stop();
				continue;
			}
			if (lv_drawn() && event->param == BGMT_PRESS_HALFSHUTTER) // zoom out press, shared with halfshutter
			{
				gui_hide_menu( 50 );
				lens_focus_start( get_focus_dir() );
				continue;
			}
		}
		if (event->type == 0)
		{
			if (event->param == BGMT_PRESS_HALFSHUTTER) halfshutter_pressed = 1;
			if (event->param == BGMT_UNPRESS_HALFSHUTTER) halfshutter_pressed = 0;
		}
		void(*f)(struct event *) = funcs[index];
		f(event);
	}
} 

// 5D2 has a different version for gui_main_task

TASK_OVERRIDE( gui_main_task, gui_main_task_550d );
