/* TO DO: Add header */

#include <iostream>
#include <cstdio>

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
	
	for (int j{}; j < 5; ++j)
	{
	   for (int k{}; k < 5; ++k)
	   {
		   if ((arr[k] < arr[k - 1]) || (arr[k] > arr[k + 1])) 
			   inOrder = false;
	   }
	}

	//printf("%s", inOrder ? "true" : "false");
	std::cout << '\n' << (inOrder ? "True" : "False") << std::endl; // It works in C++!!
		
	return 0;
}
