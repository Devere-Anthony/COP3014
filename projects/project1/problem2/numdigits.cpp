/* COP3014 Project 1 - Exercise 2
 * Write a C++ program called numdigits.cpp that reads an integer number into
 * your program and counts the number of digits in the number.
 *
 * By: D'Anthony Weaver
 * Other Contributors: N/A
 * Last Modified: 2 FEB 2021
 */ 

#include <iostream>
#include <string> 

int main()
{
	std::string number{};
	int count{};
	
	std::cout << "Enter an integer value." << std::endl;
	std::cout << "> ";
	std::cin >> number;
	
	for (int i{}; i < number.size(); ++i)
		count++;

	std::cout << "Number of digits: " << count << std::endl;

	return 0;
}
