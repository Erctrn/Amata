#ifndef CIRCOLLSION
#define CIRCOLLSION

#include <iostream>
#include <vector>
#include <vec2.hpp>
#include "Circle.h"



class CirCollsion
{
public:

	CirCollsion();

	
	double distance(glm::vec2 const&, glm::vec2 const&);
	bool CirclevsCircleUnoptimized(Circle const&, Circle const&);
	bool CirclevsCircleOptimized(Circle const&, Circle const&);


	~CirCollsion();
private:
};

#endif // !CIRCOLLSION