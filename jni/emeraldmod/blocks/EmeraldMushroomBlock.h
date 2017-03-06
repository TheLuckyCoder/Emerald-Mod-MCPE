#pragma once

#include "minecraftpe/world/level/block/Block.h"

class EmeraldMushroomBlock : public Block
{
public:
	EmeraldMushroomBlock(short id);
	
	virtual bool mayPlaceOn(const Block&) const;
	virtual AABB& getCollisionShape(AABB&, BlockSource&, const BlockPos&, Entity*) const;
	virtual void onGraphicsModeChanged(bool, bool, bool);
	virtual int getRenderLayer(BlockSource&, const BlockPos&) const;
	virtual int getExtraRenderLayers() const;
};
