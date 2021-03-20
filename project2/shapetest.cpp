/* COP3014 Project 2 - Implement a program for creating a menu-program for 
 * reporting important parameters of some 2D geometric shapes.  
 *
 * By: D'Anthony Weaver 
 * Other contributors: N/A
 * Last Modified:  14 MAR 2021
 */

#include <iostream> 
#include "circle.hpp"
#include "triangle.hpp"
#include "rectangle.hpp"
#include <string>

int main()
{
	std::string userInput{};
	bool flag(true);
	
	while(flag)
	{
		std::cout << "Type the number of corresponding shape to build"
			<< "\n(Or type 'q' to quit)\n" << std::endl;
		std::cout << "1.Circle\t\t\t2.Triangle" << std::endl;
		std::cout << "3.Rectangle\t\t\tq.Quit" << std::endl;
		std::cout << "> ";
		std::cin >> userInput;
		
		if (userInput == "1")	// Start Circle if
		{
			std::cout << "\nWould you like to enter the radius? y/N" << std::endl;
			std::cout << "(No to use default value of 1.0)" << std::endl;
			std::cout << "> ";
			std::cin >> userInput;	

			if (userInput == "y" || userInput == "Y")
			{
				double x{};
				std::cout << "\nEnter radius: ";
				std::cin >> x;
				Circle c1(x);
				
				std::cout << "\nCircle Information" << std::endl;
				std::cout << "------------------" << std::endl;
				std::cout << "Radius: " << c1.getRadius() << std::endl;
				std::cout << "Area: " << c1.area() << std::endl;
				std::cout << "Diameter: " << c1.diameter() << std::endl;
				std::cout << "Circumference: " << c1.circumference() << std::endl;			

				// Update circle radius state
				double r{};
				std::cout << "\nEnter new radius: ";
				std::cin >> r;
				c1.setRadius(r);

				// Create new default rectangle for area comparision
				Rectangle testRect;
				
				// Output updated radius state		
				std::cout << "\nCircle Updated Information" << std::endl;
				std::cout << "-----------------------------" << std::endl;
				std::cout << "Radius: " << c1.getRadius() << std::endl;
				std::cout << "Area: " << c1.area() << std::endl;
				std::cout << "Diameter: " << c1.diameter() << std::endl;
				std::cout << "Circumference: " << c1.circumference() << std::endl;	
				std::cout << "Area equal to 1x1 rectangle?: " << c1.rectangle(testRect) 
					  << std::endl;
			}
			else
			{
				Circle c2;
				std::cout << "\nCircle Information" << std::endl;
				std::cout << "------------------" << std::endl;
				std::cout << "Radius: " << c2.getRadius() << std::endl;
				std::cout << "Area: " << c2.area() << std::endl;
				std::cout << "Diameter: " << c2.diameter() << std::endl;
				std::cout << "Circumference: " << c2.circumference() << std::endl;	
				
				// Update radius state
				double r{};
				std::cout << "\nEnter new radius: ";
				std::cin >> r;
				c2.setRadius(r);

			        // Create new default rectangle for area comparision
				Rectangle testRect2;
				
				// Output updated radius state		
				std::cout << "\nCircle Updated Information" << std::endl;
				std::cout << "-----------------------------" << std::endl;
				std::cout << "Radius: " << c2.getRadius() << std::endl;
				std::cout << "Area: " << c2.area() << std::endl;
				std::cout << "Diameter: " << c2.diameter() << std::endl;
				std::cout << "Circumference: " << c2.circumference() << std::endl;	
				std::cout << "Area equal to 1x1 rectangle?: " << c2.rectangle(testRect2) 
					  << std::endl;
			}

		} // end Circle if
		else if (userInput == "2")	// Start Triangle if
		{
			std::cout << "\nWould you like to enter the base and height? y/N" << std::endl;
			std::cout << "(No to use default value of 1.0)" << std::endl;
			std::cout << "> ";
			std::cin >> userInput;	

			if (userInput == "y" || userInput == "Y")
			{
				double b{}, h{};
				std::cout << "Enter base: ";
				std::cin >> b;
				std::cout << "Enter height: ";	
				std::cin >> h;
				Triangle t1(b,h);
			
				std::cout << "\nTriangle Information" << std::endl;
				std::cout << "------------------" << std::endl;
				std::cout << "Base: " << t1.getBase() << std::endl;
				std::cout << "Height: " << t1.getHeight() << std::endl;
				std::cout << "Area: " << t1.area() << std::endl;

				// Update triangle base state
				std::cout << "Enter new base: ";
				std::cin >> b;
				t1.setBase(b);

				std::cout << "\nTriangle Updated Base Information:" << std::endl;
				std::cout << "-------------------------------------" << std::endl;
				std::cout << "Base: " << t1.getBase() << std::endl;
				std::cout << "Height: " << t1.getHeight() << std::endl;
				std::cout << "Area: " << t1.area() << std::endl;

				// Update triangle height state
				std::cout << "Enter new height: ";
				std::cin >> h;
				t1.setHeight(h);

				std::cout << "\nTriangle Updated Height Information:" << std::endl;
				std::cout << "-------------------------------------" << std::endl;
				std::cout << "Base: " << t1.getBase() << std::endl;
				std::cout << "Height: " << t1.getHeight() << std::endl;
				std::cout << "Area: " << t1.area() << std::endl;

				// Create default Circle for area comparison
				Circle testCirc;
				std::cout << "Area equal to 1x1 circle?: " << t1.circle(testCirc)
					  << std::endl;

			}
			else
			{
				Triangle t2;
				std::cout << "\nTriangle Information" << std::endl;
				std::cout << "------------------" << std::endl;
				std::cout << "Base: " << t2.getBase() << std::endl;
				std::cout << "Height: " << t2.getHeight() << std::endl;
				std::cout << "Area: " << t2.area() << std::endl;
				
				// Update triangle base state
				double b{};
				std::cout << "\nEnter new base: ";
				std::cin >> b;
				t2.setBase(b);

				std::cout << "\nTriangle Updated Base Information:" << std::endl;
				std::cout << "-------------------------------------" << std::endl;
				std::cout << "Base: " << t2.getBase() << std::endl;
				std::cout << "Height: " << t2.getHeight() << std::endl;
				std::cout << "Area: " << t2.area() << std::endl;

				// Update triangle height state
				double h{};
				std::cout << "\nEnter new height: ";
				std::cin >> h;
				t2.setHeight(h);

				std::cout << "\nTriangle Updated Height Information:" << std::endl;
				std::cout << "-------------------------------------" << std::endl;
				std::cout << "Base: " << t2.getBase() << std::endl;
				std::cout << "Height: " << t2.getHeight() << std::endl;
				std::cout << "Area: " << t2.area() << std::endl;

				// Create default Circle for area comparison
				Circle testCirc2;
				std::cout << "Area equal to 1x1 circle?: " << t2.circle(testCirc2)
					  << std::endl;

			}	
		} // end Triangle if
		else if (userInput == "3")	// Start Rectangle if 
		{
			std::cout << "\nWould you like to enter the length and width? y/N" << std::endl;
			std::cout << "(No to use default value of 1.0)" << std::endl;
			std::cout << "> ";
			std::cin >> userInput;	

			if (userInput == "y" || userInput == "Y")
			{
				double l{}, w{};
				std::cout << "Enter length: ";
				std::cin >> l;
				std::cout << "Enter width: ";	
				std::cin >> w;
				Rectangle r1(l,w);
			
				std::cout << "\nRectangle Information" << std::endl;
				std::cout << "------------------" << std::endl;
				std::cout << "Length: " << r1.getLength() << std::endl;
				std::cout << "Width: " << r1.getWidth() << std::endl;
				std::cout << "Area: " << r1.area() << std::endl;
				std::cout << "Permieter: " << r1.perimeter() << std::endl;
				std::cout << "Diagonal: " << r1.diagonal() << std::endl;
				std::cout << "Is square: " << r1.isSquare() << std::endl;

				// Update rectangle length state
				std::cout << "\nEnter new length: ";
				std::cin >> l;
				r1.setLength(l);
				
				std::cout << "\nUpdated Rectangle Length Information" << std::endl;
				std::cout << "------------------" << std::endl;
				std::cout << "Length: " << r1.getLength() << std::endl;
				std::cout << "Width: " << r1.getWidth() << std::endl;
				std::cout << "Area: " << r1.area() << std::endl;
				std::cout << "Permieter: " << r1.perimeter() << std::endl;
				std::cout << "Diagonal: " << r1.diagonal() << std::endl;
				std::cout << "Is square: " << r1.isSquare() << std::endl;

				// Update rectangle width state
				std::cout << "\nEnter new width: ";
				std::cin >> w;
				r1.setWidth(w);

				std::cout << "\nUpdated Rectangle Width Information" << std::endl;
                                std::cout << "------------------" << std::endl;
                                std::cout << "Length: " << r1.getLength() << std::endl;
                                std::cout << "Width: " << r1.getWidth() << std::endl;
                                std::cout << "Area: " << r1.area() << std::endl;
                                std::cout << "Permieter: " << r1.perimeter() << std::endl;
                                std::cout << "Diagonal: " << r1.diagonal() << std::endl;
                                std::cout << "Is square: " << r1.isSquare() << std::endl;

			}
			else
			{
				Rectangle r2;
				std::cout << "\nRectangle Information" << std::endl;
				std::cout << "------------------" << std::endl;
				std::cout << "Length: " << r2.getLength() << std::endl;
				std::cout << "Width: " << r2.getWidth() << std::endl;
				std::cout << "Area: " << r2.area() << std::endl;
				std::cout << "Permieter: " << r2.perimeter() << std::endl;
				std::cout << "Diagonal: " << r2.diagonal() << std::endl;
				std::cout << "Is square: " << r2.isSquare() << std::endl;

				// Update rectangle length state
				double l{};
				std::cout << "\nEnter new length: ";
				std::cin >> l;
				r2.setLength(l);
				
				std::cout << "\nUpdated Rectangle Length Information" << std::endl;
				std::cout << "------------------" << std::endl;
				std::cout << "Length: " << r2.getLength() << std::endl;
				std::cout << "Width: " << r2.getWidth() << std::endl;
				std::cout << "Area: " << r2.area() << std::endl;
				std::cout << "Permieter: " << r2.perimeter() << std::endl;
				std::cout << "Diagonal: " << r2.diagonal() << std::endl;
				std::cout << "Is square: " << r2.isSquare() << std::endl;

				// Update rectangle width state
				double w{};
				std::cout << "\nEnter new width: ";
				std::cin >> w;
				r2.setWidth(w);

				std::cout << "\nUpdated Rectangle Width Information" << std::endl;
                                std::cout << "------------------" << std::endl;
                                std::cout << "Length: " << r2.getLength() << std::endl;
                                std::cout << "Width: " << r2.getWidth() << std::endl;
                                std::cout << "Area: " << r2.area() << std::endl;
                                std::cout << "Permieter: " << r2.perimeter() << std::endl;
                                std::cout << "Diagonal: " << r2.diagonal() << std::endl;
                                std::cout << "Is square: " << r2.isSquare() << std::endl;

			}	
		} // end Rectangle if
		else if (userInput == "q" || userInput == "Q")
			flag = false;
		std::cout << std::endl;
	} // end while
	return 0;
}
