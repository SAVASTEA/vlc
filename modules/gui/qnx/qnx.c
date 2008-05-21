/*****************************************************************************
 * qnx.c : QNX RTOS plugin for vlc
 *****************************************************************************
 * Copyright (C) 2000, 2001 the VideoLAN team
 *
 * Authors: Jon Lech Johansen <jon-vl@nanocrew.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

/*****************************************************************************
 * Preamble
 *****************************************************************************/

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <vlc/vlc.h>
#include <vlc_plugin.h>

/*****************************************************************************
 * External prototypes
 ******************************************************************************/
int  OpenAudio    ( vlc_object_t * );
void CloseAudio   ( vlc_object_t * );

int  OpenVideo    ( vlc_object_t * );
void CloseVideo   ( vlc_object_t * );

/*****************************************************************************
 * Module descriptor
 *****************************************************************************/
vlc_module_begin();
    set_description( N_("QNX RTOS video and audio output") );
    set_capability( "video output", 100 );
    set_callbacks( OpenVideo, CloseVideo );
    set_category( CAT_INTERFACE );
    set_subcategory( SUBCAT_INTERFACE_MAIN );
    add_submodule();
        set_capability( "audio output", 100 );
        set_callbacks( OpenAudio, CloseAudio );
vlc_module_end();

