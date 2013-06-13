/** \file
 * Key/value parser until we have a proper config.
 *
 * Auto-parsed variables will be assigned when read.
 * To create a configuration parameter:
 * <code>
 * CONFIG_INT( "name", variable, default_value );
 * </code>
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

#ifndef _config_h_
#define _config_h_

#define MAX_NAME_LEN            64
#define MAX_VALUE_LEN           60


struct config
{
//      struct config *         next;
        char                    name[ MAX_NAME_LEN ];
        char                    value[ MAX_VALUE_LEN ];
};

//extern struct config * global_config;


extern char *
config_value(
        struct config *         config,
        const char *            name
);

extern int
config_int(
        struct config *         config,
        const char *            name,
        int                     def
);


extern int
config_parse_file(
        const char *            filename
);


extern int
config_save_file(
        const char *            filename
);


/** Create an auto-parsed config variable */
struct config_var
{
        const char * name;
        //int        type;   //!< 0 == int, 1 == char *
        int *        value;
        int          default_value;
};


#define _CONFIG_VAR( NAME, TYPE_ENUM, TYPE, VAR, VALUE ) \
TYPE VAR = VALUE; \
struct config_var \
__attribute__((section(".config_vars"))) \
__config_##VAR = \
{ \
        .name           = NAME, \
/*        .type           = TYPE_ENUM, */ \
        .value          = (int*) &VAR, \
        .default_value  = (int) VALUE, \
}

#define CONFIG_INT( NAME, VAR, VALUE ) \
        _CONFIG_VAR( NAME, 0, int, VAR, VALUE )

#define CONFIG_UNSIGNED( NAME, VAR, VALUE ) \
        _CONFIG_VAR( NAME, 0, unsigned int, VAR, VALUE )


#define _CONFIG_ARRAY_ELEMENT( NAME, TYPE_ENUM, VAR, INDEX, VALUE ) \
struct config_var \
__attribute__((section(".config_vars"))) \
__config_##VAR##INDEX = \
{ \
        .name           = NAME, \
/*        .type           = TYPE_ENUM, */ \
        .value          = &(VAR[INDEX]), \
        .default_value  = VALUE, \
}

#define CONFIG_ARRAY_ELEMENT( NAME, VAR, INDEX, VALUE ) \
        _CONFIG_ARRAY_ELEMENT( NAME, 0, VAR, INDEX, VALUE )
        
OS_FUNCTION( 0x0A00001, struct config_var*,	get_config_vars_start );
OS_FUNCTION( 0x0A00002, struct config_var*,	get_config_vars_end );

#endif
