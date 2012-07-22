/** \file
 * Magic Lantern menu help
 */
/*
 * Copyright (C) 2011 Alex Dumitrache <broscutamaker@gmail.com>
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
#include "version.h"
#include "bmp.h"
#include "gui.h"
#include "config.h"
#include "property.h"
#include "lens.h"
#include "font.h"
#include "menu.h"

extern int menu_help_active;
int current_page = 1;
extern int help_pages;

void menu_help_show_page(int page)
{
    menu_help_active = 1;
    char path[100];
    struct bmp_file_t * doc = (void*) -1;

    snprintf(path, sizeof(path), CARD_DRIVE "ML/doc/page-%03d.bmh", page);
    doc = bmp_load(path, 1);
    if (!doc)
    {
        snprintf(path, sizeof(path), CARD_DRIVE "ML/doc/page-%03d.bmp", page);
        doc = bmp_load(path, 1);
    }

    if (doc)
    {
        bmp_draw_scaled_ex(doc, 0, 0, 720, 480, 0);
        msleep(200); // no idea if it helps on 500D, but who knows (at least feels better on the UI)
        FreeMemory(doc);
    }
    else
    {
        clrscr();
        bmp_printf(FONT_MED, 0, 0, "Could not load help page %s\nPlease unzip 'doc' directory on your SD card.", path);
    }
}

void menu_help_redraw()
{
    BMP_LOCK( menu_help_show_page(current_page); );
}

void menu_help_next_page()
{
    current_page = mod(current_page, help_pages) + 1;
    menu_help_active = 1;
}

void menu_help_prev_page()
{
    current_page = mod(current_page - 2, help_pages) + 1;
    menu_help_active = 1;
}

void menu_help_go_to_page(int page)
{
    current_page = page;
    menu_help_active = 1;
}

void str_make_lowercase(char* s)
{
    while (*s) { *s = tolower(*s); s++; }
}

void menu_help_go_to_label(void* label)
{
    int page = 1;
    
    // hack: use config file routines to parse menu index file
    extern int config_file_size, config_file_pos;
    extern char* config_file_buf;
    config_file_buf = (void*)read_entire_file(CARD_DRIVE "ML/doc/menuidx.dat", &config_file_size);
    config_file_pos = 0;

    char line_buf[ 100 ];
    
    // trim spaces
    char label_adj[100];
    snprintf(label_adj, sizeof(label_adj), "%s", label);
    while (label_adj[strlen(label_adj)-1] == ' ')
    {
        label_adj[strlen(label_adj)-1] = '\0';
    }
    str_make_lowercase(label_adj);

    while( read_line(line_buf, sizeof(line_buf) ) >= 0 )
    {
        char* name = line_buf+4;
        str_make_lowercase(name);
        int pagenum = atoi(line_buf);
        if(streq(name, label_adj))
        {
            page = pagenum;
        }
        help_pages = MAX(help_pages, pagenum);
    }
    free_dma_memory(config_file_buf);
    config_file_buf = 0;
    
    current_page = page;
    menu_help_active = 1;
}
