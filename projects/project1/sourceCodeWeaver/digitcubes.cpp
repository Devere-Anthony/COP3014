/* COP3014 Project 1 - Exercise 6
 * Write a C++ program called digitcubes.cpp that reads an integer between 0
 * and 1000 and adds the cubes of all the digits in the integer.
 *
 * Primary author: D'Anthony Weaver 😎🔥
 * Other contributors: N/A
 * Last Modified: 6 FEB 2021
 */

#include <iostream>
#include <string>

int main()
{
    /* TO DO: clean up main at some point, works but a little messy 
     * with all the branching.
     */

    int num{}, userInt{}, totalCubes{};
    std::string userInput{}, resume{};
    bool flag{true}, goodInput{};

    std::cout << "Program cubes each digit in an integer value and outputs" 
		" their sum." << std::endl;
	
    while (flag)
    {
        std::cout << "\nEnter an integer value." << std::endl;
	std::cout << "> ";
	std::cin >> userInput;
		
	/* Input between 0 - 1000 */
	userInt = std::stoi(userInput); /*How to handle non-int input with basic langauge features?*/
	if (userInt > 0 && userInt < 1000)	// initial input is valid
	{	
	    for (int i{}; i < userInput.size(); ++i) // validate & parse
	    {
	        if(isdigit(userInput[i]))
		    goodInput = true; 
		else
		    goodInput = false;
	    }
			
	    if (!goodInput)
	    {
	        std::cout << "\nERROR: Bad Input! Try again." << std::endl;
		std::cout << "(You CAN'T exit!!)"  // not true but make them think so
			  << std::endl;
	    }
	    if (goodInput)
	    {
	        for (int i{}; i < userInput.size(); ++i)
		{
		    num = (int)userInput[i] - 48;	// subtract to find int 
		    num = num * num * num;
		    totalCubes += num;
		}
		
		std::cout << totalCubes << std::endl;
		std::cout << "\nTry again? (y/N)" << std::endl;
		std::cout << "> ";
		std::cin >> resume; 
		
		if (resume == "y" || resume == "Y")
		    flag = true;
		else if (resume == "n" || resume == "N")
		{
		    flag = false;
		    std::cout << "\nThanks for trying!" << std::endl;
		}
		else
		{
		    std::cout << "\nInput not recognized...exiting"
			      << std::endl;
		    flag =false;
		}
	    }
	    totalCubes = 0;  // reset totalCubes
	}  // end if
	else
	    std::cout << "Enter value between 0 and 100." << std::endl; // bad initial input
    }	
    return 0;
}
