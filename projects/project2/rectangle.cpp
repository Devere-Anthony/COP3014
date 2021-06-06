/* COP3014 rectangle.cpp - implementation of Rectangle class functions.
 *
 * By: D'Anthony Weaver
 * Other contributors: N/A
 * Last Modified:  14 MAR 2021
 */

#include <iostream>
#include <cmath>
#include "rectangle.hpp"

Rectangle::Rectangle(double l, double w)
{
	length = l;
	width = w;
};

double Rectangle::getLength()
{
	return length;
};

double Rectangle::getWidth()
{
	return width;
};

void Rectangle::setLength(double l)
{
	length = l;
};

void Rectangle::setWidth(double w)
{
	width = w;
};

bool Rectangle::isSquare()
{
	/* isSquare() - checks to see if this Rectangle object is
	 * a square by comparing its length and width
	 */
	std::cout << std::boolalpha;
	if (length == width)
		return true;
	else
		return false;		
};

double Rectangle::area()
{
	return (length * width);
};

double Rectangle::perimeter()
{
	return (2 * (length + width));
};

double Rectangle::diagonal()
{
	double x = (length * length) + (width * width);
	return sqrt(x);
};	
