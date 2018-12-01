/*
    Formido - a shooting game (see README for additional information)
    Copyright (C) 2002, 2003 Mika Halttunen

    You can contact me by email: lsoft@mbnet.fi
    -----------------------------------------------------------------

    This file is part of Formido.

    Formido is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Formido is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Formido; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef INIT_H
#define INIT_H

#include "config.h"

// Screen dimensions
#define SCREEN_W	640
#define SCREEN_H	480

// Keep a global pointer to the screen
struct SDL_Surface;
extern SDL_Surface *screen;

// Keep a global pointer to the config
extern CONFIG config;

// Hack function which adds 'data/' prefix
// to a string.
// Used in DAT(x)
char *add_prefix(char *str);

#define DAT(x) (add_prefix(x))


// Initialize SDL
void init_sdl();

// Display an error message and quit
void error_msg(char *msg, ...);


#endif

