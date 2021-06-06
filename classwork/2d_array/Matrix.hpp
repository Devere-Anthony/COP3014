/* Matrix.hpp - Class definition of Matrix 
 * 
 * Primary author: D'Anthony Weaver 😎
 * Contributing authors: N/A 
 * Last Modified: 27 MARCH 2021 
 */ 

#ifndef MATRIX_HPP
#define MATRIX_HPP

class Matrix
{
	public:
		Matrix();
		Matrix(int r, int c);
		~Matrix();
		void AcceptValues();	
		void PrintValues();	
	private:
		int ** mat;	// pointer to 2d-array
		int rows;
		int cols;
};

#endif
