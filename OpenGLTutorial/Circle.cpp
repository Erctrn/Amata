#include "Circle.h"

std::ostream & operator<<(std::ostream &out, const Circle &c)
{
	out << "Circle:" << std::endl;
	out << "Radius: " << c.m_Radius << std::endl;
	out << "Circle Point: x , y" << std::endl;
	for (glm::vec2 point : c.m_CirclePoint)
	{
		out << "\t" << point.x << " , " << point.y << std::endl;
	}

	return out;
}

Circle::Circle()
{
	m_Radius = 1;
	createCiclePiont(m_Radius);
}

Circle::Circle(const float &radius)
{
	m_Radius = radius;
	createCiclePiont(m_Radius);
}

void Circle::setRadius(const float & newRadius)
{
	m_Radius = newRadius;
	m_CirclePoint.clear();
	createCiclePiont(m_Radius);
}

float Circle::getRadius() const
{
	return m_Radius;
}

std::vector<glm::vec2> Circle::getCirclePoint() const
{
	return m_CirclePoint;
}



Circle::~Circle()
{
}


void Circle::createCiclePiont(const float &radius)
{
	for (unsigned i = 0; i < MAX_POINTS; i++)
	{
		// 2πr is the circumference of a circle
		// 2πr divided by a number will give me a piece of the circle, i
		// n this case if I divide it by 32, ill get 1 of the 32 points from it.
		// 1 * (2πr)/32 will get me the first point, 2 * (2πr)/32 
		// will get me the 2nd point, ... do this 32 times will give me 32 
		// different points to form a circle 
		float theta = i * (2.0f * 3.1415926f) / MAX_POINTS;
		float x = radius * cosf(theta);
		float y = radius * sinf(theta);

		m_CirclePoint.push_back(glm::vec2(x, y));
	}
}


