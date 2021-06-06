/* Matrix.hpp - Definition of the Matrix class. 
 * 
 * Primary Author: D'Anthony Weaver
 * Contributing Authors: N/A
 * Last Modified: 25 APRIL 2021
 */

#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
#include <string>

class Matrix
{
	/* Matrix class models an NxM matrix where 
	 * N represents the number of rows and
	 * M represents the number of columns. 
	 */
	public:
		Matrix();
		Matrix(int, int);
		Matrix(const Matrix& other);
		~Matrix();
		Matrix add(Matrix);
		Matrix subtract(Matrix);
		Matrix multiply(Matrix);
		Matrix transpose();
		int getRows();
		int getCols();
		void fillMatrix();
		friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
	private:
		int rows{1};
		int cols{1};
		float ** matrix;
};
#endif 
