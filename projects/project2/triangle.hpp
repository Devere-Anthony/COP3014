/* COP3014 triangle.hpp - class definition for Triangle class
 *
 * By: D'Anthony Weaver 
 * Other contributors: N/A
 * Last Modified:  14 MAR 2021
 */

#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
#include "circle.hpp"

class Triangle
{
	public:
		Triangle(){};
		Triangle(double b, double h);
		double getBase();
		double getHeight();
		void setBase(double b);
		void setHeight(double h);
		double area();
		bool circle(Circle c);
		
	private:
		double base{1.0};
		double height{1.0};
	 
};
#endif
