/*********
*
* In the name of the Father, and of the Son, and of the Holy Spirit.
*
* This file is part of BibleTime's source code, https://bibletime.info/
*
* Copyright 1999-2021 by the BibleTime developers.
* The BibleTime source code is licensed under the GNU General Public License
* version 2.0.
*
**********/

#include "BtMimeData.h"

#include <utility>


BTMimeData::BTMimeData(ItemList bookmarks)
    : m_bookmarkList(std::move(bookmarks))
{ setData(QStringLiteral("BibleTime/Bookmark"), {}); }
