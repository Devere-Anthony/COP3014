/* COP3014 triangle.cpp - function implementations for Triangle class
 *
 * By: D'Anthony Weaver 
 * Other contributors: N/A
 * Last Modified:  14 MAR 2021
 */

#include <iostream>
#include "triangle.hpp"

Triangle::Triangle(double b, double h)
{
	base = b;
	height = h;
};

double Triangle::getBase()
{
	return base;
};

double Triangle::getHeight()
{
	return height;
};

void Triangle::setBase(double b)
{
	base = b;
};

void  Triangle::setHeight(double h)
{
	height = h;
};

double Triangle::area()
{
	return ((height * base) / 2);
};

bool Triangle::circle(Circle c)
{
	/* circle() - compares the area of this Triangle with 
	 * the area of a Circle. Return true if they are equal, 
	 * else false.
	 */
	std::cout << std::boolalpha;
	if (this->area() == c.area())
		return true;
	else 
		return false;
};
