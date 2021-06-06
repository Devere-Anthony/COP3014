/* COP3014 Project 1 - Exercise 1
 * Create an executable using the C++ programming language call factors.cpp
 * that reads an integer into your program and prints out all factors of the
 * number. 
 *
 * By: D'Anthony Weaver 😎🔥
 * Other contributors: N/A
 * Last Modified: 2 FEB 2021
 */

#include <iostream>
#include <string>

//==========================================================
// Function Prototype(s)
//==========================================================
void factors(int);

//==========================================================
// Main 
//==========================================================
int main()
{
	std::string userInput{}, resume{};
	int num{};
	bool flag{true};

	std::cout << "Factor Finder (press EOF to quit at anytime)"
		<< std::endl;
	std::cout << "----------------------------------------------";

	do
	{	
		std::cout << "\nEnter an integer to display its factors"
			<< std::endl;
		std::cout << "> ";
		std::cin >> userInput;

		/* TO DO: Rewrite as a function maybe for reuse later */
		for(int i{}; i < userInput.size(); ++i) // basic input validation
		{
			if(!isdigit(userInput[i]))
			{
				flag = false;
			}
		}

		if (flag)
		{
			num = std::stoi(userInput);
			factors(num);	
		}
		else if (!flag)
		{
			std::cout << "ERROR: Bad input ";
			std::cout << "(Enter an integer value.)\n" 
				<< std::endl;
		}

		std::cout << "\nWould you like to try again? (y/N)?" 
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
                        flag = false;
                }

	} while (flag);	

	std::cout << "Exiting program" << std::endl;

	return 0;
}

//==========================================================
// Function Definition(s)
//==========================================================
void factors(int n)
{
	/* factors() -> sends factors of variable n to be 
	 * displayed to stdout
	 * Args:
	 * 	int n -> number to be factored
	 */
	int i{1};

	std::cout << "\nFactors of " << n << std::endl;
	std::cout << "-------------" << std::endl;
	for (i; i < n; ++i) // TO DO: find better algorithm possibly
	{
		if (n % i == 0)
			std::cout << i << std::endl;
	}
	std::cout << n << std::endl;
}
