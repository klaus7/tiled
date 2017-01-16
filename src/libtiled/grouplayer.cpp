/*
 * grouplayer.cpp
 * Copyright 2017, Thorbjørn Lindeijer <bjorn@lindeijer.nl>
 *
 * This file is part of Tiled.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "grouplayer.h"

namespace Tiled {

GroupLayer::GroupLayer(const QString &name, int x, int y):
    Layer(GroupLayerType, name, x, y)
{
}

bool GroupLayer::isEmpty() const
{
    // todo
    return false;
}

QSet<SharedTileset> GroupLayer::usedTilesets() const
{
    // todo
    return QSet<SharedTileset>();
}

bool GroupLayer::referencesTileset(const Tileset *tileset) const
{
    // todo
    return false;
}

void GroupLayer::replaceReferencesToTileset(Tileset *oldTileset, Tileset *newTileset)
{
    // todo
}

bool GroupLayer::canMergeWith(Layer *other) const
{
    // todo
    return false;
}

Layer *GroupLayer::mergedWith(Layer *other) const
{
    // todo
    return nullptr;
}

Layer *GroupLayer::clone() const
{
    // todo
    return nullptr;
}

} // namespace Tiled
