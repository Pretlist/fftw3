/*
 * Copyright (c) 2002 Matteo Frigo
 * Copyright (c) 2002 Steven G. Johnson
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* $Id: fftw3.h,v 1.4 2002-07-21 05:52:54 stevenj Exp $ */

/* FFTW installed header file */
#ifndef __FFTW3_H__
#define __FFTW3_H__

/* determine precision and name-mangling scheme */
#define FFTW_MANGLE(prefix, name) prefix ## name
#if defined(FFTW_SINGLE)
typedef float fftw_real;
#define FFTW(name) FFTW_MANGLE(sfftw_, name)
#elif defined(FFTW_LDOUBLE)
typedef long double fftw_real;
#define FFTW(name) FFTW_MANGLE(lfftw_, name)
#else
typedef double fftw_real;
#define FFTW(name) FFTW_MANGLE(dfftw_, name)
#endif

extern const char *const FFTW(version);
extern const char *const FFTW(cc);
extern const char *const FFTW(codelet_optim);

#endif				/* __FFTW3_H__ */
