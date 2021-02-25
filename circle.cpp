#include "circle.h"

Circle::Circle() : radius(0.0f) {} //default cons

Circle::~Circle() //destructor
{
}

Circle::Circle(float r) //cons taking rad as argument
{
	radius = r;
}

Circle::Circle(const Circle& circle) //copy cons
{
	radius = circle.radius;
}

Circle& Circle::operator=(const Circle& circle) //assignment oper
{
	radius = circle.radius;
	return *this;
}

float Circle::getRadius()
{
	return radius;
}

void Circle::setRadius(float r)
{
	radius = r;
}

float Circle::computeArea()
{
	return radius * radius * PI_F;
}
std::ostream& operator<<(std::ostream& os, const Circle& c)
{
	os << c.radius;
	return os;
}

Circle operator+(const Circle& c1, const Circle& c2)
{
	float rad = c1.radius + c2.radius;
	Circle c(rad);
	return c;
}



// setter
// method for computing and returning the area