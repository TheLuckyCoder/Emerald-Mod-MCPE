#pragma once

#include "../StructurePiece.h"
#include "../StartPiece.h"
class PieceWeight;

class VillagePiece : public StructurePiece {
public:
	StartPiece* start;
	
	VillagePiece();
	VillagePiece(StartPiece*, int);

	virtual ~VillagePiece();
	virtual int getVillagerProfession(int);
	virtual void placeBlock(BlockSource*, FullBlock, int, int, int, const BoundingBox&);
	virtual void fillColumnDown(BlockSource*, FullBlock, int, int, int, const BoundingBox&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void readAdditionalSaveData(CompoundTag&);
	
	void spawnVillagers(BlockSource*, const BoundingBox&, int, int, int, int);
	bool biomeBlock(FullBlock);
	void generateBox(BlockSource*, const BoundingBox&, int, int, int, int, int, int, FullBlock, FullBlock, bool);
	bool isOkBox(const BoundingBox&);
};