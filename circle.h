// Name: Linh Le
// Date: Feb 25, 2021

#pragma once
#include <iostream>

class Circle
{
public:
	const float PI_F = 3.14159265358978f; // value of pi

	Circle(); // default constructor
	Circle(float r); // constructor taking radius argument
	~Circle(); // destructor
	Circle(const Circle& circle); //copy constructor

	Circle& operator=(const Circle& circle); //assignment operator

	float getRadius(); //getter
	void setRadius(float r); //setter
	float computeArea(); //compute area

	friend std::ostream& operator<<(std::ostream& os, const Circle& c); //output stream operator
	friend Circle operator+(const Circle& c1, const Circle& c2); // add operator

protected:
	float radius; // value of radius
};

