#include "CirCollsion.h"

CirCollsion::CirCollsion()
{
}

double CirCollsion::distance(glm::vec2  const& a, glm::vec2  const& b)
{
	return sqrt((int)(a.x - b.x) ^ 2 + (int)(a.y - b.y) ^ 2);
}

bool CirCollsion::CirclevsCircleUnoptimized(Circle const& a, Circle const& b)
{
	float r = a.getRadius() + b.getRadius();
	return r < distance(a.getPos(), b.getPos());
}

bool CirCollsion::CirclevsCircleOptimized(Circle const& a, Circle const& b)
{
	float r = a.getRadius() + b.getRadius();
	r *= r;
	return r < (int)(a.getPos().x + b.getPos().x) ^ 2 + (int)(a.getPos().y + b.getPos().y) ^ 2;
}



CirCollsion::~CirCollsion()
{
}
