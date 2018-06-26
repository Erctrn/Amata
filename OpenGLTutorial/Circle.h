#ifndef _CIRCLE_
#define _CIRCLE_

#include <iostream>
#include <string>
#include <vector>
#include <vec2.hpp>


const int MAX_POINTS = 32;

class Circle
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

	float getRadius() const;
	std::vector<glm::vec2> getCirclePoint() const;

	~Circle();

private:
	float m_Radius;
	std::vector<glm::vec2> m_CirclePoint;

	void createCiclePiont(const float&);

};

#endif // !_CIRCLE_

