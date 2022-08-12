/* main.cpp - Test driver for the Matrix program
 * 
 * Primary author: Devere Anthony Weaver
 * Contributing authors: N/A
 * Last modified: 27 APRIL 2021
 *
 * NOTE 1: Could not figure out a more graceful way  to display 
 * 	 the expected output from the program for testing. 
 * 	 I will have to spend more time to figuring out a way 
 * 	 to do this better. For now, I simply gave the expected
 *	 output as a description instead of outputting the actual 
 *	 output from the code. 
 * 
 * NOTE 2: In addition to accepting using input, you can test this
 * 	 program using one of the two included test files (test.txt
 *	 and test2.txt). I used for easy testing but included in zip as
 *	 well if needed. 
 * 	 Run in terminal after building using: 
 *
 * 			cat test.txt | ./Matrix
 *
 */

#include "Matrix.hpp"
#include <iostream>
#include <string>
//#include <cassert>	Uncomment after figuring out a better way to use

//==========================================================
// Function definition(s)
//==========================================================
void clearTerminal()
{
	/* clearTerminal() -> clears terminal output
         * to keep program output clear.
         */
         if (__linux__)
                 std::system("clear");
};

//==========================================================
// Main
//==========================================================
int main()
{
	/* NOTE: If running on non-*Nix machine, 
	 * comment out the clearTerminal() line.
	 */
	clearTerminal();	// Comment this line if needed, check note above
	int rows{}, cols{};

//------------------------------------------------------------------------------
	/* TEST: Default Constructor */
        std::cout << std::string(50, '-') << std::endl;
        std::cout << "\tTESTING: Default Constructor" << std::endl;
        std::cout << std::string(50, '-') << std::endl;

	std::cout << "EXPECTED OUTPUT: A 1x1 matrix with its only element\n" 
		  << "initialized to the value 0." << std::endl;

	Matrix defaultMat;	// Create default Matrix object

	std::cout << "\nDefault matrix dimensions: " 
		  << defaultMat.getRows() << "x" << defaultMat.getCols()
		  << std::endl;
	
	std::cout << "\nDefault matrix values: \n"
		  << defaultMat;

//------------------------------------------------------------------------------
	/* TEST: Parameterized contructor */
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "\tTESTING: Parameterized Constructor" << std::endl;
        std::cout << std::string(50, '-') << std::endl;
	
	std::cout << "EXPECTED OUTPUT: A matrix with the same number\n of rows/columns "
		  << "specified by the user and it should\n be filled with the values "
		  << "also specified by the user." << std::endl;

	/* NOTE: Comment out following section (lines 83-86) if using test files as 
	 * input instead of manually inputting values into program. 
	 */
	std::cout << "\nEnter rows: ";
	std::cin >> rows;
	std::cout << "Enter cols: ";
	std::cin >> cols;
	
	Matrix paramMat(rows, cols);
	paramMat.fillMatrix();		// fill matrix with user input	
	std::cout << "\nParameterized matrix dimensions: "
		  << paramMat.getRows() << "x" << paramMat.getCols()
		  << "\n" << std::endl;

	std::cout << "Parameterized matrix values: \n"
		<< paramMat;

//------------------------------------------------------------------------------
	/* TEST: Copy Constructor */
 	std::cout << std::string(50, '-') << std::endl;
        std::cout << "\tTESTING: Copy Constructor" << std::endl;
        std::cout << std::string(50, '-') << std::endl;

	std::cout << "EXPECTED OUTPUT: An exact copy of the original \nparameterized "
		  << "matrix.\n" << std::endl;

	std::cout << "Original matrix: \n"
		  << paramMat;

	Matrix copyMat(paramMat);	// Use copy constructor
	std::cout << "Copy-Constructed matrix values: \n"
		  << copyMat;

//------------------------------------------------------------------------------
	/* TEST: Transposed Matrix functionality */
	std::cout << std::string(50, '-') << std::endl;
        std::cout << "\tTESTING: Transpose Function" << std::endl;
        std::cout << std::string(50, '-') << std::endl;

	std::cout << "EXPECTED OUTPUT: The original parameterized matrix tranposed."
		  << "\n(i.e. the rows and colum values are inverted.)"
		  << std::endl;

	std::cout << "\nTransposed matrix values:" << std::endl;
	Matrix transposedMatrix = paramMat.transpose();	// create transposed Matrix
	std::cout << transposedMatrix;

//------------------------------------------------------------------------------
	/* TEST: Addition functionality */
	std::cout << std::string(50, '-') << std::endl;
        std::cout << "\tTESTING: Addition Function" << std::endl;
        std::cout << std::string(50, '-') << std::endl;

	std::cout << "EXPECTED OUTPUT: A matrix whose values are the sum of\n"
		  << "corresponding values in the two matrices.\n"
		  << std::endl;

	// Same dimensions
	Matrix addMat = paramMat.add(copyMat);
	std::cout << "Add same dimensions: \n"
		  << addMat;

	std::cout << "\nEXPECTED OUTPUT: A matrix with the same dimensions as the\n"
		  << "original parameterized matrix. All values should read 0.\n"
		  << std::endl;

	// Different dimensions
	Matrix addDiffMat = paramMat.add(defaultMat);
	std::cout << "Add different dimensions: \n"
		  << addDiffMat;

//------------------------------------------------------------------------------
	/* TEST: Subtraction functionality */
	std::cout << std::string(50, '-') << std::endl;
        std::cout << "\tTESTING: Subtraction Function" << std::endl;
        std::cout << std::string(50, '-') << std::endl;

	std::cout << "EXPECTED OUTPUT: A matrix whose values are the difference\n of "
		  << "corresponding values in the two matrices.\n"
		  << "(Should read all 0s because I subtracted it from itself.)"
		  << std::endl;

	// Same dimensions
	Matrix subtractMat = paramMat.subtract(copyMat);
	std::cout << "\nSubtract same dimensions: \n"
		  << subtractMat;

	std::cout << "\nEXPECTED OUTPUT: A matrix with the same dimensions as the\n"
		  << "original parameterized matrix. All values should read 0.\n"
		  << std::endl;

	// Different dimensions 
	Matrix subDiffMat = paramMat.subtract(defaultMat);
	std::cout << "Subtract different dimensions: \n"
		  << subDiffMat;

//------------------------------------------------------------------------------
	/* TEST: Multiplication Functionality */
	std::cout << std::string(50, '-') << std::endl;
        std::cout << "\tTESTING: Multiplication Function" << std::endl;
        std::cout << std::string(50, '-') << std::endl;

	std::cout << "EXPECTED OUTPUT: A matrix whose values are the product\n of "
		  << "corresponding values in the two matrices.\n"
		  << std::endl;

	// Same dimensions
	Matrix multiplyMat = paramMat.multiply(copyMat);
	std::cout << "Multiply same dimensions: \n"
		  << multiplyMat;

	std::cout << "\nEXPECTED OUTPUT: A matrix with the same dimensions as the\n"
		  << "original parameterized matrix. All values should read 0.\n"
		  << std::endl;

	// Different dimensions
	Matrix multiplyDiffMat = paramMat.multiply(defaultMat);
	std::cout << "Multiply different dimensions: \n"
		  << multiplyDiffMat;

	return 0;
}
