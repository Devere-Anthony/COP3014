/* main.hpp - main for testing Matrix class implementation
 * 
 * Primary author: D'Anthony Weaver 😎
 * Contributing authors: N/A 
 * Last Modified: 27 MARCH 2021 
 */ 

#include <iostream>
#include "Matrix.hpp"

int main()
{
	/* Test Matrix with default constructor (3x3 matrix) */
	std::cout << "Test default matrix" << std::endl;
	std::cout << "-------------------" << std::endl;
	Matrix m;
	m.AcceptValues();
	std::cout << "\nMatrix 1:" << std::endl;
	m.PrintValues();

	/* Test Matrix with parameterized constructor */
	std::cout << "\nTest custom matrix" << std::endl;
	std::cout << "------------------" << std::endl;
	int r{}, c{};
	std::cout << "Enter rows: ";
	std::cin >> r;
	std::cout << "Enter cols: ";
	std::cin >> c;

	Matrix n(r,c);	// Create custom matrix 
	std::cout << std::endl;
	n.AcceptValues();
	std::cout << "\nMatrix 2:" << std::endl;
	n.PrintValues();

	return 0;
}
