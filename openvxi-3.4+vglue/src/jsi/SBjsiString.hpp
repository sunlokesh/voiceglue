/*****************************************************************************
 *****************************************************************************
 *
 * SBinetString, string class that is a subset of STL wstring
 *
 * The SBinetString class stores a string in a grow-only buffer, a
 * functional subset of the STL wstring class. This header merely
 * exists to make it easy to eliminate the use of STL wstring which
 * does not exist on some Linux versions.
 *
 *****************************************************************************
 ****************************************************************************/

/****************License************************************************
 * Vocalocity OpenVXI
 * Copyright (C) 2004-2005 by Vocalocity, Inc. All Rights Reserved.
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
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 * Vocalocity, the Vocalocity logo, and VocalOS are trademarks or 
 * registered trademarks of Vocalocity, Inc. 
 * OpenVXI is a trademark of Scansoft, Inc. and used under license 
 * by Vocalocity.
 ***********************************************************************/

// -----1=0-------2=0-------3=0-------4=0-------5=0-------6=0-------7=0-------8

#ifndef _SBINET_STRING_H__
#define _SBINET_STRING_H__

#include "SBjsiInternal.h"
#include "VXItypes.h"

// Utility method for end users to convert wide to narrow characters
// (characters that cannot be converted become a Latin-1 upside down ?
// character), not used here
inline char SBinetW2C(wchar_t w)
{
  return ((w & 0xff00)?'\277':((unsigned char) (w & 0x00ff)));
}

#ifdef NO_STL
#include "SBjsiStringNoSTL.hpp"
#else
#include "SBjsiStringSTL.hpp"
#endif

#endif  /* include guard */
