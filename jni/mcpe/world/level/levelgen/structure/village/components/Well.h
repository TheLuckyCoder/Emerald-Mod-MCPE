#pragma once

#include "../VillagePiece.h"

class Well : public VillagePiece {
public:
	Well();
	Well(StartPiece*, int, Random&, int, int);
	Well(StartPiece*, int, Random&, const BoundingBox&, int);
	
	virtual ~Well();
	virtual void postProcess(BlockSource*, Random&, const BoundingBox&);
};