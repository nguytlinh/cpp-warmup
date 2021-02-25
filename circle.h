// Name: Linh Le
// Date: Feb 25, 2021

#pragma once
#include <iostream>

class Circle
{
public:
	const float PI_F = 3.14159265358978f;
	Circle(); //default
	Circle(float r); //cons
	~Circle(); //destructor
	Circle(const Circle& circle); //copy cons

	Circle& operator=(const Circle& circle); //ass oper

	float getRadius(); //getter
	void setRadius(float r); //setter
	float computeArea(); //compute area

	friend std::ostream& operator<<(std::ostream& os, const Circle& c);
	friend Circle operator+(const Circle& c1, const Circle& c2);

protected:
	float radius;
};

