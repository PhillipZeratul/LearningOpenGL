#pragma once
#include "Sphere.h"

class PolarSphere :
	public Sphere
{
public:
	PolarSphere(float radius, int sectorCount, int stackCount);
};
