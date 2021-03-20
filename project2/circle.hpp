/* COP3014 circle.hpp - definition of Circle class. See
 * circle.cpp for function implementation details.
 *
 * By: D'Anthony Weaver 
 * Other contributors: N/A
 * Last Modified:  14 MAR 2021
 */

#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "rectangle.hpp"

const double PI = 3.141592;

class Circle
{
	public:
		Circle(){};	
		Circle(double r){radius = r;}
		double getRadius();
		void setRadius(double r);
		double area();
		double diameter();
		double circumference();
		bool rectangle(Rectangle r);
		
	private:
		double radius{1.0};
};
#endif
