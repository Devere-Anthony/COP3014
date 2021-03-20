/* COP3014 Problem 11 -> Write a C++ progam to find the octal equivalent of the
 * entered decimal number.
 *
 * Primary Author: D'Anthony Weaver 😎🔥
 * Contributors: N/A
 * Last Modified: 31 JAN 2021
 */

#include <iostream> 
#include <string> 
#include <vector>
#include <ctype.h>

//==========================================================
// Function Prototype(s)
//==========================================================
void intToOctal(int);


//==========================================================
// Main
//==========================================================
int main()
{
	unsigned long int num{};
	std::string userInput{};
	bool flag{true}, badInput{false};
	std::string resume{};	 

	do 
	{
		/* TO DO: How to handle overflow using basic constructs only? */
		std::cout << "Enter a decimal value to find its octal value. ";
		std::cout << "(Less than 12 digits long)" << std::endl;
		std::cout << "Decimal > ";
		std::cin >> userInput;
		
		for(int i{}; i < userInput.size(); ++i)	// validate input as int
		{
			if(!isdigit(userInput[i]))
			{
				flag = false;
				badInput = true;
			}
		}
		
		if (badInput)
			std::cout << "ERROR: Not an integer value!" << std::endl;

		if (flag)    // input is int
		{
			num = std::stoi(userInput);
			intToOctal(num);
		}

		std::cout << "\nWould you like to try again? [y/N]"
			<< std::endl;
		std::cout << "> ";
		std::cin >> resume;
		
		if (resume == "y" || resume == "Y")	
			flag = true;
		else if (resume == "n" || resume == "N")
			flag = false;
		else
		{
			std::cout << "\nInput not recognized." << std::endl;
			//std::cout << "Exiting..." << std::endl;	
			flag = false;
		}	
		badInput = false;    // reset badInput flag before next loop
		std::cout << std::endl;
	} while (flag);

	std::cout << "Exiting..." << std::endl;

	return 0;
}


//==========================================================
// Function definition(s) 
//==========================================================
void intToOctal(int value)
{
	/* intToOctal() -> converts a given decimal value to an integer value.
	 * Doest not return value, sends results to stdout.
	 *
	 * Parameters:
	 * 	- value -> decimal value to be converted to octal
	 */
	
	unsigned long int remainder{};	
	std::vector<int> octalValue{};			

	while (value != 0)
	{
		remainder = value % 8;	
		octalValue.push_back(remainder);
		value /= 8;  
	}		

	std::cout << "Octal Conversion > ";
	for (size_t i{}; i < octalValue.size(); ++i)  // reverse output loop
		std::cout << octalValue[(octalValue.size() - 1) -i]; 
	std::cout << std::endl;
}
