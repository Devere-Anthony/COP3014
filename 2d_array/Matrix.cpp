/* Matrix.cpp - Implementation of functions for Matrix class
 * 
 * Primary author: D'Anthony Weaver 😎
 * Contributing authors: N/A 
 * Last Modified: 27 MARCH 2021 
 */ 

#include "Matrix.hpp"
#include <iostream> 

//------------------------------------------------
Matrix::Matrix()
{
	/* Default Matrix constructor */
	rows = 3;
	cols = 3;

	/* Dynamically allocated 2D array */
	mat = new int* [rows];	

	// iterate over rows and...
	for(size_t i{}; i < rows; ++i)
	{
		// create array of ints for columns
		mat[i] = new int [cols];
	}
};

//------------------------------------------------
Matrix::Matrix(int r, int c)
{
	/* Parameterized Matrix constructor,
	 * accepts row and column arguments as 
	 * dimensions
	 */
	rows = r;
	cols = c;

	/* Dynamically allocated 2D array */
	mat = new int* [rows];	

	// iterate over rows and...
	for(size_t i{}; i < rows; ++i)
	{
		// create array of ints for columns
		mat[i] = new int [cols];
	}
};

//------------------------------------------------
Matrix::~Matrix()
{
	/* Destructor deletes dynamically allocated array */

	// Next line for testing only, don't uncomment unless needed
	//std::cout << "Dynamic memory deleted" << std::endl; 

	for(size_t i{}; i < rows; ++i)
		delete [] mat[i]; 	
	delete [] mat;
};

//------------------------------------------------
void Matrix::AcceptValues()
{
	/* AcceptValues() -> accepts values from the user
	 * to fill in the 2d array.
	 * Return:
	 * 	- void
	 */
	
	std::cout << "Enter matrix values for "
	          << rows << "x" << cols 
	  	  << " sized matrix:"
		  << std::endl;

	for(size_t i{}; i < rows; ++i)	// rows 
	{
		std::cout << "\nRow " << i+1 << ":" << std::endl;
		for(size_t j{}; j < cols; ++j)	// cols
		{
			std::cout << "> ";
			std::cin >> mat[i][j];
		}
	}
};

//------------------------------------------------
void Matrix::PrintValues()
{
	/* PrintValues() -> prints values from dynamically 
	 * allocated array (matrix)
	 * Return:
	 * 	- void
	 */

	for(size_t i{}; i < rows; ++i)	// rows
	{
		for(size_t j{}; j < cols; ++j)	// cols
		{
			std::cout << mat[i][j] << " ";
		}
		std::cout << std::endl;
	}
};
