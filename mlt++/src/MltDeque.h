/**
 * MltDeque.h - MLT Wrapper
 * Copyright (C) 2004-2005 Charles Yates
 * Author: Charles Yates <charles.yates@pandora.be>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _MLTPP_DEQUE_H
#define _MLTPP_DEQUE_H

#include <framework/mlt.h>

namespace Mlt
{
	class Deque
	{
		private:
			mlt_deque deque;
		public:
			Deque( );
			~Deque( );
			int count( );
			int push_back( void *item );
			void *pop_back( );
			int push_front( void *item );
			void *pop_front( );
			void *peek_back( );
			void *peek_front( );
	};
}

#endif
