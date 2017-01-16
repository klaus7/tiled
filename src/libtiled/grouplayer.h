/*
 * grouplayer.h
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

#ifndef GROUPLAYER_H
#define GROUPLAYER_H

#include "layer.h"

#include <QList>

namespace Tiled {

class TILEDSHARED_EXPORT GroupLayer : public Layer
{
public:
    GroupLayer(const QString &name, int x, int y);

private:
    QList<Layer*> mChildren;

    bool isEmpty() const override;
    QSet<SharedTileset> usedTilesets() const override;
    bool referencesTileset(const Tileset *tileset) const override;
    void replaceReferencesToTileset(Tileset *oldTileset, Tileset *newTileset) override;
    bool canMergeWith(Layer *other) const override;
    Layer *mergedWith(Layer *other) const override;
    Layer *clone() const override;
};

} // namespace Tiled

#endif // GROUPLAYER_H