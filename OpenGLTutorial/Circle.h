#ifndef _CIRCLE_
#define _CIRCLE_

#include <iostream>
#include <string>
#include <vector>
#include <vec2.hpp>
#include "Component.h"


const int MAX_POINTS = 32;

class Circle : public Component
{
	// this line of code is to to print out the the class when using
	// std::cout
	// Ex: std::cout << Circle << << endl;
	// Output: Circle: 
	//		   Radius: 1.0 
	//		   Circle Point: x , y
	//						0.980785 , 0.19509
	//						0.92388, 0.382683
	//						0.83147, 0.55557
	//						......., .......
	friend std::ostream& operator<<(std::ostream&, const Circle&);

public:
	Circle();
	Circle(const float &);

	void setRadius(const float&);
	void setPos(const float&, const float&);

	float getRadius() const;
	glm::vec2  getPos() const;
	std::vector<glm::vec2> getCirclePoint() const;

	~Circle();

private:
	float m_Radius;
	glm::vec2 m_Pos;
	std::vector<glm::vec2> m_CirclePoint;

	void createCiclePiont(const float&);

};

#endif // !_CIRCLE_

