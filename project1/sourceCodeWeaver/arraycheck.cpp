/* COP3014 Project 1 - Exercise 4
 * Given an array of integers, check if the elements of the array
 * are monotonically increasing. (Didn't actually know what "monotonically
 * increasing" meant, hopefully I did it correctly)
 *
 * Primary author: D'Anthony Weaver 😎🔥
 * Other contributors: N/A
 * Last Modified: 6 FEB 2021
 */

#include <iostream>

int main()
{
	int arr[5]{};
	bool inOrder{true};

	std::cout << "Enter 5 values:" << std::endl;
	for (int i{}; i < 5; ++i)
	{
		std::cout << "> ";
		std::cin >> arr[i];
	}
	
	for (int j{}; j < 5; ++j)  // compare element with every other element
	{
	   for (int k{}; k < 5; ++k)
	   {
		   if ((arr[k] < arr[k - 1]) || (arr[k] > arr[k + 1])) 
			   inOrder = false;
	   }
	}

	std::cout << '\n' << (inOrder ? "True" : "False") << std::endl; 
		
	return 0;
}
