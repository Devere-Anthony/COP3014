/* Matrix.cpp - implementation of the Matrix class functions
 * 
 * Primary Author: Devere Anthony Weaver
 * Contributing Authors: N/A
 * Last Modified: 25 APRIL 2021
 */

#include "Matrix.hpp"
#include <iostream>
#include <iomanip>

//----------------------------------------------------------
Matrix::Matrix()
{
	/* Default constructor creates a 1x1 array with 
	 * the value of the single element to be 0.
	 */

	/* TO DO: Consider creating separate function to create 
	 * these 2D arrays, gets repetitive.
	 */

	// Initialize 2D array 
	matrix = new  float* [rows];
	for (size_t i{}; i < rows; ++i)
		matrix[i] = new float[cols];

	// Set value to 0
	for (size_t i{}; i < rows; ++i)
	{
		for (size_t j{}; j < cols; ++j)
			matrix[i][j] = 0;
	}
};

//----------------------------------------------------------
Matrix::Matrix(int r, int c)
{
	/* Parameterized constructor allows for the user to input 
	 * the desired matrix dimensions.
	 */

	rows = r;
	cols = c;

	// Create new 2D matrix with given values
	matrix = new  float* [rows];
	for (size_t i{}; i < rows; ++i)
		matrix[i] = new float[cols];
};

//----------------------------------------------------------
Matrix::Matrix(const Matrix& other)
{
	/* Copy constructor allows the user to duplicate a 
	 * Matrix object. The new Matrix object is separate and 
	 * apart from the copied Matrix object. 
	 */

	this->rows = other.rows;
	this->cols = other.cols;

	// Create 2D array
	this->matrix = new float* [this->rows];	// create rows 
	for(size_t i{}; i < this->rows; ++i)		// create cols
		this->matrix[i] = new float[this->cols];

	// Assign new 2D array other matrix values 
	for(size_t i{}; i < this->rows; ++i)
	{
		for(size_t j{}; j < this->cols; ++j)
			this->matrix[i][j] = other.matrix[i][j];
	}
};

//----------------------------------------------------------
Matrix::~Matrix()
{
	/* Destructor to delete dynamically allocated memory */
	
	// iterate over rows to delete the columns 
	for(size_t i{}; i < rows; ++i)
		delete [] matrix[i];
	delete [] matrix;

	/* NOTE: Uncomment to see when/where each Matrix object 
	 * is destroyed in program.
	 */
	// std::cout << "MATRIX DELETED." << std::endl;
};

//----------------------------------------------------------
void Matrix::fillMatrix()
{
	/* fillMatrix() -> call function to fill the Matrix 
	 * object with values.
	 */

	std::cout << "Enter matrix values: " << std::endl;
	 for(size_t i{}; i < rows; ++i) 
	 {
		 for(size_t j{}; j < cols; ++j)
		 {
			 /* NOTE: Comment out following output line
			  * if using test file for input instead of 
			  * manual input.
			  */
			 std::cout << "[" << i << "]" << "["
			  	   << j << "] = "; 
			
			  std::cin >> matrix[i][j];
		 }
	 }
};

//----------------------------------------------------------
Matrix Matrix::transpose()
{
	/* transpose() -> Creates a new Matrix object whose
	 * matrix is a transpose of the current Matrix object.
	 * It outputs the new Matrix object's matrix.
	 */

	// Create new Matrix object
	Matrix transMat(this->cols, this->rows);

	// Fill transMat's array with current Matrix values 
	for(size_t i{}; i < transMat.rows; ++i)
	{
		for(size_t j{}; j < transMat.cols; ++j)
			transMat.matrix[i][j] = this->matrix[j][i];
	}

	return transMat;
};

