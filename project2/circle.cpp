/* COP3014 circle.cpp - implementation of Circle class functions 
 *
 * By: D'Anthony Weaver
 * Other contributors: N/A
 * Last Modified:  14 MAR 2021
 */

#include <iostream> 
#include "circle.hpp"

double Circle::getRadius()
{
	return radius;
};

void Circle::setRadius(double r)
{
	radius = r;
};

double Circle::area()
{
	/* Area = PI * radius * radius */
	return (PI * radius * radius);
};

double Circle::diameter()
{
	/* Diameter = 2 * radius */
	return (2 * radius);
};

double Circle::circumference()
{
	/* Circumference = 2 * PI * radius */
	return (2 * PI * radius);
};

bool Circle::rectangle(Rectangle r)
{
	/* Compare the area of a Rectangle to the area of this 
	 * Circle. Return true is they are equal, else false.
	 * Arg:
	 * 	- Rectangle r -> a Rectangle class object
	 */
	std::cout << std::boolalpha;
	if (this->area() == r.area())
		return true;
	else 
		return false;
};
