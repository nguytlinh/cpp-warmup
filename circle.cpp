// Name: Linh Le
// Date: Feb 25, 2021

#include "circle.h"


Circle::Circle() : radius(0.0f) {} //default constructor

Circle::~Circle() {} //destructor 

Circle::Circle(float r) //constructor taking radius as argument
{
	radius = r;
}

Circle::Circle(const Circle& circle) //copy constructor
{
	radius = circle.radius;
}

Circle& Circle::operator=(const Circle& circle) //assignment operation
{
	radius = circle.radius;
	return *this;
}

float Circle::getRadius() //getter
{
	return radius;
}

void Circle::setRadius(float r) //setter
{
	radius = r;
}

float Circle::computeArea() //compute area
{
	return radius * radius * PI_F;
}

std::ostream& operator<<(std::ostream& os, const Circle& c) //output stream operator
{
	os << c.radius;
	return os;
}

Circle operator+(const Circle& c1, const Circle& c2) //add operator
{
	float rad = c1.radius + c2.radius;
	Circle c(rad);
	return c;
}
