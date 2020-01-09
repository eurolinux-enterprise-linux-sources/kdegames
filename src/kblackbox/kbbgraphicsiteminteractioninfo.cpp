//
// KBlackBox
//
// A simple game inspired by an emacs module
//
/***************************************************************************
 *   Copyright (c) 1999-2000, Robert Cimrman                               *
 *   cimrman3@students.zcu.cz                                              *
 *                                                                         *
 *   Copyright (c) 2007, Nicolas Roffet                                    *
 *   nicolas-kde@roffet.com                                                *
 *                                                                         *
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
 *   51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA               *
 ***************************************************************************/



#include "kbbgraphicsiteminteractioninfo.h"
#include "kbbgraphicsitem.h"
#include "kbbscalablegraphicwidget.h"
#include "kbbthememanager.h"



//
// Constructor / Destructor
//

KBBGraphicsItemInteractionInfo::KBBGraphicsItemInteractionInfo( KBBScalableGraphicWidget* widget, KBBThemeManager* themeManager, KBBScalableGraphicWidget::itemType type, const qreal x, const qreal y, const int rotation) : KBBGraphicsItem(KBBScalableGraphicWidget::interactionInfoNothing, widget->scene(), themeManager)
{
	m_themeManager = themeManager;
	setPos(x, y);
	rotate(rotation);
	setType(type);
}



//
// Public
//

void KBBGraphicsItemInteractionInfo::setType(KBBScalableGraphicWidget::itemType type)
{
	setElementId(m_themeManager->elementId(type));
}
