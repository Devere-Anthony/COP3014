/* COP3014 Project 1 - Exercise 9
 * Write a program that accepts an unspecified number of integers from the user.
 * When the user finishes entering numbers, the program displays the count of 
 * positive, negative, and zeroes entered.
 *
 * Primary author: D'Anthony Weaver 😎🔥
 * Other contributors: N/A
 * Last Modified: 6 FEB 2021
 */

#include <iostream>
#include <string>

int main()
{
	int num{}, positive{}, negative{}, zeroes{};
	std::string input{};
	char tryAgain{};
	bool exitFlag{false};
	
	while(!exitFlag)
	{
		std::cout << "Enter integer (type 'q' to quit)\n> ";
		std::cin >> input; 
		if (input == "q" || input == "Q")
			break;
		else
			num = std::stoi(input); /* Line27, Will throw error if non an integer */
		
		if ( num > 0)
			positive++;
		else if ( num < 0)	
			negative++;
		else if ( num == 0)
			zeroes++;
		else
			std::cout << "Input not recognized." << std::endl;
		putchar('\n');
	
	/* TO DO: Leave code here, utilize after implementing more sophisticated 
	 * input error handling from line 27 and get rid of rudimentary 
	 * validation above */
	/*	std::cout << "\nWould you like to enter another number? (y/N)\n> ";
		std::cin >> tryAgain;
		putchar('\n');

		switch ((int)tryAgain){
			case 'y':
			case 'Y':
				break;
			case 'n':
			case 'N':
				exitFlag = true;
				break;
			default:
				std::cout << "Input not recognized."
					"\nExiting..." << std::endl;
				exitFlag = true; 
		}*/

	}

	std::cout << "\nCounts" << std::endl;
	std::cout << "--------" << std::endl;
	printf("Positives: %d\n"
	       "Negatives: %d\n"
	       "Zeroes: %d\n\n",
		positive, negative, zeroes);	

	return 0;
}
