/***************************************************************************
 *   Copyright 2007      Mick Kappenburg <ksudoku@kappendburg.net>         *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/

#ifndef KSUDOKUGENERATEEVENT_H
#define KSUDOKUGENERATEEVENT_H

#include <QEvent>
#include "ksudoku_types.h"

namespace ksudoku {

enum GEType { puzzleChanged = QEvent::User + 1, sizeChanged = QEvent::User + 2 };

/**
 * Class "needed" for communication between Qt threads
 */

class GenerateEvent : public QEvent
{
public:
	///constructor
	inline GenerateEvent(GEType event);
	///@return event type
	inline GEType event() const;
};

GenerateEvent::GenerateEvent(GEType eventg)
	: QEvent( (QEvent::Type) eventg )
{
};
	
GEType GenerateEvent::event() const
{
	return (GEType) type();
}

}

#endif
