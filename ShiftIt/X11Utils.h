/*
 ShiftIt: Resize windows with Hotkeys
 Copyright (C) 2010  Filip Krikava
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
 */

#ifndef _X11UTIL_H_

#define _X11UTIL_H_

int X11SetWindowGeometry(void *window, int x, int y, unsigned int width, unsigned int height);
int X11GetActiveWindowGeometry(void **activeWindow, int *x, int *y, unsigned int *width, unsigned int *height);
void X11FreeWindowRef(void *window);

char *X11GetErrorMessage(int code);

#endif // _X11UTIL_H_
