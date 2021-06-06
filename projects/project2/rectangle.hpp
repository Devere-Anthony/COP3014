/* COP3014 rectangle.hpp - definintion of Rectangle class. See rectangle.cpp
 * for function implementation details.
 *
 * By: D'Anthony Weaver 
 * Other contributors: N/A
 * Last Modified:  14 MAR 2021
 */

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle
{
	public:
		Rectangle(){};
		Rectangle(double l, double w);
		double getLength();
		double getWidth();
		void setLength(double l);
		void setWidth(double w);
		bool isSquare();
		double area();
		double perimeter();
		double diagonal();
	private:
		double length{1.0};
		double width{1.0};
};
#endif
