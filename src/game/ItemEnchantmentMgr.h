/*
 * Copyright (C) 2005-2008 MaNGOS <http://www.mangosproject.org/>
 *
 * Copyright (C) 2008 Neo <http://www.neocore.org/>
 *
 * Copyright (C) 2009-2010 NeoZero <http://www.neozero.org/>
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
 */

#ifndef _ITEM_ENCHANTING_MGR_H
#define _ITEM_ENCHANTING_MGR_H

#include "Common.h"

void LoadRandomEnchantmentsTable();
uint32 GetItemEnchantMod(uint32 entry);
uint32 GenerateEnchSuffixFactor(uint32 item_id);

#endif