//----------------------------------------------------------
Matrix Matrix::add(Matrix m)
{
	/* add() -> Adds two Matrix objects if they are equal 
	 * dimensions and returns a new Matrix object with the 
	 * result. If the two Matrix objects aren't of equal 
	 * dimensions, it returns a matrix of equal dimensions
	 * as current Matrix with all 0s as values.
	 */

	// Execute addition if matrices have same dimensions
	if(this->rows == m.rows && this->cols == m.cols)
	{
		Matrix addMat(this->rows, this->cols);
		for(size_t i{}; i < rows; ++i)
		{
			for(size_t j{}; j < cols; ++j)
			{
				float a = (this->matrix[i][j] + m.matrix[i][j]);
				addMat.matrix[i][j] = a;
			}
		}
		return addMat;
	}
	// Execute if matrices have different dimensions
	else
	{
		Matrix zeroMat(this->rows, this->cols);
		for(size_t i{}; i < rows; ++i)
		{
			for(size_t j{}; j < cols; ++j)
			{
				zeroMat.matrix[i][j] = 0;
			}
		}
		return zeroMat;
	}
};

//----------------------------------------------------------
Matrix Matrix::subtract(Matrix m)
{
	/* subtract() -> Subtracts two Matrix objects if they are equal 
	 * dimensions and returns a new Matrix object with the 
	 * result. If the two Matrix objects aren't of equal 
	 * dimensions, it returns a matrix of equal dimensions
	 * as current Matrix with all 0s as values.
	 */

	// Execute subtraction if matrices have same dimensions
	if(this->rows == m.rows && this->cols == m.cols)
	{
		Matrix subtractMat(this->rows, this->cols);
		for(size_t i{}; i < rows; ++i)
		{
			for(size_t j{}; j < cols; ++j)
			{
				float a = (this->matrix[i][j] - m.matrix[i][j]);
				subtractMat.matrix[i][j] = a;
			}
		}
		return subtractMat;
	}
	// Execute if matrices have different dimensions
	else
	{
		Matrix zeroMat(this->rows, this->cols);
		for(size_t i{}; i < rows; ++i)
		{
			for(size_t j{}; j < cols; ++j)
			{
				zeroMat.matrix[i][j] = 0;
			}
		}
		return zeroMat;
	}
};

//----------------------------------------------------------
Matrix Matrix::multiply(Matrix m)
{
	/* multiply() -> Multiplies two Matrix objects if they are equal 
	 * dimensions and returns a new Matrix object with the 
	 * result. If the two Matrix objects aren't of equal 
	 * dimensions, it returns a matrix of equal dimensions
	 * as current Matrix with all 0s as values.
	 */

	// Execute multiplication if matrices have same dimensions
	if(this->rows == m.rows && this->cols == m.cols)
	{
		Matrix multiplyMat(this->rows, this->cols);
		for(size_t i{}; i < rows; ++i)
		{
			for(size_t j{}; j < cols; ++j)
			{
				float a = (this->matrix[i][j] * m.matrix[i][j]);
				multiplyMat.matrix[i][j] = a;
			}
		}
		return multiplyMat;
	}
	// Execute if matrices have different dimensions
	else
	{
		Matrix zeroMat(this->rows, this->cols);
		for(size_t i{}; i < rows; ++i)
		{
			for(size_t j{}; j < cols; ++j)
			{
				zeroMat.matrix[i][j] = 0;
			}
		}
		return zeroMat;
	}
};

//----------------------------------------------------------
int Matrix::getRows()
{
	return rows;
};

//----------------------------------------------------------
int Matrix::getCols()
{
	return cols;
};

//----------------------------------------------------------
std::ostream& operator<<(std::ostream& os, const Matrix& m)
{
	/* Overload operator for customized matrix output */
	for (size_t i{}; i < m.rows; ++i)
	{
		for (size_t j{}; j < m.cols; j++)
		 {
			 os << std::setw(12)  // set width of matrix to 12 units
			    << std::right << m.matrix[i][j];
		 }
		 std::cout << std::endl;
	 }
	 os << std::endl;
	 return os;
};
