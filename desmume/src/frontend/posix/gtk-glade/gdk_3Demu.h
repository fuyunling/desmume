/* $Id: gdk_3Demu.h,v 1.1 2007-04-21 19:45:07 evilynux Exp $
 */
/*  
	Copyright (C) 2006-2007 Ben Jaques

    This file is part of DeSmuME

    DeSmuME is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    DeSmuME is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with DeSmuME; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
#ifdef GTKGLEXT_AVAILABLE
/*
 * The GDK 3D emulation.
 * This uses the OpenGL Collector plugin, using gdkGLext for the platform
 * specific helper functions.
 */

int
init_opengl_gdk_3Demu( GdkDrawable * drawable);

#endif
